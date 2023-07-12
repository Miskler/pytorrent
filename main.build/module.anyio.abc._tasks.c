/* Generated code for Python module 'anyio.abc._tasks'
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

/* The "module_anyio$abc$_tasks" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$abc$_tasks;
PyDictObject *moduledict_anyio$abc$_tasks;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[85];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[85];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("anyio.abc._tasks"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 85; i++) {
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
void checkModuleConstants_anyio$abc$_tasks(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 85; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9b68f5a918152c9f6ecfaaf24cf35296;
static PyCodeObject *codeobj_b86a0a80f0c1b703671605b86bb9a9ef;
static PyCodeObject *codeobj_2047ab3f067727cd16ef812c327805be;
static PyCodeObject *codeobj_1e62b176bc6364fcc0e11884e82e3e9c;
static PyCodeObject *codeobj_1778a0bc80779dbb7f5f05f90258fc62;
static PyCodeObject *codeobj_dc2cc9a9583b721510a4aad9b95a4fc2;
static PyCodeObject *codeobj_d54c2ce6b2e2dfcf75a3c295f8de815a;
static PyCodeObject *codeobj_f1601b375c9dfb29830faebd17c4fabe;
static PyCodeObject *codeobj_e7dc1ec657236c12497b63dfd376cf16;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[21]; CHECK_OBJECT(module_filename_obj);
    codeobj_9b68f5a918152c9f6ecfaaf24cf35296 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[78], mod_consts[78], NULL, NULL, 0, 0, 0);
    codeobj_b86a0a80f0c1b703671605b86bb9a9ef = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[79], NULL, 0, 0, 0);
    codeobj_2047ab3f067727cd16ef812c327805be = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[79], NULL, 0, 0, 0);
    codeobj_1e62b176bc6364fcc0e11884e82e3e9c = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_COROUTINE | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[80], NULL, 1, 0, 0);
    codeobj_1778a0bc80779dbb7f5f05f90258fc62 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_COROUTINE | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[81], NULL, 4, 0, 0);
    codeobj_dc2cc9a9583b721510a4aad9b95a4fc2 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[82], NULL, 2, 1, 0);
    codeobj_d54c2ce6b2e2dfcf75a3c295f8de815a = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_COROUTINE | CO_VARARGS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[82], NULL, 2, 1, 0);
    codeobj_f1601b375c9dfb29830faebd17c4fabe = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_VARARGS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[82], NULL, 2, 1, 0);
    codeobj_e7dc1ec657236c12497b63dfd376cf16 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[83], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_anyio$abc$_tasks$$$function__2_spawn$$$coroutine__1_spawn(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_tasks$$$function__4_start$$$coroutine__1_start();


static PyObject *MAKE_COROUTINE_anyio$abc$_tasks$$$function__5___aenter__$$$coroutine__1___aenter__();


static PyObject *MAKE_COROUTINE_anyio$abc$_tasks$$$function__6___aexit__$$$coroutine__1___aexit__();


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_pos_keywords_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anyio$abc$_tasks$$$function__1_started(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_tasks$$$function__2_spawn(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_tasks$$$function__3_start_soon(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_tasks$$$function__4_start(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_tasks$$$function__5___aenter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_tasks$$$function__6___aexit__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$abc$_tasks$$$function__2_spawn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[3]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = par_args;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_func;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_name;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_self;
        Py_INCREF(tmp_closure_1[3]);

        tmp_return_value = MAKE_COROUTINE_anyio$abc$_tasks$$$function__2_spawn$$$coroutine__1_spawn(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$abc$_tasks$$$function__2_spawn$$$coroutine__1_spawn_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_tasks$$$function__2_spawn$$$coroutine__1_spawn_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$abc$_tasks$$$function__2_spawn$$$coroutine__1_spawn_locals *coroutine_heap = (struct anyio$abc$_tasks$$$function__2_spawn$$$coroutine__1_spawn_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_dc2cc9a9583b721510a4aad9b95a4fc2, module_anyio$abc$_tasks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(coroutine);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 51;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[2];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 53;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 51;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[4]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[6]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[7]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_dict_key_1 = mod_consts[8];
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[8]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_dircall_arg4_1 = _PyDict_NewPresized( 1 );
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_call_result_2 = impl___main__$$$function__5_complex_call_helper_pos_keywords_star_list(dir_call_args);
        }
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[3],
            coroutine->m_closure[1],
            coroutine->m_closure[2],
            coroutine->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_tasks$$$function__2_spawn$$$coroutine__1_spawn(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$abc$_tasks$$$function__2_spawn$$$coroutine__1_spawn_context,
        module_anyio$abc$_tasks,
        mod_consts[9],
        mod_consts[10],
        codeobj_dc2cc9a9583b721510a4aad9b95a4fc2,
        closure,
        4,
#if 1
        sizeof(struct anyio$abc$_tasks$$$function__2_spawn$$$coroutine__1_spawn_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_tasks$$$function__4_start(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_tasks$$$function__4_start$$$coroutine__1_start();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$abc$_tasks$$$function__4_start$$$coroutine__1_start_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_tasks$$$function__4_start$$$coroutine__1_start_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$abc$_tasks$$$function__4_start$$$coroutine__1_start_locals *coroutine_heap = (struct anyio$abc$_tasks$$$function__4_start$$$coroutine__1_start_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_tasks$$$function__4_start$$$coroutine__1_start() {
    return Nuitka_Coroutine_New(
        anyio$abc$_tasks$$$function__4_start$$$coroutine__1_start_context,
        module_anyio$abc$_tasks,
        mod_consts[12],
        mod_consts[13],
        codeobj_d54c2ce6b2e2dfcf75a3c295f8de815a,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_tasks$$$function__4_start$$$coroutine__1_start_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_tasks$$$function__5___aenter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_tasks$$$function__5___aenter__$$$coroutine__1___aenter__();

    goto function_return_exit;

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
struct anyio$abc$_tasks$$$function__5___aenter__$$$coroutine__1___aenter___locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_tasks$$$function__5___aenter__$$$coroutine__1___aenter___context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$abc$_tasks$$$function__5___aenter__$$$coroutine__1___aenter___locals *coroutine_heap = (struct anyio$abc$_tasks$$$function__5___aenter__$$$coroutine__1___aenter___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_tasks$$$function__5___aenter__$$$coroutine__1___aenter__() {
    return Nuitka_Coroutine_New(
        anyio$abc$_tasks$$$function__5___aenter__$$$coroutine__1___aenter___context,
        module_anyio$abc$_tasks,
        mod_consts[15],
        mod_consts[16],
        codeobj_1e62b176bc6364fcc0e11884e82e3e9c,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_tasks$$$function__5___aenter__$$$coroutine__1___aenter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_tasks$$$function__6___aexit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_val = python_pars[2];
    PyObject *par_exc_tb = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_tasks$$$function__6___aexit__$$$coroutine__1___aexit__();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_val);
    Py_DECREF(par_exc_val);
    CHECK_OBJECT(par_exc_tb);
    Py_DECREF(par_exc_tb);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$abc$_tasks$$$function__6___aexit__$$$coroutine__1___aexit___locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_tasks$$$function__6___aexit__$$$coroutine__1___aexit___context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$abc$_tasks$$$function__6___aexit__$$$coroutine__1___aexit___locals *coroutine_heap = (struct anyio$abc$_tasks$$$function__6___aexit__$$$coroutine__1___aexit___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_tasks$$$function__6___aexit__$$$coroutine__1___aexit__() {
    return Nuitka_Coroutine_New(
        anyio$abc$_tasks$$$function__6___aexit__$$$coroutine__1___aexit___context,
        module_anyio$abc$_tasks,
        mod_consts[18],
        mod_consts[19],
        codeobj_1778a0bc80779dbb7f5f05f90258fc62,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_tasks$$$function__6___aexit__$$$coroutine__1___aexit___locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anyio$abc$_tasks$$$function__1_started(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[61],
#endif
        codeobj_e7dc1ec657236c12497b63dfd376cf16,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_tasks,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_tasks$$$function__2_spawn(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_tasks$$$function__2_spawn,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[10],
#endif
        codeobj_dc2cc9a9583b721510a4aad9b95a4fc2,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$abc$_tasks,
        mod_consts[0],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_tasks$$$function__3_start_soon(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_f1601b375c9dfb29830faebd17c4fabe,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$abc$_tasks,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_tasks$$$function__4_start(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_tasks$$$function__4_start,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[13],
#endif
        codeobj_d54c2ce6b2e2dfcf75a3c295f8de815a,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$abc$_tasks,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_tasks$$$function__5___aenter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_tasks$$$function__5___aenter__,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[16],
#endif
        codeobj_1e62b176bc6364fcc0e11884e82e3e9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_tasks,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_tasks$$$function__6___aexit__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_tasks$$$function__6___aexit__,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[19],
#endif
        codeobj_1778a0bc80779dbb7f5f05f90258fc62,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_tasks,
        mod_consts[17],
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

function_impl_code functable_anyio$abc$_tasks[] = {
    NULL,
    impl_anyio$abc$_tasks$$$function__2_spawn,
    NULL,
    impl_anyio$abc$_tasks$$$function__4_start,
    impl_anyio$abc$_tasks$$$function__5___aenter__,
    impl_anyio$abc$_tasks$$$function__6___aexit__,
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

    function_impl_code *current = functable_anyio$abc$_tasks;
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

    if (offset > sizeof(functable_anyio$abc$_tasks) || offset < 0) {
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
        functable_anyio$abc$_tasks[offset],
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
        module_anyio$abc$_tasks,
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
PyObject *modulecode_anyio$abc$_tasks(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio.abc._tasks");

    // Store the module for future use.
    module_anyio$abc$_tasks = module;

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
        PRINT_STRING("anyio.abc._tasks: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio.abc._tasks: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio.abc._tasks: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initanyio$abc$_tasks\n");

    moduledict_anyio$abc$_tasks = MODULE_DICT(module_anyio$abc$_tasks);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$abc$_tasks,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$abc$_tasks,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[84]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$abc$_tasks,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc$_tasks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc$_tasks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$abc$_tasks);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_anyio$abc$_tasks);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_9b68f5a918152c9f6ecfaaf24cf35296;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_anyio$abc$_tasks$$$class__1_TaskStatus_13 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_2047ab3f067727cd16ef812c327805be_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_anyio$abc$_tasks$$$class__2_TaskGroup_23 = NULL;
    struct Nuitka_FrameObject *frame_b86a0a80f0c1b703671605b86bb9a9ef_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_2);
    }
    frame_9b68f5a918152c9f6ecfaaf24cf35296 = MAKE_MODULE_FRAME(codeobj_9b68f5a918152c9f6ecfaaf24cf35296, module_anyio$abc$_tasks);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b68f5a918152c9f6ecfaaf24cf35296);
    assert(Py_REFCNT(frame_9b68f5a918152c9f6ecfaaf24cf35296) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[21];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[25], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[28];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$abc$_tasks;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[29];
        tmp_level_value_1 = mod_consts[30];
        frame_9b68f5a918152c9f6ecfaaf24cf35296->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_anyio$abc$_tasks,
                mod_consts[31],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[31]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_anyio$abc$_tasks,
                mod_consts[32],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[32]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_7);
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
        PyObject *tmp_import_name_from_3;
        tmp_import_name_from_3 = IMPORT_HARD_TYPES();
        assert(!(tmp_import_name_from_3 == NULL));
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_anyio$abc$_tasks,
                mod_consts[33],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[33]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_9 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_9);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_anyio$abc$_tasks,
                mod_consts[34],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[34]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_anyio$abc$_tasks,
                mod_consts[35],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[35]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_anyio$abc$_tasks,
                mod_consts[36],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[36]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_anyio$abc$_tasks,
                mod_consts[37],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[37]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_anyio$abc$_tasks,
                mod_consts[38],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[38]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_anyio$abc$_tasks,
                mod_consts[39],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[39]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[40];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$abc$_tasks;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[41];
        tmp_level_value_2 = mod_consts[30];
        frame_9b68f5a918152c9f6ecfaaf24cf35296->m_frame.f_lineno = 5;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_anyio$abc$_tasks,
                mod_consts[1],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[1]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        frame_9b68f5a918152c9f6ecfaaf24cf35296->m_frame.f_lineno = 10;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[42]);

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_17);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[44];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        tmp_assign_source_18 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        tmp_key_value_1 = mod_consts[44];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[44];
        tmp_assign_source_19 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_19 == NULL) {
            tmp_assign_source_19 = Py_None;
        }
        assert(!(tmp_assign_source_19 == NULL));
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_19 = (PyObject *)&PyType_Type;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        Py_INCREF(tmp_assign_source_19);
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[44];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[44];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 13;

        goto try_except_handler_3;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_1 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_1, mod_consts[45]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[45]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        tmp_args_value_1 = mod_consts[46];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_9b68f5a918152c9f6ecfaaf24cf35296->m_frame.f_lineno = 13;
        tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_3 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[47]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_3;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[49];
        tmp_getattr_default_1 = mod_consts[50];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_value_4 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_4 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[49]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 13;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_anyio$abc$_tasks$$$class__1_TaskStatus_13 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_tasks$$$class__1_TaskStatus_13, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_tasks$$$class__1_TaskStatus_13, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_5;
        }
        frame_2047ab3f067727cd16ef812c327805be_2 = MAKE_CLASS_FRAME(codeobj_2047ab3f067727cd16ef812c327805be, module_anyio$abc$_tasks, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_2047ab3f067727cd16ef812c327805be_2);
        assert(Py_REFCNT(frame_2047ab3f067727cd16ef812c327805be_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_called_value_3 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__1_TaskStatus_13, mod_consts[32]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[32]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 14;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_1 = mod_consts[55];
            tmp_dict_key_2 = mod_consts[56];
            tmp_dict_value_2 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__1_TaskStatus_13, mod_consts[57]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[58];
            tmp_dict_value_2 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_1);


            tmp_args_element_value_1 = MAKE_FUNCTION_anyio$abc$_tasks$$$function__1_started(tmp_defaults_1, tmp_annotations_1);

            frame_2047ab3f067727cd16ef812c327805be_2->m_frame.f_lineno = 14;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_tasks$$$class__1_TaskStatus_13, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2047ab3f067727cd16ef812c327805be_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2047ab3f067727cd16ef812c327805be_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2047ab3f067727cd16ef812c327805be_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2047ab3f067727cd16ef812c327805be_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_2047ab3f067727cd16ef812c327805be_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[53];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[62];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_anyio$abc$_tasks$$$class__1_TaskStatus_13;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_9b68f5a918152c9f6ecfaaf24cf35296->m_frame.f_lineno = 13;
            tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_anyio$abc$_tasks$$$class__1_TaskStatus_13);
        locals_anyio$abc$_tasks$$$class__1_TaskStatus_13 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_anyio$abc$_tasks$$$class__1_TaskStatus_13);
        locals_anyio$abc$_tasks$$$class__1_TaskStatus_13 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 13;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_22);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[44];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        tmp_assign_source_24 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        bool tmp_condition_result_5;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        tmp_key_value_4 = mod_consts[44];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[44];
        tmp_assign_source_25 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_assign_source_25 == NULL) {
            tmp_assign_source_25 = Py_None;
        }
        assert(!(tmp_assign_source_25 == NULL));
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_25 = (PyObject *)&PyType_Type;
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        Py_INCREF(tmp_assign_source_25);
        tmp_class_creation_2__metaclass = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[44];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[44];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 23;

        goto try_except_handler_6;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_5 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[45]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_3;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_6 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[45]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        tmp_args_value_3 = mod_consts[63];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_9b68f5a918152c9f6ecfaaf24cf35296->m_frame.f_lineno = 23;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_7 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[47]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[49];
        tmp_getattr_default_2 = mod_consts[50];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_8 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[49]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_27;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_anyio$abc$_tasks$$$class__2_TaskGroup_23 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[20], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_8;
        }
        frame_b86a0a80f0c1b703671605b86bb9a9ef_3 = MAKE_CLASS_FRAME(codeobj_b86a0a80f0c1b703671605b86bb9a9ef, module_anyio$abc$_tasks, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b86a0a80f0c1b703671605b86bb9a9ef_3);
        assert(Py_REFCNT(frame_b86a0a80f0c1b703671605b86bb9a9ef_3) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = mod_consts[67];
            tmp_ass_subscribed_1 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[66]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[66]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_1 = mod_consts[68];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_tuple_element_4;
            tmp_kw_defaults_1 = DICT_COPY(mod_consts[69]);
            tmp_dict_key_4 = mod_consts[6];
            tmp_expression_value_9 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[35]);

            if (tmp_expression_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_expression_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_1);

                        exception_lineno = 35;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_4 = Py_Ellipsis;
            tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_2;
                PyObject *tmp_tuple_element_5;
                PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_4);
                tmp_expression_value_10 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[36]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 35;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_tuple_element_5 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[34]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_10);

                            exception_lineno = 35;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[34]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 35;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[34]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 35;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_2, 2, tmp_tuple_element_5);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_subscript_value_2);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_2);
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_subscript_value_2);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_kw_defaults_1);
            Py_DECREF(tmp_expression_value_9);
            Py_DECREF(tmp_subscript_value_1);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_9);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_1);

                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[8];
            tmp_dict_value_4 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[57]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[7];
            tmp_dict_value_4 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[57]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[58];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_tasks$$$function__2_spawn(tmp_kw_defaults_1, tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_kw_defaults_2;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_tuple_element_6;
            tmp_called_value_6 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[32]);

            if (tmp_called_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[32]);

                    if (unlikely(tmp_called_value_6 == NULL)) {
                        tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                    }

                    if (tmp_called_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 57;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_kw_defaults_2 = DICT_COPY(mod_consts[69]);
            tmp_dict_key_5 = mod_consts[6];
            tmp_expression_value_11 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[35]);

            if (tmp_expression_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_expression_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);
                        Py_DECREF(tmp_kw_defaults_2);

                        exception_lineno = 60;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_6 = Py_Ellipsis;
            tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_tuple_element_7;
                PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_6);
                tmp_expression_value_12 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[36]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 60;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_tuple_element_7 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[34]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_12);

                            exception_lineno = 60;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[34]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 60;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[34]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 60;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_4, 2, tmp_tuple_element_7);
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_4);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_defaults_2);
            Py_DECREF(tmp_expression_value_11);
            Py_DECREF(tmp_subscript_value_3);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_11);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_kw_defaults_2);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[8];
            tmp_dict_value_5 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[57]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[7];
            tmp_dict_value_5 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[57]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[58];
            tmp_dict_value_5 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_anyio$abc$_tasks$$$function__3_start_soon(tmp_kw_defaults_2, tmp_annotations_3);

            frame_b86a0a80f0c1b703671605b86bb9a9ef_3->m_frame.f_lineno = 57;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_kw_defaults_3;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_tuple_element_8;
            tmp_called_value_7 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[32]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[32]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 74;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_kw_defaults_3 = DICT_COPY(mod_consts[69]);
            tmp_dict_key_6 = mod_consts[6];
            tmp_expression_value_13 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[35]);

            if (tmp_expression_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);
                        Py_DECREF(tmp_kw_defaults_3);

                        exception_lineno = 77;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_8 = Py_Ellipsis;
            tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_tuple_element_9;
                PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_8);
                tmp_expression_value_14 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[36]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 77;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_tuple_element_9 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[34]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_14);

                            exception_lineno = 77;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[34]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 77;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[34]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[34]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 77;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_6, 2, tmp_tuple_element_9);
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_6);
                goto tuple_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_defaults_3);
            Py_DECREF(tmp_expression_value_13);
            Py_DECREF(tmp_subscript_value_5);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_13);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_kw_defaults_3);

                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[8];
            tmp_dict_value_6 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[57]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[7];
            tmp_dict_value_6 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[57]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[58];
            tmp_dict_value_6 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[57]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_anyio$abc$_tasks$$$function__4_start(tmp_kw_defaults_3, tmp_annotations_4);

            frame_b86a0a80f0c1b703671605b86bb9a9ef_3->m_frame.f_lineno = 74;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_5;
            tmp_called_value_8 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[32]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[32]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 93;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_5 = DICT_COPY(mod_consts[72]);


            tmp_args_element_value_4 = MAKE_FUNCTION_anyio$abc$_tasks$$$function__5___aenter__(tmp_annotations_5);

            frame_b86a0a80f0c1b703671605b86bb9a9ef_3->m_frame.f_lineno = 93;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_8;
            tmp_called_value_9 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[32]);

            if (tmp_called_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[32]);

                    if (unlikely(tmp_called_value_9 == NULL)) {
                        tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                    }

                    if (tmp_called_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 97;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_key_7 = mod_consts[73];
            tmp_expression_value_15 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[37]);

            if (tmp_expression_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[37]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);

                        exception_lineno = 100;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_16 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[38]);

            if (tmp_expression_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);
                        Py_DECREF(tmp_expression_value_15);

                        exception_lineno = 100;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_8 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[74]);

            if (tmp_subscript_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_8 = PyExc_BaseException;
                    Py_INCREF(tmp_subscript_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_16);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_subscript_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);
                Py_DECREF(tmp_expression_value_15);

                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_15);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_11;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[75];
                tmp_expression_value_17 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[37]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[37]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 101;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[74]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_9 = PyExc_BaseException;
                        Py_INCREF(tmp_subscript_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[76];
                tmp_expression_value_18 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[37]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[37]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 102;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[33]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[33]);

                        if (unlikely(tmp_subscript_value_10 == NULL)) {
                            tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                        }

                        if (tmp_subscript_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_18);

                            exception_lineno = 102;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 102;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[58];
                tmp_expression_value_19 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[37]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[37]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 103;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[77]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_19);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_args_element_value_5 = MAKE_FUNCTION_anyio$abc$_tasks$$$function__6___aexit__(tmp_annotations_6);

            frame_b86a0a80f0c1b703671605b86bb9a9ef_3->m_frame.f_lineno = 97;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b86a0a80f0c1b703671605b86bb9a9ef_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b86a0a80f0c1b703671605b86bb9a9ef_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b86a0a80f0c1b703671605b86bb9a9ef_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b86a0a80f0c1b703671605b86bb9a9ef_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_b86a0a80f0c1b703671605b86bb9a9ef_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_10 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_10 = mod_consts[65];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[62];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_anyio$abc$_tasks$$$class__2_TaskGroup_23;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_9b68f5a918152c9f6ecfaaf24cf35296->m_frame.f_lineno = 23;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_28 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23);
        locals_anyio$abc$_tasks$$$class__2_TaskGroup_23 = NULL;
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

        Py_DECREF(locals_anyio$abc$_tasks$$$class__2_TaskGroup_23);
        locals_anyio$abc$_tasks$$$class__2_TaskGroup_23 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 23;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_28);
    }
    goto try_end_4;
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

    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9b68f5a918152c9f6ecfaaf24cf35296, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b68f5a918152c9f6ecfaaf24cf35296->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b68f5a918152c9f6ecfaaf24cf35296, exception_lineno);
    }



    assertFrameObject(frame_9b68f5a918152c9f6ecfaaf24cf35296);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio.abc._tasks", false);

    Py_INCREF(module_anyio$abc$_tasks);
    return module_anyio$abc$_tasks;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_tasks, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$abc$_tasks", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
