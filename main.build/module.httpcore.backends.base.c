/* Generated code for Python module 'httpcore.backends.base'
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

/* The "module_httpcore$backends$base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpcore$backends$base;
PyDictObject *moduledict_httpcore$backends$base;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[73];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[73];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("httpcore.backends.base"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 73; i++) {
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
void checkModuleConstants_httpcore$backends$base(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 73; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_de14affb6206f98e846fb418e9f31af1;
static PyCodeObject *codeobj_eed45cac49ca5858141a606411335b6c;
static PyCodeObject *codeobj_3cd135ba74c3a523a8940c09d1f326a6;
static PyCodeObject *codeobj_73d7cae32016b24ee1e77d731e1f8014;
static PyCodeObject *codeobj_c999226a5b8ab0402f4b1cff15108b9b;
static PyCodeObject *codeobj_6b6edc1184be3c9e8ac0b2c30aef5402;
static PyCodeObject *codeobj_9d899c5a35bb61767a357b1717668596;
static PyCodeObject *codeobj_f1ecce918321881cdb8d9fddf1349d21;
static PyCodeObject *codeobj_69b59a8d575ce616664d864ffe095e97;
static PyCodeObject *codeobj_b1b603e0681a760aa171618368ab0867;
static PyCodeObject *codeobj_1746fbd3e60a1e15db0b5093dfaf2f14;
static PyCodeObject *codeobj_28f1a8e944487e23d9c8181b4bab148e;
static PyCodeObject *codeobj_4099422005a0a95247524b3aead11ef2;
static PyCodeObject *codeobj_f4eb3d3e49faaeef5bbdedc22165bf6e;
static PyCodeObject *codeobj_33bc19cdf1447355e60c8bf71e368803;
static PyCodeObject *codeobj_4c9108e9771040250688224e066851e5;
static PyCodeObject *codeobj_7249fa57097a1940fd14092e74c2be6f;
static PyCodeObject *codeobj_094e56b21aeb90b8781daf6853576c2c;
static PyCodeObject *codeobj_e7d64e71179d3bb794d683fe5b7f8536;
static PyCodeObject *codeobj_0dc3869ad12ce57825334f11134096a0;
static PyCodeObject *codeobj_9c7c32e5c44db2e24ea9817816536a53;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[16]; CHECK_OBJECT(module_filename_obj);
    codeobj_de14affb6206f98e846fb418e9f31af1 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[62], mod_consts[62], NULL, NULL, 0, 0, 0);
    codeobj_eed45cac49ca5858141a606411335b6c = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[63], NULL, 0, 0, 0);
    codeobj_3cd135ba74c3a523a8940c09d1f326a6 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[63], NULL, 0, 0, 0);
    codeobj_73d7cae32016b24ee1e77d731e1f8014 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[63], NULL, 0, 0, 0);
    codeobj_c999226a5b8ab0402f4b1cff15108b9b = MAKE_CODE_OBJECT(module_filename_obj, 6, CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[63], NULL, 0, 0, 0);
    codeobj_6b6edc1184be3c9e8ac0b2c30aef5402 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[64], NULL, 1, 0, 0);
    codeobj_9d899c5a35bb61767a357b1717668596 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[64], NULL, 1, 0, 0);
    codeobj_f1ecce918321881cdb8d9fddf1349d21 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[65], NULL, 5, 0, 0);
    codeobj_69b59a8d575ce616664d864ffe095e97 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[65], NULL, 5, 0, 0);
    codeobj_b1b603e0681a760aa171618368ab0867 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[66], NULL, 3, 0, 0);
    codeobj_1746fbd3e60a1e15db0b5093dfaf2f14 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[66], NULL, 3, 0, 0);
    codeobj_28f1a8e944487e23d9c8181b4bab148e = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[67], NULL, 2, 0, 0);
    codeobj_4099422005a0a95247524b3aead11ef2 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[67], NULL, 2, 0, 0);
    codeobj_f4eb3d3e49faaeef5bbdedc22165bf6e = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[68], NULL, 3, 0, 0);
    codeobj_33bc19cdf1447355e60c8bf71e368803 = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[68], NULL, 3, 0, 0);
    codeobj_4c9108e9771040250688224e066851e5 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[69], NULL, 2, 0, 0);
    codeobj_7249fa57097a1940fd14092e74c2be6f = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[69], NULL, 2, 0, 0);
    codeobj_094e56b21aeb90b8781daf6853576c2c = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[70], NULL, 4, 0, 0);
    codeobj_e7d64e71179d3bb794d683fe5b7f8536 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[70], NULL, 4, 0, 0);
    codeobj_0dc3869ad12ce57825334f11134096a0 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[71], NULL, 3, 0, 0);
    codeobj_9c7c32e5c44db2e24ea9817816536a53 = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[71], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__9_read$$$coroutine__1_read();


static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__10_write$$$coroutine__1_write();


static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__11_aclose$$$coroutine__1_aclose();


static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__12_start_tls$$$coroutine__1_start_tls();


static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp();


static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket();


static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__16_sleep$$$coroutine__1_sleep();


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__10_write(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__11_aclose(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__12_start_tls(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__13_get_extra_info(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__14_connect_tcp(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__15_connect_unix_socket(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__16_sleep(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__1_read(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__2_write(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__3_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__4_start_tls(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__5_get_extra_info(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__6_connect_tcp(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__7_connect_unix_socket(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__8_sleep(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__9_read(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpcore$backends$base$$$function__1_read(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_max_bytes = python_pars[1];
    PyObject *par_timeout = python_pars[2];
    struct Nuitka_FrameObject *frame_33bc19cdf1447355e60c8bf71e368803;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_33bc19cdf1447355e60c8bf71e368803 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_33bc19cdf1447355e60c8bf71e368803)) {
        Py_XDECREF(cache_frame_33bc19cdf1447355e60c8bf71e368803);

#if _DEBUG_REFCOUNTS
        if (cache_frame_33bc19cdf1447355e60c8bf71e368803 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_33bc19cdf1447355e60c8bf71e368803 = MAKE_FUNCTION_FRAME(codeobj_33bc19cdf1447355e60c8bf71e368803, module_httpcore$backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_33bc19cdf1447355e60c8bf71e368803->m_type_description == NULL);
    frame_33bc19cdf1447355e60c8bf71e368803 = cache_frame_33bc19cdf1447355e60c8bf71e368803;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_33bc19cdf1447355e60c8bf71e368803);
    assert(Py_REFCNT(frame_33bc19cdf1447355e60c8bf71e368803) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_33bc19cdf1447355e60c8bf71e368803->m_frame.f_lineno = 8;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 8;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_33bc19cdf1447355e60c8bf71e368803, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_33bc19cdf1447355e60c8bf71e368803->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_33bc19cdf1447355e60c8bf71e368803, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_33bc19cdf1447355e60c8bf71e368803,
        type_description_1,
        par_self,
        par_max_bytes,
        par_timeout
    );


    // Release cached frame if used for exception.
    if (frame_33bc19cdf1447355e60c8bf71e368803 == cache_frame_33bc19cdf1447355e60c8bf71e368803) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_33bc19cdf1447355e60c8bf71e368803);
        cache_frame_33bc19cdf1447355e60c8bf71e368803 = NULL;
    }

    assertFrameObject(frame_33bc19cdf1447355e60c8bf71e368803);

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
    CHECK_OBJECT(par_max_bytes);
    Py_DECREF(par_max_bytes);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_httpcore$backends$base$$$function__2_write(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_buffer = python_pars[1];
    PyObject *par_timeout = python_pars[2];
    struct Nuitka_FrameObject *frame_9c7c32e5c44db2e24ea9817816536a53;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9c7c32e5c44db2e24ea9817816536a53 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9c7c32e5c44db2e24ea9817816536a53)) {
        Py_XDECREF(cache_frame_9c7c32e5c44db2e24ea9817816536a53);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c7c32e5c44db2e24ea9817816536a53 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c7c32e5c44db2e24ea9817816536a53 = MAKE_FUNCTION_FRAME(codeobj_9c7c32e5c44db2e24ea9817816536a53, module_httpcore$backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9c7c32e5c44db2e24ea9817816536a53->m_type_description == NULL);
    frame_9c7c32e5c44db2e24ea9817816536a53 = cache_frame_9c7c32e5c44db2e24ea9817816536a53;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9c7c32e5c44db2e24ea9817816536a53);
    assert(Py_REFCNT(frame_9c7c32e5c44db2e24ea9817816536a53) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_9c7c32e5c44db2e24ea9817816536a53->m_frame.f_lineno = 11;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 11;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9c7c32e5c44db2e24ea9817816536a53, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c7c32e5c44db2e24ea9817816536a53->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c7c32e5c44db2e24ea9817816536a53, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c7c32e5c44db2e24ea9817816536a53,
        type_description_1,
        par_self,
        par_buffer,
        par_timeout
    );


    // Release cached frame if used for exception.
    if (frame_9c7c32e5c44db2e24ea9817816536a53 == cache_frame_9c7c32e5c44db2e24ea9817816536a53) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9c7c32e5c44db2e24ea9817816536a53);
        cache_frame_9c7c32e5c44db2e24ea9817816536a53 = NULL;
    }

    assertFrameObject(frame_9c7c32e5c44db2e24ea9817816536a53);

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
    CHECK_OBJECT(par_buffer);
    Py_DECREF(par_buffer);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_httpcore$backends$base$$$function__3_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9d899c5a35bb61767a357b1717668596;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9d899c5a35bb61767a357b1717668596 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9d899c5a35bb61767a357b1717668596)) {
        Py_XDECREF(cache_frame_9d899c5a35bb61767a357b1717668596);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d899c5a35bb61767a357b1717668596 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d899c5a35bb61767a357b1717668596 = MAKE_FUNCTION_FRAME(codeobj_9d899c5a35bb61767a357b1717668596, module_httpcore$backends$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9d899c5a35bb61767a357b1717668596->m_type_description == NULL);
    frame_9d899c5a35bb61767a357b1717668596 = cache_frame_9d899c5a35bb61767a357b1717668596;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9d899c5a35bb61767a357b1717668596);
    assert(Py_REFCNT(frame_9d899c5a35bb61767a357b1717668596) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_9d899c5a35bb61767a357b1717668596->m_frame.f_lineno = 14;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 14;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d899c5a35bb61767a357b1717668596, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d899c5a35bb61767a357b1717668596->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d899c5a35bb61767a357b1717668596, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d899c5a35bb61767a357b1717668596,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9d899c5a35bb61767a357b1717668596 == cache_frame_9d899c5a35bb61767a357b1717668596) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9d899c5a35bb61767a357b1717668596);
        cache_frame_9d899c5a35bb61767a357b1717668596 = NULL;
    }

    assertFrameObject(frame_9d899c5a35bb61767a357b1717668596);

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


static PyObject *impl_httpcore$backends$base$$$function__4_start_tls(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ssl_context = python_pars[1];
    PyObject *par_server_hostname = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    struct Nuitka_FrameObject *frame_e7d64e71179d3bb794d683fe5b7f8536;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e7d64e71179d3bb794d683fe5b7f8536 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e7d64e71179d3bb794d683fe5b7f8536)) {
        Py_XDECREF(cache_frame_e7d64e71179d3bb794d683fe5b7f8536);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e7d64e71179d3bb794d683fe5b7f8536 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e7d64e71179d3bb794d683fe5b7f8536 = MAKE_FUNCTION_FRAME(codeobj_e7d64e71179d3bb794d683fe5b7f8536, module_httpcore$backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e7d64e71179d3bb794d683fe5b7f8536->m_type_description == NULL);
    frame_e7d64e71179d3bb794d683fe5b7f8536 = cache_frame_e7d64e71179d3bb794d683fe5b7f8536;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e7d64e71179d3bb794d683fe5b7f8536);
    assert(Py_REFCNT(frame_e7d64e71179d3bb794d683fe5b7f8536) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_e7d64e71179d3bb794d683fe5b7f8536->m_frame.f_lineno = 22;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 22;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e7d64e71179d3bb794d683fe5b7f8536, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e7d64e71179d3bb794d683fe5b7f8536->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e7d64e71179d3bb794d683fe5b7f8536, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e7d64e71179d3bb794d683fe5b7f8536,
        type_description_1,
        par_self,
        par_ssl_context,
        par_server_hostname,
        par_timeout
    );


    // Release cached frame if used for exception.
    if (frame_e7d64e71179d3bb794d683fe5b7f8536 == cache_frame_e7d64e71179d3bb794d683fe5b7f8536) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e7d64e71179d3bb794d683fe5b7f8536);
        cache_frame_e7d64e71179d3bb794d683fe5b7f8536 = NULL;
    }

    assertFrameObject(frame_e7d64e71179d3bb794d683fe5b7f8536);

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
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_server_hostname);
    Py_DECREF(par_server_hostname);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_httpcore$backends$base$$$function__6_connect_tcp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    PyObject *par_local_address = python_pars[4];
    struct Nuitka_FrameObject *frame_69b59a8d575ce616664d864ffe095e97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_69b59a8d575ce616664d864ffe095e97 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_69b59a8d575ce616664d864ffe095e97)) {
        Py_XDECREF(cache_frame_69b59a8d575ce616664d864ffe095e97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69b59a8d575ce616664d864ffe095e97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69b59a8d575ce616664d864ffe095e97 = MAKE_FUNCTION_FRAME(codeobj_69b59a8d575ce616664d864ffe095e97, module_httpcore$backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_69b59a8d575ce616664d864ffe095e97->m_type_description == NULL);
    frame_69b59a8d575ce616664d864ffe095e97 = cache_frame_69b59a8d575ce616664d864ffe095e97;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69b59a8d575ce616664d864ffe095e97);
    assert(Py_REFCNT(frame_69b59a8d575ce616664d864ffe095e97) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_69b59a8d575ce616664d864ffe095e97->m_frame.f_lineno = 36;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 36;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_69b59a8d575ce616664d864ffe095e97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69b59a8d575ce616664d864ffe095e97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69b59a8d575ce616664d864ffe095e97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69b59a8d575ce616664d864ffe095e97,
        type_description_1,
        par_self,
        par_host,
        par_port,
        par_timeout,
        par_local_address
    );


    // Release cached frame if used for exception.
    if (frame_69b59a8d575ce616664d864ffe095e97 == cache_frame_69b59a8d575ce616664d864ffe095e97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_69b59a8d575ce616664d864ffe095e97);
        cache_frame_69b59a8d575ce616664d864ffe095e97 = NULL;
    }

    assertFrameObject(frame_69b59a8d575ce616664d864ffe095e97);

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
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_local_address);
    Py_DECREF(par_local_address);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_httpcore$backends$base$$$function__7_connect_unix_socket(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_timeout = python_pars[2];
    struct Nuitka_FrameObject *frame_1746fbd3e60a1e15db0b5093dfaf2f14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1746fbd3e60a1e15db0b5093dfaf2f14 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1746fbd3e60a1e15db0b5093dfaf2f14)) {
        Py_XDECREF(cache_frame_1746fbd3e60a1e15db0b5093dfaf2f14);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1746fbd3e60a1e15db0b5093dfaf2f14 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1746fbd3e60a1e15db0b5093dfaf2f14 = MAKE_FUNCTION_FRAME(codeobj_1746fbd3e60a1e15db0b5093dfaf2f14, module_httpcore$backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1746fbd3e60a1e15db0b5093dfaf2f14->m_type_description == NULL);
    frame_1746fbd3e60a1e15db0b5093dfaf2f14 = cache_frame_1746fbd3e60a1e15db0b5093dfaf2f14;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1746fbd3e60a1e15db0b5093dfaf2f14);
    assert(Py_REFCNT(frame_1746fbd3e60a1e15db0b5093dfaf2f14) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        frame_1746fbd3e60a1e15db0b5093dfaf2f14->m_frame.f_lineno = 41;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 41;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1746fbd3e60a1e15db0b5093dfaf2f14, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1746fbd3e60a1e15db0b5093dfaf2f14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1746fbd3e60a1e15db0b5093dfaf2f14, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1746fbd3e60a1e15db0b5093dfaf2f14,
        type_description_1,
        par_self,
        par_path,
        par_timeout
    );


    // Release cached frame if used for exception.
    if (frame_1746fbd3e60a1e15db0b5093dfaf2f14 == cache_frame_1746fbd3e60a1e15db0b5093dfaf2f14) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1746fbd3e60a1e15db0b5093dfaf2f14);
        cache_frame_1746fbd3e60a1e15db0b5093dfaf2f14 = NULL;
    }

    assertFrameObject(frame_1746fbd3e60a1e15db0b5093dfaf2f14);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_httpcore$backends$base$$$function__8_sleep(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_seconds = python_pars[1];
    struct Nuitka_FrameObject *frame_7249fa57097a1940fd14092e74c2be6f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7249fa57097a1940fd14092e74c2be6f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7249fa57097a1940fd14092e74c2be6f)) {
        Py_XDECREF(cache_frame_7249fa57097a1940fd14092e74c2be6f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7249fa57097a1940fd14092e74c2be6f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7249fa57097a1940fd14092e74c2be6f = MAKE_FUNCTION_FRAME(codeobj_7249fa57097a1940fd14092e74c2be6f, module_httpcore$backends$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7249fa57097a1940fd14092e74c2be6f->m_type_description == NULL);
    frame_7249fa57097a1940fd14092e74c2be6f = cache_frame_7249fa57097a1940fd14092e74c2be6f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7249fa57097a1940fd14092e74c2be6f);
    assert(Py_REFCNT(frame_7249fa57097a1940fd14092e74c2be6f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_seconds);
        tmp_args_element_value_1 = par_seconds;
        frame_7249fa57097a1940fd14092e74c2be6f->m_frame.f_lineno = 44;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7249fa57097a1940fd14092e74c2be6f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7249fa57097a1940fd14092e74c2be6f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7249fa57097a1940fd14092e74c2be6f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7249fa57097a1940fd14092e74c2be6f,
        type_description_1,
        par_self,
        par_seconds
    );


    // Release cached frame if used for exception.
    if (frame_7249fa57097a1940fd14092e74c2be6f == cache_frame_7249fa57097a1940fd14092e74c2be6f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7249fa57097a1940fd14092e74c2be6f);
        cache_frame_7249fa57097a1940fd14092e74c2be6f = NULL;
    }

    assertFrameObject(frame_7249fa57097a1940fd14092e74c2be6f);

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
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$backends$base$$$function__9_read(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_max_bytes = python_pars[1];
    PyObject *par_timeout = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$backends$base$$$function__9_read$$$coroutine__1_read();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_max_bytes);
    Py_DECREF(par_max_bytes);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct httpcore$backends$base$$$function__9_read$$$coroutine__1_read_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$backends$base$$$function__9_read$$$coroutine__1_read_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct httpcore$backends$base$$$function__9_read$$$coroutine__1_read_locals *coroutine_heap = (struct httpcore$backends$base$$$function__9_read$$$coroutine__1_read_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f4eb3d3e49faaeef5bbdedc22165bf6e, module_httpcore$backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 51;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 51;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "NNN";
        goto frame_exception_exit_1;
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
            NULL,
            NULL,
            NULL
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__9_read$$$coroutine__1_read() {
    return Nuitka_Coroutine_New(
        httpcore$backends$base$$$function__9_read$$$coroutine__1_read_context,
        module_httpcore$backends$base,
        mod_consts[2],
        mod_consts[3],
        codeobj_f4eb3d3e49faaeef5bbdedc22165bf6e,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$backends$base$$$function__9_read$$$coroutine__1_read_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$backends$base$$$function__10_write(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_buffer = python_pars[1];
    PyObject *par_timeout = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$backends$base$$$function__10_write$$$coroutine__1_write();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_buffer);
    Py_DECREF(par_buffer);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct httpcore$backends$base$$$function__10_write$$$coroutine__1_write_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$backends$base$$$function__10_write$$$coroutine__1_write_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct httpcore$backends$base$$$function__10_write$$$coroutine__1_write_locals *coroutine_heap = (struct httpcore$backends$base$$$function__10_write$$$coroutine__1_write_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_0dc3869ad12ce57825334f11134096a0, module_httpcore$backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 56;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 56;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "NNN";
        goto frame_exception_exit_1;
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
            NULL,
            NULL,
            NULL
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__10_write$$$coroutine__1_write() {
    return Nuitka_Coroutine_New(
        httpcore$backends$base$$$function__10_write$$$coroutine__1_write_context,
        module_httpcore$backends$base,
        mod_consts[4],
        mod_consts[5],
        codeobj_0dc3869ad12ce57825334f11134096a0,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$backends$base$$$function__10_write$$$coroutine__1_write_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$backends$base$$$function__11_aclose(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$backends$base$$$function__11_aclose$$$coroutine__1_aclose();

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
struct httpcore$backends$base$$$function__11_aclose$$$coroutine__1_aclose_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$backends$base$$$function__11_aclose$$$coroutine__1_aclose_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct httpcore$backends$base$$$function__11_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct httpcore$backends$base$$$function__11_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_6b6edc1184be3c9e8ac0b2c30aef5402, module_httpcore$backends$base, sizeof(void *));
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
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 59;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 59;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "N";
        goto frame_exception_exit_1;
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
            NULL
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__11_aclose$$$coroutine__1_aclose() {
    return Nuitka_Coroutine_New(
        httpcore$backends$base$$$function__11_aclose$$$coroutine__1_aclose_context,
        module_httpcore$backends$base,
        mod_consts[6],
        mod_consts[7],
        codeobj_6b6edc1184be3c9e8ac0b2c30aef5402,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$backends$base$$$function__11_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$backends$base$$$function__12_start_tls(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ssl_context = python_pars[1];
    PyObject *par_server_hostname = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$backends$base$$$function__12_start_tls$$$coroutine__1_start_tls();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    CHECK_OBJECT(par_server_hostname);
    Py_DECREF(par_server_hostname);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct httpcore$backends$base$$$function__12_start_tls$$$coroutine__1_start_tls_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$backends$base$$$function__12_start_tls$$$coroutine__1_start_tls_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct httpcore$backends$base$$$function__12_start_tls$$$coroutine__1_start_tls_locals *coroutine_heap = (struct httpcore$backends$base$$$function__12_start_tls$$$coroutine__1_start_tls_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_094e56b21aeb90b8781daf6853576c2c, module_httpcore$backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 67;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 67;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "NNNN";
        goto frame_exception_exit_1;
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
            NULL,
            NULL,
            NULL,
            NULL
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__12_start_tls$$$coroutine__1_start_tls() {
    return Nuitka_Coroutine_New(
        httpcore$backends$base$$$function__12_start_tls$$$coroutine__1_start_tls_context,
        module_httpcore$backends$base,
        mod_consts[8],
        mod_consts[9],
        codeobj_094e56b21aeb90b8781daf6853576c2c,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$backends$base$$$function__12_start_tls$$$coroutine__1_start_tls_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$backends$base$$$function__14_connect_tcp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    PyObject *par_local_address = python_pars[4];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_local_address);
    Py_DECREF(par_local_address);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct httpcore$backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct httpcore$backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp_locals *coroutine_heap = (struct httpcore$backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f1ecce918321881cdb8d9fddf1349d21, module_httpcore$backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 81;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 81;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "NNNNN";
        goto frame_exception_exit_1;
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
            NULL,
            NULL,
            NULL,
            NULL,
            NULL
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp() {
    return Nuitka_Coroutine_New(
        httpcore$backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp_context,
        module_httpcore$backends$base,
        mod_consts[10],
        mod_consts[11],
        codeobj_f1ecce918321881cdb8d9fddf1349d21,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$backends$base$$$function__14_connect_tcp$$$coroutine__1_connect_tcp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$backends$base$$$function__15_connect_unix_socket(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_timeout = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct httpcore$backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct httpcore$backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket_locals *coroutine_heap = (struct httpcore$backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_b1b603e0681a760aa171618368ab0867, module_httpcore$backends$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 86;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 86;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "NNN";
        goto frame_exception_exit_1;
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
            NULL,
            NULL,
            NULL
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket() {
    return Nuitka_Coroutine_New(
        httpcore$backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket_context,
        module_httpcore$backends$base,
        mod_consts[12],
        mod_consts[13],
        codeobj_b1b603e0681a760aa171618368ab0867,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$backends$base$$$function__15_connect_unix_socket$$$coroutine__1_connect_unix_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$backends$base$$$function__16_sleep(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_seconds = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpcore$backends$base$$$function__16_sleep$$$coroutine__1_sleep();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct httpcore$backends$base$$$function__16_sleep$$$coroutine__1_sleep_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *httpcore$backends$base$$$function__16_sleep$$$coroutine__1_sleep_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct httpcore$backends$base$$$function__16_sleep$$$coroutine__1_sleep_locals *coroutine_heap = (struct httpcore$backends$base$$$function__16_sleep$$$coroutine__1_sleep_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_4c9108e9771040250688224e066851e5, module_httpcore$backends$base, sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_raise_type_1;
        coroutine->m_frame->m_frame.f_lineno = 89;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(PyExc_NotImplementedError);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 89;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "NN";
        goto frame_exception_exit_1;
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
            NULL,
            NULL
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_httpcore$backends$base$$$function__16_sleep$$$coroutine__1_sleep() {
    return Nuitka_Coroutine_New(
        httpcore$backends$base$$$function__16_sleep$$$coroutine__1_sleep_context,
        module_httpcore$backends$base,
        mod_consts[1],
        mod_consts[14],
        codeobj_4c9108e9771040250688224e066851e5,
        NULL,
        0,
#if 1
        sizeof(struct httpcore$backends$base$$$function__16_sleep$$$coroutine__1_sleep_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__10_write(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__10_write,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[5],
#endif
        codeobj_0dc3869ad12ce57825334f11134096a0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__11_aclose(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__11_aclose,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[7],
#endif
        codeobj_6b6edc1184be3c9e8ac0b2c30aef5402,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__12_start_tls(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__12_start_tls,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[9],
#endif
        codeobj_094e56b21aeb90b8781daf6853576c2c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__13_get_extra_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_4099422005a0a95247524b3aead11ef2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__14_connect_tcp(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__14_connect_tcp,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[11],
#endif
        codeobj_f1ecce918321881cdb8d9fddf1349d21,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__15_connect_unix_socket(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__15_connect_unix_socket,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[13],
#endif
        codeobj_b1b603e0681a760aa171618368ab0867,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__16_sleep(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__16_sleep,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[14],
#endif
        codeobj_4c9108e9771040250688224e066851e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__1_read(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__1_read,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_33bc19cdf1447355e60c8bf71e368803,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__2_write(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__2_write,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[36],
#endif
        codeobj_9c7c32e5c44db2e24ea9817816536a53,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__3_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__3_close,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[39],
#endif
        codeobj_9d899c5a35bb61767a357b1717668596,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__4_start_tls(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__4_start_tls,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_e7d64e71179d3bb794d683fe5b7f8536,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__5_get_extra_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[48],
#endif
        codeobj_28f1a8e944487e23d9c8181b4bab148e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__6_connect_tcp(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__6_connect_tcp,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_69b59a8d575ce616664d864ffe095e97,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__7_connect_unix_socket(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__7_connect_unix_socket,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[56],
#endif
        codeobj_1746fbd3e60a1e15db0b5093dfaf2f14,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__8_sleep(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__8_sleep,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_7249fa57097a1940fd14092e74c2be6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$backends$base$$$function__9_read(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$backends$base$$$function__9_read,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[3],
#endif
        codeobj_f4eb3d3e49faaeef5bbdedc22165bf6e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$backends$base,
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

function_impl_code functable_httpcore$backends$base[] = {
    impl_httpcore$backends$base$$$function__1_read,
    impl_httpcore$backends$base$$$function__2_write,
    impl_httpcore$backends$base$$$function__3_close,
    impl_httpcore$backends$base$$$function__4_start_tls,
    NULL,
    impl_httpcore$backends$base$$$function__6_connect_tcp,
    impl_httpcore$backends$base$$$function__7_connect_unix_socket,
    impl_httpcore$backends$base$$$function__8_sleep,
    impl_httpcore$backends$base$$$function__9_read,
    impl_httpcore$backends$base$$$function__10_write,
    impl_httpcore$backends$base$$$function__11_aclose,
    impl_httpcore$backends$base$$$function__12_start_tls,
    NULL,
    impl_httpcore$backends$base$$$function__14_connect_tcp,
    impl_httpcore$backends$base$$$function__15_connect_unix_socket,
    impl_httpcore$backends$base$$$function__16_sleep,
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

    function_impl_code *current = functable_httpcore$backends$base;
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

    if (offset > sizeof(functable_httpcore$backends$base) || offset < 0) {
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
        functable_httpcore$backends$base[offset],
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
        module_httpcore$backends$base,
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
PyObject *modulecode_httpcore$backends$base(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpcore.backends.base");

    // Store the module for future use.
    module_httpcore$backends$base = module;

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
        PRINT_STRING("httpcore.backends.base: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore.backends.base: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore.backends.base: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithttpcore$backends$base\n");

    moduledict_httpcore$backends$base = MODULE_DICT(module_httpcore$backends$base);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpcore$backends$base,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpcore$backends$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[72]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpcore$backends$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$backends$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$backends$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpcore$backends$base);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpcore$backends$base, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_httpcore$backends$base, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpcore$backends$base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_httpcore$backends$base);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_httpcore$backends$base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    struct Nuitka_FrameObject *frame_de14affb6206f98e846fb418e9f31af1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_httpcore$backends$base$$$class__1_NetworkStream_6 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_c999226a5b8ab0402f4b1cff15108b9b_2;
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
    PyObject *locals_httpcore$backends$base$$$class__2_NetworkBackend_28 = NULL;
    struct Nuitka_FrameObject *frame_73d7cae32016b24ee1e77d731e1f8014_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47 = NULL;
    struct Nuitka_FrameObject *frame_3cd135ba74c3a523a8940c09d1f326a6_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_httpcore$backends$base$$$class__4_AsyncNetworkBackend_73 = NULL;
    struct Nuitka_FrameObject *frame_eed45cac49ca5858141a606411335b6c_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_2);
    }
    frame_de14affb6206f98e846fb418e9f31af1 = MAKE_MODULE_FRAME(codeobj_de14affb6206f98e846fb418e9f31af1, module_httpcore$backends$base);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_de14affb6206f98e846fb418e9f31af1);
    assert(Py_REFCNT(frame_de14affb6206f98e846fb418e9f31af1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[16];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[20], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[22];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$backends$base;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[23];
        frame_de14affb6206f98e846fb418e9f31af1->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[0];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_httpcore$backends$base;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[23];
        frame_de14affb6206f98e846fb418e9f31af1->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_httpcore$backends$base$$$class__1_NetworkStream_6 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[25];
        tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__1_NetworkStream_6, mod_consts[26], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__1_NetworkStream_6, mod_consts[28], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_c999226a5b8ab0402f4b1cff15108b9b_2 = MAKE_CLASS_FRAME(codeobj_c999226a5b8ab0402f4b1cff15108b9b, module_httpcore$backends$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c999226a5b8ab0402f4b1cff15108b9b_2);
        assert(Py_REFCNT(frame_c999226a5b8ab0402f4b1cff15108b9b_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_defaults_1 = mod_consts[29];
            tmp_dict_key_1 = mod_consts[30];
            tmp_dict_value_1 = (PyObject *)&PyLong_Type;
            tmp_annotations_1 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_1;
                PyObject *tmp_expression_value_2;
                PyObject *tmp_subscript_value_1;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[31];
                tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_2 == NULL)) {
                    tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_2 == NULL));
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[32]);
                if (tmp_expression_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 7;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_1 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
                Py_DECREF(tmp_expression_value_1);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 7;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[33];
                tmp_dict_value_1 = (PyObject *)&PyBytes_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__1_read(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__1_NetworkStream_6, mod_consts[2], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_defaults_2 = mod_consts[29];
            tmp_dict_key_2 = mod_consts[35];
            tmp_dict_value_2 = (PyObject *)&PyBytes_Type;
            tmp_annotations_2 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_3;
                PyObject *tmp_expression_value_4;
                PyObject *tmp_subscript_value_2;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[31];
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_4 == NULL));
                tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[32]);
                if (tmp_expression_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 10;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_2 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
                Py_DECREF(tmp_expression_value_3);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 10;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[33];
                tmp_dict_value_2 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__2_write(tmp_defaults_2, tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__1_NetworkStream_6, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[37]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__3_close(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__1_NetworkStream_6, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_5;
            tmp_defaults_3 = mod_consts[40];
            tmp_dict_key_3 = mod_consts[41];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[42]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_6;
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_4;
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[43];
                tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_7 == NULL)) {
                    tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_7 == NULL));
                tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[32]);
                if (tmp_expression_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_6);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[31];
                tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_9 == NULL)) {
                    tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_9 == NULL));
                tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[32]);
                if (tmp_expression_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 20;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_subscript_value_4 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_8);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 20;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[33];
                tmp_dict_value_3 = mod_consts[27];
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__4_start_tls(tmp_defaults_3, tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__1_NetworkStream_6, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[45];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_5 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_10;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[33];
                tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_10 == NULL)) {
                    tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_10 == NULL));
                tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[46]);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__5_get_extra_info(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__1_NetworkStream_6, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c999226a5b8ab0402f4b1cff15108b9b_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c999226a5b8ab0402f4b1cff15108b9b_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c999226a5b8ab0402f4b1cff15108b9b_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c999226a5b8ab0402f4b1cff15108b9b_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_c999226a5b8ab0402f4b1cff15108b9b_2);

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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[27];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_httpcore$backends$base$$$class__1_NetworkStream_6;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_de14affb6206f98e846fb418e9f31af1->m_frame.f_lineno = 6;
            tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_10;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_9 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_9);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_httpcore$backends$base$$$class__1_NetworkStream_6);
        locals_httpcore$backends$base$$$class__1_NetworkStream_6 = NULL;
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

        Py_DECREF(locals_httpcore$backends$base$$$class__1_NetworkStream_6);
        locals_httpcore$backends$base$$$class__1_NetworkStream_6 = NULL;
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
        UPDATE_STRING_DICT1(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_9);
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
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_httpcore$backends$base$$$class__2_NetworkBackend_28 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[25];
        tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__2_NetworkBackend_28, mod_consts[26], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__2_NetworkBackend_28, mod_consts[28], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_73d7cae32016b24ee1e77d731e1f8014_3 = MAKE_CLASS_FRAME(codeobj_73d7cae32016b24ee1e77d731e1f8014, module_httpcore$backends$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_73d7cae32016b24ee1e77d731e1f8014_3);
        assert(Py_REFCNT(frame_73d7cae32016b24ee1e77d731e1f8014_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_defaults_4 = mod_consts[40];
            tmp_dict_key_5 = mod_consts[51];
            tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_6 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_11;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_6;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[52];
                tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[31];
                tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_12 == NULL)) {
                    tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_12 == NULL));
                tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[32]);
                if (tmp_expression_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_subscript_value_5 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_11);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[53];
                tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_14 == NULL)) {
                    tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_14 == NULL));
                tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[32]);
                if (tmp_expression_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_13);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[33];
                tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[27]);

                if (unlikely(tmp_dict_value_5 == NULL)) {
                    tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                }

                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__6_connect_tcp(tmp_defaults_4, tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__2_NetworkBackend_28, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_defaults_5 = mod_consts[29];
            tmp_dict_key_6 = mod_consts[55];
            tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_7 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_15;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_7;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[31];
                tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_16 == NULL)) {
                    tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_16 == NULL));
                tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[32]);
                if (tmp_expression_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_7 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_15);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[33];
                tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[27]);

                if (unlikely(tmp_dict_value_6 == NULL)) {
                    tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                }

                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__7_connect_unix_socket(tmp_defaults_5, tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__2_NetworkBackend_28, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_73d7cae32016b24ee1e77d731e1f8014_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_73d7cae32016b24ee1e77d731e1f8014_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_73d7cae32016b24ee1e77d731e1f8014_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_73d7cae32016b24ee1e77d731e1f8014_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_73d7cae32016b24ee1e77d731e1f8014_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[57]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__8_sleep(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__2_NetworkBackend_28, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[50];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_httpcore$backends$base$$$class__2_NetworkBackend_28;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_de14affb6206f98e846fb418e9f31af1->m_frame.f_lineno = 28;
            tmp_assign_source_14 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_13 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_httpcore$backends$base$$$class__2_NetworkBackend_28);
        locals_httpcore$backends$base$$$class__2_NetworkBackend_28 = NULL;
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

        Py_DECREF(locals_httpcore$backends$base$$$class__2_NetworkBackend_28);
        locals_httpcore$backends$base$$$class__2_NetworkBackend_28 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 28;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_13);
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[25];
        tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47, mod_consts[26], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47, mod_consts[28], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_3cd135ba74c3a523a8940c09d1f326a6_4 = MAKE_CLASS_FRAME(codeobj_3cd135ba74c3a523a8940c09d1f326a6, module_httpcore$backends$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3cd135ba74c3a523a8940c09d1f326a6_4);
        assert(Py_REFCNT(frame_3cd135ba74c3a523a8940c09d1f326a6_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_defaults_6 = mod_consts[29];
            tmp_dict_key_7 = mod_consts[30];
            tmp_dict_value_7 = (PyObject *)&PyLong_Type;
            tmp_annotations_9 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_17;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_8;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[31];
                tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_18 == NULL)) {
                    tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_18 == NULL));
                tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[32]);
                if (tmp_expression_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_subscript_value_8 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_17);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[33];
                tmp_dict_value_7 = (PyObject *)&PyBytes_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__9_read(tmp_defaults_6, tmp_annotations_9);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47, mod_consts[2], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_defaults_7 = mod_consts[29];
            tmp_dict_key_8 = mod_consts[35];
            tmp_dict_value_8 = (PyObject *)&PyBytes_Type;
            tmp_annotations_10 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_19;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_subscript_value_9;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[31];
                tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_20 == NULL)) {
                    tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_20 == NULL));
                tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[32]);
                if (tmp_expression_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_subscript_value_9 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_19);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[33];
                tmp_dict_value_8 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__10_write(tmp_defaults_7, tmp_annotations_10);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_11;
            tmp_annotations_11 = DICT_COPY(mod_consts[37]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__11_aclose(tmp_annotations_11);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_8;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_21;
            tmp_defaults_8 = mod_consts[40];
            tmp_dict_key_9 = mod_consts[41];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[42]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_22;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_11;
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[43];
                tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_23 == NULL)) {
                    tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_23 == NULL));
                tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[32]);
                if (tmp_expression_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_22);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[31];
                tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_25 == NULL)) {
                    tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_25 == NULL));
                tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[32]);
                if (tmp_expression_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_subscript_value_11 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_24);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[33];
                tmp_dict_value_9 = mod_consts[59];
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_annotations_12);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__12_start_tls(tmp_defaults_8, tmp_annotations_12);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_dict_key_10 = mod_consts[45];
            tmp_dict_value_10 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_13 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_26;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[33];
                tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_26 == NULL)) {
                    tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_26 == NULL));
                tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[46]);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__13_get_extra_info(tmp_annotations_13);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3cd135ba74c3a523a8940c09d1f326a6_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3cd135ba74c3a523a8940c09d1f326a6_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3cd135ba74c3a523a8940c09d1f326a6_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3cd135ba74c3a523a8940c09d1f326a6_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_3cd135ba74c3a523a8940c09d1f326a6_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[59];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
            frame_de14affb6206f98e846fb418e9f31af1->m_frame.f_lineno = 47;
            tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_17 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47);
        locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47 = NULL;
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

        Py_DECREF(locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47);
        locals_httpcore$backends$base$$$class__3_AsyncNetworkStream_47 = NULL;
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
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 47;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_17);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_httpcore$backends$base$$$class__4_AsyncNetworkBackend_73 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[25];
        tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__4_AsyncNetworkBackend_73, mod_consts[26], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__4_AsyncNetworkBackend_73, mod_consts[28], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_eed45cac49ca5858141a606411335b6c_5 = MAKE_CLASS_FRAME(codeobj_eed45cac49ca5858141a606411335b6c, module_httpcore$backends$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_eed45cac49ca5858141a606411335b6c_5);
        assert(Py_REFCNT(frame_eed45cac49ca5858141a606411335b6c_5) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_9;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_defaults_9 = mod_consts[40];
            tmp_dict_key_11 = mod_consts[51];
            tmp_dict_value_11 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_14 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_27;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_13;
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[52];
                tmp_dict_value_11 = (PyObject *)&PyLong_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[31];
                tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_28 == NULL)) {
                    tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_28 == NULL));
                tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[32]);
                if (tmp_expression_value_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_subscript_value_12 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_27);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[53];
                tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_30 == NULL)) {
                    tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_30 == NULL));
                tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[32]);
                if (tmp_expression_value_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_subscript_value_13 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_29);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[33];
                tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[59]);

                if (unlikely(tmp_dict_value_11 == NULL)) {
                    tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                }

                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 80;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_annotations_14);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__14_connect_tcp(tmp_defaults_9, tmp_annotations_14);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__4_AsyncNetworkBackend_73, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_10;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_defaults_10 = mod_consts[29];
            tmp_dict_key_12 = mod_consts[55];
            tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_15 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_31;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_14;
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[31];
                tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_32 == NULL)) {
                    tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                assert(!(tmp_expression_value_32 == NULL));
                tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[32]);
                if (tmp_expression_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_subscript_value_14 = (PyObject *)&PyFloat_Type;
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_31);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[33];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[59]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 85;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_12;
            // Exception handling pass through code for dict_build:
            dict_build_exception_12:;
            Py_DECREF(tmp_annotations_15);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_12:;
            Py_INCREF(tmp_defaults_10);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__15_connect_unix_socket(tmp_defaults_10, tmp_annotations_15);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__4_AsyncNetworkBackend_73, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_eed45cac49ca5858141a606411335b6c_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_eed45cac49ca5858141a606411335b6c_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_eed45cac49ca5858141a606411335b6c_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_eed45cac49ca5858141a606411335b6c_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_eed45cac49ca5858141a606411335b6c_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            PyObject *tmp_annotations_16;
            tmp_annotations_16 = DICT_COPY(mod_consts[57]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$backends$base$$$function__16_sleep(tmp_annotations_16);

            tmp_res = PyDict_SetItem(locals_httpcore$backends$base$$$class__4_AsyncNetworkBackend_73, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_4 = (PyObject *)&PyType_Type;
            tmp_tuple_element_4 = mod_consts[61];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_httpcore$backends$base$$$class__4_AsyncNetworkBackend_73;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_4__class_decl_dict;
            frame_de14affb6206f98e846fb418e9f31af1->m_frame.f_lineno = 73;
            tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_21 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_21);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_httpcore$backends$base$$$class__4_AsyncNetworkBackend_73);
        locals_httpcore$backends$base$$$class__4_AsyncNetworkBackend_73 = NULL;
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

        Py_DECREF(locals_httpcore$backends$base$$$class__4_AsyncNetworkBackend_73);
        locals_httpcore$backends$base$$$class__4_AsyncNetworkBackend_73 = NULL;
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
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
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

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 73;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_httpcore$backends$base, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_21);
    }
    goto try_end_4;
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

    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_de14affb6206f98e846fb418e9f31af1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de14affb6206f98e846fb418e9f31af1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de14affb6206f98e846fb418e9f31af1, exception_lineno);
    }



    assertFrameObject(frame_de14affb6206f98e846fb418e9f31af1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpcore.backends.base", false);

    Py_INCREF(module_httpcore$backends$base);
    return module_httpcore$backends$base;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$backends$base, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("httpcore$backends$base", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
