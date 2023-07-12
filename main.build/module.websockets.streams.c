/* Generated code for Python module 'websockets.streams'
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

/* The "module_websockets$streams" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websockets$streams;
PyDictObject *moduledict_websockets$streams;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[69];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[69];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("websockets.streams"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 69; i++) {
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
void checkModuleConstants_websockets$streams(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 69; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_96a0d4c7a3ee5d210afc94934078c495;
static PyCodeObject *codeobj_844b4dbbadb8183f2745deded4e8fff5;
static PyCodeObject *codeobj_cf7cea5e359e922feb90412082558453;
static PyCodeObject *codeobj_53e44b1c456f79f4e0e4e13efd11abfc;
static PyCodeObject *codeobj_ef05ae4f58549feed53f5399bad1c233;
static PyCodeObject *codeobj_78a475c2313ceea475dc68fb382eec5f;
static PyCodeObject *codeobj_d5d9d2d78c93c54b8e741fa7ba1e8321;
static PyCodeObject *codeobj_df9006a62fc05236e817e6b922ccac4c;
static PyCodeObject *codeobj_8e809014a586e07b359c177b4ce0a457;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[36]; CHECK_OBJECT(module_filename_obj);
    codeobj_96a0d4c7a3ee5d210afc94934078c495 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[63], mod_consts[63], NULL, NULL, 0, 0, 0);
    codeobj_844b4dbbadb8183f2745deded4e8fff5 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[50], mod_consts[50], mod_consts[64], NULL, 1, 0, 0);
    codeobj_cf7cea5e359e922feb90412082558453 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[29], mod_consts[29], mod_consts[64], NULL, 1, 0, 0);
    codeobj_53e44b1c456f79f4e0e4e13efd11abfc = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[60], mod_consts[60], mod_consts[64], NULL, 1, 0, 0);
    codeobj_ef05ae4f58549feed53f5399bad1c233 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[56], mod_consts[56], mod_consts[65], NULL, 2, 0, 0);
    codeobj_78a475c2313ceea475dc68fb382eec5f = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[58], mod_consts[58], mod_consts[64], NULL, 1, 0, 0);
    codeobj_d5d9d2d78c93c54b8e741fa7ba1e8321 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[66], NULL, 2, 0, 0);
    codeobj_df9006a62fc05236e817e6b922ccac4c = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[17], mod_consts[17], mod_consts[67], NULL, 2, 0, 0);
    codeobj_8e809014a586e07b359c177b4ce0a457 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[26], mod_consts[26], mod_consts[68], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_websockets$streams$$$function__2_read_line$$$genobj__1_read_line(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_websockets$streams$$$function__3_read_exact$$$genobj__1_read_exact(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_websockets$streams$$$function__4_read_to_eof$$$genobj__1_read_to_eof(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_websockets$streams$$$function__5_at_eof$$$genobj__1_at_eof(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_websockets$streams$$$function__1___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$streams$$$function__2_read_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$streams$$$function__3_read_exact(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$streams$$$function__4_read_to_eof(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$streams$$$function__5_at_eof(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$streams$$$function__6_feed_data(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$streams$$$function__7_feed_eof(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$streams$$$function__8_discard(PyObject *annotations);


// The module function definitions.
static PyObject *impl_websockets$streams$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_844b4dbbadb8183f2745deded4e8fff5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_844b4dbbadb8183f2745deded4e8fff5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_844b4dbbadb8183f2745deded4e8fff5)) {
        Py_XDECREF(cache_frame_844b4dbbadb8183f2745deded4e8fff5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_844b4dbbadb8183f2745deded4e8fff5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_844b4dbbadb8183f2745deded4e8fff5 = MAKE_FUNCTION_FRAME(codeobj_844b4dbbadb8183f2745deded4e8fff5, module_websockets$streams, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_844b4dbbadb8183f2745deded4e8fff5->m_type_description == NULL);
    frame_844b4dbbadb8183f2745deded4e8fff5 = cache_frame_844b4dbbadb8183f2745deded4e8fff5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_844b4dbbadb8183f2745deded4e8fff5);
    assert(Py_REFCNT(frame_844b4dbbadb8183f2745deded4e8fff5) == 2);

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


            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_844b4dbbadb8183f2745deded4e8fff5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_844b4dbbadb8183f2745deded4e8fff5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_844b4dbbadb8183f2745deded4e8fff5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_844b4dbbadb8183f2745deded4e8fff5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_844b4dbbadb8183f2745deded4e8fff5 == cache_frame_844b4dbbadb8183f2745deded4e8fff5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_844b4dbbadb8183f2745deded4e8fff5);
        cache_frame_844b4dbbadb8183f2745deded4e8fff5 = NULL;
    }

    assertFrameObject(frame_844b4dbbadb8183f2745deded4e8fff5);

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


static PyObject *impl_websockets$streams$$$function__2_read_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_m = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_m;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_websockets$streams$$$function__2_read_line$$$genobj__1_read_line(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct websockets$streams$$$function__2_read_line$$$genobj__1_read_line_locals {
    PyObject *var_n;
    PyObject *var_p;
    PyObject *var_r;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};
#endif

static PyObject *websockets$streams$$$function__2_read_line$$$genobj__1_read_line_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct websockets$streams$$$function__2_read_line$$$genobj__1_read_line_locals *generator_heap = (struct websockets$streams$$$function__2_read_line$$$genobj__1_read_line_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_n = NULL;
    generator_heap->var_p = NULL;
    generator_heap->var_r = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[4];
        assert(generator_heap->var_p == NULL);
        Py_INCREF(tmp_assign_source_1);
        generator_heap->var_p = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_df9006a62fc05236e817e6b922ccac4c, module_websockets$streams, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    loop_start_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 39;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 39;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 39;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[7];
        if (generator_heap->var_p == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[8]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 39;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = generator_heap->var_p;
        generator->m_frame->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_add_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 39;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[9];
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 39;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_n;
            generator_heap->var_n = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(generator_heap->var_n);
        tmp_cmp_expr_left_1 = generator_heap->var_n;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 40;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 42;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 42;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 42;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_p;
            generator_heap->var_p = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(generator_heap->var_p);
        tmp_cmp_expr_left_2 = generator_heap->var_p;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "ccooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[11];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(generator_heap->var_p);
            tmp_format_value_1 = generator_heap->var_p;
            tmp_format_spec_1 = mod_consts[12];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 44;
                generator_heap->type_description_1 = "ccooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[13];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 44;
                generator_heap->type_description_1 = "ccooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_format_spec_2 = mod_consts[12];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 44;
                generator_heap->type_description_1 = "ccooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[14];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 44;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 44;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        generator_heap->exception_type = tmp_raise_type_1;
        generator_heap->exception_lineno = 44;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ccooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 45;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[2]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 45;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            generator_heap->exception_lineno = 45;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[15];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(generator_heap->var_p);
            tmp_format_value_3 = generator_heap->var_p;
            tmp_format_spec_3 = mod_consts[12];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 46;
                generator_heap->type_description_1 = "ccooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[16];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 46;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 46;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_EOFError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        generator_heap->exception_type = tmp_raise_type_2;
        generator_heap->exception_lineno = 46;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ccooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_expression_value_5;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_5 = Py_None;
        Py_INCREF(tmp_expression_value_5);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_5;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 47;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 38;
        generator_heap->type_description_1 = "ccooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(generator_heap->var_n);
        tmp_cmp_expr_left_3 = generator_heap->var_n;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 48;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_3 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 48;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[11];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(generator_heap->var_n);
            tmp_format_value_4 = generator_heap->var_n;
            tmp_format_spec_4 = mod_consts[12];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 49;
                generator_heap->type_description_1 = "ccooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[13];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 49;
                generator_heap->type_description_1 = "ccooo";
                goto tuple_build_exception_3;
            }

            tmp_format_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_format_spec_5 = mod_consts[12];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 49;
                generator_heap->type_description_1 = "ccooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[14];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_make_exception_arg_3 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 49;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 49;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        generator_heap->exception_type = tmp_raise_type_3;
        generator_heap->exception_lineno = 49;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ccooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 50;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[1]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 50;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_n);
        tmp_stop_value_1 = generator_heap->var_n;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_6);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 50;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_r == NULL);
        generator_heap->var_r = tmp_assign_source_4;
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_delsubscr_subscript_1;
        PyObject *tmp_stop_value_2;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 51;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[1]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 51;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_n);
        tmp_stop_value_2 = generator_heap->var_n;
        tmp_delsubscr_subscript_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_2);
        assert(!(tmp_delsubscr_subscript_1 == NULL));
        generator_heap->tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        Py_DECREF(tmp_delsubscr_subscript_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 51;
            generator_heap->type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_n,
            generator_heap->var_p,
            generator_heap->var_r
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(generator_heap->var_r);
    generator_heap->tmp_return_value = generator_heap->var_r;
    Py_INCREF(generator_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(generator_heap->var_n);
    Py_DECREF(generator_heap->var_n);
    generator_heap->var_n = NULL;
    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;
    CHECK_OBJECT(generator_heap->var_r);
    Py_DECREF(generator_heap->var_r);
    generator_heap->var_r = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_n);
    generator_heap->var_n = NULL;
    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;
    Py_XDECREF(generator_heap->var_r);
    generator_heap->var_r = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$streams$$$function__2_read_line$$$genobj__1_read_line(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$streams$$$function__2_read_line$$$genobj__1_read_line_context,
        module_websockets$streams,
        mod_consts[17],
#if PYTHON_VERSION >= 0x350
        mod_consts[18],
#endif
        codeobj_df9006a62fc05236e817e6b922ccac4c,
        closure,
        2,
#if 1
        sizeof(struct websockets$streams$$$function__2_read_line$$$genobj__1_read_line_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$streams$$$function__3_read_exact(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_n = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_n;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_websockets$streams$$$function__3_read_exact$$$genobj__1_read_exact(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct websockets$streams$$$function__3_read_exact$$$genobj__1_read_exact_locals {
    PyObject *var_p;
    PyObject *var_r;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};
#endif

static PyObject *websockets$streams$$$function__3_read_exact$$$genobj__1_read_exact_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct websockets$streams$$$function__3_read_exact$$$genobj__1_read_exact_locals *generator_heap = (struct websockets$streams$$$function__3_read_exact$$$genobj__1_read_exact_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_p = NULL;
    generator_heap->var_r = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_d5d9d2d78c93c54b8e741fa7ba1e8321, module_websockets$streams, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 67;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_operand_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 67;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 67;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        generator_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        generator_heap->exception_lineno = 67;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ccoo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    loop_start_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 68;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 68;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 68;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 68;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_operand_value_2 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 68;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 68;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 70;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 70;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 70;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_p == NULL);
        generator_heap->var_p = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[15];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(generator_heap->var_p);
            tmp_format_value_1 = generator_heap->var_p;
            tmp_format_spec_1 = mod_consts[12];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 71;
                generator_heap->type_description_1 = "ccoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[21];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 71;
                generator_heap->type_description_1 = "ccoo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_format_spec_2 = mod_consts[12];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 71;
                generator_heap->type_description_1 = "ccoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[14];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 71;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 71;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_EOFError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        generator_heap->exception_type = tmp_raise_type_2;
        generator_heap->exception_lineno = 71;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ccoo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_expression_value_4;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_4 = Py_None;
        Py_INCREF(tmp_expression_value_4);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_4;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 72;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 68;
        generator_heap->type_description_1 = "ccoo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[1]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_expression_value_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_stop_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_r == NULL);
        generator_heap->var_r = tmp_assign_source_2;
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_delsubscr_subscript_1;
        PyObject *tmp_stop_value_2;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 74;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[1]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 74;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_delsubscr_target_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 74;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_stop_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_delsubscr_subscript_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_2);
        assert(!(tmp_delsubscr_subscript_1 == NULL));
        generator_heap->tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        Py_DECREF(tmp_delsubscr_subscript_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 74;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_p,
            generator_heap->var_r
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(generator_heap->var_r);
    generator_heap->tmp_return_value = generator_heap->var_r;
    Py_INCREF(generator_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(generator_heap->var_r);
    Py_DECREF(generator_heap->var_r);
    generator_heap->var_r = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;
    Py_XDECREF(generator_heap->var_r);
    generator_heap->var_r = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$streams$$$function__3_read_exact$$$genobj__1_read_exact(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$streams$$$function__3_read_exact$$$genobj__1_read_exact_context,
        module_websockets$streams,
        mod_consts[22],
#if PYTHON_VERSION >= 0x350
        mod_consts[23],
#endif
        codeobj_d5d9d2d78c93c54b8e741fa7ba1e8321,
        closure,
        2,
#if 1
        sizeof(struct websockets$streams$$$function__3_read_exact$$$genobj__1_read_exact_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$streams$$$function__4_read_to_eof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_m = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_m;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_websockets$streams$$$function__4_read_to_eof$$$genobj__1_read_to_eof(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct websockets$streams$$$function__4_read_to_eof$$$genobj__1_read_to_eof_locals {
    PyObject *var_p;
    PyObject *var_r;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};
#endif

static PyObject *websockets$streams$$$function__4_read_to_eof$$$genobj__1_read_to_eof_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct websockets$streams$$$function__4_read_to_eof$$$genobj__1_read_to_eof_locals *generator_heap = (struct websockets$streams$$$function__4_read_to_eof$$$genobj__1_read_to_eof_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_p = NULL;
    generator_heap->var_r = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_8e809014a586e07b359c177b4ce0a457, module_websockets$streams, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 90;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 90;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 90;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (generator_heap->tmp_res == 0) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 91;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 91;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 91;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_p;
            generator_heap->var_p = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(generator_heap->var_p);
        tmp_cmp_expr_left_1 = generator_heap->var_p;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 92;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 92;
            generator_heap->type_description_1 = "ccoo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[11];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(generator_heap->var_p);
            tmp_format_value_1 = generator_heap->var_p;
            tmp_format_spec_1 = mod_consts[12];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 93;
                generator_heap->type_description_1 = "ccoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[13];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 93;
                generator_heap->type_description_1 = "ccoo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_format_spec_2 = mod_consts[12];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 93;
                generator_heap->type_description_1 = "ccoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[14];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 93;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 93;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        generator_heap->exception_type = tmp_raise_type_1;
        generator_heap->exception_lineno = 93;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ccoo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_3 = Py_None;
        Py_INCREF(tmp_expression_value_3);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_3;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 94;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 90;
        generator_heap->type_description_1 = "ccoo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 95;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[1]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 95;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[25];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 95;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_r == NULL);
        generator_heap->var_r = tmp_assign_source_2;
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_delsubscr_subscript_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[1]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_1 = mod_consts[25];
        generator_heap->tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_p,
            generator_heap->var_r
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(generator_heap->var_r);
    generator_heap->tmp_return_value = generator_heap->var_r;
    Py_INCREF(generator_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;
    CHECK_OBJECT(generator_heap->var_r);
    Py_DECREF(generator_heap->var_r);
    generator_heap->var_r = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;
    Py_XDECREF(generator_heap->var_r);
    generator_heap->var_r = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$streams$$$function__4_read_to_eof$$$genobj__1_read_to_eof(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$streams$$$function__4_read_to_eof$$$genobj__1_read_to_eof_context,
        module_websockets$streams,
        mod_consts[26],
#if PYTHON_VERSION >= 0x350
        mod_consts[27],
#endif
        codeobj_8e809014a586e07b359c177b4ce0a457,
        closure,
        2,
#if 1
        sizeof(struct websockets$streams$$$function__4_read_to_eof$$$genobj__1_read_to_eof_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$streams$$$function__5_at_eof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_websockets$streams$$$function__5_at_eof$$$genobj__1_at_eof(tmp_closure_1);

        goto function_return_exit;
    }

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



#if 1
struct websockets$streams$$$function__5_at_eof$$$genobj__1_at_eof_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_return_value;
};
#endif

static PyObject *websockets$streams$$$function__5_at_eof$$$genobj__1_at_eof_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct websockets$streams$$$function__5_at_eof$$$genobj__1_at_eof_locals *generator_heap = (struct websockets$streams$$$function__5_at_eof$$$genobj__1_at_eof_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_cf7cea5e359e922feb90412082558453, module_websockets$streams, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    generator_heap->tmp_return_value = Py_False;
    Py_INCREF(generator_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 109;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 109;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            generator_heap->exception_lineno = 109;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    generator_heap->tmp_return_value = Py_True;
    Py_INCREF(generator_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_3 = Py_None;
        Py_INCREF(tmp_expression_value_3);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_3;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 106;
        generator_heap->type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    goto function_return_exit;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif

    return NULL;

}

static PyObject *MAKE_GENERATOR_websockets$streams$$$function__5_at_eof$$$genobj__1_at_eof(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websockets$streams$$$function__5_at_eof$$$genobj__1_at_eof_context,
        module_websockets$streams,
        mod_consts[29],
#if PYTHON_VERSION >= 0x350
        mod_consts[30],
#endif
        codeobj_cf7cea5e359e922feb90412082558453,
        closure,
        1,
#if 1
        sizeof(struct websockets$streams$$$function__5_at_eof$$$genobj__1_at_eof_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websockets$streams$$$function__6_feed_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_ef05ae4f58549feed53f5399bad1c233;
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
    static struct Nuitka_FrameObject *cache_frame_ef05ae4f58549feed53f5399bad1c233 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ef05ae4f58549feed53f5399bad1c233)) {
        Py_XDECREF(cache_frame_ef05ae4f58549feed53f5399bad1c233);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef05ae4f58549feed53f5399bad1c233 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef05ae4f58549feed53f5399bad1c233 = MAKE_FUNCTION_FRAME(codeobj_ef05ae4f58549feed53f5399bad1c233, module_websockets$streams, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef05ae4f58549feed53f5399bad1c233->m_type_description == NULL);
    frame_ef05ae4f58549feed53f5399bad1c233 = cache_frame_ef05ae4f58549feed53f5399bad1c233;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ef05ae4f58549feed53f5399bad1c233);
    assert(Py_REFCNT(frame_ef05ae4f58549feed53f5399bad1c233) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[31];
        frame_ef05ae4f58549feed53f5399bad1c233->m_frame.f_lineno = 129;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_EOFError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 129;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
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
        CHECK_OBJECT(par_data);
        tmp_iadd_expr_right_1 = par_data;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
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


            exception_lineno = 130;
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
        exception_tb = MAKE_TRACEBACK(frame_ef05ae4f58549feed53f5399bad1c233, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef05ae4f58549feed53f5399bad1c233->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef05ae4f58549feed53f5399bad1c233, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef05ae4f58549feed53f5399bad1c233,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_ef05ae4f58549feed53f5399bad1c233 == cache_frame_ef05ae4f58549feed53f5399bad1c233) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef05ae4f58549feed53f5399bad1c233);
        cache_frame_ef05ae4f58549feed53f5399bad1c233 = NULL;
    }

    assertFrameObject(frame_ef05ae4f58549feed53f5399bad1c233);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websockets$streams$$$function__7_feed_eof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_78a475c2313ceea475dc68fb382eec5f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_78a475c2313ceea475dc68fb382eec5f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_78a475c2313ceea475dc68fb382eec5f)) {
        Py_XDECREF(cache_frame_78a475c2313ceea475dc68fb382eec5f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_78a475c2313ceea475dc68fb382eec5f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_78a475c2313ceea475dc68fb382eec5f = MAKE_FUNCTION_FRAME(codeobj_78a475c2313ceea475dc68fb382eec5f, module_websockets$streams, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_78a475c2313ceea475dc68fb382eec5f->m_type_description == NULL);
    frame_78a475c2313ceea475dc68fb382eec5f = cache_frame_78a475c2313ceea475dc68fb382eec5f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_78a475c2313ceea475dc68fb382eec5f);
    assert(Py_REFCNT(frame_78a475c2313ceea475dc68fb382eec5f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[31];
        frame_78a475c2313ceea475dc68fb382eec5f->m_frame.f_lineno = 143;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_EOFError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 143;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78a475c2313ceea475dc68fb382eec5f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78a475c2313ceea475dc68fb382eec5f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78a475c2313ceea475dc68fb382eec5f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_78a475c2313ceea475dc68fb382eec5f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_78a475c2313ceea475dc68fb382eec5f == cache_frame_78a475c2313ceea475dc68fb382eec5f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_78a475c2313ceea475dc68fb382eec5f);
        cache_frame_78a475c2313ceea475dc68fb382eec5f = NULL;
    }

    assertFrameObject(frame_78a475c2313ceea475dc68fb382eec5f);

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


static PyObject *impl_websockets$streams$$$function__8_discard(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_53e44b1c456f79f4e0e4e13efd11abfc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_53e44b1c456f79f4e0e4e13efd11abfc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_53e44b1c456f79f4e0e4e13efd11abfc)) {
        Py_XDECREF(cache_frame_53e44b1c456f79f4e0e4e13efd11abfc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53e44b1c456f79f4e0e4e13efd11abfc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53e44b1c456f79f4e0e4e13efd11abfc = MAKE_FUNCTION_FRAME(codeobj_53e44b1c456f79f4e0e4e13efd11abfc, module_websockets$streams, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53e44b1c456f79f4e0e4e13efd11abfc->m_type_description == NULL);
    frame_53e44b1c456f79f4e0e4e13efd11abfc = cache_frame_53e44b1c456f79f4e0e4e13efd11abfc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_53e44b1c456f79f4e0e4e13efd11abfc);
    assert(Py_REFCNT(frame_53e44b1c456f79f4e0e4e13efd11abfc) == 2);

    // Framed code:
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_1 = mod_consts[25];
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53e44b1c456f79f4e0e4e13efd11abfc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53e44b1c456f79f4e0e4e13efd11abfc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53e44b1c456f79f4e0e4e13efd11abfc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53e44b1c456f79f4e0e4e13efd11abfc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_53e44b1c456f79f4e0e4e13efd11abfc == cache_frame_53e44b1c456f79f4e0e4e13efd11abfc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53e44b1c456f79f4e0e4e13efd11abfc);
        cache_frame_53e44b1c456f79f4e0e4e13efd11abfc = NULL;
    }

    assertFrameObject(frame_53e44b1c456f79f4e0e4e13efd11abfc);

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



static PyObject *MAKE_FUNCTION_websockets$streams$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$streams$$$function__1___init__,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_844b4dbbadb8183f2745deded4e8fff5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$streams,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$streams$$$function__2_read_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$streams$$$function__2_read_line,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[18],
#endif
        codeobj_df9006a62fc05236e817e6b922ccac4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$streams,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$streams$$$function__3_read_exact(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$streams$$$function__3_read_exact,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[23],
#endif
        codeobj_d5d9d2d78c93c54b8e741fa7ba1e8321,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$streams,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$streams$$$function__4_read_to_eof(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$streams$$$function__4_read_to_eof,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[27],
#endif
        codeobj_8e809014a586e07b359c177b4ce0a457,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$streams,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$streams$$$function__5_at_eof(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$streams$$$function__5_at_eof,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[30],
#endif
        codeobj_cf7cea5e359e922feb90412082558453,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$streams,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$streams$$$function__6_feed_data(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$streams$$$function__6_feed_data,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[57],
#endif
        codeobj_ef05ae4f58549feed53f5399bad1c233,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$streams,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$streams$$$function__7_feed_eof(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$streams$$$function__7_feed_eof,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        codeobj_78a475c2313ceea475dc68fb382eec5f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$streams,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$streams$$$function__8_discard(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$streams$$$function__8_discard,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[61],
#endif
        codeobj_53e44b1c456f79f4e0e4e13efd11abfc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$streams,
        mod_consts[34],
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

function_impl_code functable_websockets$streams[] = {
    impl_websockets$streams$$$function__1___init__,
    impl_websockets$streams$$$function__2_read_line,
    impl_websockets$streams$$$function__3_read_exact,
    impl_websockets$streams$$$function__4_read_to_eof,
    impl_websockets$streams$$$function__5_at_eof,
    impl_websockets$streams$$$function__6_feed_data,
    impl_websockets$streams$$$function__7_feed_eof,
    impl_websockets$streams$$$function__8_discard,
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

    function_impl_code *current = functable_websockets$streams;
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

    if (offset > sizeof(functable_websockets$streams) || offset < 0) {
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
        functable_websockets$streams[offset],
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
        module_websockets$streams,
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
PyObject *modulecode_websockets$streams(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websockets.streams");

    // Store the module for future use.
    module_websockets$streams = module;

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
        PRINT_STRING("websockets.streams: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websockets.streams: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websockets.streams: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwebsockets$streams\n");

    moduledict_websockets$streams = MODULE_DICT(module_websockets$streams);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websockets$streams,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websockets$streams,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[12]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$streams, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websockets$streams,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$streams, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$streams,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$streams, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$streams,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websockets$streams);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websockets$streams, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websockets$streams, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_websockets$streams, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websockets$streams, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_websockets$streams);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_websockets$streams, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_96a0d4c7a3ee5d210afc94934078c495;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_websockets$streams$$$class__1_StreamReader_6 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
        UPDATE_STRING_DICT0(moduledict_websockets$streams, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_websockets$streams, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_2);
    }
    frame_96a0d4c7a3ee5d210afc94934078c495 = MAKE_MODULE_FRAME(codeobj_96a0d4c7a3ee5d210afc94934078c495, module_websockets$streams);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96a0d4c7a3ee5d210afc94934078c495);
    assert(Py_REFCNT(frame_96a0d4c7a3ee5d210afc94934078c495) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[36];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_websockets$streams, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[39], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_websockets$streams, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[40], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_websockets$streams, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[42]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_websockets$streams, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_websockets$streams,
                mod_consts[43],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[43]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$streams, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_5);
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
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_websockets$streams$$$class__1_StreamReader_6 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyDict_SetItem(locals_websockets$streams$$$class__1_StreamReader_6, mod_consts[45], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[46];
        tmp_res = PyDict_SetItem(locals_websockets$streams$$$class__1_StreamReader_6, mod_consts[35], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[47];
        tmp_res = PyDict_SetItem(locals_websockets$streams$$$class__1_StreamReader_6, mod_consts[48], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[49]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$streams$$$function__1___init__(tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_websockets$streams$$$class__1_StreamReader_6, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[52]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$streams$$$function__2_read_line(tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_websockets$streams$$$class__1_StreamReader_6, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[53]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$streams$$$function__3_read_exact(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_websockets$streams$$$class__1_StreamReader_6, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(mod_consts[52]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$streams$$$function__4_read_to_eof(tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_websockets$streams$$$class__1_StreamReader_6, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(mod_consts[54]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$streams$$$function__5_at_eof(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_websockets$streams$$$class__1_StreamReader_6, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = DICT_COPY(mod_consts[55]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$streams$$$function__6_feed_data(tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_websockets$streams$$$class__1_StreamReader_6, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_7;
            tmp_annotations_7 = DICT_COPY(mod_consts[49]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$streams$$$function__7_feed_eof(tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_websockets$streams$$$class__1_StreamReader_6, mod_consts[58], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[49]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$streams$$$function__8_discard(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_websockets$streams$$$class__1_StreamReader_6, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[47];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[62];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_websockets$streams$$$class__1_StreamReader_6;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_96a0d4c7a3ee5d210afc94934078c495->m_frame.f_lineno = 6;
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
        tmp_assign_source_8 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_8);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_websockets$streams$$$class__1_StreamReader_6);
        locals_websockets$streams$$$class__1_StreamReader_6 = NULL;
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

        Py_DECREF(locals_websockets$streams$$$class__1_StreamReader_6);
        locals_websockets$streams$$$class__1_StreamReader_6 = NULL;
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
        UPDATE_STRING_DICT1(moduledict_websockets$streams, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_8);
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

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96a0d4c7a3ee5d210afc94934078c495, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96a0d4c7a3ee5d210afc94934078c495->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96a0d4c7a3ee5d210afc94934078c495, exception_lineno);
    }



    assertFrameObject(frame_96a0d4c7a3ee5d210afc94934078c495);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websockets.streams", false);

    Py_INCREF(module_websockets$streams);
    return module_websockets$streams;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$streams, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("websockets$streams", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
