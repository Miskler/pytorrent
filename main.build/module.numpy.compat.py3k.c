/* Generated code for Python module 'numpy.compat.py3k'
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

/* The "module_numpy$compat$py3k" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$compat$py3k;
PyDictObject *moduledict_numpy$compat$py3k;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[86];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[86];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("numpy.compat.py3k"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 86; i++) {
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
void checkModuleConstants_numpy$compat$py3k(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 86; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_81c6934e70727c9a12cff46f8a788393;
static PyCodeObject *codeobj_dc6b85b8ae44d6d7c3c7989cd5e9ee7f;
static PyCodeObject *codeobj_2dae85e5b75262d47f2d837b24534723;
static PyCodeObject *codeobj_6367ec1635454b39c5566cb630b348a1;
static PyCodeObject *codeobj_5e8538fc57af7866e0a2ee0ae2fc07d0;
static PyCodeObject *codeobj_040cf4435510c6cbefb4b78de8479558;
static PyCodeObject *codeobj_d4be3e57a0060cb663376cee3dad565d;
static PyCodeObject *codeobj_1c3a1c9f1234de3ae1be55a6bd230529;
static PyCodeObject *codeobj_4111c4c04cc50af647dc8ca368e4703f;
static PyCodeObject *codeobj_940c730cd2807c00dc584934e379d2be;
static PyCodeObject *codeobj_daaa2e3863d9679035ff2ef62c09a96c;
static PyCodeObject *codeobj_4941fb074488ec2bf1e89768bf8b035f;
static PyCodeObject *codeobj_5c9d104090395172bcdf6d105a858bfc;
static PyCodeObject *codeobj_788fabaf65e22092c9f1e376d1473bdd;
static PyCodeObject *codeobj_7ddcf6976ca826a20e7796af5155c50b;
static PyCodeObject *codeobj_3c977063760c890d70c3887196683ac4;
static PyCodeObject *codeobj_c88a28398bf70571781d09433bdacfd6;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[29]; CHECK_OBJECT(module_filename_obj);
    codeobj_81c6934e70727c9a12cff46f8a788393 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[74], NULL, 1, 0, 0);
    codeobj_dc6b85b8ae44d6d7c3c7989cd5e9ee7f = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[74], NULL, 1, 0, 0);
    codeobj_2dae85e5b75262d47f2d837b24534723 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[75], mod_consts[75], NULL, NULL, 0, 0, 0);
    codeobj_6367ec1635454b39c5566cb630b348a1 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[76], NULL, 1, 0, 0);
    codeobj_5e8538fc57af7866e0a2ee0ae2fc07d0 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_VARARGS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[77], NULL, 1, 0, 0);
    codeobj_040cf4435510c6cbefb4b78de8479558 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[78], NULL, 2, 0, 0);
    codeobj_d4be3e57a0060cb663376cee3dad565d = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[79], NULL, 1, 0, 0);
    codeobj_1c3a1c9f1234de3ae1be55a6bd230529 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[80], NULL, 1, 0, 0);
    codeobj_4111c4c04cc50af647dc8ca368e4703f = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[79], NULL, 1, 0, 0);
    codeobj_940c730cd2807c00dc584934e379d2be = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[79], NULL, 1, 0, 0);
    codeobj_daaa2e3863d9679035ff2ef62c09a96c = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[80], NULL, 1, 0, 0);
    codeobj_4941fb074488ec2bf1e89768bf8b035f = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], NULL, NULL, 0, 0, 0);
    codeobj_5c9d104090395172bcdf6d105a858bfc = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[81], NULL, 1, 0, 0);
    codeobj_788fabaf65e22092c9f1e376d1473bdd = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[82], NULL, 1, 0, 0);
    codeobj_7ddcf6976ca826a20e7796af5155c50b = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[83], NULL, 3, 0, 0);
    codeobj_3c977063760c890d70c3887196683ac4 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[49], mod_consts[84], NULL, 2, 0, 0);
    codeobj_c88a28398bf70571781d09433bdacfd6 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[79], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__10_is_pathlib_path();


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__11___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__12___enter__();


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__13___exit__();


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__14_npy_load_module(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__1_asunicode();


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__2_asbytes();


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__3_asstr();


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__4_isfileobj();


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__5_open_latin1(PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__6_sixu();


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__7_getexception();


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__8_asbytes_nested();


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__9_asunicode_nested();


// The module function definitions.
static PyObject *impl_numpy$compat$py3k$$$function__1_asunicode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_940c730cd2807c00dc584934e379d2be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_940c730cd2807c00dc584934e379d2be = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_940c730cd2807c00dc584934e379d2be)) {
        Py_XDECREF(cache_frame_940c730cd2807c00dc584934e379d2be);

#if _DEBUG_REFCOUNTS
        if (cache_frame_940c730cd2807c00dc584934e379d2be == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_940c730cd2807c00dc584934e379d2be = MAKE_FUNCTION_FRAME(codeobj_940c730cd2807c00dc584934e379d2be, module_numpy$compat$py3k, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_940c730cd2807c00dc584934e379d2be->m_type_description == NULL);
    frame_940c730cd2807c00dc584934e379d2be = cache_frame_940c730cd2807c00dc584934e379d2be;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_940c730cd2807c00dc584934e379d2be);
    assert(Py_REFCNT(frame_940c730cd2807c00dc584934e379d2be) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_s);
        tmp_expression_value_1 = par_s;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_940c730cd2807c00dc584934e379d2be->m_frame.f_lineno = 36;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[2]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_s);
        tmp_unicode_arg_1 = par_s;
        tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
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
        exception_tb = MAKE_TRACEBACK(frame_940c730cd2807c00dc584934e379d2be, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_940c730cd2807c00dc584934e379d2be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_940c730cd2807c00dc584934e379d2be, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_940c730cd2807c00dc584934e379d2be,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_940c730cd2807c00dc584934e379d2be == cache_frame_940c730cd2807c00dc584934e379d2be) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_940c730cd2807c00dc584934e379d2be);
        cache_frame_940c730cd2807c00dc584934e379d2be = NULL;
    }

    assertFrameObject(frame_940c730cd2807c00dc584934e379d2be);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$compat$py3k$$$function__2_asbytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_d4be3e57a0060cb663376cee3dad565d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d4be3e57a0060cb663376cee3dad565d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d4be3e57a0060cb663376cee3dad565d)) {
        Py_XDECREF(cache_frame_d4be3e57a0060cb663376cee3dad565d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d4be3e57a0060cb663376cee3dad565d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d4be3e57a0060cb663376cee3dad565d = MAKE_FUNCTION_FRAME(codeobj_d4be3e57a0060cb663376cee3dad565d, module_numpy$compat$py3k, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d4be3e57a0060cb663376cee3dad565d->m_type_description == NULL);
    frame_d4be3e57a0060cb663376cee3dad565d = cache_frame_d4be3e57a0060cb663376cee3dad565d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d4be3e57a0060cb663376cee3dad565d);
    assert(Py_REFCNT(frame_d4be3e57a0060cb663376cee3dad565d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
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
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_s);
        tmp_unicode_arg_1 = par_s;
        tmp_expression_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d4be3e57a0060cb663376cee3dad565d->m_frame.f_lineno = 42;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[2]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
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
        exception_tb = MAKE_TRACEBACK(frame_d4be3e57a0060cb663376cee3dad565d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4be3e57a0060cb663376cee3dad565d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4be3e57a0060cb663376cee3dad565d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d4be3e57a0060cb663376cee3dad565d,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_d4be3e57a0060cb663376cee3dad565d == cache_frame_d4be3e57a0060cb663376cee3dad565d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d4be3e57a0060cb663376cee3dad565d);
        cache_frame_d4be3e57a0060cb663376cee3dad565d = NULL;
    }

    assertFrameObject(frame_d4be3e57a0060cb663376cee3dad565d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$compat$py3k$$$function__3_asstr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_4111c4c04cc50af647dc8ca368e4703f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4111c4c04cc50af647dc8ca368e4703f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4111c4c04cc50af647dc8ca368e4703f)) {
        Py_XDECREF(cache_frame_4111c4c04cc50af647dc8ca368e4703f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4111c4c04cc50af647dc8ca368e4703f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4111c4c04cc50af647dc8ca368e4703f = MAKE_FUNCTION_FRAME(codeobj_4111c4c04cc50af647dc8ca368e4703f, module_numpy$compat$py3k, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4111c4c04cc50af647dc8ca368e4703f->m_type_description == NULL);
    frame_4111c4c04cc50af647dc8ca368e4703f = cache_frame_4111c4c04cc50af647dc8ca368e4703f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4111c4c04cc50af647dc8ca368e4703f);
    assert(Py_REFCNT(frame_4111c4c04cc50af647dc8ca368e4703f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_1 = par_s;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_s);
        tmp_expression_value_1 = par_s;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4111c4c04cc50af647dc8ca368e4703f->m_frame.f_lineno = 46;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[2]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_s);
        tmp_unicode_arg_1 = par_s;
        tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
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
        exception_tb = MAKE_TRACEBACK(frame_4111c4c04cc50af647dc8ca368e4703f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4111c4c04cc50af647dc8ca368e4703f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4111c4c04cc50af647dc8ca368e4703f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4111c4c04cc50af647dc8ca368e4703f,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_4111c4c04cc50af647dc8ca368e4703f == cache_frame_4111c4c04cc50af647dc8ca368e4703f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4111c4c04cc50af647dc8ca368e4703f);
        cache_frame_4111c4c04cc50af647dc8ca368e4703f = NULL;
    }

    assertFrameObject(frame_4111c4c04cc50af647dc8ca368e4703f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$compat$py3k$$$function__4_isfileobj(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    struct Nuitka_FrameObject *frame_788fabaf65e22092c9f1e376d1473bdd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_788fabaf65e22092c9f1e376d1473bdd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_788fabaf65e22092c9f1e376d1473bdd)) {
        Py_XDECREF(cache_frame_788fabaf65e22092c9f1e376d1473bdd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_788fabaf65e22092c9f1e376d1473bdd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_788fabaf65e22092c9f1e376d1473bdd = MAKE_FUNCTION_FRAME(codeobj_788fabaf65e22092c9f1e376d1473bdd, module_numpy$compat$py3k, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_788fabaf65e22092c9f1e376d1473bdd->m_type_description == NULL);
    frame_788fabaf65e22092c9f1e376d1473bdd = cache_frame_788fabaf65e22092c9f1e376d1473bdd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_788fabaf65e22092c9f1e376d1473bdd);
    assert(Py_REFCNT(frame_788fabaf65e22092c9f1e376d1473bdd) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_f);
        tmp_isinstance_inst_1 = par_f;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            assert(!(tmp_expression_value_2 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            assert(!(tmp_expression_value_3 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_isinstance_cls_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_cls_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_788fabaf65e22092c9f1e376d1473bdd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_788fabaf65e22092c9f1e376d1473bdd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_788fabaf65e22092c9f1e376d1473bdd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_788fabaf65e22092c9f1e376d1473bdd,
        type_description_1,
        par_f
    );


    // Release cached frame if used for exception.
    if (frame_788fabaf65e22092c9f1e376d1473bdd == cache_frame_788fabaf65e22092c9f1e376d1473bdd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_788fabaf65e22092c9f1e376d1473bdd);
        cache_frame_788fabaf65e22092c9f1e376d1473bdd = NULL;
    }

    assertFrameObject(frame_788fabaf65e22092c9f1e376d1473bdd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$compat$py3k$$$function__5_open_latin1(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    PyObject *par_mode = python_pars[1];
    struct Nuitka_FrameObject *frame_3c977063760c890d70c3887196683ac4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3c977063760c890d70c3887196683ac4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3c977063760c890d70c3887196683ac4)) {
        Py_XDECREF(cache_frame_3c977063760c890d70c3887196683ac4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c977063760c890d70c3887196683ac4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c977063760c890d70c3887196683ac4 = MAKE_FUNCTION_FRAME(codeobj_3c977063760c890d70c3887196683ac4, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3c977063760c890d70c3887196683ac4->m_type_description == NULL);
    frame_3c977063760c890d70c3887196683ac4 = cache_frame_3c977063760c890d70c3887196683ac4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3c977063760c890d70c3887196683ac4);
    assert(Py_REFCNT(frame_3c977063760c890d70c3887196683ac4) == 2);

    // Framed code:
    {
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        PyObject *tmp_open_encoding_1;
        CHECK_OBJECT(par_filename);
        tmp_open_filename_1 = par_filename;
        CHECK_OBJECT(par_mode);
        tmp_open_mode_1 = par_mode;
        tmp_open_encoding_1 = mod_consts[8];
        tmp_return_value = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, tmp_open_encoding_1, NULL, NULL, NULL, NULL);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
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
        exception_tb = MAKE_TRACEBACK(frame_3c977063760c890d70c3887196683ac4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c977063760c890d70c3887196683ac4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c977063760c890d70c3887196683ac4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c977063760c890d70c3887196683ac4,
        type_description_1,
        par_filename,
        par_mode
    );


    // Release cached frame if used for exception.
    if (frame_3c977063760c890d70c3887196683ac4 == cache_frame_3c977063760c890d70c3887196683ac4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3c977063760c890d70c3887196683ac4);
        cache_frame_3c977063760c890d70c3887196683ac4 = NULL;
    }

    assertFrameObject(frame_3c977063760c890d70c3887196683ac4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$compat$py3k$$$function__6_sixu(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$compat$py3k$$$function__7_getexception(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_4941fb074488ec2bf1e89768bf8b035f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4941fb074488ec2bf1e89768bf8b035f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4941fb074488ec2bf1e89768bf8b035f)) {
        Py_XDECREF(cache_frame_4941fb074488ec2bf1e89768bf8b035f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4941fb074488ec2bf1e89768bf8b035f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4941fb074488ec2bf1e89768bf8b035f = MAKE_FUNCTION_FRAME(codeobj_4941fb074488ec2bf1e89768bf8b035f, module_numpy$compat$py3k, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4941fb074488ec2bf1e89768bf8b035f->m_type_description == NULL);
    frame_4941fb074488ec2bf1e89768bf8b035f = cache_frame_4941fb074488ec2bf1e89768bf8b035f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4941fb074488ec2bf1e89768bf8b035f);
    assert(Py_REFCNT(frame_4941fb074488ec2bf1e89768bf8b035f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_4941fb074488ec2bf1e89768bf8b035f->m_frame.f_lineno = 61;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[11];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

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
        exception_tb = MAKE_TRACEBACK(frame_4941fb074488ec2bf1e89768bf8b035f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4941fb074488ec2bf1e89768bf8b035f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4941fb074488ec2bf1e89768bf8b035f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4941fb074488ec2bf1e89768bf8b035f,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_4941fb074488ec2bf1e89768bf8b035f == cache_frame_4941fb074488ec2bf1e89768bf8b035f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4941fb074488ec2bf1e89768bf8b035f);
        cache_frame_4941fb074488ec2bf1e89768bf8b035f = NULL;
    }

    assertFrameObject(frame_4941fb074488ec2bf1e89768bf8b035f);

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


static PyObject *impl_numpy$compat$py3k$$$function__8_asbytes_nested(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *outline_0_var_y = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_1c3a1c9f1234de3ae1be55a6bd230529;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_81c6934e70727c9a12cff46f8a788393_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_81c6934e70727c9a12cff46f8a788393_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_1c3a1c9f1234de3ae1be55a6bd230529 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c3a1c9f1234de3ae1be55a6bd230529)) {
        Py_XDECREF(cache_frame_1c3a1c9f1234de3ae1be55a6bd230529);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c3a1c9f1234de3ae1be55a6bd230529 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c3a1c9f1234de3ae1be55a6bd230529 = MAKE_FUNCTION_FRAME(codeobj_1c3a1c9f1234de3ae1be55a6bd230529, module_numpy$compat$py3k, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c3a1c9f1234de3ae1be55a6bd230529->m_type_description == NULL);
    frame_1c3a1c9f1234de3ae1be55a6bd230529 = cache_frame_1c3a1c9f1234de3ae1be55a6bd230529;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c3a1c9f1234de3ae1be55a6bd230529);
    assert(Py_REFCNT(frame_1c3a1c9f1234de3ae1be55a6bd230529) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_1 = par_x;
        tmp_attribute_value_1 = mod_consts[12];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_cls_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_x);
        tmp_iter_arg_1 = par_x;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    if (isFrameUnusable(cache_frame_81c6934e70727c9a12cff46f8a788393_2)) {
        Py_XDECREF(cache_frame_81c6934e70727c9a12cff46f8a788393_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81c6934e70727c9a12cff46f8a788393_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81c6934e70727c9a12cff46f8a788393_2 = MAKE_FUNCTION_FRAME(codeobj_81c6934e70727c9a12cff46f8a788393, module_numpy$compat$py3k, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81c6934e70727c9a12cff46f8a788393_2->m_type_description == NULL);
    frame_81c6934e70727c9a12cff46f8a788393_2 = cache_frame_81c6934e70727c9a12cff46f8a788393_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_81c6934e70727c9a12cff46f8a788393_2);
    assert(Py_REFCNT(frame_81c6934e70727c9a12cff46f8a788393_2) == 2);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 65;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_y;
            outline_0_var_y = tmp_assign_source_4;
            Py_INCREF(outline_0_var_y);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(outline_0_var_y);
        tmp_args_element_value_1 = outline_0_var_y;
        frame_81c6934e70727c9a12cff46f8a788393_2->m_frame.f_lineno = 65;
        tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 65;
        type_description_2 = "o";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
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
    try_except_handler_2:;
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

    goto try_return_handler_1;
    frame_exception_exit_2:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81c6934e70727c9a12cff46f8a788393_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81c6934e70727c9a12cff46f8a788393_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81c6934e70727c9a12cff46f8a788393_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81c6934e70727c9a12cff46f8a788393_2,
        type_description_2,
        outline_0_var_y
    );


    // Release cached frame if used for exception.
    if (frame_81c6934e70727c9a12cff46f8a788393_2 == cache_frame_81c6934e70727c9a12cff46f8a788393_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81c6934e70727c9a12cff46f8a788393_2);
        cache_frame_81c6934e70727c9a12cff46f8a788393_2 = NULL;
    }

    assertFrameObject(frame_81c6934e70727c9a12cff46f8a788393_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;
    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "o";
    goto try_except_handler_1;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_y);
    outline_0_var_y = NULL;
    goto outline_result_1;
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

    Py_XDECREF(outline_0_var_y);
    outline_0_var_y = NULL;
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
    exception_lineno = 65;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_1c3a1c9f1234de3ae1be55a6bd230529->m_frame.f_lineno = 67;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c3a1c9f1234de3ae1be55a6bd230529, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c3a1c9f1234de3ae1be55a6bd230529->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c3a1c9f1234de3ae1be55a6bd230529, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c3a1c9f1234de3ae1be55a6bd230529,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_1c3a1c9f1234de3ae1be55a6bd230529 == cache_frame_1c3a1c9f1234de3ae1be55a6bd230529) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c3a1c9f1234de3ae1be55a6bd230529);
        cache_frame_1c3a1c9f1234de3ae1be55a6bd230529 = NULL;
    }

    assertFrameObject(frame_1c3a1c9f1234de3ae1be55a6bd230529);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$compat$py3k$$$function__9_asunicode_nested(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *outline_0_var_y = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_daaa2e3863d9679035ff2ef62c09a96c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_daaa2e3863d9679035ff2ef62c09a96c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_daaa2e3863d9679035ff2ef62c09a96c)) {
        Py_XDECREF(cache_frame_daaa2e3863d9679035ff2ef62c09a96c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_daaa2e3863d9679035ff2ef62c09a96c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_daaa2e3863d9679035ff2ef62c09a96c = MAKE_FUNCTION_FRAME(codeobj_daaa2e3863d9679035ff2ef62c09a96c, module_numpy$compat$py3k, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_daaa2e3863d9679035ff2ef62c09a96c->m_type_description == NULL);
    frame_daaa2e3863d9679035ff2ef62c09a96c = cache_frame_daaa2e3863d9679035ff2ef62c09a96c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_daaa2e3863d9679035ff2ef62c09a96c);
    assert(Py_REFCNT(frame_daaa2e3863d9679035ff2ef62c09a96c) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_1 = par_x;
        tmp_attribute_value_1 = mod_consts[12];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_cls_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_x);
        tmp_iter_arg_1 = par_x;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    if (isFrameUnusable(cache_frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2)) {
        Py_XDECREF(cache_frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2 = MAKE_FUNCTION_FRAME(codeobj_dc6b85b8ae44d6d7c3c7989cd5e9ee7f, module_numpy$compat$py3k, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2->m_type_description == NULL);
    frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2 = cache_frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2);
    assert(Py_REFCNT(frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2) == 2);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 71;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_y;
            outline_0_var_y = tmp_assign_source_4;
            Py_INCREF(outline_0_var_y);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(outline_0_var_y);
        tmp_args_element_value_1 = outline_0_var_y;
        frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2->m_frame.f_lineno = 71;
        tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 71;
        type_description_2 = "o";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
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
    try_except_handler_2:;
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

    goto try_return_handler_1;
    frame_exception_exit_2:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2,
        type_description_2,
        outline_0_var_y
    );


    // Release cached frame if used for exception.
    if (frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2 == cache_frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2);
        cache_frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2 = NULL;
    }

    assertFrameObject(frame_dc6b85b8ae44d6d7c3c7989cd5e9ee7f_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;
    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "o";
    goto try_except_handler_1;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_y);
    outline_0_var_y = NULL;
    goto outline_result_1;
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

    Py_XDECREF(outline_0_var_y);
    outline_0_var_y = NULL;
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
    exception_lineno = 71;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_daaa2e3863d9679035ff2ef62c09a96c->m_frame.f_lineno = 73;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_daaa2e3863d9679035ff2ef62c09a96c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_daaa2e3863d9679035ff2ef62c09a96c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_daaa2e3863d9679035ff2ef62c09a96c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_daaa2e3863d9679035ff2ef62c09a96c,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_daaa2e3863d9679035ff2ef62c09a96c == cache_frame_daaa2e3863d9679035ff2ef62c09a96c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_daaa2e3863d9679035ff2ef62c09a96c);
        cache_frame_daaa2e3863d9679035ff2ef62c09a96c = NULL;
    }

    assertFrameObject(frame_daaa2e3863d9679035ff2ef62c09a96c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$compat$py3k$$$function__10_is_pathlib_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_5c9d104090395172bcdf6d105a858bfc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5c9d104090395172bcdf6d105a858bfc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c9d104090395172bcdf6d105a858bfc)) {
        Py_XDECREF(cache_frame_5c9d104090395172bcdf6d105a858bfc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c9d104090395172bcdf6d105a858bfc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c9d104090395172bcdf6d105a858bfc = MAKE_FUNCTION_FRAME(codeobj_5c9d104090395172bcdf6d105a858bfc, module_numpy$compat$py3k, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c9d104090395172bcdf6d105a858bfc->m_type_description == NULL);
    frame_5c9d104090395172bcdf6d105a858bfc = cache_frame_5c9d104090395172bcdf6d105a858bfc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5c9d104090395172bcdf6d105a858bfc);
    assert(Py_REFCNT(frame_5c9d104090395172bcdf6d105a858bfc) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_obj);
        tmp_isinstance_inst_1 = par_obj;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_5c9d104090395172bcdf6d105a858bfc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c9d104090395172bcdf6d105a858bfc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c9d104090395172bcdf6d105a858bfc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c9d104090395172bcdf6d105a858bfc,
        type_description_1,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_5c9d104090395172bcdf6d105a858bfc == cache_frame_5c9d104090395172bcdf6d105a858bfc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c9d104090395172bcdf6d105a858bfc);
        cache_frame_5c9d104090395172bcdf6d105a858bfc = NULL;
    }

    assertFrameObject(frame_5c9d104090395172bcdf6d105a858bfc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$compat$py3k$$$function__11___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_enter_result = python_pars[1];
    struct Nuitka_FrameObject *frame_040cf4435510c6cbefb4b78de8479558;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_040cf4435510c6cbefb4b78de8479558 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_040cf4435510c6cbefb4b78de8479558)) {
        Py_XDECREF(cache_frame_040cf4435510c6cbefb4b78de8479558);

#if _DEBUG_REFCOUNTS
        if (cache_frame_040cf4435510c6cbefb4b78de8479558 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_040cf4435510c6cbefb4b78de8479558 = MAKE_FUNCTION_FRAME(codeobj_040cf4435510c6cbefb4b78de8479558, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_040cf4435510c6cbefb4b78de8479558->m_type_description == NULL);
    frame_040cf4435510c6cbefb4b78de8479558 = cache_frame_040cf4435510c6cbefb4b78de8479558;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_040cf4435510c6cbefb4b78de8479558);
    assert(Py_REFCNT(frame_040cf4435510c6cbefb4b78de8479558) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_enter_result);
        tmp_assattr_value_1 = par_enter_result;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[20], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_040cf4435510c6cbefb4b78de8479558, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_040cf4435510c6cbefb4b78de8479558->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_040cf4435510c6cbefb4b78de8479558, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_040cf4435510c6cbefb4b78de8479558,
        type_description_1,
        par_self,
        par_enter_result
    );


    // Release cached frame if used for exception.
    if (frame_040cf4435510c6cbefb4b78de8479558 == cache_frame_040cf4435510c6cbefb4b78de8479558) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_040cf4435510c6cbefb4b78de8479558);
        cache_frame_040cf4435510c6cbefb4b78de8479558 = NULL;
    }

    assertFrameObject(frame_040cf4435510c6cbefb4b78de8479558);

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
    CHECK_OBJECT(par_enter_result);
    Py_DECREF(par_enter_result);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_enter_result);
    Py_DECREF(par_enter_result);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$compat$py3k$$$function__12___enter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6367ec1635454b39c5566cb630b348a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6367ec1635454b39c5566cb630b348a1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6367ec1635454b39c5566cb630b348a1)) {
        Py_XDECREF(cache_frame_6367ec1635454b39c5566cb630b348a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6367ec1635454b39c5566cb630b348a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6367ec1635454b39c5566cb630b348a1 = MAKE_FUNCTION_FRAME(codeobj_6367ec1635454b39c5566cb630b348a1, module_numpy$compat$py3k, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6367ec1635454b39c5566cb630b348a1->m_type_description == NULL);
    frame_6367ec1635454b39c5566cb630b348a1 = cache_frame_6367ec1635454b39c5566cb630b348a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6367ec1635454b39c5566cb630b348a1);
    assert(Py_REFCNT(frame_6367ec1635454b39c5566cb630b348a1) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
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
        exception_tb = MAKE_TRACEBACK(frame_6367ec1635454b39c5566cb630b348a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6367ec1635454b39c5566cb630b348a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6367ec1635454b39c5566cb630b348a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6367ec1635454b39c5566cb630b348a1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6367ec1635454b39c5566cb630b348a1 == cache_frame_6367ec1635454b39c5566cb630b348a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6367ec1635454b39c5566cb630b348a1);
        cache_frame_6367ec1635454b39c5566cb630b348a1 = NULL;
    }

    assertFrameObject(frame_6367ec1635454b39c5566cb630b348a1);

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


static PyObject *impl_numpy$compat$py3k$$$function__14_npy_load_module(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_fn = python_pars[1];
    PyObject *par_info = python_pars[2];
    PyObject *var_SourceFileLoader = NULL;
    struct Nuitka_FrameObject *frame_7ddcf6976ca826a20e7796af5155c50b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7ddcf6976ca826a20e7796af5155c50b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7ddcf6976ca826a20e7796af5155c50b)) {
        Py_XDECREF(cache_frame_7ddcf6976ca826a20e7796af5155c50b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ddcf6976ca826a20e7796af5155c50b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ddcf6976ca826a20e7796af5155c50b = MAKE_FUNCTION_FRAME(codeobj_7ddcf6976ca826a20e7796af5155c50b, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ddcf6976ca826a20e7796af5155c50b->m_type_description == NULL);
    frame_7ddcf6976ca826a20e7796af5155c50b = cache_frame_7ddcf6976ca826a20e7796af5155c50b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ddcf6976ca826a20e7796af5155c50b);
    assert(Py_REFCNT(frame_7ddcf6976ca826a20e7796af5155c50b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[21];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$compat$py3k;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[22];
        tmp_level_value_1 = mod_consts[23];
        frame_7ddcf6976ca826a20e7796af5155c50b->m_frame.f_lineno = 132;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$compat$py3k,
                mod_consts[24],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[24]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_SourceFileLoader == NULL);
        var_SourceFileLoader = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_SourceFileLoader);
        tmp_called_value_1 = var_SourceFileLoader;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        CHECK_OBJECT(par_fn);
        tmp_args_element_value_2 = par_fn;
        frame_7ddcf6976ca826a20e7796af5155c50b->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7ddcf6976ca826a20e7796af5155c50b->m_frame.f_lineno = 133;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[25]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
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
        exception_tb = MAKE_TRACEBACK(frame_7ddcf6976ca826a20e7796af5155c50b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ddcf6976ca826a20e7796af5155c50b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ddcf6976ca826a20e7796af5155c50b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ddcf6976ca826a20e7796af5155c50b,
        type_description_1,
        par_name,
        par_fn,
        par_info,
        var_SourceFileLoader
    );


    // Release cached frame if used for exception.
    if (frame_7ddcf6976ca826a20e7796af5155c50b == cache_frame_7ddcf6976ca826a20e7796af5155c50b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ddcf6976ca826a20e7796af5155c50b);
        cache_frame_7ddcf6976ca826a20e7796af5155c50b = NULL;
    }

    assertFrameObject(frame_7ddcf6976ca826a20e7796af5155c50b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_SourceFileLoader);
    Py_DECREF(var_SourceFileLoader);
    var_SourceFileLoader = NULL;
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

    Py_XDECREF(var_SourceFileLoader);
    var_SourceFileLoader = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);
    CHECK_OBJECT(par_info);
    Py_DECREF(par_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__10_is_pathlib_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__10_is_pathlib_path,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5c9d104090395172bcdf6d105a858bfc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__11___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__11___init__,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_040cf4435510c6cbefb4b78de8479558,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__12___enter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__12___enter__,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_6367ec1635454b39c5566cb630b348a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__13___exit__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[66],
#endif
        codeobj_5e8538fc57af7866e0a2ee0ae2fc07d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__14_npy_load_module(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__14_npy_load_module,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ddcf6976ca826a20e7796af5155c50b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__1_asunicode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__1_asunicode,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_940c730cd2807c00dc584934e379d2be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__2_asbytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__2_asbytes,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d4be3e57a0060cb663376cee3dad565d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__3_asstr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__3_asstr,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4111c4c04cc50af647dc8ca368e4703f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__4_isfileobj() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__4_isfileobj,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_788fabaf65e22092c9f1e376d1473bdd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__5_open_latin1(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__5_open_latin1,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3c977063760c890d70c3887196683ac4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__6_sixu() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__6_sixu,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c88a28398bf70571781d09433bdacfd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__7_getexception() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__7_getexception,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4941fb074488ec2bf1e89768bf8b035f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__8_asbytes_nested() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__8_asbytes_nested,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c3a1c9f1234de3ae1be55a6bd230529,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function__9_asunicode_nested() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function__9_asunicode_nested,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_daaa2e3863d9679035ff2ef62c09a96c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$compat$py3k,
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

function_impl_code functable_numpy$compat$py3k[] = {
    impl_numpy$compat$py3k$$$function__1_asunicode,
    impl_numpy$compat$py3k$$$function__2_asbytes,
    impl_numpy$compat$py3k$$$function__3_asstr,
    impl_numpy$compat$py3k$$$function__4_isfileobj,
    impl_numpy$compat$py3k$$$function__5_open_latin1,
    impl_numpy$compat$py3k$$$function__6_sixu,
    impl_numpy$compat$py3k$$$function__7_getexception,
    impl_numpy$compat$py3k$$$function__8_asbytes_nested,
    impl_numpy$compat$py3k$$$function__9_asunicode_nested,
    impl_numpy$compat$py3k$$$function__10_is_pathlib_path,
    impl_numpy$compat$py3k$$$function__11___init__,
    impl_numpy$compat$py3k$$$function__12___enter__,
    NULL,
    impl_numpy$compat$py3k$$$function__14_npy_load_module,
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

    function_impl_code *current = functable_numpy$compat$py3k;
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

    if (offset > sizeof(functable_numpy$compat$py3k) || offset < 0) {
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
        functable_numpy$compat$py3k[offset],
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
        module_numpy$compat$py3k,
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
PyObject *modulecode_numpy$compat$py3k(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy.compat.py3k");

    // Store the module for future use.
    module_numpy$compat$py3k = module;

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
        PRINT_STRING("numpy.compat.py3k: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy.compat.py3k: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy.compat.py3k: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnumpy$compat$py3k\n");

    moduledict_numpy$compat$py3k = MODULE_DICT(module_numpy$compat$py3k);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$compat$py3k,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$compat$py3k,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[85]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$compat$py3k,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$compat$py3k,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$compat$py3k,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$compat$py3k);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_numpy$compat$py3k);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_2dae85e5b75262d47f2d837b24534723;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84 = NULL;
    PyObject *tmp_dictset_value;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_2);
    }
    frame_2dae85e5b75262d47f2d837b24534723 = MAKE_MODULE_FRAME(codeobj_2dae85e5b75262d47f2d837b24534723, module_numpy$compat$py3k);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2dae85e5b75262d47f2d837b24534723);
    assert(Py_REFCNT(frame_2dae85e5b75262d47f2d837b24534723) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[29];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[31]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[31]);

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
        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(mod_consts[35]);
        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[38];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$compat$py3k;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[39];
        tmp_level_value_1 = mod_consts[23];
        frame_2dae85e5b75262d47f2d837b24534723->m_frame.f_lineno = 21;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$compat$py3k,
                mod_consts[18],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_IO();
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[40];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$compat$py3k;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[23];
        frame_2dae85e5b75262d47f2d837b24534723->m_frame.f_lineno = 24;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_9);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_2dae85e5b75262d47f2d837b24534723, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_2dae85e5b75262d47f2d837b24534723, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[41];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$compat$py3k;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[23];
        frame_2dae85e5b75262d47f2d837b24534723->m_frame.f_lineno = 26;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_10);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 23;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2dae85e5b75262d47f2d837b24534723->m_frame) frame_2dae85e5b75262d47f2d837b24534723->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = (PyObject *)&PyLong_Type;
        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = (PyObject *)&PyUnicode_Type;
        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = (PyObject *)&PyUnicode_Type;
        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assign_source_15 == NULL)) {
            tmp_assign_source_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_numpy$compat$py3k$$$function__1_asunicode();

        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_numpy$compat$py3k$$$function__2_asbytes();

        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_numpy$compat$py3k$$$function__3_asstr();

        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_numpy$compat$py3k$$$function__4_isfileobj();

        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[48];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_20 = MAKE_FUNCTION_numpy$compat$py3k$$$function__5_open_latin1(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_numpy$compat$py3k$$$function__6_sixu();

        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_numpy$compat$py3k$$$function__7_getexception();

        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_numpy$compat$py3k$$$function__8_asbytes_nested();

        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_numpy$compat$py3k$$$function__9_asunicode_nested();

        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_numpy$compat$py3k$$$function__10_is_pathlib_path();

        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyDict_SetItem(locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyDict_SetItem(locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84, mod_consts[28], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyDict_SetItem(locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84, mod_consts[59], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[60];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_numpy$compat$py3k$$$function__11___init__(tmp_defaults_2);

            tmp_res = PyDict_SetItem(locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_numpy$compat$py3k$$$function__12___enter__();

        tmp_res = PyDict_SetItem(locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84, mod_consts[63], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_numpy$compat$py3k$$$function__13___exit__();

        tmp_res = PyDict_SetItem(locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84, mod_consts[65], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[58];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[67];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_2dae85e5b75262d47f2d837b24534723->m_frame.f_lineno = 84;
            tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_30;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_29 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_29);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84);
        locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84 = NULL;
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

        Py_DECREF(locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84);
        locals_numpy$compat$py3k$$$class__1_contextlib_nullcontext_84 = NULL;
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
        exception_lineno = 84;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_29);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
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
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[60];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_31 = MAKE_FUNCTION_numpy$compat$py3k$$$function__14_npy_load_module(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_assign_source_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[69]);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_assign_source_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[71]);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_33);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2dae85e5b75262d47f2d837b24534723, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2dae85e5b75262d47f2d837b24534723->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2dae85e5b75262d47f2d837b24534723, exception_lineno);
    }



    assertFrameObject(frame_2dae85e5b75262d47f2d837b24534723);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy.compat.py3k", false);

    Py_INCREF(module_numpy$compat$py3k);
    return module_numpy$compat$py3k;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$compat$py3k", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
