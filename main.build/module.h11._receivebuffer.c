/* Generated code for Python module 'h11._receivebuffer'
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

/* The "module_h11$_receivebuffer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_h11$_receivebuffer;
PyDictObject *moduledict_h11$_receivebuffer;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[89];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[89];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("h11._receivebuffer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 89; i++) {
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
void checkModuleConstants_h11$_receivebuffer(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 89; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e68ac7c063f4e896c089ca21d4e9d527;
static PyCodeObject *codeobj_3b0e42331a61d3cc17f8a7d338e921de;
static PyCodeObject *codeobj_8d1320d8daaf96c82147ec5b448821f5;
static PyCodeObject *codeobj_fcbf6d3b59b1c9ff14eb158cb9432bc4;
static PyCodeObject *codeobj_14b81668e39a8f19abc347f41b2d69a8;
static PyCodeObject *codeobj_1b75fc633011e11b42f2f9dcc6a3aee2;
static PyCodeObject *codeobj_f529c7e0e58a34cde5bd0520f0d711e0;
static PyCodeObject *codeobj_3da4d0c4711386820bc2bd9e83f55b9d;
static PyCodeObject *codeobj_f9a59cd5b781b8cf0afb7d048a0793e4;
static PyCodeObject *codeobj_b22d5b9fe7fb380e5f9e207fc9b867b1;
static PyCodeObject *codeobj_1dc6d6ae258f88b8c456c32e99f630f8;
static PyCodeObject *codeobj_c2d9332c593dd65e30f46bddfaab0d8d;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[33]; CHECK_OBJECT(module_filename_obj);
    codeobj_e68ac7c063f4e896c089ca21d4e9d527 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[81], mod_consts[81], NULL, NULL, 0, 0, 0);
    codeobj_3b0e42331a61d3cc17f8a7d338e921de = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[82], NULL, 0, 0, 0);
    codeobj_8d1320d8daaf96c82147ec5b448821f5 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[83], NULL, 1, 0, 0);
    codeobj_fcbf6d3b59b1c9ff14eb158cb9432bc4 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[83], NULL, 1, 0, 0);
    codeobj_14b81668e39a8f19abc347f41b2d69a8 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[84], NULL, 2, 0, 0);
    codeobj_1b75fc633011e11b42f2f9dcc6a3aee2 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[83], NULL, 1, 0, 0);
    codeobj_f529c7e0e58a34cde5bd0520f0d711e0 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[83], NULL, 1, 0, 0);
    codeobj_3da4d0c4711386820bc2bd9e83f55b9d = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[85], NULL, 2, 0, 0);
    codeobj_f9a59cd5b781b8cf0afb7d048a0793e4 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[83], NULL, 1, 0, 0);
    codeobj_b22d5b9fe7fb380e5f9e207fc9b867b1 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[85], NULL, 2, 0, 0);
    codeobj_1dc6d6ae258f88b8c456c32e99f630f8 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[86], NULL, 1, 0, 0);
    codeobj_c2d9332c593dd65e30f46bddfaab0d8d = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[87], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__1___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__2___iadd__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__3___bool__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__4___len__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__5___bytes__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__6__extract(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__7_maybe_extract_at_most(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__8_maybe_extract_next_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__9_maybe_extract_lines(PyObject *annotations);


// The module function definitions.
static PyObject *impl_h11$_receivebuffer$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1b75fc633011e11b42f2f9dcc6a3aee2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1b75fc633011e11b42f2f9dcc6a3aee2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1b75fc633011e11b42f2f9dcc6a3aee2)) {
        Py_XDECREF(cache_frame_1b75fc633011e11b42f2f9dcc6a3aee2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b75fc633011e11b42f2f9dcc6a3aee2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b75fc633011e11b42f2f9dcc6a3aee2 = MAKE_FUNCTION_FRAME(codeobj_1b75fc633011e11b42f2f9dcc6a3aee2, module_h11$_receivebuffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b75fc633011e11b42f2f9dcc6a3aee2->m_type_description == NULL);
    frame_1b75fc633011e11b42f2f9dcc6a3aee2 = cache_frame_1b75fc633011e11b42f2f9dcc6a3aee2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1b75fc633011e11b42f2f9dcc6a3aee2);
    assert(Py_REFCNT(frame_1b75fc633011e11b42f2f9dcc6a3aee2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = BYTEARRAY_COPY(mod_consts[0]);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[4], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b75fc633011e11b42f2f9dcc6a3aee2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b75fc633011e11b42f2f9dcc6a3aee2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b75fc633011e11b42f2f9dcc6a3aee2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b75fc633011e11b42f2f9dcc6a3aee2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1b75fc633011e11b42f2f9dcc6a3aee2 == cache_frame_1b75fc633011e11b42f2f9dcc6a3aee2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b75fc633011e11b42f2f9dcc6a3aee2);
        cache_frame_1b75fc633011e11b42f2f9dcc6a3aee2 = NULL;
    }

    assertFrameObject(frame_1b75fc633011e11b42f2f9dcc6a3aee2);

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


static PyObject *impl_h11$_receivebuffer$$$function__2___iadd__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_byteslike = python_pars[1];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_14b81668e39a8f19abc347f41b2d69a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_14b81668e39a8f19abc347f41b2d69a8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_14b81668e39a8f19abc347f41b2d69a8)) {
        Py_XDECREF(cache_frame_14b81668e39a8f19abc347f41b2d69a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_14b81668e39a8f19abc347f41b2d69a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_14b81668e39a8f19abc347f41b2d69a8 = MAKE_FUNCTION_FRAME(codeobj_14b81668e39a8f19abc347f41b2d69a8, module_h11$_receivebuffer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_14b81668e39a8f19abc347f41b2d69a8->m_type_description == NULL);
    frame_14b81668e39a8f19abc347f41b2d69a8 = cache_frame_14b81668e39a8f19abc347f41b2d69a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_14b81668e39a8f19abc347f41b2d69a8);
    assert(Py_REFCNT(frame_14b81668e39a8f19abc347f41b2d69a8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_byteslike);
        tmp_iadd_expr_right_1 = par_byteslike;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_14b81668e39a8f19abc347f41b2d69a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14b81668e39a8f19abc347f41b2d69a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14b81668e39a8f19abc347f41b2d69a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_14b81668e39a8f19abc347f41b2d69a8,
        type_description_1,
        par_self,
        par_byteslike
    );


    // Release cached frame if used for exception.
    if (frame_14b81668e39a8f19abc347f41b2d69a8 == cache_frame_14b81668e39a8f19abc347f41b2d69a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_14b81668e39a8f19abc347f41b2d69a8);
        cache_frame_14b81668e39a8f19abc347f41b2d69a8 = NULL;
    }

    assertFrameObject(frame_14b81668e39a8f19abc347f41b2d69a8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_byteslike);
    Py_DECREF(par_byteslike);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_byteslike);
    Py_DECREF(par_byteslike);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h11$_receivebuffer$$$function__3___bool__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8d1320d8daaf96c82147ec5b448821f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8d1320d8daaf96c82147ec5b448821f5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8d1320d8daaf96c82147ec5b448821f5)) {
        Py_XDECREF(cache_frame_8d1320d8daaf96c82147ec5b448821f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8d1320d8daaf96c82147ec5b448821f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8d1320d8daaf96c82147ec5b448821f5 = MAKE_FUNCTION_FRAME(codeobj_8d1320d8daaf96c82147ec5b448821f5, module_h11$_receivebuffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8d1320d8daaf96c82147ec5b448821f5->m_type_description == NULL);
    frame_8d1320d8daaf96c82147ec5b448821f5 = cache_frame_8d1320d8daaf96c82147ec5b448821f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8d1320d8daaf96c82147ec5b448821f5);
    assert(Py_REFCNT(frame_8d1320d8daaf96c82147ec5b448821f5) == 2);

    // Framed code:
    {
        PyObject *tmp_value_value_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_self);
        tmp_len_arg_1 = par_self;
        tmp_value_value_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        assert(!(tmp_res == -1));
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_8d1320d8daaf96c82147ec5b448821f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8d1320d8daaf96c82147ec5b448821f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8d1320d8daaf96c82147ec5b448821f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8d1320d8daaf96c82147ec5b448821f5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8d1320d8daaf96c82147ec5b448821f5 == cache_frame_8d1320d8daaf96c82147ec5b448821f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8d1320d8daaf96c82147ec5b448821f5);
        cache_frame_8d1320d8daaf96c82147ec5b448821f5 = NULL;
    }

    assertFrameObject(frame_8d1320d8daaf96c82147ec5b448821f5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_h11$_receivebuffer$$$function__4___len__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f529c7e0e58a34cde5bd0520f0d711e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f529c7e0e58a34cde5bd0520f0d711e0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f529c7e0e58a34cde5bd0520f0d711e0)) {
        Py_XDECREF(cache_frame_f529c7e0e58a34cde5bd0520f0d711e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f529c7e0e58a34cde5bd0520f0d711e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f529c7e0e58a34cde5bd0520f0d711e0 = MAKE_FUNCTION_FRAME(codeobj_f529c7e0e58a34cde5bd0520f0d711e0, module_h11$_receivebuffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f529c7e0e58a34cde5bd0520f0d711e0->m_type_description == NULL);
    frame_f529c7e0e58a34cde5bd0520f0d711e0 = cache_frame_f529c7e0e58a34cde5bd0520f0d711e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f529c7e0e58a34cde5bd0520f0d711e0);
    assert(Py_REFCNT(frame_f529c7e0e58a34cde5bd0520f0d711e0) == 2);

    // Framed code:
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
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
        exception_tb = MAKE_TRACEBACK(frame_f529c7e0e58a34cde5bd0520f0d711e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f529c7e0e58a34cde5bd0520f0d711e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f529c7e0e58a34cde5bd0520f0d711e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f529c7e0e58a34cde5bd0520f0d711e0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f529c7e0e58a34cde5bd0520f0d711e0 == cache_frame_f529c7e0e58a34cde5bd0520f0d711e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f529c7e0e58a34cde5bd0520f0d711e0);
        cache_frame_f529c7e0e58a34cde5bd0520f0d711e0 = NULL;
    }

    assertFrameObject(frame_f529c7e0e58a34cde5bd0520f0d711e0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_h11$_receivebuffer$$$function__5___bytes__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fcbf6d3b59b1c9ff14eb158cb9432bc4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fcbf6d3b59b1c9ff14eb158cb9432bc4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fcbf6d3b59b1c9ff14eb158cb9432bc4)) {
        Py_XDECREF(cache_frame_fcbf6d3b59b1c9ff14eb158cb9432bc4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fcbf6d3b59b1c9ff14eb158cb9432bc4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fcbf6d3b59b1c9ff14eb158cb9432bc4 = MAKE_FUNCTION_FRAME(codeobj_fcbf6d3b59b1c9ff14eb158cb9432bc4, module_h11$_receivebuffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fcbf6d3b59b1c9ff14eb158cb9432bc4->m_type_description == NULL);
    frame_fcbf6d3b59b1c9ff14eb158cb9432bc4 = cache_frame_fcbf6d3b59b1c9ff14eb158cb9432bc4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fcbf6d3b59b1c9ff14eb158cb9432bc4);
    assert(Py_REFCNT(frame_fcbf6d3b59b1c9ff14eb158cb9432bc4) == 2);

    // Framed code:
    {
        PyObject *tmp_bytes_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_bytes_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_bytes_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_BYTES1(tmp_bytes_arg_1);
        Py_DECREF(tmp_bytes_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_fcbf6d3b59b1c9ff14eb158cb9432bc4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fcbf6d3b59b1c9ff14eb158cb9432bc4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fcbf6d3b59b1c9ff14eb158cb9432bc4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fcbf6d3b59b1c9ff14eb158cb9432bc4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fcbf6d3b59b1c9ff14eb158cb9432bc4 == cache_frame_fcbf6d3b59b1c9ff14eb158cb9432bc4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fcbf6d3b59b1c9ff14eb158cb9432bc4);
        cache_frame_fcbf6d3b59b1c9ff14eb158cb9432bc4 = NULL;
    }

    assertFrameObject(frame_fcbf6d3b59b1c9ff14eb158cb9432bc4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_h11$_receivebuffer$$$function__6__extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_count = python_pars[1];
    PyObject *var_out = NULL;
    struct Nuitka_FrameObject *frame_3da4d0c4711386820bc2bd9e83f55b9d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_3da4d0c4711386820bc2bd9e83f55b9d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3da4d0c4711386820bc2bd9e83f55b9d)) {
        Py_XDECREF(cache_frame_3da4d0c4711386820bc2bd9e83f55b9d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3da4d0c4711386820bc2bd9e83f55b9d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3da4d0c4711386820bc2bd9e83f55b9d = MAKE_FUNCTION_FRAME(codeobj_3da4d0c4711386820bc2bd9e83f55b9d, module_h11$_receivebuffer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3da4d0c4711386820bc2bd9e83f55b9d->m_type_description == NULL);
    frame_3da4d0c4711386820bc2bd9e83f55b9d = cache_frame_3da4d0c4711386820bc2bd9e83f55b9d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3da4d0c4711386820bc2bd9e83f55b9d);
    assert(Py_REFCNT(frame_3da4d0c4711386820bc2bd9e83f55b9d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_count);
        tmp_stop_value_1 = par_count;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_1;
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_delsubscr_subscript_1;
        PyObject *tmp_stop_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_count);
        tmp_stop_value_2 = par_count;
        tmp_delsubscr_subscript_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_2);
        assert(!(tmp_delsubscr_subscript_1 == NULL));
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        Py_DECREF(tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3da4d0c4711386820bc2bd9e83f55b9d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3da4d0c4711386820bc2bd9e83f55b9d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3da4d0c4711386820bc2bd9e83f55b9d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3da4d0c4711386820bc2bd9e83f55b9d,
        type_description_1,
        par_self,
        par_count,
        var_out
    );


    // Release cached frame if used for exception.
    if (frame_3da4d0c4711386820bc2bd9e83f55b9d == cache_frame_3da4d0c4711386820bc2bd9e83f55b9d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3da4d0c4711386820bc2bd9e83f55b9d);
        cache_frame_3da4d0c4711386820bc2bd9e83f55b9d = NULL;
    }

    assertFrameObject(frame_3da4d0c4711386820bc2bd9e83f55b9d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_out);
    tmp_return_value = var_out;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
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

    Py_XDECREF(var_out);
    var_out = NULL;
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
    CHECK_OBJECT(par_count);
    Py_DECREF(par_count);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_count);
    Py_DECREF(par_count);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h11$_receivebuffer$$$function__7_maybe_extract_at_most(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_count = python_pars[1];
    PyObject *var_out = NULL;
    struct Nuitka_FrameObject *frame_b22d5b9fe7fb380e5f9e207fc9b867b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b22d5b9fe7fb380e5f9e207fc9b867b1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b22d5b9fe7fb380e5f9e207fc9b867b1)) {
        Py_XDECREF(cache_frame_b22d5b9fe7fb380e5f9e207fc9b867b1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b22d5b9fe7fb380e5f9e207fc9b867b1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b22d5b9fe7fb380e5f9e207fc9b867b1 = MAKE_FUNCTION_FRAME(codeobj_b22d5b9fe7fb380e5f9e207fc9b867b1, module_h11$_receivebuffer, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b22d5b9fe7fb380e5f9e207fc9b867b1->m_type_description == NULL);
    frame_b22d5b9fe7fb380e5f9e207fc9b867b1 = cache_frame_b22d5b9fe7fb380e5f9e207fc9b867b1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b22d5b9fe7fb380e5f9e207fc9b867b1);
    assert(Py_REFCNT(frame_b22d5b9fe7fb380e5f9e207fc9b867b1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_count);
        tmp_stop_value_1 = par_count;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_out);
        tmp_operand_value_1 = var_out;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_count);
        tmp_args_element_value_1 = par_count;
        frame_b22d5b9fe7fb380e5f9e207fc9b867b1->m_frame.f_lineno = 85;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[5], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_b22d5b9fe7fb380e5f9e207fc9b867b1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b22d5b9fe7fb380e5f9e207fc9b867b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b22d5b9fe7fb380e5f9e207fc9b867b1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b22d5b9fe7fb380e5f9e207fc9b867b1,
        type_description_1,
        par_self,
        par_count,
        var_out
    );


    // Release cached frame if used for exception.
    if (frame_b22d5b9fe7fb380e5f9e207fc9b867b1 == cache_frame_b22d5b9fe7fb380e5f9e207fc9b867b1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b22d5b9fe7fb380e5f9e207fc9b867b1);
        cache_frame_b22d5b9fe7fb380e5f9e207fc9b867b1 = NULL;
    }

    assertFrameObject(frame_b22d5b9fe7fb380e5f9e207fc9b867b1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
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

    Py_XDECREF(var_out);
    var_out = NULL;
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
    CHECK_OBJECT(par_count);
    Py_DECREF(par_count);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_count);
    Py_DECREF(par_count);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h11$_receivebuffer$$$function__8_maybe_extract_next_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_search_start_index = NULL;
    PyObject *var_partial_idx = NULL;
    PyObject *var_idx = NULL;
    struct Nuitka_FrameObject *frame_c2d9332c593dd65e30f46bddfaab0d8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c2d9332c593dd65e30f46bddfaab0d8d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c2d9332c593dd65e30f46bddfaab0d8d)) {
        Py_XDECREF(cache_frame_c2d9332c593dd65e30f46bddfaab0d8d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c2d9332c593dd65e30f46bddfaab0d8d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c2d9332c593dd65e30f46bddfaab0d8d = MAKE_FUNCTION_FRAME(codeobj_c2d9332c593dd65e30f46bddfaab0d8d, module_h11$_receivebuffer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c2d9332c593dd65e30f46bddfaab0d8d->m_type_description == NULL);
    frame_c2d9332c593dd65e30f46bddfaab0d8d = cache_frame_c2d9332c593dd65e30f46bddfaab0d8d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c2d9332c593dd65e30f46bddfaab0d8d);
    assert(Py_REFCNT(frame_c2d9332c593dd65e30f46bddfaab0d8d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_value_1 != NULL);
        tmp_args_element_value_1 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[8];
        tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c2d9332c593dd65e30f46bddfaab0d8d->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_search_start_index == NULL);
        var_search_start_index = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[10];
        CHECK_OBJECT(var_search_start_index);
        tmp_args_element_value_4 = var_search_start_index;
        frame_c2d9332c593dd65e30f46bddfaab0d8d->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_partial_idx == NULL);
        var_partial_idx = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_partial_idx);
        tmp_cmp_expr_left_1 = var_partial_idx;
        tmp_cmp_expr_right_1 = mod_consts[11];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[1]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(var_partial_idx);
        tmp_add_expr_left_1 = var_partial_idx;
        tmp_add_expr_right_1 = mod_consts[12];
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_idx == NULL);
        var_idx = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_idx);
        tmp_args_element_value_5 = var_idx;
        frame_c2d9332c593dd65e30f46bddfaab0d8d->m_frame.f_lineno = 102;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[5], tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
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
        exception_tb = MAKE_TRACEBACK(frame_c2d9332c593dd65e30f46bddfaab0d8d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2d9332c593dd65e30f46bddfaab0d8d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2d9332c593dd65e30f46bddfaab0d8d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c2d9332c593dd65e30f46bddfaab0d8d,
        type_description_1,
        par_self,
        var_search_start_index,
        var_partial_idx,
        var_idx
    );


    // Release cached frame if used for exception.
    if (frame_c2d9332c593dd65e30f46bddfaab0d8d == cache_frame_c2d9332c593dd65e30f46bddfaab0d8d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c2d9332c593dd65e30f46bddfaab0d8d);
        cache_frame_c2d9332c593dd65e30f46bddfaab0d8d = NULL;
    }

    assertFrameObject(frame_c2d9332c593dd65e30f46bddfaab0d8d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_search_start_index);
    Py_DECREF(var_search_start_index);
    var_search_start_index = NULL;
    Py_XDECREF(var_partial_idx);
    var_partial_idx = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
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

    Py_XDECREF(var_search_start_index);
    var_search_start_index = NULL;
    Py_XDECREF(var_partial_idx);
    var_partial_idx = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
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


static PyObject *impl_h11$_receivebuffer$$$function__9_maybe_extract_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_match = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_out = NULL;
    PyObject *var_lines = NULL;
    PyObject *var_line = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1dc6d6ae258f88b8c456c32e99f630f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_1dc6d6ae258f88b8c456c32e99f630f8 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1dc6d6ae258f88b8c456c32e99f630f8)) {
        Py_XDECREF(cache_frame_1dc6d6ae258f88b8c456c32e99f630f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1dc6d6ae258f88b8c456c32e99f630f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1dc6d6ae258f88b8c456c32e99f630f8 = MAKE_FUNCTION_FRAME(codeobj_1dc6d6ae258f88b8c456c32e99f630f8, module_h11$_receivebuffer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1dc6d6ae258f88b8c456c32e99f630f8->m_type_description == NULL);
    frame_1dc6d6ae258f88b8c456c32e99f630f8 = cache_frame_1dc6d6ae258f88b8c456c32e99f630f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1dc6d6ae258f88b8c456c32e99f630f8);
    assert(Py_REFCNT(frame_1dc6d6ae258f88b8c456c32e99f630f8) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[14];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[15];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_1dc6d6ae258f88b8c456c32e99f630f8->m_frame.f_lineno = 110;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[5],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[1]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[17];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[10];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_1dc6d6ae258f88b8c456c32e99f630f8->m_frame.f_lineno = 114;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[5],
            PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[4]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1dc6d6ae258f88b8c456c32e99f630f8->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_match == NULL);
        var_match = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_match);
        tmp_cmp_expr_left_3 = var_match;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_sub_expr_left_1;
        nuitka_digit tmp_sub_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_value_2 != NULL);
        tmp_args_element_value_3 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[1]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = 2;
        tmp_args_element_value_4 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        assert(!(tmp_args_element_value_4 == NULL));
        frame_1dc6d6ae258f88b8c456c32e99f630f8->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_match);
        tmp_called_instance_3 = var_match;
        frame_1dc6d6ae258f88b8c456c32e99f630f8->m_frame.f_lineno = 124;
        tmp_expression_value_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[21],
            PyTuple_GET_ITEM(mod_consts[22], 0)
        );

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[11];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_3, -1);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_idx == NULL);
        var_idx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_idx);
        tmp_args_element_value_5 = var_idx;
        frame_1dc6d6ae258f88b8c456c32e99f630f8->m_frame.f_lineno = 125;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[5], tmp_args_element_value_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(var_out);
        tmp_expression_value_10 = var_out;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[23]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1dc6d6ae258f88b8c456c32e99f630f8->m_frame.f_lineno = 126;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[24]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lines == NULL);
        var_lines = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_lines);
        tmp_iter_arg_1 = var_lines;
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 128;
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
            PyObject *old = var_line;
            var_line = tmp_assign_source_7;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_line);
        tmp_expression_value_11 = var_line;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[25]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_1dc6d6ae258f88b8c456c32e99f630f8->m_frame.f_lineno = 129;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[26]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 129;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(var_line);
        tmp_delsubscr_target_1 = var_line;
        tmp_delsubscr_subscript_1 = mod_consts[11];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_4:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 128;
        type_description_1 = "oooooo";
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
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_4;
            CHECK_OBJECT(var_lines);
            tmp_expression_value_12 = var_lines;
            tmp_subscript_value_4 = mod_consts[11];
            tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_4, -1);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_5;
            CHECK_OBJECT(var_lines);
            tmp_expression_value_13 = var_lines;
            tmp_subscript_value_5 = mod_consts[27];
            tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_5, -2);
            if (tmp_cmp_expr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_4 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_9 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            Py_DECREF(tmp_cmp_expr_left_4);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_9;
        }
        {
            bool tmp_condition_result_6;
            PyObject *tmp_operand_value_2;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_6 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_6 != false) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_operand_value_1);
        goto try_return_handler_3;
        branch_no_6:;
        {
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_5 = tmp_comparison_chain_1__operand_2;
            tmp_cmp_expr_right_5 = mod_consts[28];
            tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_BYTES(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
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

        Py_XDECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 132;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_delsubscr_target_2;
        PyObject *tmp_delsubscr_subscript_2;
        CHECK_OBJECT(var_lines);
        tmp_delsubscr_target_2 = var_lines;
        tmp_delsubscr_subscript_2 = mod_consts[29];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_1dc6d6ae258f88b8c456c32e99f630f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1dc6d6ae258f88b8c456c32e99f630f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1dc6d6ae258f88b8c456c32e99f630f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1dc6d6ae258f88b8c456c32e99f630f8,
        type_description_1,
        par_self,
        var_match,
        var_idx,
        var_out,
        var_lines,
        var_line
    );


    // Release cached frame if used for exception.
    if (frame_1dc6d6ae258f88b8c456c32e99f630f8 == cache_frame_1dc6d6ae258f88b8c456c32e99f630f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1dc6d6ae258f88b8c456c32e99f630f8);
        cache_frame_1dc6d6ae258f88b8c456c32e99f630f8 = NULL;
    }

    assertFrameObject(frame_1dc6d6ae258f88b8c456c32e99f630f8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_lines);
    tmp_return_value = var_lines;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_match);
    var_match = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
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

    Py_XDECREF(var_match);
    var_match = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
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


static PyObject *impl_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f9a59cd5b781b8cf0afb7d048a0793e4;
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
    static struct Nuitka_FrameObject *cache_frame_f9a59cd5b781b8cf0afb7d048a0793e4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f9a59cd5b781b8cf0afb7d048a0793e4)) {
        Py_XDECREF(cache_frame_f9a59cd5b781b8cf0afb7d048a0793e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9a59cd5b781b8cf0afb7d048a0793e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9a59cd5b781b8cf0afb7d048a0793e4 = MAKE_FUNCTION_FRAME(codeobj_f9a59cd5b781b8cf0afb7d048a0793e4, module_h11$_receivebuffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f9a59cd5b781b8cf0afb7d048a0793e4->m_type_description == NULL);
    frame_f9a59cd5b781b8cf0afb7d048a0793e4 = cache_frame_f9a59cd5b781b8cf0afb7d048a0793e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f9a59cd5b781b8cf0afb7d048a0793e4);
    assert(Py_REFCNT(frame_f9a59cd5b781b8cf0afb7d048a0793e4) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_subscript_value_1 = mod_consts[2];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[31];
        tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f9a59cd5b781b8cf0afb7d048a0793e4, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f9a59cd5b781b8cf0afb7d048a0793e4, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_IndexError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 148;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f9a59cd5b781b8cf0afb7d048a0793e4->m_frame) frame_f9a59cd5b781b8cf0afb7d048a0793e4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_f9a59cd5b781b8cf0afb7d048a0793e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9a59cd5b781b8cf0afb7d048a0793e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9a59cd5b781b8cf0afb7d048a0793e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9a59cd5b781b8cf0afb7d048a0793e4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f9a59cd5b781b8cf0afb7d048a0793e4 == cache_frame_f9a59cd5b781b8cf0afb7d048a0793e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f9a59cd5b781b8cf0afb7d048a0793e4);
        cache_frame_f9a59cd5b781b8cf0afb7d048a0793e4 = NULL;
    }

    assertFrameObject(frame_f9a59cd5b781b8cf0afb7d048a0793e4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_f9a59cd5b781b8cf0afb7d048a0793e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__1___init__,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_1b75fc633011e11b42f2f9dcc6a3aee2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__2___iadd__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__2___iadd__,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        codeobj_14b81668e39a8f19abc347f41b2d69a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__3___bool__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__3___bool__,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_8d1320d8daaf96c82147ec5b448821f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__4___len__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__4___len__,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[65],
#endif
        codeobj_f529c7e0e58a34cde5bd0520f0d711e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__5___bytes__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__5___bytes__,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        codeobj_fcbf6d3b59b1c9ff14eb158cb9432bc4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__6__extract(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__6__extract,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_3da4d0c4711386820bc2bd9e83f55b9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__7_maybe_extract_at_most(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__7_maybe_extract_at_most,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_b22d5b9fe7fb380e5f9e207fc9b867b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__8_maybe_extract_next_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__8_maybe_extract_next_line,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_c2d9332c593dd65e30f46bddfaab0d8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_receivebuffer$$$function__9_maybe_extract_lines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_receivebuffer$$$function__9_maybe_extract_lines,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_1dc6d6ae258f88b8c456c32e99f630f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_receivebuffer,
        mod_consts[30],
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

function_impl_code functable_h11$_receivebuffer[] = {
    impl_h11$_receivebuffer$$$function__1___init__,
    impl_h11$_receivebuffer$$$function__2___iadd__,
    impl_h11$_receivebuffer$$$function__3___bool__,
    impl_h11$_receivebuffer$$$function__4___len__,
    impl_h11$_receivebuffer$$$function__5___bytes__,
    impl_h11$_receivebuffer$$$function__6__extract,
    impl_h11$_receivebuffer$$$function__7_maybe_extract_at_most,
    impl_h11$_receivebuffer$$$function__8_maybe_extract_next_line,
    impl_h11$_receivebuffer$$$function__9_maybe_extract_lines,
    impl_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line,
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

    function_impl_code *current = functable_h11$_receivebuffer;
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

    if (offset > sizeof(functable_h11$_receivebuffer) || offset < 0) {
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
        functable_h11$_receivebuffer[offset],
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
        module_h11$_receivebuffer,
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
PyObject *modulecode_h11$_receivebuffer(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("h11._receivebuffer");

    // Store the module for future use.
    module_h11$_receivebuffer = module;

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
        PRINT_STRING("h11._receivebuffer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("h11._receivebuffer: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("h11._receivebuffer: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inith11$_receivebuffer\n");

    moduledict_h11$_receivebuffer = MODULE_DICT(module_h11$_receivebuffer);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_h11$_receivebuffer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_h11$_receivebuffer,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[88]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_h11$_receivebuffer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_receivebuffer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_receivebuffer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_h11$_receivebuffer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_h11$_receivebuffer);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_e68ac7c063f4e896c089ca21d4e9d527;
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
    PyObject *locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_3b0e42331a61d3cc17f8a7d338e921de_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_2);
    }
    frame_e68ac7c063f4e896c089ca21d4e9d527 = MAKE_MODULE_FRAME(codeobj_e68ac7c063f4e896c089ca21d4e9d527, module_h11$_receivebuffer);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e68ac7c063f4e896c089ca21d4e9d527);
    assert(Py_REFCNT(frame_e68ac7c063f4e896c089ca21d4e9d527) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[33];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[36], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[37], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[39];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_h11$_receivebuffer;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_e68ac7c063f4e896c089ca21d4e9d527->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_h11$_receivebuffer,
                mod_consts[41],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[41]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_h11$_receivebuffer,
                mod_consts[42],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[42]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_h11$_receivebuffer,
                mod_consts[43],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[43]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_LIST1(mod_consts[44]);
        UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[47];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[48]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_e68ac7c063f4e896c089ca21d4e9d527->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyDict_SetItem(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts[50], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyDict_SetItem(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts[51], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[52]);


            tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__1___init__(tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_3b0e42331a61d3cc17f8a7d338e921de_2 = MAKE_CLASS_FRAME(codeobj_3b0e42331a61d3cc17f8a7d338e921de, module_h11$_receivebuffer, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3b0e42331a61d3cc17f8a7d338e921de_2);
        assert(Py_REFCNT(frame_3b0e42331a61d3cc17f8a7d338e921de_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_1;
            tmp_dict_key_1 = mod_consts[55];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_1 = mod_consts[56];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[57];
            tmp_dict_value_1 = mod_consts[44];
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__2___iadd__(tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts[58], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[60]);


            tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__3___bool__(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(mod_consts[63]);


            tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__4___len__(tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts[64], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(mod_consts[66]);


            tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__5___bytes__(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts[67], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = DICT_COPY(mod_consts[69]);


            tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__6__extract(tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_key_2 = mod_consts[71];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_annotations_7 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_4;
                PyObject *tmp_subscript_value_2;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[57];
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[42]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_2 = (PyObject *)&PyByteArray_Type;
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__7_maybe_extract_at_most(tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_3;
            tmp_dict_key_3 = mod_consts[57];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_3 = (PyObject *)&PyByteArray_Type;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__8_maybe_extract_next_line(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_5;
            tmp_dict_key_4 = mod_consts[57];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_5 = (PyObject *)&PyByteArray_Type;
            tmp_subscript_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
            if (tmp_subscript_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__9_maybe_extract_lines(tmp_annotations_9);

            tmp_res = PyDict_SetItem(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts[76], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3b0e42331a61d3cc17f8a7d338e921de_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3b0e42331a61d3cc17f8a7d338e921de_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3b0e42331a61d3cc17f8a7d338e921de_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3b0e42331a61d3cc17f8a7d338e921de_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_3b0e42331a61d3cc17f8a7d338e921de_2);

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
            PyObject *tmp_annotations_10;
            tmp_annotations_10 = DICT_COPY(mod_consts[60]);


            tmp_dictset_value = MAKE_FUNCTION_h11$_receivebuffer$$$function__10_is_next_line_obviously_invalid_request_line(tmp_annotations_10);

            tmp_res = PyDict_SetItem(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[44];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[80];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_e68ac7c063f4e896c089ca21d4e9d527->m_frame.f_lineno = 47;
            tmp_assign_source_15 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47);
        locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47 = NULL;
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

        Py_DECREF(locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47);
        locals_h11$_receivebuffer$$$class__1_ReceiveBuffer_47 = NULL;
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
        exception_lineno = 47;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_14);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e68ac7c063f4e896c089ca21d4e9d527, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e68ac7c063f4e896c089ca21d4e9d527->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e68ac7c063f4e896c089ca21d4e9d527, exception_lineno);
    }



    assertFrameObject(frame_e68ac7c063f4e896c089ca21d4e9d527);

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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("h11._receivebuffer", false);

    Py_INCREF(module_h11$_receivebuffer);
    return module_h11$_receivebuffer;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_receivebuffer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("h11$_receivebuffer", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
