/* Generated code for Python module 'h11._readers'
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

/* The "module_h11$_readers" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_h11$_readers;
PyDictObject *moduledict_h11$_readers;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[151];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[151];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("h11._readers"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 151; i++) {
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
void checkModuleConstants_h11$_readers(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 151; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_94ddc5d70195954117410393fc556928;
static PyCodeObject *codeobj_eb2ae3145a617b880bf4932d8c8b891f;
static PyCodeObject *codeobj_8f06b89529d5317e0d6ce0ba4c802d3d;
static PyCodeObject *codeobj_43ac0cdcce7796983ec47fac75fa2ffb;
static PyCodeObject *codeobj_cb29a00f36d256eb96cd4a0b68a7f0ed;
static PyCodeObject *codeobj_6f7bb6b6935b07620d9fecc6a5288feb;
static PyCodeObject *codeobj_500d06b654b1036e6ba5a19582cc71d4;
static PyCodeObject *codeobj_f2b018d64fca1e1a4c35254d1d27a564;
static PyCodeObject *codeobj_0d43aba68fb4b33ef25c75dbbab881af;
static PyCodeObject *codeobj_219c8b660049eb9d82766e7bef2ab2c6;
static PyCodeObject *codeobj_c09bd3b461c38925b2820b67c200a6cd;
static PyCodeObject *codeobj_024d3faef838c50d8b6b3423fcee840d;
static PyCodeObject *codeobj_5ee7e5a8e370af5aa531bea6d445f87e;
static PyCodeObject *codeobj_8ed426b1cedd51699fa0eed127316bb6;
static PyCodeObject *codeobj_4880ca5c0d5163d3e08bbc637793a494;
static PyCodeObject *codeobj_161117bcc58386807f04a137d67b9b11;
static PyCodeObject *codeobj_7da723d3a5dafe530c1cf73d4a2f3bac;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[62]; CHECK_OBJECT(module_filename_obj);
    codeobj_94ddc5d70195954117410393fc556928 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[139], mod_consts[139], NULL, NULL, 0, 0, 0);
    codeobj_eb2ae3145a617b880bf4932d8c8b891f = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[140], NULL, 0, 0, 0);
    codeobj_8f06b89529d5317e0d6ce0ba4c802d3d = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[140], NULL, 0, 0, 0);
    codeobj_43ac0cdcce7796983ec47fac75fa2ffb = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[140], NULL, 0, 0, 0);
    codeobj_cb29a00f36d256eb96cd4a0b68a7f0ed = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[141], NULL, 2, 0, 0);
    codeobj_6f7bb6b6935b07620d9fecc6a5288feb = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[141], NULL, 2, 0, 0);
    codeobj_500d06b654b1036e6ba5a19582cc71d4 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[142], NULL, 2, 0, 0);
    codeobj_f2b018d64fca1e1a4c35254d1d27a564 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[143], NULL, 1, 0, 0);
    codeobj_0d43aba68fb4b33ef25c75dbbab881af = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[144], NULL, 2, 0, 0);
    codeobj_219c8b660049eb9d82766e7bef2ab2c6 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[145], NULL, 1, 0, 0);
    codeobj_c09bd3b461c38925b2820b67c200a6cd = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[146], NULL, 1, 0, 0);
    codeobj_024d3faef838c50d8b6b3423fcee840d = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[147], NULL, 1, 0, 0);
    codeobj_5ee7e5a8e370af5aa531bea6d445f87e = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[148], NULL, 1, 0, 0);
    codeobj_8ed426b1cedd51699fa0eed127316bb6 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[149], NULL, 1, 0, 0);
    codeobj_4880ca5c0d5163d3e08bbc637793a494 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[143], NULL, 1, 0, 0);
    codeobj_161117bcc58386807f04a137d67b9b11 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[143], NULL, 1, 0, 0);
    codeobj_7da723d3a5dafe530c1cf73d4a2f3bac = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[143], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__12_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__10_read_eof(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__11___call__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__12_read_eof(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__13_expect_nothing(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__1__obsolete_line_fold(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__2__decode_header_lines(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__3_maybe_read_from_IDLE_client(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__5___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__6___call__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__7_read_eof(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__8___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_h11$_readers$$$function__9___call__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_h11$_readers$$$function__1__obsolete_line_fold(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_lines = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_lines;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold_locals {
    PyObject *var_last;
    PyObject *var_it;
    PyObject *var_line;
    PyObject *var_match;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold_locals *generator_heap = (struct h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_last = NULL;
    generator_heap->var_it = NULL;
    generator_heap->var_line = NULL;
    generator_heap->var_match = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_c09bd3b461c38925b2820b67c200a6cd, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[0]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 44;
            generator_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 44;
            generator_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_it == NULL);
        generator_heap->var_it = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(generator_heap->var_last == NULL);
        Py_INCREF(tmp_assign_source_2);
        generator_heap->var_last = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(generator_heap->var_it);
        tmp_iter_arg_2 = generator_heap->var_it;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 46;
            generator_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "coooo";
                generator_heap->exception_lineno = 46;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_line;
            generator_heap->var_line = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_line);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 47;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_line);
        tmp_args_element_value_1 = generator_heap->var_line;
        generator->m_frame->m_frame.f_lineno = 47;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 47;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_match;
            generator_heap->var_match = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(generator_heap->var_match);
        tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_match);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 48;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (generator_heap->var_last == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 49;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = generator_heap->var_last;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 50;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 50;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[5]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 50;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        generator_heap->exception_type = tmp_raise_type_1;
        generator_heap->exception_lineno = 50;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "coooo";
        goto try_except_handler_2;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if (generator_heap->var_last == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 51;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }

        tmp_isinstance_inst_1 = generator_heap->var_last;
        tmp_isinstance_cls_1 = (PyObject *)&PyByteArray_Type;
        generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 51;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 51;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_bytearray_arg_1;
        if (generator_heap->var_last == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 53;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }

        tmp_bytearray_arg_1 = generator_heap->var_last;
        tmp_assign_source_7 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 53;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_last;
            generator_heap->var_last = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (generator_heap->var_last == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 54;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }

        tmp_iadd_expr_left_1 = generator_heap->var_last;
        tmp_iadd_expr_right_1 = mod_consts[6];
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_BYTES(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 54;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_1;
        generator_heap->var_last = tmp_assign_source_8;

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(generator_heap->var_last);
        tmp_iadd_expr_left_2 = generator_heap->var_last;
        CHECK_OBJECT(generator_heap->var_line);
        tmp_expression_value_1 = generator_heap->var_line;
        CHECK_OBJECT(generator_heap->var_match);
        tmp_called_instance_2 = generator_heap->var_match;
        generator->m_frame->m_frame.f_lineno = 55;
        tmp_start_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[7]);
        if (tmp_start_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 55;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        tmp_stop_value_1 = Py_None;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_start_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_iadd_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 55;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 55;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = tmp_iadd_expr_left_2;
        generator_heap->var_last = tmp_assign_source_9;

    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (generator_heap->var_last == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 57;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_2 = generator_heap->var_last;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (generator_heap->var_last == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 58;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = generator_heap->var_last;
        Py_INCREF(tmp_expression_value_2);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_2;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 58;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(generator_heap->var_line);
        tmp_assign_source_10 = generator_heap->var_line;
        {
            PyObject *old = generator_heap->var_last;
            generator_heap->var_last = tmp_assign_source_10;
            Py_INCREF(generator_heap->var_last);
            Py_XDECREF(old);
        }

    }
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 46;
        generator_heap->type_description_1 = "coooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (generator_heap->var_last == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = generator_heap->var_last;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        if (generator_heap->var_last == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 61;
            generator_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = generator_heap->var_last;
        Py_INCREF(tmp_expression_value_3);
        generator->m_yield_return_index = 2;
        return tmp_expression_value_3;
        yield_return_2:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 61;
            generator_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_2 = yield_return_value;
    }
    branch_no_5:;

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
            generator->m_closure[0],
            generator_heap->var_last,
            generator_heap->var_it,
            generator_heap->var_line,
            generator_heap->var_match
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_last);
    generator_heap->var_last = NULL;
    Py_XDECREF(generator_heap->var_it);
    generator_heap->var_it = NULL;
    Py_XDECREF(generator_heap->var_line);
    generator_heap->var_line = NULL;
    Py_XDECREF(generator_heap->var_match);
    generator_heap->var_match = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->var_last);
    generator_heap->var_last = NULL;
    CHECK_OBJECT(generator_heap->var_it);
    Py_DECREF(generator_heap->var_it);
    generator_heap->var_it = NULL;
    Py_XDECREF(generator_heap->var_line);
    generator_heap->var_line = NULL;
    Py_XDECREF(generator_heap->var_match);
    generator_heap->var_match = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold_context,
        module_h11$_readers,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_c09bd3b461c38925b2820b67c200a6cd,
        closure,
        1,
#if 1
        sizeof(struct h11$_readers$$$function__1__obsolete_line_fold$$$genobj__1__obsolete_line_fold_locals)
#else
        0
#endif
    );
}


static PyObject *impl_h11$_readers$$$function__2__decode_header_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_lines = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_lines;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines_locals {
    PyObject *var_line;
    PyObject *var_matches;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines_locals *generator_heap = (struct h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_line = NULL;
    generator_heap->var_matches = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_219c8b660049eb9d82766e7bef2ab2c6, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 67;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[0]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 67;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 67;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 67;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 67;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "coo";
                generator_heap->exception_lineno = 67;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_line;
            generator_heap->var_line = tmp_assign_source_3;
            Py_INCREF(generator_heap->var_line);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 68;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 68;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_line);
        tmp_args_element_value_3 = generator_heap->var_line;
        tmp_args_element_value_4 = mod_consts[11];
        CHECK_OBJECT(generator_heap->var_line);
        tmp_args_element_value_5 = generator_heap->var_line;
        generator->m_frame->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 68;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_matches;
            generator_heap->var_matches = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_matches);
        tmp_expression_value_2 = generator_heap->var_matches;
        tmp_subscript_value_1 = mod_consts[12];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_2;
            PyTuple_SET_ITEM(tmp_expression_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(generator_heap->var_matches);
            tmp_expression_value_3 = generator_heap->var_matches;
            tmp_subscript_value_2 = mod_consts[13];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 69;
                generator_heap->type_description_1 = "coo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 67;
        generator_heap->type_description_1 = "coo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            generator->m_closure[0],
            generator_heap->var_line,
            generator_heap->var_matches
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_line);
    generator_heap->var_line = NULL;
    Py_XDECREF(generator_heap->var_matches);
    generator_heap->var_matches = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    Py_XDECREF(generator_heap->var_line);
    generator_heap->var_line = NULL;
    Py_XDECREF(generator_heap->var_matches);
    generator_heap->var_matches = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines_context,
        module_h11$_readers,
        mod_consts[14],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_219c8b660049eb9d82766e7bef2ab2c6,
        closure,
        1,
#if 1
        sizeof(struct h11$_readers$$$function__2__decode_header_lines$$$genobj__1__decode_header_lines_locals)
#else
        0
#endif
    );
}


static PyObject *impl_h11$_readers$$$function__3_maybe_read_from_IDLE_client(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_buf = python_pars[0];
    PyObject *var_lines = NULL;
    PyObject *var_matches = NULL;
    struct Nuitka_FrameObject *frame_5ee7e5a8e370af5aa531bea6d445f87e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5ee7e5a8e370af5aa531bea6d445f87e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5ee7e5a8e370af5aa531bea6d445f87e)) {
        Py_XDECREF(cache_frame_5ee7e5a8e370af5aa531bea6d445f87e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ee7e5a8e370af5aa531bea6d445f87e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ee7e5a8e370af5aa531bea6d445f87e = MAKE_FUNCTION_FRAME(codeobj_5ee7e5a8e370af5aa531bea6d445f87e, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5ee7e5a8e370af5aa531bea6d445f87e->m_type_description == NULL);
    frame_5ee7e5a8e370af5aa531bea6d445f87e = cache_frame_5ee7e5a8e370af5aa531bea6d445f87e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5ee7e5a8e370af5aa531bea6d445f87e);
    assert(Py_REFCNT(frame_5ee7e5a8e370af5aa531bea6d445f87e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_buf);
        tmp_called_instance_1 = par_buf;
        frame_5ee7e5a8e370af5aa531bea6d445f87e->m_frame.f_lineno = 76;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[15]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_lines == NULL);
        var_lines = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_lines);
        tmp_cmp_expr_left_1 = var_lines;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_buf);
        tmp_called_instance_2 = par_buf;
        frame_5ee7e5a8e370af5aa531bea6d445f87e->m_frame.f_lineno = 78;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[16]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5ee7e5a8e370af5aa531bea6d445f87e->m_frame.f_lineno = 79;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[17]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 79;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_lines);
        tmp_operand_value_1 = var_lines;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5ee7e5a8e370af5aa531bea6d445f87e->m_frame.f_lineno = 82;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[18]);

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 82;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lines);
        tmp_expression_value_1 = var_lines;
        tmp_subscript_value_1 = mod_consts[20];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[21];
        CHECK_OBJECT(var_lines);
        tmp_expression_value_2 = var_lines;
        tmp_subscript_value_2 = mod_consts[20];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 84;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5ee7e5a8e370af5aa531bea6d445f87e->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_matches == NULL);
        var_matches = tmp_assign_source_2;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[23];
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lines);
        tmp_expression_value_3 = var_lines;
        tmp_subscript_value_3 = mod_consts[24];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5ee7e5a8e370af5aa531bea6d445f87e->m_frame.f_lineno = 87;
        tmp_list_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[25];
        tmp_dict_value_1 = Py_True;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_matches);
        tmp_dircall_arg3_1 = var_matches;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
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
        exception_tb = MAKE_TRACEBACK(frame_5ee7e5a8e370af5aa531bea6d445f87e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ee7e5a8e370af5aa531bea6d445f87e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ee7e5a8e370af5aa531bea6d445f87e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ee7e5a8e370af5aa531bea6d445f87e,
        type_description_1,
        par_buf,
        var_lines,
        var_matches
    );


    // Release cached frame if used for exception.
    if (frame_5ee7e5a8e370af5aa531bea6d445f87e == cache_frame_5ee7e5a8e370af5aa531bea6d445f87e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5ee7e5a8e370af5aa531bea6d445f87e);
        cache_frame_5ee7e5a8e370af5aa531bea6d445f87e = NULL;
    }

    assertFrameObject(frame_5ee7e5a8e370af5aa531bea6d445f87e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_lines);
    Py_DECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_matches);
    var_matches = NULL;
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

    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_matches);
    var_matches = NULL;
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
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_buf = python_pars[0];
    PyObject *var_class_ = NULL;
    PyObject *var_lines = NULL;
    PyObject *var_matches = NULL;
    PyObject *var_http_version = NULL;
    PyObject *var_reason = NULL;
    PyObject *var_status_code = NULL;
    struct Nuitka_FrameObject *frame_8ed426b1cedd51699fa0eed127316bb6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8ed426b1cedd51699fa0eed127316bb6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8ed426b1cedd51699fa0eed127316bb6)) {
        Py_XDECREF(cache_frame_8ed426b1cedd51699fa0eed127316bb6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ed426b1cedd51699fa0eed127316bb6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ed426b1cedd51699fa0eed127316bb6 = MAKE_FUNCTION_FRAME(codeobj_8ed426b1cedd51699fa0eed127316bb6, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ed426b1cedd51699fa0eed127316bb6->m_type_description == NULL);
    frame_8ed426b1cedd51699fa0eed127316bb6 = cache_frame_8ed426b1cedd51699fa0eed127316bb6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ed426b1cedd51699fa0eed127316bb6);
    assert(Py_REFCNT(frame_8ed426b1cedd51699fa0eed127316bb6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_buf);
        tmp_called_instance_1 = par_buf;
        frame_8ed426b1cedd51699fa0eed127316bb6->m_frame.f_lineno = 97;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[15]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lines == NULL);
        var_lines = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_lines);
        tmp_cmp_expr_left_1 = var_lines;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_buf);
        tmp_called_instance_2 = par_buf;
        frame_8ed426b1cedd51699fa0eed127316bb6->m_frame.f_lineno = 99;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[16]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_8ed426b1cedd51699fa0eed127316bb6->m_frame.f_lineno = 100;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[17]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 100;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_lines);
        tmp_operand_value_1 = var_lines;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_8ed426b1cedd51699fa0eed127316bb6->m_frame.f_lineno = 103;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[26]);

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 103;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lines);
        tmp_expression_value_1 = var_lines;
        tmp_subscript_value_1 = mod_consts[20];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[28];
        CHECK_OBJECT(var_lines);
        tmp_expression_value_2 = var_lines;
        tmp_subscript_value_2 = mod_consts[20];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 104;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_8ed426b1cedd51699fa0eed127316bb6->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_matches == NULL);
        var_matches = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_matches);
        tmp_expression_value_3 = var_matches;
        tmp_subscript_value_3 = mod_consts[29];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_4 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_3 = mod_consts[30];
        Py_INCREF(tmp_assign_source_3);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_matches);
        tmp_expression_value_4 = var_matches;
        tmp_subscript_value_4 = mod_consts[29];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_http_version == NULL);
        var_http_version = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_matches);
        tmp_expression_value_5 = var_matches;
        tmp_subscript_value_5 = mod_consts[31];
        tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_5 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_4 = mod_consts[32];
        Py_INCREF(tmp_assign_source_4);
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(var_matches);
        tmp_expression_value_6 = var_matches;
        tmp_subscript_value_6 = mod_consts[31];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        assert(var_reason == NULL);
        var_reason = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_matches);
        tmp_expression_value_7 = var_matches;
        tmp_subscript_value_7 = mod_consts[33];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_status_code == NULL);
        var_status_code = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_status_code);
        tmp_cmp_expr_left_4 = var_status_code;
        tmp_cmp_expr_right_4 = mod_consts[34];
        tmp_condition_result_6 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_assign_source_6 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assign_source_6 == NULL)) {
            tmp_assign_source_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_6 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assign_source_6 == NULL)) {
            tmp_assign_source_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_3:;
        assert(var_class_ == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_class_ = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        CHECK_OBJECT(var_class_);
        tmp_called_value_4 = var_class_;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lines);
        tmp_expression_value_8 = var_lines;
        tmp_subscript_value_8 = mod_consts[24];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_8ed426b1cedd51699fa0eed127316bb6->m_frame.f_lineno = 114;
        tmp_list_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = Py_True;
        CHECK_OBJECT(var_status_code);
        tmp_kw_call_value_2_1 = var_status_code;
        CHECK_OBJECT(var_reason);
        tmp_kw_call_value_3_1 = var_reason;
        CHECK_OBJECT(var_http_version);
        tmp_kw_call_value_4_1 = var_http_version;
        frame_8ed426b1cedd51699fa0eed127316bb6->m_frame.f_lineno = 113;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_8ed426b1cedd51699fa0eed127316bb6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ed426b1cedd51699fa0eed127316bb6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ed426b1cedd51699fa0eed127316bb6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ed426b1cedd51699fa0eed127316bb6,
        type_description_1,
        par_buf,
        var_class_,
        var_lines,
        var_matches,
        var_http_version,
        var_reason,
        var_status_code
    );


    // Release cached frame if used for exception.
    if (frame_8ed426b1cedd51699fa0eed127316bb6 == cache_frame_8ed426b1cedd51699fa0eed127316bb6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ed426b1cedd51699fa0eed127316bb6);
        cache_frame_8ed426b1cedd51699fa0eed127316bb6 = NULL;
    }

    assertFrameObject(frame_8ed426b1cedd51699fa0eed127316bb6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_class_);
    var_class_ = NULL;
    CHECK_OBJECT(var_lines);
    Py_DECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_matches);
    var_matches = NULL;
    Py_XDECREF(var_http_version);
    var_http_version = NULL;
    Py_XDECREF(var_reason);
    var_reason = NULL;
    Py_XDECREF(var_status_code);
    var_status_code = NULL;
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

    Py_XDECREF(var_class_);
    var_class_ = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_matches);
    var_matches = NULL;
    Py_XDECREF(var_http_version);
    var_http_version = NULL;
    Py_XDECREF(var_reason);
    var_reason = NULL;
    Py_XDECREF(var_status_code);
    var_status_code = NULL;
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
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h11$_readers$$$function__5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_length = python_pars[1];
    struct Nuitka_FrameObject *frame_0d43aba68fb4b33ef25c75dbbab881af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d43aba68fb4b33ef25c75dbbab881af = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0d43aba68fb4b33ef25c75dbbab881af)) {
        Py_XDECREF(cache_frame_0d43aba68fb4b33ef25c75dbbab881af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d43aba68fb4b33ef25c75dbbab881af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d43aba68fb4b33ef25c75dbbab881af = MAKE_FUNCTION_FRAME(codeobj_0d43aba68fb4b33ef25c75dbbab881af, module_h11$_readers, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d43aba68fb4b33ef25c75dbbab881af->m_type_description == NULL);
    frame_0d43aba68fb4b33ef25c75dbbab881af = cache_frame_0d43aba68fb4b33ef25c75dbbab881af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0d43aba68fb4b33ef25c75dbbab881af);
    assert(Py_REFCNT(frame_0d43aba68fb4b33ef25c75dbbab881af) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_length);
        tmp_assattr_value_1 = par_length;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_length);
        tmp_assattr_value_2 = par_length;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d43aba68fb4b33ef25c75dbbab881af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d43aba68fb4b33ef25c75dbbab881af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d43aba68fb4b33ef25c75dbbab881af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d43aba68fb4b33ef25c75dbbab881af,
        type_description_1,
        par_self,
        par_length
    );


    // Release cached frame if used for exception.
    if (frame_0d43aba68fb4b33ef25c75dbbab881af == cache_frame_0d43aba68fb4b33ef25c75dbbab881af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d43aba68fb4b33ef25c75dbbab881af);
        cache_frame_0d43aba68fb4b33ef25c75dbbab881af = NULL;
    }

    assertFrameObject(frame_0d43aba68fb4b33ef25c75dbbab881af);

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
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h11$_readers$$$function__6___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_buf = python_pars[1];
    PyObject *var_data = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_cb29a00f36d256eb96cd4a0b68a7f0ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_cb29a00f36d256eb96cd4a0b68a7f0ed = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cb29a00f36d256eb96cd4a0b68a7f0ed)) {
        Py_XDECREF(cache_frame_cb29a00f36d256eb96cd4a0b68a7f0ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb29a00f36d256eb96cd4a0b68a7f0ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb29a00f36d256eb96cd4a0b68a7f0ed = MAKE_FUNCTION_FRAME(codeobj_cb29a00f36d256eb96cd4a0b68a7f0ed, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cb29a00f36d256eb96cd4a0b68a7f0ed->m_type_description == NULL);
    frame_cb29a00f36d256eb96cd4a0b68a7f0ed = cache_frame_cb29a00f36d256eb96cd4a0b68a7f0ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb29a00f36d256eb96cd4a0b68a7f0ed);
    assert(Py_REFCNT(frame_cb29a00f36d256eb96cd4a0b68a7f0ed) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[20];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
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
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_cb29a00f36d256eb96cd4a0b68a7f0ed->m_frame.f_lineno = 129;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_buf);
        tmp_expression_value_2 = par_buf;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[41]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[39]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_cb29a00f36d256eb96cd4a0b68a7f0ed->m_frame.f_lineno = 130;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_data);
        tmp_cmp_expr_left_2 = var_data;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[39]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_isub_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_data);
        tmp_len_arg_1 = var_data;
        tmp_isub_expr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_isub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        Py_DECREF(tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = tmp_isub_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[39], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
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
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_kw_call_value_0_1 = var_data;
        frame_cb29a00f36d256eb96cd4a0b68a7f0ed->m_frame.f_lineno = 134;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[43]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
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
        exception_tb = MAKE_TRACEBACK(frame_cb29a00f36d256eb96cd4a0b68a7f0ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb29a00f36d256eb96cd4a0b68a7f0ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb29a00f36d256eb96cd4a0b68a7f0ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb29a00f36d256eb96cd4a0b68a7f0ed,
        type_description_1,
        par_self,
        par_buf,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_cb29a00f36d256eb96cd4a0b68a7f0ed == cache_frame_cb29a00f36d256eb96cd4a0b68a7f0ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cb29a00f36d256eb96cd4a0b68a7f0ed);
        cache_frame_cb29a00f36d256eb96cd4a0b68a7f0ed = NULL;
    }

    assertFrameObject(frame_cb29a00f36d256eb96cd4a0b68a7f0ed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(var_data);
    var_data = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h11$_readers$$$function__7_read_eof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4880ca5c0d5163d3e08bbc637793a494;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4880ca5c0d5163d3e08bbc637793a494 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4880ca5c0d5163d3e08bbc637793a494)) {
        Py_XDECREF(cache_frame_4880ca5c0d5163d3e08bbc637793a494);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4880ca5c0d5163d3e08bbc637793a494 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4880ca5c0d5163d3e08bbc637793a494 = MAKE_FUNCTION_FRAME(codeobj_4880ca5c0d5163d3e08bbc637793a494, module_h11$_readers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4880ca5c0d5163d3e08bbc637793a494->m_type_description == NULL);
    frame_4880ca5c0d5163d3e08bbc637793a494 = cache_frame_4880ca5c0d5163d3e08bbc637793a494;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4880ca5c0d5163d3e08bbc637793a494);
    assert(Py_REFCNT(frame_4880ca5c0d5163d3e08bbc637793a494) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[45];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[38]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4880ca5c0d5163d3e08bbc637793a494->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4880ca5c0d5163d3e08bbc637793a494->m_frame.f_lineno = 137;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 137;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4880ca5c0d5163d3e08bbc637793a494, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4880ca5c0d5163d3e08bbc637793a494->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4880ca5c0d5163d3e08bbc637793a494, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4880ca5c0d5163d3e08bbc637793a494,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4880ca5c0d5163d3e08bbc637793a494 == cache_frame_4880ca5c0d5163d3e08bbc637793a494) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4880ca5c0d5163d3e08bbc637793a494);
        cache_frame_4880ca5c0d5163d3e08bbc637793a494 = NULL;
    }

    assertFrameObject(frame_4880ca5c0d5163d3e08bbc637793a494);

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

}


static PyObject *impl_h11$_readers$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f2b018d64fca1e1a4c35254d1d27a564;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f2b018d64fca1e1a4c35254d1d27a564 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f2b018d64fca1e1a4c35254d1d27a564)) {
        Py_XDECREF(cache_frame_f2b018d64fca1e1a4c35254d1d27a564);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f2b018d64fca1e1a4c35254d1d27a564 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f2b018d64fca1e1a4c35254d1d27a564 = MAKE_FUNCTION_FRAME(codeobj_f2b018d64fca1e1a4c35254d1d27a564, module_h11$_readers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f2b018d64fca1e1a4c35254d1d27a564->m_type_description == NULL);
    frame_f2b018d64fca1e1a4c35254d1d27a564 = cache_frame_f2b018d64fca1e1a4c35254d1d27a564;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f2b018d64fca1e1a4c35254d1d27a564);
    assert(Py_REFCNT(frame_f2b018d64fca1e1a4c35254d1d27a564) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[20];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[46], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[20];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[47], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[48], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f2b018d64fca1e1a4c35254d1d27a564, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2b018d64fca1e1a4c35254d1d27a564->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2b018d64fca1e1a4c35254d1d27a564, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f2b018d64fca1e1a4c35254d1d27a564,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f2b018d64fca1e1a4c35254d1d27a564 == cache_frame_f2b018d64fca1e1a4c35254d1d27a564) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f2b018d64fca1e1a4c35254d1d27a564);
        cache_frame_f2b018d64fca1e1a4c35254d1d27a564 = NULL;
    }

    assertFrameObject(frame_f2b018d64fca1e1a4c35254d1d27a564);

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


static PyObject *impl_h11$_readers$$$function__9___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_buf = python_pars[1];
    PyObject *var_lines = NULL;
    PyObject *var_data = NULL;
    PyObject *var_chunk_header = NULL;
    PyObject *var_matches = NULL;
    PyObject *var_chunk_start = NULL;
    PyObject *var_chunk_end = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_inplace_assign_2__value = NULL;
    struct Nuitka_FrameObject *frame_500d06b654b1036e6ba5a19582cc71d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_500d06b654b1036e6ba5a19582cc71d4 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_500d06b654b1036e6ba5a19582cc71d4)) {
        Py_XDECREF(cache_frame_500d06b654b1036e6ba5a19582cc71d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_500d06b654b1036e6ba5a19582cc71d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_500d06b654b1036e6ba5a19582cc71d4 = MAKE_FUNCTION_FRAME(codeobj_500d06b654b1036e6ba5a19582cc71d4, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_500d06b654b1036e6ba5a19582cc71d4->m_type_description == NULL);
    frame_500d06b654b1036e6ba5a19582cc71d4 = cache_frame_500d06b654b1036e6ba5a19582cc71d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_500d06b654b1036e6ba5a19582cc71d4);
    assert(Py_REFCNT(frame_500d06b654b1036e6ba5a19582cc71d4) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 158;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_buf);
        tmp_called_instance_1 = par_buf;
        frame_500d06b654b1036e6ba5a19582cc71d4->m_frame.f_lineno = 159;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[15]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lines == NULL);
        var_lines = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_lines);
        tmp_cmp_expr_left_1 = var_lines;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lines);
        tmp_args_element_value_1 = var_lines;
        frame_500d06b654b1036e6ba5a19582cc71d4->m_frame.f_lineno = 162;
        tmp_list_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_500d06b654b1036e6ba5a19582cc71d4->m_frame.f_lineno = 162;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[47]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[20];
        tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_buf);
        tmp_expression_value_3 = par_buf;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[47]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 164;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_500d06b654b1036e6ba5a19582cc71d4->m_frame.f_lineno = 164;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_data);
        tmp_cmp_expr_left_3 = var_data;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[47]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_isub_expr_left_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(var_data);
        tmp_len_arg_1 = var_data;
        tmp_isub_expr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_isub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        Py_DECREF(tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = tmp_isub_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[47], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
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
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[47]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[20];
        tmp_condition_result_5 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    branch_no_3:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[47]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[20];
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 171;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[46]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = mod_consts[20];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        if (par_buf == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_buf;
        frame_500d06b654b1036e6ba5a19582cc71d4->m_frame.f_lineno = 174;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[51]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_chunk_header == NULL);
        var_chunk_header = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_chunk_header);
        tmp_cmp_expr_left_7 = var_chunk_header;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_chunk_header);
        tmp_args_element_value_4 = var_chunk_header;
        tmp_args_element_value_5 = mod_consts[53];
        CHECK_OBJECT(var_chunk_header);
        tmp_args_element_value_6 = var_chunk_header;
        frame_500d06b654b1036e6ba5a19582cc71d4->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_matches == NULL);
        var_matches = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_value_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_base_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_matches);
        tmp_expression_value_9 = var_matches;
        tmp_subscript_value_1 = mod_consts[54];
        tmp_value_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_1);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_base_value_1 = mod_consts[55];
        tmp_assattr_value_2 = BUILTIN_INT2(tmp_value_value_1, tmp_base_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[46], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[46]);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = mod_consts[20];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[48], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_value_5 = par_self;
        if (par_buf == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = par_buf;
        frame_500d06b654b1036e6ba5a19582cc71d4->m_frame.f_lineno = 187;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_7);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_9:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_True;
        assert(var_chunk_start == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_chunk_start = tmp_assign_source_7;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_False;
        assert(var_chunk_start == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_chunk_start = tmp_assign_source_8;
    }
    branch_end_7:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[46]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = mod_consts[20];
        tmp_operand_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 191;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_13;
        if (par_buf == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = par_buf;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[41]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[46]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 192;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_500d06b654b1036e6ba5a19582cc71d4->m_frame.f_lineno = 192;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_data);
        tmp_cmp_expr_left_10 = var_data;
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[46]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_2__value == NULL);
        tmp_inplace_assign_2__value = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_isub_expr_left_2;
        PyObject *tmp_isub_expr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_isub_expr_left_2 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(var_data);
        tmp_len_arg_2 = var_data;
        tmp_isub_expr_right_2 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_isub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
        Py_DECREF(tmp_isub_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_11 = tmp_isub_expr_left_2;
        tmp_inplace_assign_2__value = tmp_assign_source_11;

    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_assattr_value_4 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[46], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[46]);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_11 = mod_consts[20];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = mod_consts[56];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[47], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_True;
        assert(var_chunk_end == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_chunk_end = tmp_assign_source_12;
    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_False;
        assert(var_chunk_end == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_chunk_end = tmp_assign_source_13;
    }
    branch_end_12:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_kw_call_value_0_2 = var_data;
        CHECK_OBJECT(var_chunk_start);
        tmp_kw_call_value_1_1 = var_chunk_start;
        CHECK_OBJECT(var_chunk_end);
        tmp_kw_call_value_2_1 = var_chunk_end;
        frame_500d06b654b1036e6ba5a19582cc71d4->m_frame.f_lineno = 201;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, kw_values, mod_consts[57]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_500d06b654b1036e6ba5a19582cc71d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_500d06b654b1036e6ba5a19582cc71d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_500d06b654b1036e6ba5a19582cc71d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_500d06b654b1036e6ba5a19582cc71d4,
        type_description_1,
        par_self,
        par_buf,
        var_lines,
        var_data,
        var_chunk_header,
        var_matches,
        var_chunk_start,
        var_chunk_end
    );


    // Release cached frame if used for exception.
    if (frame_500d06b654b1036e6ba5a19582cc71d4 == cache_frame_500d06b654b1036e6ba5a19582cc71d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_500d06b654b1036e6ba5a19582cc71d4);
        cache_frame_500d06b654b1036e6ba5a19582cc71d4 = NULL;
    }

    assertFrameObject(frame_500d06b654b1036e6ba5a19582cc71d4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_chunk_header);
    var_chunk_header = NULL;
    Py_XDECREF(var_matches);
    var_matches = NULL;
    Py_XDECREF(var_chunk_start);
    var_chunk_start = NULL;
    Py_XDECREF(var_chunk_end);
    var_chunk_end = NULL;
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

    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_chunk_header);
    var_chunk_header = NULL;
    Py_XDECREF(var_matches);
    var_matches = NULL;
    Py_XDECREF(var_chunk_start);
    var_chunk_start = NULL;
    Py_XDECREF(var_chunk_end);
    var_chunk_end = NULL;
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
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h11$_readers$$$function__10_read_eof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_161117bcc58386807f04a137d67b9b11;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_161117bcc58386807f04a137d67b9b11 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_161117bcc58386807f04a137d67b9b11)) {
        Py_XDECREF(cache_frame_161117bcc58386807f04a137d67b9b11);

#if _DEBUG_REFCOUNTS
        if (cache_frame_161117bcc58386807f04a137d67b9b11 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_161117bcc58386807f04a137d67b9b11 = MAKE_FUNCTION_FRAME(codeobj_161117bcc58386807f04a137d67b9b11, module_h11$_readers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_161117bcc58386807f04a137d67b9b11->m_type_description == NULL);
    frame_161117bcc58386807f04a137d67b9b11 = cache_frame_161117bcc58386807f04a137d67b9b11;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_161117bcc58386807f04a137d67b9b11);
    assert(Py_REFCNT(frame_161117bcc58386807f04a137d67b9b11) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_161117bcc58386807f04a137d67b9b11->m_frame.f_lineno = 204;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[58]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 204;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_161117bcc58386807f04a137d67b9b11, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_161117bcc58386807f04a137d67b9b11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_161117bcc58386807f04a137d67b9b11, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_161117bcc58386807f04a137d67b9b11,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_161117bcc58386807f04a137d67b9b11 == cache_frame_161117bcc58386807f04a137d67b9b11) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_161117bcc58386807f04a137d67b9b11);
        cache_frame_161117bcc58386807f04a137d67b9b11 = NULL;
    }

    assertFrameObject(frame_161117bcc58386807f04a137d67b9b11);

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

}


static PyObject *impl_h11$_readers$$$function__11___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_buf = python_pars[1];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_6f7bb6b6935b07620d9fecc6a5288feb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6f7bb6b6935b07620d9fecc6a5288feb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6f7bb6b6935b07620d9fecc6a5288feb)) {
        Py_XDECREF(cache_frame_6f7bb6b6935b07620d9fecc6a5288feb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f7bb6b6935b07620d9fecc6a5288feb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f7bb6b6935b07620d9fecc6a5288feb = MAKE_FUNCTION_FRAME(codeobj_6f7bb6b6935b07620d9fecc6a5288feb, module_h11$_readers, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f7bb6b6935b07620d9fecc6a5288feb->m_type_description == NULL);
    frame_6f7bb6b6935b07620d9fecc6a5288feb = cache_frame_6f7bb6b6935b07620d9fecc6a5288feb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6f7bb6b6935b07620d9fecc6a5288feb);
    assert(Py_REFCNT(frame_6f7bb6b6935b07620d9fecc6a5288feb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_buf);
        tmp_called_instance_1 = par_buf;
        frame_6f7bb6b6935b07620d9fecc6a5288feb->m_frame.f_lineno = 212;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_data);
        tmp_cmp_expr_left_1 = var_data;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_kw_call_value_0_1 = var_data;
        frame_6f7bb6b6935b07620d9fecc6a5288feb->m_frame.f_lineno = 215;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[43]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
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
        exception_tb = MAKE_TRACEBACK(frame_6f7bb6b6935b07620d9fecc6a5288feb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f7bb6b6935b07620d9fecc6a5288feb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f7bb6b6935b07620d9fecc6a5288feb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f7bb6b6935b07620d9fecc6a5288feb,
        type_description_1,
        par_self,
        par_buf,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_6f7bb6b6935b07620d9fecc6a5288feb == cache_frame_6f7bb6b6935b07620d9fecc6a5288feb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f7bb6b6935b07620d9fecc6a5288feb);
        cache_frame_6f7bb6b6935b07620d9fecc6a5288feb = NULL;
    }

    assertFrameObject(frame_6f7bb6b6935b07620d9fecc6a5288feb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(var_data);
    var_data = NULL;
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
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_h11$_readers$$$function__12_read_eof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7da723d3a5dafe530c1cf73d4a2f3bac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7da723d3a5dafe530c1cf73d4a2f3bac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7da723d3a5dafe530c1cf73d4a2f3bac)) {
        Py_XDECREF(cache_frame_7da723d3a5dafe530c1cf73d4a2f3bac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7da723d3a5dafe530c1cf73d4a2f3bac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7da723d3a5dafe530c1cf73d4a2f3bac = MAKE_FUNCTION_FRAME(codeobj_7da723d3a5dafe530c1cf73d4a2f3bac, module_h11$_readers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7da723d3a5dafe530c1cf73d4a2f3bac->m_type_description == NULL);
    frame_7da723d3a5dafe530c1cf73d4a2f3bac = cache_frame_7da723d3a5dafe530c1cf73d4a2f3bac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7da723d3a5dafe530c1cf73d4a2f3bac);
    assert(Py_REFCNT(frame_7da723d3a5dafe530c1cf73d4a2f3bac) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7da723d3a5dafe530c1cf73d4a2f3bac->m_frame.f_lineno = 218;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
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
        exception_tb = MAKE_TRACEBACK(frame_7da723d3a5dafe530c1cf73d4a2f3bac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7da723d3a5dafe530c1cf73d4a2f3bac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7da723d3a5dafe530c1cf73d4a2f3bac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7da723d3a5dafe530c1cf73d4a2f3bac,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7da723d3a5dafe530c1cf73d4a2f3bac == cache_frame_7da723d3a5dafe530c1cf73d4a2f3bac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7da723d3a5dafe530c1cf73d4a2f3bac);
        cache_frame_7da723d3a5dafe530c1cf73d4a2f3bac = NULL;
    }

    assertFrameObject(frame_7da723d3a5dafe530c1cf73d4a2f3bac);

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


static PyObject *impl_h11$_readers$$$function__13_expect_nothing(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_buf = python_pars[0];
    struct Nuitka_FrameObject *frame_024d3faef838c50d8b6b3423fcee840d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_024d3faef838c50d8b6b3423fcee840d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_024d3faef838c50d8b6b3423fcee840d)) {
        Py_XDECREF(cache_frame_024d3faef838c50d8b6b3423fcee840d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_024d3faef838c50d8b6b3423fcee840d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_024d3faef838c50d8b6b3423fcee840d = MAKE_FUNCTION_FRAME(codeobj_024d3faef838c50d8b6b3423fcee840d, module_h11$_readers, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_024d3faef838c50d8b6b3423fcee840d->m_type_description == NULL);
    frame_024d3faef838c50d8b6b3423fcee840d = cache_frame_024d3faef838c50d8b6b3423fcee840d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_024d3faef838c50d8b6b3423fcee840d);
    assert(Py_REFCNT(frame_024d3faef838c50d8b6b3423fcee840d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_buf);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_buf);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "o";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_024d3faef838c50d8b6b3423fcee840d->m_frame.f_lineno = 223;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[60]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 223;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_024d3faef838c50d8b6b3423fcee840d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_024d3faef838c50d8b6b3423fcee840d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_024d3faef838c50d8b6b3423fcee840d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_024d3faef838c50d8b6b3423fcee840d,
        type_description_1,
        par_buf
    );


    // Release cached frame if used for exception.
    if (frame_024d3faef838c50d8b6b3423fcee840d == cache_frame_024d3faef838c50d8b6b3423fcee840d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_024d3faef838c50d8b6b3423fcee840d);
        cache_frame_024d3faef838c50d8b6b3423fcee840d = NULL;
    }

    assertFrameObject(frame_024d3faef838c50d8b6b3423fcee840d);

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
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_buf);
    Py_DECREF(par_buf);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__10_read_eof(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__10_read_eof,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_161117bcc58386807f04a137d67b9b11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__11___call__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__11___call__,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_6f7bb6b6935b07620d9fecc6a5288feb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__12_read_eof(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__12_read_eof,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_7da723d3a5dafe530c1cf73d4a2f3bac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__13_expect_nothing(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__13_expect_nothing,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_024d3faef838c50d8b6b3423fcee840d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__1__obsolete_line_fold(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__1__obsolete_line_fold,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c09bd3b461c38925b2820b67c200a6cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__2__decode_header_lines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__2__decode_header_lines,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_219c8b660049eb9d82766e7bef2ab2c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__3_maybe_read_from_IDLE_client(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__3_maybe_read_from_IDLE_client,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5ee7e5a8e370af5aa531bea6d445f87e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8ed426b1cedd51699fa0eed127316bb6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__5___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__5___init__,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_0d43aba68fb4b33ef25c75dbbab881af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__6___call__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__6___call__,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_cb29a00f36d256eb96cd4a0b68a7f0ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__7_read_eof(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__7_read_eof,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_4880ca5c0d5163d3e08bbc637793a494,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__8___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__8___init__,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_f2b018d64fca1e1a4c35254d1d27a564,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_h11$_readers$$$function__9___call__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_h11$_readers$$$function__9___call__,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_500d06b654b1036e6ba5a19582cc71d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_h11$_readers,
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

function_impl_code functable_h11$_readers[] = {
    impl_h11$_readers$$$function__1__obsolete_line_fold,
    impl_h11$_readers$$$function__2__decode_header_lines,
    impl_h11$_readers$$$function__3_maybe_read_from_IDLE_client,
    impl_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server,
    impl_h11$_readers$$$function__5___init__,
    impl_h11$_readers$$$function__6___call__,
    impl_h11$_readers$$$function__7_read_eof,
    impl_h11$_readers$$$function__8___init__,
    impl_h11$_readers$$$function__9___call__,
    impl_h11$_readers$$$function__10_read_eof,
    impl_h11$_readers$$$function__11___call__,
    impl_h11$_readers$$$function__12_read_eof,
    impl_h11$_readers$$$function__13_expect_nothing,
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

    function_impl_code *current = functable_h11$_readers;
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

    if (offset > sizeof(functable_h11$_readers) || offset < 0) {
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
        functable_h11$_readers[offset],
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
        module_h11$_readers,
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
PyObject *modulecode_h11$_readers(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("h11._readers");

    // Store the module for future use.
    module_h11$_readers = module;

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
        PRINT_STRING("h11._readers: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("h11._readers: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("h11._readers: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inith11$_readers\n");

    moduledict_h11$_readers = MODULE_DICT(module_h11$_readers);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_h11$_readers,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_h11$_readers,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[150]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_h11$_readers,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_readers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_readers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_h11$_readers);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_h11$_readers);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_94ddc5d70195954117410393fc556928;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    int tmp_res;
    PyObject *locals_h11$_readers$$$class__1_ContentLengthReader_122 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_8f06b89529d5317e0d6ce0ba4c802d3d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_h11$_readers$$$class__2_ChunkedReader_148 = NULL;
    struct Nuitka_FrameObject *frame_eb2ae3145a617b880bf4932d8c8b891f_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_h11$_readers$$$class__3_Http10Reader_210 = NULL;
    struct Nuitka_FrameObject *frame_43ac0cdcce7796983ec47fac75fa2ffb_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_2);
    }
    frame_94ddc5d70195954117410393fc556928 = MAKE_MODULE_FRAME(codeobj_94ddc5d70195954117410393fc556928, module_h11$_readers);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_94ddc5d70195954117410393fc556928);
    assert(Py_REFCNT(frame_94ddc5d70195954117410393fc556928) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[62];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[65], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[66], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[69];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_h11$_readers;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[20];
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 19;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_5);
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
                (PyObject *)moduledict_h11$_readers,
                mod_consts[70],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[70]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[71],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[71]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[72],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[72]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[73],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[73]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[74],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[74]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[75],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[75]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[76],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[76]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[77],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[77]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[78],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[78]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[79];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_h11$_readers;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[80];
        tmp_level_value_2 = mod_consts[81];
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 22;
        tmp_assign_source_16 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[82],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[82]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[83],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[83]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[84],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[84]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[85],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[85]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_20);
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[86];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_h11$_readers;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[87];
        tmp_level_value_3 = mod_consts[81];
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 23;
        tmp_assign_source_21 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[42],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[42]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[40],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[40]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[35],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[35]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[22],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[22]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[36],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[36]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_26);
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
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[88];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_h11$_readers;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[89];
        tmp_level_value_4 = mod_consts[81];
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 24;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[90],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[90]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[91];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_h11$_readers;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[92];
        tmp_level_value_5 = mod_consts[81];
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 25;
        tmp_assign_source_28 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_20 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[93],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_20, mod_consts[93]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_21 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[94],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_21, mod_consts[94]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_22 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[95],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_22, mod_consts[95]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_23 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[96],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_23, mod_consts[96]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_24 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[97],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_24, mod_consts[97]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_25 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[98],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_25, mod_consts[98]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_26 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[99],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_26, mod_consts[99]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_27 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[100],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_27, mod_consts[100]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_36);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[101];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_h11$_readers;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[102];
        tmp_level_value_6 = mod_consts[81];
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 35;
        tmp_assign_source_37 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_28 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[4],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_28, mod_consts[4]);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_29 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[44],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_29, mod_consts[44]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_30 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[103],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_30, mod_consts[103]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_31 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_h11$_readers,
                mod_consts[9],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_31, mod_consts[9]);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_41);
    }
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

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_LIST1(mod_consts[104]);
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[106]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[107]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 39;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[108]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 39;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 40;
        tmp_assign_source_44 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[106],
            PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_dict_key_1 = mod_consts[0];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = (PyObject *)&PyBytes_Type;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[110];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = (PyObject *)&PyBytes_Type;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_45 = MAKE_FUNCTION_h11$_readers$$$function__1__obsolete_line_fold(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        tmp_dict_key_2 = mod_consts[0];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = (PyObject *)&PyBytes_Type;
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_5;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[110];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_2;
            }
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_5 = mod_consts[111];
            tmp_subscript_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
            if (tmp_subscript_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_46 = MAKE_FUNCTION_h11$_readers$$$function__2__decode_header_lines(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[106]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[107]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 72;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[108]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 72;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[50];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_6;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[110];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_subscript_value_6 == NULL)) {
                tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_6);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_48 = MAKE_FUNCTION_h11$_readers$$$function__3_maybe_read_from_IDLE_client(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[106]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[107]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 91;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[108]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 91;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[50];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_tuple_element_1;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[110];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 2, tmp_tuple_element_1);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_subscript_value_7);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_7);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_50 = MAKE_FUNCTION_h11$_readers$$$function__4_maybe_read_from_SEND_RESPONSE_server(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_52;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_h11$_readers$$$class__1_ContentLengthReader_122 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__1_ContentLengthReader_122, mod_consts[115], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__1_ContentLengthReader_122, mod_consts[117], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(mod_consts[118]);


            tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__5___init__(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__1_ContentLengthReader_122, mod_consts[119], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_8f06b89529d5317e0d6ce0ba4c802d3d_2 = MAKE_CLASS_FRAME(codeobj_8f06b89529d5317e0d6ce0ba4c802d3d, module_h11$_readers, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8f06b89529d5317e0d6ce0ba4c802d3d_2);
        assert(Py_REFCNT(frame_8f06b89529d5317e0d6ce0ba4c802d3d_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_dict_key_5 = mod_consts[50];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_tuple_element_2;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[110];
                tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[78]);

                if (unlikely(tmp_expression_value_14 == NULL)) {
                    tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                }

                if (tmp_expression_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[42]);

                if (unlikely(tmp_tuple_element_2 == NULL)) {
                    tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                }

                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_2);
                tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[40]);

                if (unlikely(tmp_tuple_element_2 == NULL)) {
                    tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                }

                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_2);
                tmp_tuple_element_2 = Py_None;
                PyTuple_SET_ITEM0(tmp_subscript_value_8, 2, tmp_tuple_element_2);
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_2:;
                Py_DECREF(tmp_subscript_value_8);
                goto dict_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_8);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__6___call__(tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__1_ContentLengthReader_122, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_dict_key_6 = mod_consts[110];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__7_read_eof(tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__1_ContentLengthReader_122, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8f06b89529d5317e0d6ce0ba4c802d3d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8f06b89529d5317e0d6ce0ba4c802d3d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8f06b89529d5317e0d6ce0ba4c802d3d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8f06b89529d5317e0d6ce0ba4c802d3d_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_8f06b89529d5317e0d6ce0ba4c802d3d_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_8;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[116];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[125];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_h11$_readers$$$class__1_ContentLengthReader_122;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 122;
            tmp_assign_source_54 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto try_except_handler_8;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_54;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_53 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_53);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_h11$_readers$$$class__1_ContentLengthReader_122);
        locals_h11$_readers$$$class__1_ContentLengthReader_122 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_h11$_readers$$$class__1_ContentLengthReader_122);
        locals_h11$_readers$$$class__1_ContentLengthReader_122 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 122;
        goto try_except_handler_6;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_53);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[106]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[107]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 145;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[108]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 145;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_57;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_h11$_readers$$$class__2_ChunkedReader_148 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__2_ChunkedReader_148, mod_consts[115], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[126];
        tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__2_ChunkedReader_148, mod_consts[117], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[127]);


            tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__8___init__(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__2_ChunkedReader_148, mod_consts[119], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_eb2ae3145a617b880bf4932d8c8b891f_3 = MAKE_CLASS_FRAME(codeobj_eb2ae3145a617b880bf4932d8c8b891f, module_h11$_readers, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_eb2ae3145a617b880bf4932d8c8b891f_3);
        assert(Py_REFCNT(frame_eb2ae3145a617b880bf4932d8c8b891f_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_dict_key_7 = mod_consts[50];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_tuple_element_4;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[110];
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[78]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                }

                if (tmp_expression_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[42]);

                if (unlikely(tmp_tuple_element_4 == NULL)) {
                    tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                }

                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[40]);

                if (unlikely(tmp_tuple_element_4 == NULL)) {
                    tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                }

                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_subscript_value_9, 2, tmp_tuple_element_4);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_subscript_value_9);
                goto dict_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_9);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;


            tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__9___call__(tmp_annotations_9);

            tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__2_ChunkedReader_148, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[110];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__10_read_eof(tmp_annotations_10);

            tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__2_ChunkedReader_148, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_eb2ae3145a617b880bf4932d8c8b891f_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_eb2ae3145a617b880bf4932d8c8b891f_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_eb2ae3145a617b880bf4932d8c8b891f_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_eb2ae3145a617b880bf4932d8c8b891f_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_eb2ae3145a617b880bf4932d8c8b891f_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_11;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_10 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[126];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[125];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_h11$_readers$$$class__2_ChunkedReader_148;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 148;
            tmp_assign_source_59 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto try_except_handler_11;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_59;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_58 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_58);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_h11$_readers$$$class__2_ChunkedReader_148);
        locals_h11$_readers$$$class__2_ChunkedReader_148 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_h11$_readers$$$class__2_ChunkedReader_148);
        locals_h11$_readers$$$class__2_ChunkedReader_148 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 148;
        goto try_except_handler_9;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_58);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_61;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_h11$_readers$$$class__3_Http10Reader_210 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__3_Http10Reader_210, mod_consts[115], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[131];
        tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__3_Http10Reader_210, mod_consts[117], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_43ac0cdcce7796983ec47fac75fa2ffb_4 = MAKE_CLASS_FRAME(codeobj_43ac0cdcce7796983ec47fac75fa2ffb, module_h11$_readers, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_43ac0cdcce7796983ec47fac75fa2ffb_4);
        assert(Py_REFCNT(frame_43ac0cdcce7796983ec47fac75fa2ffb_4) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_dict_key_9 = mod_consts[50];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_10;
                tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[110];
                tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[75]);

                if (unlikely(tmp_expression_value_18 == NULL)) {
                    tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                }

                if (tmp_expression_value_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[42]);

                if (unlikely(tmp_subscript_value_10 == NULL)) {
                    tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                }

                if (tmp_subscript_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_10);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_11);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;


            tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__11___call__(tmp_annotations_11);

            tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__3_Http10Reader_210, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_dict_key_10 = mod_consts[110];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_h11$_readers$$$function__12_read_eof(tmp_annotations_12);

            tmp_res = PyDict_SetItem(locals_h11$_readers$$$class__3_Http10Reader_210, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_43ac0cdcce7796983ec47fac75fa2ffb_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_43ac0cdcce7796983ec47fac75fa2ffb_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_43ac0cdcce7796983ec47fac75fa2ffb_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_43ac0cdcce7796983ec47fac75fa2ffb_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_43ac0cdcce7796983ec47fac75fa2ffb_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_14;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_11 = (PyObject *)&PyType_Type;
            tmp_tuple_element_6 = mod_consts[131];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[125];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_h11$_readers$$$class__3_Http10Reader_210;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
            frame_94ddc5d70195954117410393fc556928->m_frame.f_lineno = 210;
            tmp_assign_source_63 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto try_except_handler_14;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_63;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_62 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_62);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_h11$_readers$$$class__3_Http10Reader_210);
        locals_h11$_readers$$$class__3_Http10Reader_210 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_h11$_readers$$$class__3_Http10Reader_210);
        locals_h11$_readers$$$class__3_Http10Reader_210 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 210;
        goto try_except_handler_12;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_62);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_dict_key_11 = mod_consts[50];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[110];
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));


        tmp_assign_source_64 = MAKE_FUNCTION_h11$_readers$$$function__13_expect_nothing(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_13;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_subscript_value_13 == NULL)) {
            tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_subscript_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_13);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_15;
            PyTuple_SET_ITEM(tmp_subscript_value_12, 0, tmp_tuple_element_8);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_4;
            }
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[103]);

            if (unlikely(tmp_subscript_value_15 == NULL)) {
                tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
            }

            if (tmp_subscript_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_15);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_16;
                PyTuple_SET_ITEM(tmp_subscript_value_14, 0, tmp_tuple_element_9);
                tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[77]);

                if (unlikely(tmp_expression_value_24 == NULL)) {
                    tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                }

                if (tmp_expression_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 228;

                    goto tuple_build_exception_5;
                }
                tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[103]);

                if (unlikely(tmp_subscript_value_16 == NULL)) {
                    tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                }

                if (tmp_subscript_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 228;

                    goto tuple_build_exception_5;
                }
                tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_16);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 228;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_subscript_value_14);
            goto tuple_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_14);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_subscript_value_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_12);
        Py_DECREF(tmp_subscript_value_12);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_tuple_element_11;
            PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_7);
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto tuple_build_exception_6;
            }
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_11 = Py_Ellipsis;
            tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_18, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_18, 1, tmp_tuple_element_11);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_subscript_value_18);
            goto tuple_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_18);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto tuple_build_exception_6;
            }
            tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_tuple_element_12;
                PyTuple_SET_ITEM(tmp_subscript_value_17, 0, tmp_tuple_element_10);
                tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[72]);

                if (unlikely(tmp_expression_value_27 == NULL)) {
                    tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                }

                if (tmp_expression_value_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 229;

                    goto tuple_build_exception_8;
                }
                tmp_tuple_element_12 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_28;
                    PyObject *tmp_subscript_value_20;
                    PyObject *tmp_tuple_element_13;
                    PyTuple_SET_ITEM0(tmp_subscript_value_19, 0, tmp_tuple_element_12);
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 229;

                        goto tuple_build_exception_9;
                    }
                    tmp_tuple_element_13 = Py_Ellipsis;
                    tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM0(tmp_subscript_value_20, 0, tmp_tuple_element_13);
                    tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_tuple_element_13 == NULL)) {
                        tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_tuple_element_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 229;

                        goto tuple_build_exception_10;
                    }
                    PyTuple_SET_ITEM0(tmp_subscript_value_20, 1, tmp_tuple_element_13);
                    goto tuple_build_noexception_7;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_10:;
                    Py_DECREF(tmp_subscript_value_20);
                    goto tuple_build_exception_9;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_7:;
                    tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_20);
                    Py_DECREF(tmp_subscript_value_20);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 229;

                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_19, 1, tmp_tuple_element_12);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_subscript_value_19);
                goto tuple_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_19);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 229;

                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_17, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_subscript_value_17);
            goto tuple_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_17);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_subscript_value_11);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_assign_source_65 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_tuple_element_14;
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_12 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_14);
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto tuple_build_exception_11;
        }
        PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_14);
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_dict_key_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_12);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_66 = _PyDict_NewPresized( 10 );
        {
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_key_12);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_8;
            }
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_8;
            }
            tmp_dict_key_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[96]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_15);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_dict_key_12);
            goto dict_build_exception_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_12);

                exception_lineno = 234;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_key_12);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_8;
            }
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto dict_build_exception_8;
            }
            tmp_dict_key_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_16);
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_dict_key_12);
            goto dict_build_exception_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_12);

                exception_lineno = 235;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_key_12);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto dict_build_exception_8;
            }
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[93]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto dict_build_exception_8;
            }
            tmp_dict_key_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[95]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_17);
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_dict_key_12);
            goto dict_build_exception_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_12);

                exception_lineno = 236;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_key_12);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto dict_build_exception_8;
            }
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[93]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto dict_build_exception_8;
            }
            tmp_dict_key_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_18);
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_dict_key_12);
            goto dict_build_exception_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_12);

                exception_lineno = 237;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_key_12);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto dict_build_exception_8;
            }
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[93]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto dict_build_exception_8;
            }
            tmp_dict_key_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[94]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_19);
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_dict_key_12);
            goto dict_build_exception_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_12);

                exception_lineno = 238;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_key_12);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;

                goto dict_build_exception_8;
            }
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto dict_build_exception_8;
            }
            tmp_dict_key_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[95]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_20);
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_dict_key_12);
            goto dict_build_exception_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_12);

                exception_lineno = 239;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_key_12);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto dict_build_exception_8;
            }
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_8;
            }
            tmp_dict_key_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_21);
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_dict_key_12);
            goto dict_build_exception_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_12);

                exception_lineno = 240;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_key_12);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_8;
            }
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_8;
            }
            tmp_dict_key_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_key_12, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[94]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM0(tmp_dict_key_12, 1, tmp_tuple_element_22);
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_dict_key_12);
            goto dict_build_exception_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_12);

                exception_lineno = 241;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_key_12);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_8;
            }
            tmp_dict_key_12 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_dict_key_12 == NULL)) {
                tmp_dict_key_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
            }

            if (tmp_dict_key_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_8;
            }
            tmp_dict_key_13 = mod_consts[136];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[126]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_8;
            }
            tmp_dict_value_12 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_dict_value_12, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[137];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_12, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[138];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[131]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_12, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_dict_value_12);
            goto dict_build_exception_8;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_8;
            }
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_assign_source_66);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;
        UPDATE_STRING_DICT1(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_66);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        assert(!(tmp_ass_subvalue_1 == NULL));
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[104];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_94ddc5d70195954117410393fc556928, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94ddc5d70195954117410393fc556928->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94ddc5d70195954117410393fc556928, exception_lineno);
    }



    assertFrameObject(frame_94ddc5d70195954117410393fc556928);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("h11._readers", false);

    Py_INCREF(module_h11$_readers);
    return module_h11$_readers;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_readers, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("h11$_readers", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
