/* Generated code for Python module 'anyio._core._tasks'
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

/* The "module_anyio$_core$_tasks" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$_core$_tasks;
PyDictObject *moduledict_anyio$_core$_tasks;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[114];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[114];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("anyio._core._tasks"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 114; i++) {
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
void checkModuleConstants_anyio$_core$_tasks(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 114; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_72ca62b481c5c4dbbfc08d9092058902;
static PyCodeObject *codeobj_f320257f896cecc6f85d87a7137292c6;
static PyCodeObject *codeobj_ef11bac6e37319c7368178b85449390c;
static PyCodeObject *codeobj_011c65e58e65a356c4d48b8affacb316;
static PyCodeObject *codeobj_f302e2aa72ee6d26be4a19c75f4c19f5;
static PyCodeObject *codeobj_b6a0c36357d54864d0b07e341a5e5b5e;
static PyCodeObject *codeobj_99c02b8dfa66d4932033620f12810c70;
static PyCodeObject *codeobj_540c4c25553e0324957b5d80af8daf86;
static PyCodeObject *codeobj_88fa36f97529ef10c93c09eb73e7ef36;
static PyCodeObject *codeobj_84d22a53e02b4903920384d0319beec9;
static PyCodeObject *codeobj_64c787a73207e67b10a34dc6ebb6ee5e;
static PyCodeObject *codeobj_ea1a614b66b02e1da8f707c08edaedba;
static PyCodeObject *codeobj_888e9243db4da4e0d008953cd1d50a66;
static PyCodeObject *codeobj_4df28544a31df7ad3cd33976c6bb23b6;
static PyCodeObject *codeobj_48f44ec77a8053132596b15d8643a4a8;
static PyCodeObject *codeobj_fc213fe7227c804e11cb37aa8ed38a05;
static PyCodeObject *codeobj_21a405df0d59f60d4996cb3199f24620;
static PyCodeObject *codeobj_2e4a4242408913bd619a20b721b8883e;
static PyCodeObject *codeobj_512bcb7bcea21d5f427eced2e02411c3;
static PyCodeObject *codeobj_14d6c7c6afa192979f5c894e9b7bca8c;
static PyCodeObject *codeobj_e49354beaac3e6a173ceff4e531b864a;
static PyCodeObject *codeobj_a2c57fa34f26bd0515b802541a14f45c;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[29]; CHECK_OBJECT(module_filename_obj);
    codeobj_72ca62b481c5c4dbbfc08d9092058902 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[103], mod_consts[103], NULL, NULL, 0, 0, 0);
    codeobj_f320257f896cecc6f85d87a7137292c6 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[104], NULL, 0, 0, 0);
    codeobj_ef11bac6e37319c7368178b85449390c = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[104], NULL, 0, 0, 0);
    codeobj_011c65e58e65a356c4d48b8affacb316 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[104], NULL, 0, 0, 0);
    codeobj_f302e2aa72ee6d26be4a19c75f4c19f5 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[105], NULL, 1, 0, 0);
    codeobj_b6a0c36357d54864d0b07e341a5e5b5e = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[105], NULL, 1, 0, 0);
    codeobj_99c02b8dfa66d4932033620f12810c70 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[106], NULL, 4, 0, 0);
    codeobj_540c4c25553e0324957b5d80af8daf86 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[107], NULL, 4, 0, 0);
    codeobj_88fa36f97529ef10c93c09eb73e7ef36 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[108], NULL, 2, 0, 0);
    codeobj_84d22a53e02b4903920384d0319beec9 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[109], NULL, 1, 2, 0);
    codeobj_64c787a73207e67b10a34dc6ebb6ee5e = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[105], NULL, 1, 0, 0);
    codeobj_ea1a614b66b02e1da8f707c08edaedba = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[105], NULL, 1, 0, 0);
    codeobj_888e9243db4da4e0d008953cd1d50a66 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[102], mod_consts[102], NULL, NULL, 0, 0, 0);
    codeobj_4df28544a31df7ad3cd33976c6bb23b6 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], NULL, NULL, 0, 0, 0);
    codeobj_48f44ec77a8053132596b15d8643a4a8 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[105], NULL, 1, 0, 0);
    codeobj_fc213fe7227c804e11cb37aa8ed38a05 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[110], NULL, 2, 0, 0);
    codeobj_21a405df0d59f60d4996cb3199f24620 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[111], NULL, 2, 0, 0);
    codeobj_2e4a4242408913bd619a20b721b8883e = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[112], NULL, 2, 0, 0);
    codeobj_512bcb7bcea21d5f427eced2e02411c3 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[10], NULL, 0, 1, 0);
    codeobj_14d6c7c6afa192979f5c894e9b7bca8c = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[105], NULL, 1, 0, 0);
    codeobj_e49354beaac3e6a173ceff4e531b864a = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[110], NULL, 2, 0, 0);
    codeobj_a2c57fa34f26bd0515b802541a14f45c = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[110], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__10___exit__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__11_open_cancel_scope(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__12___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__13___enter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__14___exit__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__15_fail_after(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__16_move_on_after(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__17_current_effective_deadline(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__18_create_task_group(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__1_started(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__2___new__(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__3_cancel(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__4_deadline(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__5_deadline(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__6_cancel_called(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__7_shield(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__8_shield(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__9___enter__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$_core$_tasks$$$function__2___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_deadline = python_pars[1];
    PyObject *par_shield = python_pars[2];
    struct Nuitka_FrameObject *frame_84d22a53e02b4903920384d0319beec9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_84d22a53e02b4903920384d0319beec9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_84d22a53e02b4903920384d0319beec9)) {
        Py_XDECREF(cache_frame_84d22a53e02b4903920384d0319beec9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84d22a53e02b4903920384d0319beec9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84d22a53e02b4903920384d0319beec9 = MAKE_FUNCTION_FRAME(codeobj_84d22a53e02b4903920384d0319beec9, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_84d22a53e02b4903920384d0319beec9->m_type_description == NULL);
    frame_84d22a53e02b4903920384d0319beec9 = cache_frame_84d22a53e02b4903920384d0319beec9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_84d22a53e02b4903920384d0319beec9);
    assert(Py_REFCNT(frame_84d22a53e02b4903920384d0319beec9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_84d22a53e02b4903920384d0319beec9->m_frame.f_lineno = 34;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_shield);
        tmp_kw_call_value_0_1 = par_shield;
        CHECK_OBJECT(par_deadline);
        tmp_kw_call_value_1_1 = par_deadline;
        frame_84d22a53e02b4903920384d0319beec9->m_frame.f_lineno = 34;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
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
        exception_tb = MAKE_TRACEBACK(frame_84d22a53e02b4903920384d0319beec9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84d22a53e02b4903920384d0319beec9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84d22a53e02b4903920384d0319beec9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84d22a53e02b4903920384d0319beec9,
        type_description_1,
        par_cls,
        par_deadline,
        par_shield
    );


    // Release cached frame if used for exception.
    if (frame_84d22a53e02b4903920384d0319beec9 == cache_frame_84d22a53e02b4903920384d0319beec9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_84d22a53e02b4903920384d0319beec9);
        cache_frame_84d22a53e02b4903920384d0319beec9 = NULL;
    }

    assertFrameObject(frame_84d22a53e02b4903920384d0319beec9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_deadline);
    Py_DECREF(par_deadline);
    CHECK_OBJECT(par_shield);
    Py_DECREF(par_shield);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_deadline);
    Py_DECREF(par_deadline);
    CHECK_OBJECT(par_shield);
    Py_DECREF(par_shield);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_tasks$$$function__3_cancel(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_64c787a73207e67b10a34dc6ebb6ee5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_64c787a73207e67b10a34dc6ebb6ee5e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_64c787a73207e67b10a34dc6ebb6ee5e)) {
        Py_XDECREF(cache_frame_64c787a73207e67b10a34dc6ebb6ee5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64c787a73207e67b10a34dc6ebb6ee5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64c787a73207e67b10a34dc6ebb6ee5e = MAKE_FUNCTION_FRAME(codeobj_64c787a73207e67b10a34dc6ebb6ee5e, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_64c787a73207e67b10a34dc6ebb6ee5e->m_type_description == NULL);
    frame_64c787a73207e67b10a34dc6ebb6ee5e = cache_frame_64c787a73207e67b10a34dc6ebb6ee5e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_64c787a73207e67b10a34dc6ebb6ee5e);
    assert(Py_REFCNT(frame_64c787a73207e67b10a34dc6ebb6ee5e) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 38;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_64c787a73207e67b10a34dc6ebb6ee5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64c787a73207e67b10a34dc6ebb6ee5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64c787a73207e67b10a34dc6ebb6ee5e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64c787a73207e67b10a34dc6ebb6ee5e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_64c787a73207e67b10a34dc6ebb6ee5e == cache_frame_64c787a73207e67b10a34dc6ebb6ee5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_64c787a73207e67b10a34dc6ebb6ee5e);
        cache_frame_64c787a73207e67b10a34dc6ebb6ee5e = NULL;
    }

    assertFrameObject(frame_64c787a73207e67b10a34dc6ebb6ee5e);

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


static PyObject *impl_anyio$_core$_tasks$$$function__4_deadline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_48f44ec77a8053132596b15d8643a4a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_48f44ec77a8053132596b15d8643a4a8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_48f44ec77a8053132596b15d8643a4a8)) {
        Py_XDECREF(cache_frame_48f44ec77a8053132596b15d8643a4a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_48f44ec77a8053132596b15d8643a4a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_48f44ec77a8053132596b15d8643a4a8 = MAKE_FUNCTION_FRAME(codeobj_48f44ec77a8053132596b15d8643a4a8, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_48f44ec77a8053132596b15d8643a4a8->m_type_description == NULL);
    frame_48f44ec77a8053132596b15d8643a4a8 = cache_frame_48f44ec77a8053132596b15d8643a4a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_48f44ec77a8053132596b15d8643a4a8);
    assert(Py_REFCNT(frame_48f44ec77a8053132596b15d8643a4a8) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 48;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_48f44ec77a8053132596b15d8643a4a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_48f44ec77a8053132596b15d8643a4a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48f44ec77a8053132596b15d8643a4a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_48f44ec77a8053132596b15d8643a4a8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_48f44ec77a8053132596b15d8643a4a8 == cache_frame_48f44ec77a8053132596b15d8643a4a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_48f44ec77a8053132596b15d8643a4a8);
        cache_frame_48f44ec77a8053132596b15d8643a4a8 = NULL;
    }

    assertFrameObject(frame_48f44ec77a8053132596b15d8643a4a8);

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


static PyObject *impl_anyio$_core$_tasks$$$function__5_deadline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_fc213fe7227c804e11cb37aa8ed38a05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc213fe7227c804e11cb37aa8ed38a05 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc213fe7227c804e11cb37aa8ed38a05)) {
        Py_XDECREF(cache_frame_fc213fe7227c804e11cb37aa8ed38a05);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc213fe7227c804e11cb37aa8ed38a05 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc213fe7227c804e11cb37aa8ed38a05 = MAKE_FUNCTION_FRAME(codeobj_fc213fe7227c804e11cb37aa8ed38a05, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc213fe7227c804e11cb37aa8ed38a05->m_type_description == NULL);
    frame_fc213fe7227c804e11cb37aa8ed38a05 = cache_frame_fc213fe7227c804e11cb37aa8ed38a05;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fc213fe7227c804e11cb37aa8ed38a05);
    assert(Py_REFCNT(frame_fc213fe7227c804e11cb37aa8ed38a05) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 52;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc213fe7227c804e11cb37aa8ed38a05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc213fe7227c804e11cb37aa8ed38a05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc213fe7227c804e11cb37aa8ed38a05, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc213fe7227c804e11cb37aa8ed38a05,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_fc213fe7227c804e11cb37aa8ed38a05 == cache_frame_fc213fe7227c804e11cb37aa8ed38a05) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc213fe7227c804e11cb37aa8ed38a05);
        cache_frame_fc213fe7227c804e11cb37aa8ed38a05 = NULL;
    }

    assertFrameObject(frame_fc213fe7227c804e11cb37aa8ed38a05);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_anyio$_core$_tasks$$$function__6_cancel_called(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ea1a614b66b02e1da8f707c08edaedba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ea1a614b66b02e1da8f707c08edaedba = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ea1a614b66b02e1da8f707c08edaedba)) {
        Py_XDECREF(cache_frame_ea1a614b66b02e1da8f707c08edaedba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea1a614b66b02e1da8f707c08edaedba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea1a614b66b02e1da8f707c08edaedba = MAKE_FUNCTION_FRAME(codeobj_ea1a614b66b02e1da8f707c08edaedba, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea1a614b66b02e1da8f707c08edaedba->m_type_description == NULL);
    frame_ea1a614b66b02e1da8f707c08edaedba = cache_frame_ea1a614b66b02e1da8f707c08edaedba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ea1a614b66b02e1da8f707c08edaedba);
    assert(Py_REFCNT(frame_ea1a614b66b02e1da8f707c08edaedba) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 57;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ea1a614b66b02e1da8f707c08edaedba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea1a614b66b02e1da8f707c08edaedba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea1a614b66b02e1da8f707c08edaedba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea1a614b66b02e1da8f707c08edaedba,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ea1a614b66b02e1da8f707c08edaedba == cache_frame_ea1a614b66b02e1da8f707c08edaedba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea1a614b66b02e1da8f707c08edaedba);
        cache_frame_ea1a614b66b02e1da8f707c08edaedba = NULL;
    }

    assertFrameObject(frame_ea1a614b66b02e1da8f707c08edaedba);

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


static PyObject *impl_anyio$_core$_tasks$$$function__7_shield(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_14d6c7c6afa192979f5c894e9b7bca8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_14d6c7c6afa192979f5c894e9b7bca8c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_14d6c7c6afa192979f5c894e9b7bca8c)) {
        Py_XDECREF(cache_frame_14d6c7c6afa192979f5c894e9b7bca8c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_14d6c7c6afa192979f5c894e9b7bca8c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_14d6c7c6afa192979f5c894e9b7bca8c = MAKE_FUNCTION_FRAME(codeobj_14d6c7c6afa192979f5c894e9b7bca8c, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_14d6c7c6afa192979f5c894e9b7bca8c->m_type_description == NULL);
    frame_14d6c7c6afa192979f5c894e9b7bca8c = cache_frame_14d6c7c6afa192979f5c894e9b7bca8c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_14d6c7c6afa192979f5c894e9b7bca8c);
    assert(Py_REFCNT(frame_14d6c7c6afa192979f5c894e9b7bca8c) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 67;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_14d6c7c6afa192979f5c894e9b7bca8c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14d6c7c6afa192979f5c894e9b7bca8c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14d6c7c6afa192979f5c894e9b7bca8c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_14d6c7c6afa192979f5c894e9b7bca8c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_14d6c7c6afa192979f5c894e9b7bca8c == cache_frame_14d6c7c6afa192979f5c894e9b7bca8c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_14d6c7c6afa192979f5c894e9b7bca8c);
        cache_frame_14d6c7c6afa192979f5c894e9b7bca8c = NULL;
    }

    assertFrameObject(frame_14d6c7c6afa192979f5c894e9b7bca8c);

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


static PyObject *impl_anyio$_core$_tasks$$$function__8_shield(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e49354beaac3e6a173ceff4e531b864a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e49354beaac3e6a173ceff4e531b864a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e49354beaac3e6a173ceff4e531b864a)) {
        Py_XDECREF(cache_frame_e49354beaac3e6a173ceff4e531b864a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e49354beaac3e6a173ceff4e531b864a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e49354beaac3e6a173ceff4e531b864a = MAKE_FUNCTION_FRAME(codeobj_e49354beaac3e6a173ceff4e531b864a, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e49354beaac3e6a173ceff4e531b864a->m_type_description == NULL);
    frame_e49354beaac3e6a173ceff4e531b864a = cache_frame_e49354beaac3e6a173ceff4e531b864a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e49354beaac3e6a173ceff4e531b864a);
    assert(Py_REFCNT(frame_e49354beaac3e6a173ceff4e531b864a) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 71;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e49354beaac3e6a173ceff4e531b864a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e49354beaac3e6a173ceff4e531b864a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e49354beaac3e6a173ceff4e531b864a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e49354beaac3e6a173ceff4e531b864a,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e49354beaac3e6a173ceff4e531b864a == cache_frame_e49354beaac3e6a173ceff4e531b864a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e49354beaac3e6a173ceff4e531b864a);
        cache_frame_e49354beaac3e6a173ceff4e531b864a = NULL;
    }

    assertFrameObject(frame_e49354beaac3e6a173ceff4e531b864a);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_anyio$_core$_tasks$$$function__9___enter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f302e2aa72ee6d26be4a19c75f4c19f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f302e2aa72ee6d26be4a19c75f4c19f5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f302e2aa72ee6d26be4a19c75f4c19f5)) {
        Py_XDECREF(cache_frame_f302e2aa72ee6d26be4a19c75f4c19f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f302e2aa72ee6d26be4a19c75f4c19f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f302e2aa72ee6d26be4a19c75f4c19f5 = MAKE_FUNCTION_FRAME(codeobj_f302e2aa72ee6d26be4a19c75f4c19f5, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f302e2aa72ee6d26be4a19c75f4c19f5->m_type_description == NULL);
    frame_f302e2aa72ee6d26be4a19c75f4c19f5 = cache_frame_f302e2aa72ee6d26be4a19c75f4c19f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f302e2aa72ee6d26be4a19c75f4c19f5);
    assert(Py_REFCNT(frame_f302e2aa72ee6d26be4a19c75f4c19f5) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 74;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f302e2aa72ee6d26be4a19c75f4c19f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f302e2aa72ee6d26be4a19c75f4c19f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f302e2aa72ee6d26be4a19c75f4c19f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f302e2aa72ee6d26be4a19c75f4c19f5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f302e2aa72ee6d26be4a19c75f4c19f5 == cache_frame_f302e2aa72ee6d26be4a19c75f4c19f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f302e2aa72ee6d26be4a19c75f4c19f5);
        cache_frame_f302e2aa72ee6d26be4a19c75f4c19f5 = NULL;
    }

    assertFrameObject(frame_f302e2aa72ee6d26be4a19c75f4c19f5);

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


static PyObject *impl_anyio$_core$_tasks$$$function__10___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_val = python_pars[2];
    PyObject *par_exc_tb = python_pars[3];
    struct Nuitka_FrameObject *frame_99c02b8dfa66d4932033620f12810c70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_99c02b8dfa66d4932033620f12810c70 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_99c02b8dfa66d4932033620f12810c70)) {
        Py_XDECREF(cache_frame_99c02b8dfa66d4932033620f12810c70);

#if _DEBUG_REFCOUNTS
        if (cache_frame_99c02b8dfa66d4932033620f12810c70 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_99c02b8dfa66d4932033620f12810c70 = MAKE_FUNCTION_FRAME(codeobj_99c02b8dfa66d4932033620f12810c70, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_99c02b8dfa66d4932033620f12810c70->m_type_description == NULL);
    frame_99c02b8dfa66d4932033620f12810c70 = cache_frame_99c02b8dfa66d4932033620f12810c70;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_99c02b8dfa66d4932033620f12810c70);
    assert(Py_REFCNT(frame_99c02b8dfa66d4932033620f12810c70) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 82;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_99c02b8dfa66d4932033620f12810c70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_99c02b8dfa66d4932033620f12810c70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_99c02b8dfa66d4932033620f12810c70, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_99c02b8dfa66d4932033620f12810c70,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_val,
        par_exc_tb
    );


    // Release cached frame if used for exception.
    if (frame_99c02b8dfa66d4932033620f12810c70 == cache_frame_99c02b8dfa66d4932033620f12810c70) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_99c02b8dfa66d4932033620f12810c70);
        cache_frame_99c02b8dfa66d4932033620f12810c70 = NULL;
    }

    assertFrameObject(frame_99c02b8dfa66d4932033620f12810c70);

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
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_val);
    Py_DECREF(par_exc_val);
    CHECK_OBJECT(par_exc_tb);
    Py_DECREF(par_exc_tb);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_anyio$_core$_tasks$$$function__11_open_cancel_scope(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_shield = python_pars[0];
    struct Nuitka_FrameObject *frame_512bcb7bcea21d5f427eced2e02411c3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_512bcb7bcea21d5f427eced2e02411c3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_512bcb7bcea21d5f427eced2e02411c3)) {
        Py_XDECREF(cache_frame_512bcb7bcea21d5f427eced2e02411c3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_512bcb7bcea21d5f427eced2e02411c3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_512bcb7bcea21d5f427eced2e02411c3 = MAKE_FUNCTION_FRAME(codeobj_512bcb7bcea21d5f427eced2e02411c3, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_512bcb7bcea21d5f427eced2e02411c3->m_type_description == NULL);
    frame_512bcb7bcea21d5f427eced2e02411c3 = cache_frame_512bcb7bcea21d5f427eced2e02411c3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_512bcb7bcea21d5f427eced2e02411c3);
    assert(Py_REFCNT(frame_512bcb7bcea21d5f427eced2e02411c3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[8];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_512bcb7bcea21d5f427eced2e02411c3->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_512bcb7bcea21d5f427eced2e02411c3->m_frame.f_lineno = 100;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_shield);
        tmp_kw_call_value_0_1 = par_shield;
        frame_512bcb7bcea21d5f427eced2e02411c3->m_frame.f_lineno = 100;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[10]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
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
        exception_tb = MAKE_TRACEBACK(frame_512bcb7bcea21d5f427eced2e02411c3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_512bcb7bcea21d5f427eced2e02411c3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_512bcb7bcea21d5f427eced2e02411c3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_512bcb7bcea21d5f427eced2e02411c3,
        type_description_1,
        par_shield
    );


    // Release cached frame if used for exception.
    if (frame_512bcb7bcea21d5f427eced2e02411c3 == cache_frame_512bcb7bcea21d5f427eced2e02411c3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_512bcb7bcea21d5f427eced2e02411c3);
        cache_frame_512bcb7bcea21d5f427eced2e02411c3 = NULL;
    }

    assertFrameObject(frame_512bcb7bcea21d5f427eced2e02411c3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_shield);
    Py_DECREF(par_shield);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_shield);
    Py_DECREF(par_shield);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_tasks$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cancel_scope = python_pars[1];
    struct Nuitka_FrameObject *frame_88fa36f97529ef10c93c09eb73e7ef36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_88fa36f97529ef10c93c09eb73e7ef36 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_88fa36f97529ef10c93c09eb73e7ef36)) {
        Py_XDECREF(cache_frame_88fa36f97529ef10c93c09eb73e7ef36);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88fa36f97529ef10c93c09eb73e7ef36 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88fa36f97529ef10c93c09eb73e7ef36 = MAKE_FUNCTION_FRAME(codeobj_88fa36f97529ef10c93c09eb73e7ef36, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_88fa36f97529ef10c93c09eb73e7ef36->m_type_description == NULL);
    frame_88fa36f97529ef10c93c09eb73e7ef36 = cache_frame_88fa36f97529ef10c93c09eb73e7ef36;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_88fa36f97529ef10c93c09eb73e7ef36);
    assert(Py_REFCNT(frame_88fa36f97529ef10c93c09eb73e7ef36) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_cancel_scope);
        tmp_assattr_value_1 = par_cancel_scope;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_88fa36f97529ef10c93c09eb73e7ef36, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88fa36f97529ef10c93c09eb73e7ef36->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88fa36f97529ef10c93c09eb73e7ef36, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88fa36f97529ef10c93c09eb73e7ef36,
        type_description_1,
        par_self,
        par_cancel_scope
    );


    // Release cached frame if used for exception.
    if (frame_88fa36f97529ef10c93c09eb73e7ef36 == cache_frame_88fa36f97529ef10c93c09eb73e7ef36) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_88fa36f97529ef10c93c09eb73e7ef36);
        cache_frame_88fa36f97529ef10c93c09eb73e7ef36 = NULL;
    }

    assertFrameObject(frame_88fa36f97529ef10c93c09eb73e7ef36);

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
    CHECK_OBJECT(par_cancel_scope);
    Py_DECREF(par_cancel_scope);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cancel_scope);
    Py_DECREF(par_cancel_scope);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_tasks$$$function__13___enter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b6a0c36357d54864d0b07e341a5e5b5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b6a0c36357d54864d0b07e341a5e5b5e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b6a0c36357d54864d0b07e341a5e5b5e)) {
        Py_XDECREF(cache_frame_b6a0c36357d54864d0b07e341a5e5b5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6a0c36357d54864d0b07e341a5e5b5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6a0c36357d54864d0b07e341a5e5b5e = MAKE_FUNCTION_FRAME(codeobj_b6a0c36357d54864d0b07e341a5e5b5e, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b6a0c36357d54864d0b07e341a5e5b5e->m_type_description == NULL);
    frame_b6a0c36357d54864d0b07e341a5e5b5e = cache_frame_b6a0c36357d54864d0b07e341a5e5b5e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b6a0c36357d54864d0b07e341a5e5b5e);
    assert(Py_REFCNT(frame_b6a0c36357d54864d0b07e341a5e5b5e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b6a0c36357d54864d0b07e341a5e5b5e->m_frame.f_lineno = 108;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[13]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
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
        exception_tb = MAKE_TRACEBACK(frame_b6a0c36357d54864d0b07e341a5e5b5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6a0c36357d54864d0b07e341a5e5b5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6a0c36357d54864d0b07e341a5e5b5e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6a0c36357d54864d0b07e341a5e5b5e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b6a0c36357d54864d0b07e341a5e5b5e == cache_frame_b6a0c36357d54864d0b07e341a5e5b5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b6a0c36357d54864d0b07e341a5e5b5e);
        cache_frame_b6a0c36357d54864d0b07e341a5e5b5e = NULL;
    }

    assertFrameObject(frame_b6a0c36357d54864d0b07e341a5e5b5e);

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


static PyObject *impl_anyio$_core$_tasks$$$function__14___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_val = python_pars[2];
    PyObject *par_exc_tb = python_pars[3];
    PyObject *var_retval = NULL;
    struct Nuitka_FrameObject *frame_540c4c25553e0324957b5d80af8daf86;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_540c4c25553e0324957b5d80af8daf86 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_540c4c25553e0324957b5d80af8daf86)) {
        Py_XDECREF(cache_frame_540c4c25553e0324957b5d80af8daf86);

#if _DEBUG_REFCOUNTS
        if (cache_frame_540c4c25553e0324957b5d80af8daf86 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_540c4c25553e0324957b5d80af8daf86 = MAKE_FUNCTION_FRAME(codeobj_540c4c25553e0324957b5d80af8daf86, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_540c4c25553e0324957b5d80af8daf86->m_type_description == NULL);
    frame_540c4c25553e0324957b5d80af8daf86 = cache_frame_540c4c25553e0324957b5d80af8daf86;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_540c4c25553e0324957b5d80af8daf86);
    assert(Py_REFCNT(frame_540c4c25553e0324957b5d80af8daf86) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exc_type);
        tmp_args_element_value_1 = par_exc_type;
        CHECK_OBJECT(par_exc_val);
        tmp_args_element_value_2 = par_exc_val;
        CHECK_OBJECT(par_exc_tb);
        tmp_args_element_value_3 = par_exc_tb;
        frame_540c4c25553e0324957b5d80af8daf86->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[14],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_retval == NULL);
        var_retval = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 117;
            type_description_1 = "ooooo";
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
        tmp_raise_type_1 = PyExc_TimeoutError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 118;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_540c4c25553e0324957b5d80af8daf86, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_540c4c25553e0324957b5d80af8daf86->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_540c4c25553e0324957b5d80af8daf86, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_540c4c25553e0324957b5d80af8daf86,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_val,
        par_exc_tb,
        var_retval
    );


    // Release cached frame if used for exception.
    if (frame_540c4c25553e0324957b5d80af8daf86 == cache_frame_540c4c25553e0324957b5d80af8daf86) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_540c4c25553e0324957b5d80af8daf86);
        cache_frame_540c4c25553e0324957b5d80af8daf86 = NULL;
    }

    assertFrameObject(frame_540c4c25553e0324957b5d80af8daf86);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_retval);
    tmp_return_value = var_retval;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_retval);
    Py_DECREF(var_retval);
    var_retval = NULL;
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

    Py_XDECREF(var_retval);
    var_retval = NULL;
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
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_val);
    Py_DECREF(par_exc_val);
    CHECK_OBJECT(par_exc_tb);
    Py_DECREF(par_exc_tb);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

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


static PyObject *impl_anyio$_core$_tasks$$$function__15_fail_after(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_delay = python_pars[0];
    PyObject *par_shield = python_pars[1];
    PyObject *var_deadline = NULL;
    PyObject *var_cancel_scope = NULL;
    struct Nuitka_FrameObject *frame_21a405df0d59f60d4996cb3199f24620;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_21a405df0d59f60d4996cb3199f24620 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_21a405df0d59f60d4996cb3199f24620)) {
        Py_XDECREF(cache_frame_21a405df0d59f60d4996cb3199f24620);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21a405df0d59f60d4996cb3199f24620 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21a405df0d59f60d4996cb3199f24620 = MAKE_FUNCTION_FRAME(codeobj_21a405df0d59f60d4996cb3199f24620, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21a405df0d59f60d4996cb3199f24620->m_type_description == NULL);
    frame_21a405df0d59f60d4996cb3199f24620 = cache_frame_21a405df0d59f60d4996cb3199f24620;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_21a405df0d59f60d4996cb3199f24620);
    assert(Py_REFCNT(frame_21a405df0d59f60d4996cb3199f24620) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_delay);
        tmp_cmp_expr_left_1 = par_delay;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_21a405df0d59f60d4996cb3199f24620->m_frame.f_lineno = 135;
        tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_21a405df0d59f60d4996cb3199f24620->m_frame.f_lineno = 135;
        tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_delay);
        tmp_add_expr_right_1 = par_delay;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_deadline == NULL);
        var_deadline = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_21a405df0d59f60d4996cb3199f24620->m_frame.f_lineno = 137;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_deadline);
        tmp_kw_call_value_0_1 = var_deadline;
        CHECK_OBJECT(par_shield);
        tmp_kw_call_value_1_1 = par_shield;
        frame_21a405df0d59f60d4996cb3199f24620->m_frame.f_lineno = 137;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[19]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_cancel_scope == NULL);
        var_cancel_scope = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cancel_scope);
        tmp_args_element_value_1 = var_cancel_scope;
        frame_21a405df0d59f60d4996cb3199f24620->m_frame.f_lineno = 138;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
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
        exception_tb = MAKE_TRACEBACK(frame_21a405df0d59f60d4996cb3199f24620, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21a405df0d59f60d4996cb3199f24620->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21a405df0d59f60d4996cb3199f24620, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21a405df0d59f60d4996cb3199f24620,
        type_description_1,
        par_delay,
        par_shield,
        var_deadline,
        var_cancel_scope
    );


    // Release cached frame if used for exception.
    if (frame_21a405df0d59f60d4996cb3199f24620 == cache_frame_21a405df0d59f60d4996cb3199f24620) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21a405df0d59f60d4996cb3199f24620);
        cache_frame_21a405df0d59f60d4996cb3199f24620 = NULL;
    }

    assertFrameObject(frame_21a405df0d59f60d4996cb3199f24620);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_deadline);
    Py_DECREF(var_deadline);
    var_deadline = NULL;
    CHECK_OBJECT(var_cancel_scope);
    Py_DECREF(var_cancel_scope);
    var_cancel_scope = NULL;
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

    Py_XDECREF(var_deadline);
    var_deadline = NULL;
    Py_XDECREF(var_cancel_scope);
    var_cancel_scope = NULL;
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
    CHECK_OBJECT(par_delay);
    Py_DECREF(par_delay);
    CHECK_OBJECT(par_shield);
    Py_DECREF(par_shield);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_delay);
    Py_DECREF(par_delay);
    CHECK_OBJECT(par_shield);
    Py_DECREF(par_shield);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_tasks$$$function__16_move_on_after(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_delay = python_pars[0];
    PyObject *par_shield = python_pars[1];
    PyObject *var_deadline = NULL;
    struct Nuitka_FrameObject *frame_2e4a4242408913bd619a20b721b8883e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2e4a4242408913bd619a20b721b8883e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2e4a4242408913bd619a20b721b8883e)) {
        Py_XDECREF(cache_frame_2e4a4242408913bd619a20b721b8883e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e4a4242408913bd619a20b721b8883e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e4a4242408913bd619a20b721b8883e = MAKE_FUNCTION_FRAME(codeobj_2e4a4242408913bd619a20b721b8883e, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e4a4242408913bd619a20b721b8883e->m_type_description == NULL);
    frame_2e4a4242408913bd619a20b721b8883e = cache_frame_2e4a4242408913bd619a20b721b8883e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2e4a4242408913bd619a20b721b8883e);
    assert(Py_REFCNT(frame_2e4a4242408913bd619a20b721b8883e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_delay);
        tmp_cmp_expr_left_1 = par_delay;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_2e4a4242408913bd619a20b721b8883e->m_frame.f_lineno = 152;
        tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_2e4a4242408913bd619a20b721b8883e->m_frame.f_lineno = 152;
        tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_delay);
        tmp_add_expr_right_1 = par_delay;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_deadline == NULL);
        var_deadline = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_2e4a4242408913bd619a20b721b8883e->m_frame.f_lineno = 154;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_deadline);
        tmp_kw_call_value_0_1 = var_deadline;
        CHECK_OBJECT(par_shield);
        tmp_kw_call_value_1_1 = par_shield;
        frame_2e4a4242408913bd619a20b721b8883e->m_frame.f_lineno = 154;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[19]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
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
        exception_tb = MAKE_TRACEBACK(frame_2e4a4242408913bd619a20b721b8883e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e4a4242408913bd619a20b721b8883e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e4a4242408913bd619a20b721b8883e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e4a4242408913bd619a20b721b8883e,
        type_description_1,
        par_delay,
        par_shield,
        var_deadline
    );


    // Release cached frame if used for exception.
    if (frame_2e4a4242408913bd619a20b721b8883e == cache_frame_2e4a4242408913bd619a20b721b8883e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e4a4242408913bd619a20b721b8883e);
        cache_frame_2e4a4242408913bd619a20b721b8883e = NULL;
    }

    assertFrameObject(frame_2e4a4242408913bd619a20b721b8883e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_deadline);
    Py_DECREF(var_deadline);
    var_deadline = NULL;
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

    Py_XDECREF(var_deadline);
    var_deadline = NULL;
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
    CHECK_OBJECT(par_delay);
    Py_DECREF(par_delay);
    CHECK_OBJECT(par_shield);
    Py_DECREF(par_shield);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_delay);
    Py_DECREF(par_delay);
    CHECK_OBJECT(par_shield);
    Py_DECREF(par_shield);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_tasks$$$function__17_current_effective_deadline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_4df28544a31df7ad3cd33976c6bb23b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4df28544a31df7ad3cd33976c6bb23b6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4df28544a31df7ad3cd33976c6bb23b6)) {
        Py_XDECREF(cache_frame_4df28544a31df7ad3cd33976c6bb23b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4df28544a31df7ad3cd33976c6bb23b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4df28544a31df7ad3cd33976c6bb23b6 = MAKE_FUNCTION_FRAME(codeobj_4df28544a31df7ad3cd33976c6bb23b6, module_anyio$_core$_tasks, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4df28544a31df7ad3cd33976c6bb23b6->m_type_description == NULL);
    frame_4df28544a31df7ad3cd33976c6bb23b6 = cache_frame_4df28544a31df7ad3cd33976c6bb23b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4df28544a31df7ad3cd33976c6bb23b6);
    assert(Py_REFCNT(frame_4df28544a31df7ad3cd33976c6bb23b6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        frame_4df28544a31df7ad3cd33976c6bb23b6->m_frame.f_lineno = 167;
        tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        frame_4df28544a31df7ad3cd33976c6bb23b6->m_frame.f_lineno = 167;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        frame_4df28544a31df7ad3cd33976c6bb23b6->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

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
        exception_tb = MAKE_TRACEBACK(frame_4df28544a31df7ad3cd33976c6bb23b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4df28544a31df7ad3cd33976c6bb23b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4df28544a31df7ad3cd33976c6bb23b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4df28544a31df7ad3cd33976c6bb23b6,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_4df28544a31df7ad3cd33976c6bb23b6 == cache_frame_4df28544a31df7ad3cd33976c6bb23b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4df28544a31df7ad3cd33976c6bb23b6);
        cache_frame_4df28544a31df7ad3cd33976c6bb23b6 = NULL;
    }

    assertFrameObject(frame_4df28544a31df7ad3cd33976c6bb23b6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_anyio$_core$_tasks$$$function__18_create_task_group(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_888e9243db4da4e0d008953cd1d50a66;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_888e9243db4da4e0d008953cd1d50a66 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_888e9243db4da4e0d008953cd1d50a66)) {
        Py_XDECREF(cache_frame_888e9243db4da4e0d008953cd1d50a66);

#if _DEBUG_REFCOUNTS
        if (cache_frame_888e9243db4da4e0d008953cd1d50a66 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_888e9243db4da4e0d008953cd1d50a66 = MAKE_FUNCTION_FRAME(codeobj_888e9243db4da4e0d008953cd1d50a66, module_anyio$_core$_tasks, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_888e9243db4da4e0d008953cd1d50a66->m_type_description == NULL);
    frame_888e9243db4da4e0d008953cd1d50a66 = cache_frame_888e9243db4da4e0d008953cd1d50a66;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_888e9243db4da4e0d008953cd1d50a66);
    assert(Py_REFCNT(frame_888e9243db4da4e0d008953cd1d50a66) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        frame_888e9243db4da4e0d008953cd1d50a66->m_frame.f_lineno = 178;
        tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        frame_888e9243db4da4e0d008953cd1d50a66->m_frame.f_lineno = 178;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[26]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

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
        exception_tb = MAKE_TRACEBACK(frame_888e9243db4da4e0d008953cd1d50a66, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_888e9243db4da4e0d008953cd1d50a66->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_888e9243db4da4e0d008953cd1d50a66, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_888e9243db4da4e0d008953cd1d50a66,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_888e9243db4da4e0d008953cd1d50a66 == cache_frame_888e9243db4da4e0d008953cd1d50a66) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_888e9243db4da4e0d008953cd1d50a66);
        cache_frame_888e9243db4da4e0d008953cd1d50a66 = NULL;
    }

    assertFrameObject(frame_888e9243db4da4e0d008953cd1d50a66);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__10___exit__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__10___exit__,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[89],
#endif
        codeobj_99c02b8dfa66d4932033620f12810c70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__11_open_cancel_scope(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__11_open_cancel_scope,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_512bcb7bcea21d5f427eced2e02411c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__12___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__12___init__,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_88fa36f97529ef10c93c09eb73e7ef36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__13___enter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__13___enter__,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_b6a0c36357d54864d0b07e341a5e5b5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__14___exit__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__14___exit__,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_540c4c25553e0324957b5d80af8daf86,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__15_fail_after(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__15_fail_after,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_21a405df0d59f60d4996cb3199f24620,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__16_move_on_after(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__16_move_on_after,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2e4a4242408913bd619a20b721b8883e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__17_current_effective_deadline(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__17_current_effective_deadline,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4df28544a31df7ad3cd33976c6bb23b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__18_create_task_group(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__18_create_task_group,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_888e9243db4da4e0d008953cd1d50a66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__1_started(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[66],
#endif
        codeobj_a2c57fa34f26bd0515b802541a14f45c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__2___new__(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__2___new__,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_84d22a53e02b4903920384d0319beec9,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__3_cancel(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__3_cancel,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_64c787a73207e67b10a34dc6ebb6ee5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__4_deadline(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__4_deadline,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_48f44ec77a8053132596b15d8643a4a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__5_deadline(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__5_deadline,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_fc213fe7227c804e11cb37aa8ed38a05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__6_cancel_called(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__6_cancel_called,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_ea1a614b66b02e1da8f707c08edaedba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__7_shield(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__7_shield,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_14d6c7c6afa192979f5c894e9b7bca8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__8_shield(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__8_shield,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_e49354beaac3e6a173ceff4e531b864a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__9___enter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__9___enter__,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_f302e2aa72ee6d26be4a19c75f4c19f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
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

function_impl_code functable_anyio$_core$_tasks[] = {
    NULL,
    impl_anyio$_core$_tasks$$$function__2___new__,
    impl_anyio$_core$_tasks$$$function__3_cancel,
    impl_anyio$_core$_tasks$$$function__4_deadline,
    impl_anyio$_core$_tasks$$$function__5_deadline,
    impl_anyio$_core$_tasks$$$function__6_cancel_called,
    impl_anyio$_core$_tasks$$$function__7_shield,
    impl_anyio$_core$_tasks$$$function__8_shield,
    impl_anyio$_core$_tasks$$$function__9___enter__,
    impl_anyio$_core$_tasks$$$function__10___exit__,
    impl_anyio$_core$_tasks$$$function__11_open_cancel_scope,
    impl_anyio$_core$_tasks$$$function__12___init__,
    impl_anyio$_core$_tasks$$$function__13___enter__,
    impl_anyio$_core$_tasks$$$function__14___exit__,
    impl_anyio$_core$_tasks$$$function__15_fail_after,
    impl_anyio$_core$_tasks$$$function__16_move_on_after,
    impl_anyio$_core$_tasks$$$function__17_current_effective_deadline,
    impl_anyio$_core$_tasks$$$function__18_create_task_group,
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

    function_impl_code *current = functable_anyio$_core$_tasks;
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

    if (offset > sizeof(functable_anyio$_core$_tasks) || offset < 0) {
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
        functable_anyio$_core$_tasks[offset],
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
        module_anyio$_core$_tasks,
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
PyObject *modulecode_anyio$_core$_tasks(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio._core._tasks");

    // Store the module for future use.
    module_anyio$_core$_tasks = module;

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
        PRINT_STRING("anyio._core._tasks: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio._core._tasks: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio._core._tasks: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initanyio$_core$_tasks\n");

    moduledict_anyio$_core$_tasks = MODULE_DICT(module_anyio$_core$_tasks);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$_core$_tasks,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$_core$_tasks,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[113]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$_core$_tasks,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$_core$_tasks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$_core$_tasks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$_core$_tasks);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_anyio$_core$_tasks);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_72ca62b481c5c4dbbfc08d9092058902;
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
    int tmp_res;
    PyObject *locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_15 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_011c65e58e65a356c4d48b8affacb316_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_anyio$_core$_tasks$$$class__2_CancelScope_23 = NULL;
    struct Nuitka_FrameObject *frame_f320257f896cecc6f85d87a7137292c6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103 = NULL;
    struct Nuitka_FrameObject *frame_ef11bac6e37319c7368178b85449390c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_2);
    }
    frame_72ca62b481c5c4dbbfc08d9092058902 = MAKE_MODULE_FRAME(codeobj_72ca62b481c5c4dbbfc08d9092058902, module_anyio$_core$_tasks);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_72ca62b481c5c4dbbfc08d9092058902);
    assert(Py_REFCNT(frame_72ca62b481c5c4dbbfc08d9092058902) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[29];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[32], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[33], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[17];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$_core$_tasks;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[35];
        frame_72ca62b481c5c4dbbfc08d9092058902->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPES();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_anyio$_core$_tasks,
                mod_consts[36],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[36]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_5);
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
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_anyio$_core$_tasks,
                mod_consts[37],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[37]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_anyio$_core$_tasks,
                mod_consts[38],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[38]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[39];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$_core$_tasks;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[40];
        tmp_level_value_2 = mod_consts[35];
        frame_72ca62b481c5c4dbbfc08d9092058902->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_anyio$_core$_tasks,
                mod_consts[7],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[7]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[41];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$_core$_tasks;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[42];
        tmp_level_value_3 = mod_consts[43];
        frame_72ca62b481c5c4dbbfc08d9092058902->m_frame.f_lineno = 6;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_anyio$_core$_tasks,
                mod_consts[26],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[26]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_anyio$_core$_tasks,
                mod_consts[44],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[44]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[45];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$_core$_tasks;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[46];
        tmp_level_value_4 = mod_consts[47];
        frame_72ca62b481c5c4dbbfc08d9092058902->m_frame.f_lineno = 7;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_anyio$_core$_tasks,
                mod_consts[48],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[48]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_anyio$_core$_tasks,
                mod_consts[49],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[49]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_anyio$_core$_tasks,
                mod_consts[23],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[23]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[50];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio$_core$_tasks;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[51];
        tmp_level_value_5 = mod_consts[47];
        frame_72ca62b481c5c4dbbfc08d9092058902->m_frame.f_lineno = 12;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_anyio$_core$_tasks,
                mod_consts[0],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_17);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        tmp_assign_source_18 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_19 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[35];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_21 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[52]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[52]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[53];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_72ca62b481c5c4dbbfc08d9092058902->m_frame.f_lineno = 15;
        tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[54]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[55];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[56];
        tmp_getattr_default_1 = mod_consts[57];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[56]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 15;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_15 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_15, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_15, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_6;
        }
        frame_011c65e58e65a356c4d48b8affacb316_2 = MAKE_CLASS_FRAME(codeobj_011c65e58e65a356c4d48b8affacb316, module_anyio$_core$_tasks, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_011c65e58e65a356c4d48b8affacb316_2);
        assert(Py_REFCNT(frame_011c65e58e65a356c4d48b8affacb316_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_defaults_1 = mod_consts[61];
            tmp_dict_key_1 = mod_consts[62];
            tmp_dict_value_1 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_15, mod_consts[63]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[64];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__1_started(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_15, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_011c65e58e65a356c4d48b8affacb316_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_011c65e58e65a356c4d48b8affacb316_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_011c65e58e65a356c4d48b8affacb316_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_011c65e58e65a356c4d48b8affacb316_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_011c65e58e65a356c4d48b8affacb316_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_15, mod_consts[67], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[53];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_15;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_72ca62b481c5c4dbbfc08d9092058902->m_frame.f_lineno = 15;
            tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_24 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_15);
        locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_15 = NULL;
        goto try_return_handler_5;
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

        Py_DECREF(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_15);
        locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_15 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 15;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_24);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_72ca62b481c5c4dbbfc08d9092058902->m_frame.f_lineno = 20;
        tmp_assign_source_26 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_26);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        tmp_subscript_value_2 = mod_consts[1];
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_27, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_28 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_3 = mod_consts[35];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_3, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[52]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[52]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        tmp_tuple_element_6 = mod_consts[1];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_72ca62b481c5c4dbbfc08d9092058902->m_frame.f_lineno = 23;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_10, mod_consts[54]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[55];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[56];
        tmp_getattr_default_2 = mod_consts[57];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_11 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_11 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[56]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_32;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_anyio$_core$_tasks$$$class__2_CancelScope_23 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[1];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        frame_f320257f896cecc6f85d87a7137292c6_3 = MAKE_CLASS_FRAME(codeobj_f320257f896cecc6f85d87a7137292c6, module_anyio$_core$_tasks, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f320257f896cecc6f85d87a7137292c6_3);
        assert(Py_REFCNT(frame_f320257f896cecc6f85d87a7137292c6_3) == 2);

        // Framed code:
        {
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_2 = mod_consts[70];
            tmp_expression_value_12 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[17]);

            if (tmp_expression_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 32;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[18]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_kw_defaults_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[71];
            tmp_dict_value_2 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[70];
            tmp_dict_value_3 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[72]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[71];
            tmp_dict_value_3 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[73]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[64];
            tmp_dict_value_3 = mod_consts[1];
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__2___new__(tmp_kw_defaults_1, tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[64];
            tmp_dict_value_4 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[49]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[49]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 36;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__3_cancel(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[76], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_res = MAPPING_HAS_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[78]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_5 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[78]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[78]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_5 = mod_consts[64];
            tmp_dict_value_5 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[72]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_1 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__4_deadline(tmp_annotations_4);

            frame_f320257f896cecc6f85d87a7137292c6_3->m_frame.f_lineno = 40;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[64];
            tmp_dict_value_6 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[72]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__4_deadline(tmp_annotations_5);

            frame_f320257f896cecc6f85d87a7137292c6_3->m_frame.f_lineno = 40;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[70], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_expression_value_13 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[70]);

            if (unlikely(tmp_expression_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[70]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[80]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_7 = mod_consts[62];
            tmp_dict_value_7 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[72]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[64];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__5_deadline(tmp_annotations_6);

            frame_f320257f896cecc6f85d87a7137292c6_3->m_frame.f_lineno = 50;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[70], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_res = MAPPING_HAS_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[78]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_8 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[78]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[78]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_8 = mod_consts[64];
            tmp_dict_value_8 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[73]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__6_cancel_called(tmp_annotations_7);

            frame_f320257f896cecc6f85d87a7137292c6_3->m_frame.f_lineno = 54;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[64];
            tmp_dict_value_9 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[73]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__6_cancel_called(tmp_annotations_8);

            frame_f320257f896cecc6f85d87a7137292c6_3->m_frame.f_lineno = 54;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_res = MAPPING_HAS_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[78]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_10 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[78]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[78]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_10 = mod_consts[64];
            tmp_dict_value_10 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[73]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__7_shield(tmp_annotations_9);

            frame_f320257f896cecc6f85d87a7137292c6_3->m_frame.f_lineno = 59;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_11 = mod_consts[64];
            tmp_dict_value_11 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[73]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__7_shield(tmp_annotations_10);

            frame_f320257f896cecc6f85d87a7137292c6_3->m_frame.f_lineno = 59;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_expression_value_14 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[71]);

            if (unlikely(tmp_expression_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[71]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[80]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_12 = mod_consts[62];
            tmp_dict_value_12 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[73]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[64];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__8_shield(tmp_annotations_11);

            frame_f320257f896cecc6f85d87a7137292c6_3->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[83]);


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__9___enter__(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_5;
            tmp_dict_key_13 = mod_consts[85];
            tmp_expression_value_15 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[37]);

            if (tmp_expression_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[37]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_16 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[38]);

            if (tmp_expression_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_15);

                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_5 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[86]);

            if (tmp_subscript_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_5 = PyExc_BaseException;
                    Py_INCREF(tmp_subscript_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_16);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_subscript_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_15);

                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_15);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_8;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[87];
                tmp_expression_value_17 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[37]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[37]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 79;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[86]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = PyExc_BaseException;
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[88];
                tmp_expression_value_18 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[37]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[37]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 80;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[36]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_subscript_value_7 == NULL)) {
                            tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                        }

                        if (tmp_subscript_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_18);

                            exception_lineno = 80;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 80;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[64];
                tmp_expression_value_19 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[37]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[37]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 81;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[73]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_19);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 81;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__10___exit__(tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f320257f896cecc6f85d87a7137292c6_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f320257f896cecc6f85d87a7137292c6_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f320257f896cecc6f85d87a7137292c6_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f320257f896cecc6f85d87a7137292c6_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_f320257f896cecc6f85d87a7137292c6_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__2_CancelScope_23, mod_consts[67], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_13 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[1];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_anyio$_core$_tasks$$$class__2_CancelScope_23;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_72ca62b481c5c4dbbfc08d9092058902->m_frame.f_lineno = 23;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_33 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_anyio$_core$_tasks$$$class__2_CancelScope_23);
        locals_anyio$_core$_tasks$$$class__2_CancelScope_23 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_anyio$_core$_tasks$$$class__2_CancelScope_23);
        locals_anyio$_core$_tasks$$$class__2_CancelScope_23 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 23;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_33);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_kw_defaults_2 = DICT_COPY(mod_consts[90]);
        tmp_dict_key_14 = mod_consts[71];
        tmp_dict_value_14 = (PyObject *)&PyBool_Type;
        tmp_annotations_14 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[64];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_kw_defaults_2);
        Py_DECREF(tmp_annotations_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_35 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__11_open_cancel_scope(tmp_kw_defaults_2, tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_35);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_9;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_subscript_value_9 == NULL)) {
            tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_subscript_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_9);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        tmp_assign_source_36 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_36, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_37 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        tmp_condition_result_12 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_21 = tmp_class_creation_3__bases;
        tmp_subscript_value_10 = mod_consts[35];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_10, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_39 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_22 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[52]);
        tmp_condition_result_13 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_23 = tmp_class_creation_3__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[52]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        tmp_tuple_element_10 = mod_consts[20];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_72ca62b481c5c4dbbfc08d9092058902->m_frame.f_lineno = 103;
        tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_24 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[54]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[55];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[56];
        tmp_getattr_default_3 = mod_consts[57];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[56]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 103;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_41;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[20];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_12;
        }
        frame_ef11bac6e37319c7368178b85449390c_4 = MAKE_CLASS_FRAME(codeobj_ef11bac6e37319c7368178b85449390c, module_anyio$_core$_tasks, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ef11bac6e37319c7368178b85449390c_4);
        assert(Py_REFCNT(frame_ef11bac6e37319c7368178b85449390c_4) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_dict_key_15 = mod_consts[92];
            tmp_dict_value_15 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[1]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[1]);

                    if (unlikely(tmp_dict_value_15 == NULL)) {
                        tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
                    }

                    if (tmp_dict_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 104;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__12___init__(tmp_annotations_15);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_dict_key_16 = mod_consts[64];
            tmp_dict_value_16 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[1]);

            if (tmp_dict_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[1]);

                    if (unlikely(tmp_dict_value_16 == NULL)) {
                        tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
                    }

                    if (tmp_dict_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 107;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_16);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__13___enter__(tmp_annotations_16);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_12;
            tmp_dict_key_17 = mod_consts[85];
            tmp_expression_value_26 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[37]);

            if (tmp_expression_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[37]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                    }

                    if (tmp_expression_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 112;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_26);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_27 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[38]);

            if (tmp_expression_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_26);

                        exception_lineno = 112;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_27);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_12 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[86]);

            if (tmp_subscript_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_12 = PyExc_BaseException;
                    Py_INCREF(tmp_subscript_value_12);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_27);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_subscript_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_26);

                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_26);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_17 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_15;
                tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
                Py_DECREF(tmp_dict_value_17);
                assert(!(tmp_res != 0));
                tmp_dict_key_17 = mod_consts[87];
                tmp_expression_value_28 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[37]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[37]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 113;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[86]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = PyExc_BaseException;
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
                Py_DECREF(tmp_dict_value_17);
                assert(!(tmp_res != 0));
                tmp_dict_key_17 = mod_consts[88];
                tmp_expression_value_29 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[37]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[37]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 114;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_14 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[36]);

                if (tmp_subscript_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_subscript_value_14 == NULL)) {
                            tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                        }

                        if (tmp_subscript_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_29);

                            exception_lineno = 114;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_subscript_value_14);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
                Py_DECREF(tmp_dict_value_17);
                assert(!(tmp_res != 0));
                tmp_dict_key_17 = mod_consts[64];
                tmp_expression_value_30 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[37]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[37]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 115;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[73]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_15);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 115;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
                Py_DECREF(tmp_dict_value_17);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_17);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__14___exit__(tmp_annotations_17);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ef11bac6e37319c7368178b85449390c_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ef11bac6e37319c7368178b85449390c_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ef11bac6e37319c7368178b85449390c_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ef11bac6e37319c7368178b85449390c_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_ef11bac6e37319c7368178b85449390c_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_12;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103, mod_consts[67], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_12;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_15 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[20];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_72ca62b481c5c4dbbfc08d9092058902->m_frame.f_lineno = 103;
            tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_42 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_42);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103);
        locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103);
        locals_anyio$_core$_tasks$$$class__3_FailAfterContextManager_103 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 103;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_42);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_16;
        tmp_defaults_2 = mod_consts[97];
        tmp_dict_key_18 = mod_consts[98];
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = (PyObject *)&PyFloat_Type;
        tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_16);
        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_annotations_18 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        Py_DECREF(tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[71];
        tmp_dict_value_18 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_dict_key_18 = mod_consts[64];
        tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_dict_value_18 == NULL)) {
            tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_18);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_44 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__15_fail_after(tmp_defaults_2, tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_19;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_17;
        tmp_defaults_3 = mod_consts[97];
        tmp_dict_key_19 = mod_consts[98];
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = (PyObject *)&PyFloat_Type;
        tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_17);
        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_annotations_19 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        Py_DECREF(tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[71];
        tmp_dict_value_19 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_key_19 = mod_consts[64];
        tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_dict_value_19 == NULL)) {
            tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto dict_build_exception_5;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_annotations_19);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_45 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__16_move_on_after(tmp_defaults_3, tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_annotations_20;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        tmp_dict_key_20 = mod_consts[64];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_annotations_20 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));


        tmp_assign_source_46 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__17_current_effective_deadline(tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_46);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_72ca62b481c5c4dbbfc08d9092058902, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72ca62b481c5c4dbbfc08d9092058902->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72ca62b481c5c4dbbfc08d9092058902, exception_lineno);
    }



    assertFrameObject(frame_72ca62b481c5c4dbbfc08d9092058902);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_annotations_21;
        tmp_annotations_21 = DICT_COPY(mod_consts[101]);


        tmp_assign_source_47 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__18_create_task_group(tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_47);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio._core._tasks", false);

    Py_INCREF(module_anyio$_core$_tasks);
    return module_anyio$_core$_tasks;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$_core$_tasks", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
