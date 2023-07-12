/* Generated code for Python module 'websocket._abnf'
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

/* The "module_websocket$_abnf" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websocket$_abnf;
PyDictObject *moduledict_websocket$_abnf;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[261];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[261];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("websocket._abnf"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 261; i++) {
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
void checkModuleConstants_websocket$_abnf(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 261; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7b1fbd50473d4c15d9c1f9d5d9cc01fd;
static PyCodeObject *codeobj_d6766ad828fe8b2fb4c0cd26bb84a451;
static PyCodeObject *codeobj_35a8564586efeb65f5139dbfebc0089e;
static PyCodeObject *codeobj_f6e747d168f828d956ef1e8a7afa3057;
static PyCodeObject *codeobj_96a5409e9fe3aa5927ef11a6c6fb8eaa;
static PyCodeObject *codeobj_3f1c69a9f19b4e8af4a008ad30265e88;
static PyCodeObject *codeobj_f5cb107a6766fae23331f201a2b5511c;
static PyCodeObject *codeobj_8a1732c9bd76c58877018e4933c09fa1;
static PyCodeObject *codeobj_7369c9282ce7625939e5c1b88afc7d19;
static PyCodeObject *codeobj_399b30a5be8d609a0e58af9db4c5aabf;
static PyCodeObject *codeobj_af07b117f90dac3989b37320d9eed3e1;
static PyCodeObject *codeobj_76dc98e0f370efb220f010947fedbe77;
static PyCodeObject *codeobj_c57b8b4a2d5f362d7b186e41b2eb57b4;
static PyCodeObject *codeobj_7577dd06aa927d56b2e59ab06a9cc57c;
static PyCodeObject *codeobj_96ada1925d857b9f6616b7124b9ed8d5;
static PyCodeObject *codeobj_c1d9e8616457def9d2bba3194fb6df8b;
static PyCodeObject *codeobj_7c31d2b42c3c89f8cec1e494235fdb87;
static PyCodeObject *codeobj_ab0b6e4897c40fe3519f6a59fb68733c;
static PyCodeObject *codeobj_46810db60828a02037429a77a1b33ff3;
static PyCodeObject *codeobj_8e34a4297e9b02c5577f6310970abc34;
static PyCodeObject *codeobj_9196d87d5a8a65fe83b1a4588af8824a;
static PyCodeObject *codeobj_a76acd46443c1552844a991da89a19cd;
static PyCodeObject *codeobj_186abe8538b31f2e7acefa1ac9d36808;
static PyCodeObject *codeobj_570211cf7d205e23fe60594d744c2d6b;
static PyCodeObject *codeobj_6aca04127c62f4f70b43950b3ef48ed9;
static PyCodeObject *codeobj_cd1f5e6c6694079940125a00c4917ab8;
static PyCodeObject *codeobj_ad0e3077c3aea39936a2b386a783d22f;
static PyCodeObject *codeobj_4f747998c791decb1e3fa0819b371fa0;
static PyCodeObject *codeobj_4ceedf03bb2b93be9c13d775db760ab2;
static PyCodeObject *codeobj_1c5fb571632323599cc417b89c45eaf0;
static PyCodeObject *codeobj_4b81b8d8410f21a3b15119fd6dcaccd1;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[127]; CHECK_OBJECT(module_filename_obj);
    codeobj_7b1fbd50473d4c15d9c1f9d5d9cc01fd = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[240], NULL, 1, 0, 0);
    codeobj_d6766ad828fe8b2fb4c0cd26bb84a451 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[241], mod_consts[241], NULL, NULL, 0, 0, 0);
    codeobj_35a8564586efeb65f5139dbfebc0089e = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[242], NULL, 0, 0, 0);
    codeobj_f6e747d168f828d956ef1e8a7afa3057 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[197], mod_consts[197], mod_consts[243], NULL, 8, 0, 0);
    codeobj_96a5409e9fe3aa5927ef11a6c6fb8eaa = MAKE_CODE_OBJECT(module_filename_obj, 389, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[197], mod_consts[197], mod_consts[244], NULL, 3, 0, 0);
    codeobj_3f1c69a9f19b4e8af4a008ad30265e88 = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[197], mod_consts[197], mod_consts[245], NULL, 3, 0, 0);
    codeobj_f5cb107a6766fae23331f201a2b5511c = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[246], NULL, 1, 0, 0);
    codeobj_8a1732c9bd76c58877018e4933c09fa1 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[247], NULL, 2, 0, 0);
    codeobj_7369c9282ce7625939e5c1b88afc7d19 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[248], NULL, 1, 0, 0);
    codeobj_399b30a5be8d609a0e58af9db4c5aabf = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[249], NULL, 2, 0, 0);
    codeobj_af07b117f90dac3989b37320d9eed3e1 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[250], NULL, 2, 0, 0);
    codeobj_76dc98e0f370efb220f010947fedbe77 = MAKE_CODE_OBJECT(module_filename_obj, 402, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[233], mod_consts[233], mod_consts[251], NULL, 2, 0, 0);
    codeobj_c57b8b4a2d5f362d7b186e41b2eb57b4 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[246], NULL, 1, 0, 0);
    codeobj_7577dd06aa927d56b2e59ab06a9cc57c = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_NOFREE, mod_consts[230], mod_consts[230], mod_consts[242], NULL, 0, 0, 0);
    codeobj_96ada1925d857b9f6616b7124b9ed8d5 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[208], mod_consts[208], mod_consts[252], NULL, 3, 0, 0);
    codeobj_c1d9e8616457def9d2bba3194fb6df8b = MAKE_CODE_OBJECT(module_filename_obj, 416, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[238], mod_consts[238], mod_consts[253], NULL, 2, 0, 0);
    codeobj_7c31d2b42c3c89f8cec1e494235fdb87 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[254], NULL, 1, 0, 0);
    codeobj_ab0b6e4897c40fe3519f6a59fb68733c = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[242], NULL, 0, 0, 0);
    codeobj_46810db60828a02037429a77a1b33ff3 = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[246], NULL, 1, 0, 0);
    codeobj_8e34a4297e9b02c5577f6310970abc34 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[246], NULL, 1, 0, 0);
    codeobj_9196d87d5a8a65fe83b1a4588af8824a = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[102], mod_consts[102], mod_consts[246], NULL, 1, 0, 0);
    codeobj_a76acd46443c1552844a991da89a19cd = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[246], NULL, 1, 0, 0);
    codeobj_186abe8538b31f2e7acefa1ac9d36808 = MAKE_CODE_OBJECT(module_filename_obj, 413, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[235], mod_consts[235], mod_consts[251], NULL, 2, 0, 0);
    codeobj_570211cf7d205e23fe60594d744c2d6b = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[255], NULL, 2, 0, 0);
    codeobj_6aca04127c62f4f70b43950b3ef48ed9 = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[226], mod_consts[226], mod_consts[256], NULL, 1, 0, 0);
    codeobj_cd1f5e6c6694079940125a00c4917ab8 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[257], NULL, 1, 0, 0);
    codeobj_ad0e3077c3aea39936a2b386a783d22f = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[258], NULL, 1, 0, 0);
    codeobj_4f747998c791decb1e3fa0819b371fa0 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[105], mod_consts[105], mod_consts[246], NULL, 1, 0, 0);
    codeobj_4ceedf03bb2b93be9c13d775db760ab2 = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[259], NULL, 2, 0, 0);
    codeobj_1c5fb571632323599cc417b89c45eaf0 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[251], NULL, 2, 0, 0);
    codeobj_4b81b8d8410f21a3b15119fd6dcaccd1 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[260], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_websocket$_abnf$$$function__8_format$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__10_mask(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__11___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__12_clear(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__13_has_received_header(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__14_recv_header(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__15_has_mask(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__16_has_received_length(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__17_recv_length(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__18_has_received_mask(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__19_recv_mask(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__1__mask(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__20_recv_frame(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__21_recv_strict(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__22___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__23_validate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__24_add(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__25_is_fire(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__26_extract(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__2__mask(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__3___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__4_validate(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__5__is_valid_close_status(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__6___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__7_create_frame(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__8_format(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__9__get_masked(PyObject *annotations);


// The module function definitions.
static PyObject *impl_websocket$_abnf$$$function__1__mask(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par__m = python_pars[0];
    PyObject *par__d = python_pars[1];
    struct Nuitka_FrameObject *frame_399b30a5be8d609a0e58af9db4c5aabf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_399b30a5be8d609a0e58af9db4c5aabf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_399b30a5be8d609a0e58af9db4c5aabf)) {
        Py_XDECREF(cache_frame_399b30a5be8d609a0e58af9db4c5aabf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_399b30a5be8d609a0e58af9db4c5aabf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_399b30a5be8d609a0e58af9db4c5aabf = MAKE_FUNCTION_FRAME(codeobj_399b30a5be8d609a0e58af9db4c5aabf, module_websocket$_abnf, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_399b30a5be8d609a0e58af9db4c5aabf->m_type_description == NULL);
    frame_399b30a5be8d609a0e58af9db4c5aabf = cache_frame_399b30a5be8d609a0e58af9db4c5aabf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_399b30a5be8d609a0e58af9db4c5aabf);
    assert(Py_REFCNT(frame_399b30a5be8d609a0e58af9db4c5aabf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par__m);
        tmp_args_element_value_1 = par__m;
        frame_399b30a5be8d609a0e58af9db4c5aabf->m_frame.f_lineno = 37;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par__d);
        tmp_args_element_value_2 = par__d;
        frame_399b30a5be8d609a0e58af9db4c5aabf->m_frame.f_lineno = 37;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
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
        exception_tb = MAKE_TRACEBACK(frame_399b30a5be8d609a0e58af9db4c5aabf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_399b30a5be8d609a0e58af9db4c5aabf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_399b30a5be8d609a0e58af9db4c5aabf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_399b30a5be8d609a0e58af9db4c5aabf,
        type_description_1,
        par__m,
        par__d
    );


    // Release cached frame if used for exception.
    if (frame_399b30a5be8d609a0e58af9db4c5aabf == cache_frame_399b30a5be8d609a0e58af9db4c5aabf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_399b30a5be8d609a0e58af9db4c5aabf);
        cache_frame_399b30a5be8d609a0e58af9db4c5aabf = NULL;
    }

    assertFrameObject(frame_399b30a5be8d609a0e58af9db4c5aabf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par__m);
    Py_DECREF(par__m);
    CHECK_OBJECT(par__d);
    Py_DECREF(par__d);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par__m);
    Py_DECREF(par__m);
    CHECK_OBJECT(par__d);
    Py_DECREF(par__d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_abnf$$$function__2__mask(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mask_value = python_pars[0];
    PyObject *par_data_value = python_pars[1];
    PyObject *var_datalen = NULL;
    struct Nuitka_FrameObject *frame_af07b117f90dac3989b37320d9eed3e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_af07b117f90dac3989b37320d9eed3e1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_af07b117f90dac3989b37320d9eed3e1)) {
        Py_XDECREF(cache_frame_af07b117f90dac3989b37320d9eed3e1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af07b117f90dac3989b37320d9eed3e1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af07b117f90dac3989b37320d9eed3e1 = MAKE_FUNCTION_FRAME(codeobj_af07b117f90dac3989b37320d9eed3e1, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_af07b117f90dac3989b37320d9eed3e1->m_type_description == NULL);
    frame_af07b117f90dac3989b37320d9eed3e1 = cache_frame_af07b117f90dac3989b37320d9eed3e1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_af07b117f90dac3989b37320d9eed3e1);
    assert(Py_REFCNT(frame_af07b117f90dac3989b37320d9eed3e1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data_value);
        tmp_args_element_value_1 = par_data_value;
        frame_af07b117f90dac3989b37320d9eed3e1->m_frame.f_lineno = 44;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_datalen == NULL);
        var_datalen = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data_value);
        tmp_args_element_value_2 = par_data_value;
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_af07b117f90dac3989b37320d9eed3e1->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data_value;
            assert(old != NULL);
            par_data_value = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mask_value);
        tmp_mult_expr_left_1 = par_mask_value;
        CHECK_OBJECT(var_datalen);
        tmp_floordiv_expr_left_1 = var_datalen;
        tmp_floordiv_expr_right_1 = mod_consts[6];
        tmp_mult_expr_right_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mask_value);
        tmp_expression_value_3 = par_mask_value;
        CHECK_OBJECT(var_datalen);
        tmp_mod_expr_left_1 = var_datalen;
        tmp_mod_expr_right_1 = mod_consts[6];
        tmp_stop_value_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_af07b117f90dac3989b37320d9eed3e1->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mask_value;
            assert(old != NULL);
            par_mask_value = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_bitxor_expr_left_1;
        PyObject *tmp_bitxor_expr_right_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_data_value);
        tmp_bitxor_expr_left_1 = par_data_value;
        CHECK_OBJECT(par_mask_value);
        tmp_bitxor_expr_right_1 = par_mask_value;
        tmp_expression_value_4 = BINARY_OPERATION_BITXOR_OBJECT_OBJECT_OBJECT(tmp_bitxor_expr_left_1, tmp_bitxor_expr_right_1);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_datalen);
        tmp_args_element_value_6 = var_datalen;
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_af07b117f90dac3989b37320d9eed3e1->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
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
        exception_tb = MAKE_TRACEBACK(frame_af07b117f90dac3989b37320d9eed3e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af07b117f90dac3989b37320d9eed3e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af07b117f90dac3989b37320d9eed3e1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af07b117f90dac3989b37320d9eed3e1,
        type_description_1,
        par_mask_value,
        par_data_value,
        var_datalen
    );


    // Release cached frame if used for exception.
    if (frame_af07b117f90dac3989b37320d9eed3e1 == cache_frame_af07b117f90dac3989b37320d9eed3e1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_af07b117f90dac3989b37320d9eed3e1);
        cache_frame_af07b117f90dac3989b37320d9eed3e1 = NULL;
    }

    assertFrameObject(frame_af07b117f90dac3989b37320d9eed3e1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_mask_value);
    Py_DECREF(par_mask_value);
    par_mask_value = NULL;
    CHECK_OBJECT(par_data_value);
    Py_DECREF(par_data_value);
    par_data_value = NULL;
    CHECK_OBJECT(var_datalen);
    Py_DECREF(var_datalen);
    var_datalen = NULL;
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

    Py_XDECREF(par_mask_value);
    par_mask_value = NULL;
    Py_XDECREF(par_data_value);
    par_data_value = NULL;
    Py_XDECREF(var_datalen);
    var_datalen = NULL;
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


static PyObject *impl_websocket$_abnf$$$function__3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_fin = python_pars[1];
    PyObject *par_rsv1 = python_pars[2];
    PyObject *par_rsv2 = python_pars[3];
    PyObject *par_rsv3 = python_pars[4];
    PyObject *par_opcode = python_pars[5];
    PyObject *par_mask = python_pars[6];
    PyObject *par_data = python_pars[7];
    struct Nuitka_FrameObject *frame_f6e747d168f828d956ef1e8a7afa3057;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f6e747d168f828d956ef1e8a7afa3057 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f6e747d168f828d956ef1e8a7afa3057)) {
        Py_XDECREF(cache_frame_f6e747d168f828d956ef1e8a7afa3057);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6e747d168f828d956ef1e8a7afa3057 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6e747d168f828d956ef1e8a7afa3057 = MAKE_FUNCTION_FRAME(codeobj_f6e747d168f828d956ef1e8a7afa3057, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f6e747d168f828d956ef1e8a7afa3057->m_type_description == NULL);
    frame_f6e747d168f828d956ef1e8a7afa3057 = cache_frame_f6e747d168f828d956ef1e8a7afa3057;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f6e747d168f828d956ef1e8a7afa3057);
    assert(Py_REFCNT(frame_f6e747d168f828d956ef1e8a7afa3057) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_fin);
        tmp_assattr_value_1 = par_fin;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_rsv1);
        tmp_assattr_value_2 = par_rsv1;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[9], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_rsv2);
        tmp_assattr_value_3 = par_rsv2;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[10], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_rsv3);
        tmp_assattr_value_4 = par_rsv3;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[11], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_opcode);
        tmp_assattr_value_5 = par_opcode;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[12], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_mask);
        tmp_assattr_value_6 = par_mask;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[13], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_data);
        tmp_cmp_expr_left_1 = par_data;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[14];
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_1;
            Py_INCREF(par_data);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_data);
        tmp_assattr_value_7 = par_data;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[15], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_8;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_assattr_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[18], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f6e747d168f828d956ef1e8a7afa3057, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6e747d168f828d956ef1e8a7afa3057->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6e747d168f828d956ef1e8a7afa3057, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6e747d168f828d956ef1e8a7afa3057,
        type_description_1,
        par_self,
        par_fin,
        par_rsv1,
        par_rsv2,
        par_rsv3,
        par_opcode,
        par_mask,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_f6e747d168f828d956ef1e8a7afa3057 == cache_frame_f6e747d168f828d956ef1e8a7afa3057) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f6e747d168f828d956ef1e8a7afa3057);
        cache_frame_f6e747d168f828d956ef1e8a7afa3057 = NULL;
    }

    assertFrameObject(frame_f6e747d168f828d956ef1e8a7afa3057);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
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

    Py_XDECREF(par_data);
    par_data = NULL;
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
    CHECK_OBJECT(par_fin);
    Py_DECREF(par_fin);
    CHECK_OBJECT(par_rsv1);
    Py_DECREF(par_rsv1);
    CHECK_OBJECT(par_rsv2);
    Py_DECREF(par_rsv2);
    CHECK_OBJECT(par_rsv3);
    Py_DECREF(par_rsv3);
    CHECK_OBJECT(par_opcode);
    Py_DECREF(par_opcode);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fin);
    Py_DECREF(par_fin);
    CHECK_OBJECT(par_rsv1);
    Py_DECREF(par_rsv1);
    CHECK_OBJECT(par_rsv2);
    Py_DECREF(par_rsv2);
    CHECK_OBJECT(par_rsv3);
    Py_DECREF(par_rsv3);
    CHECK_OBJECT(par_opcode);
    Py_DECREF(par_opcode);
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_abnf$$$function__4_validate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_skip_utf8_validation = python_pars[1];
    PyObject *var_l = NULL;
    PyObject *var_code = NULL;
    struct Nuitka_FrameObject *frame_4b81b8d8410f21a3b15119fd6dcaccd1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4b81b8d8410f21a3b15119fd6dcaccd1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4b81b8d8410f21a3b15119fd6dcaccd1)) {
        Py_XDECREF(cache_frame_4b81b8d8410f21a3b15119fd6dcaccd1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4b81b8d8410f21a3b15119fd6dcaccd1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4b81b8d8410f21a3b15119fd6dcaccd1 = MAKE_FUNCTION_FRAME(codeobj_4b81b8d8410f21a3b15119fd6dcaccd1, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4b81b8d8410f21a3b15119fd6dcaccd1->m_type_description == NULL);
    frame_4b81b8d8410f21a3b15119fd6dcaccd1 = cache_frame_4b81b8d8410f21a3b15119fd6dcaccd1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4b81b8d8410f21a3b15119fd6dcaccd1);
    assert(Py_REFCNT(frame_4b81b8d8410f21a3b15119fd6dcaccd1) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 158;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4b81b8d8410f21a3b15119fd6dcaccd1->m_frame.f_lineno = 159;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[21]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 159;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[12]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[23]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[24];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[12]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4b81b8d8410f21a3b15119fd6dcaccd1->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 162;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[12]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[25]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[8]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4b81b8d8410f21a3b15119fd6dcaccd1->m_frame.f_lineno = 165;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[26]);

        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 165;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[12]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[27]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_12;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[15]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4b81b8d8410f21a3b15119fd6dcaccd1->m_frame.f_lineno = 168;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_l == NULL);
        var_l = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_l);
        tmp_operand_value_2 = var_l;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_l);
        tmp_cmp_expr_left_4 = var_l;
        tmp_cmp_expr_right_4 = mod_consts[28];
        tmp_or_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(var_l);
        tmp_cmp_expr_left_5 = var_l;
        tmp_cmp_expr_right_5 = mod_consts[29];
        tmp_or_right_value_3 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_6 = tmp_or_left_value_3;
        or_end_3:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4b81b8d8410f21a3b15119fd6dcaccd1->m_frame.f_lineno = 172;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[30]);

        if (tmp_raise_type_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_4;
        exception_lineno = 172;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_l);
        tmp_cmp_expr_left_6 = var_l;
        tmp_cmp_expr_right_6 = mod_consts[31];
        tmp_and_left_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_skip_utf8_validation);
        tmp_operand_value_3 = par_skip_utf8_validation;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[15]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[33];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4b81b8d8410f21a3b15119fd6dcaccd1->m_frame.f_lineno = 173;
        tmp_operand_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_condition_result_7 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_7 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4b81b8d8410f21a3b15119fd6dcaccd1->m_frame.f_lineno = 174;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[30]);

        if (tmp_raise_type_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_5;
        exception_lineno = 174;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_3;
        tmp_mult_expr_left_1 = mod_consts[34];
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[15]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[35];
        tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[15]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 176;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[28];
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_3, 1);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 176;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_code == NULL);
        var_code = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_code);
        tmp_args_element_value_5 = var_code;
        frame_4b81b8d8410f21a3b15119fd6dcaccd1->m_frame.f_lineno = 177;
        tmp_operand_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[36], tmp_args_element_value_5);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[37];
        CHECK_OBJECT(var_code);
        tmp_args_element_value_7 = var_code;
        frame_4b81b8d8410f21a3b15119fd6dcaccd1->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        if (tmp_raise_type_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_6;
        exception_lineno = 178;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    branch_no_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4b81b8d8410f21a3b15119fd6dcaccd1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4b81b8d8410f21a3b15119fd6dcaccd1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4b81b8d8410f21a3b15119fd6dcaccd1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4b81b8d8410f21a3b15119fd6dcaccd1,
        type_description_1,
        par_self,
        par_skip_utf8_validation,
        var_l,
        var_code
    );


    // Release cached frame if used for exception.
    if (frame_4b81b8d8410f21a3b15119fd6dcaccd1 == cache_frame_4b81b8d8410f21a3b15119fd6dcaccd1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4b81b8d8410f21a3b15119fd6dcaccd1);
        cache_frame_4b81b8d8410f21a3b15119fd6dcaccd1 = NULL;
    }

    assertFrameObject(frame_4b81b8d8410f21a3b15119fd6dcaccd1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_l);
    var_l = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
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

    Py_XDECREF(var_l);
    var_l = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
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
    CHECK_OBJECT(par_skip_utf8_validation);
    Py_DECREF(par_skip_utf8_validation);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_skip_utf8_validation);
    Py_DECREF(par_skip_utf8_validation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_abnf$$$function__5__is_valid_close_status(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_code = python_pars[0];
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_7369c9282ce7625939e5c1b88afc7d19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_7369c9282ce7625939e5c1b88afc7d19 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7369c9282ce7625939e5c1b88afc7d19)) {
        Py_XDECREF(cache_frame_7369c9282ce7625939e5c1b88afc7d19);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7369c9282ce7625939e5c1b88afc7d19 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7369c9282ce7625939e5c1b88afc7d19 = MAKE_FUNCTION_FRAME(codeobj_7369c9282ce7625939e5c1b88afc7d19, module_websocket$_abnf, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7369c9282ce7625939e5c1b88afc7d19->m_type_description == NULL);
    frame_7369c9282ce7625939e5c1b88afc7d19 = cache_frame_7369c9282ce7625939e5c1b88afc7d19;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7369c9282ce7625939e5c1b88afc7d19);
    assert(Py_REFCNT(frame_7369c9282ce7625939e5c1b88afc7d19) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_code);
        tmp_cmp_expr_left_1 = par_code;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        {
            PyObject *tmp_assign_source_1;
            CHECK_OBJECT(par_code);
            tmp_assign_source_1 = par_code;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_1);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            tmp_cmp_expr_left_2 = mod_consts[40];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_2 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            bool tmp_condition_result_1;
            PyObject *tmp_operand_value_1;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_condition_result_1 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_1 != false) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_or_right_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_or_right_value_1);
        goto try_return_handler_1;
        branch_no_1:;
        {
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_3 = tmp_comparison_chain_1__operand_2;
            tmp_cmp_expr_right_3 = mod_consts[41];
            tmp_or_right_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_or_right_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
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

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_7369c9282ce7625939e5c1b88afc7d19, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7369c9282ce7625939e5c1b88afc7d19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7369c9282ce7625939e5c1b88afc7d19, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7369c9282ce7625939e5c1b88afc7d19,
        type_description_1,
        par_code
    );


    // Release cached frame if used for exception.
    if (frame_7369c9282ce7625939e5c1b88afc7d19 == cache_frame_7369c9282ce7625939e5c1b88afc7d19) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7369c9282ce7625939e5c1b88afc7d19);
        cache_frame_7369c9282ce7625939e5c1b88afc7d19 = NULL;
    }

    assertFrameObject(frame_7369c9282ce7625939e5c1b88afc7d19);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_abnf$$$function__6___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f5cb107a6766fae23331f201a2b5511c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f5cb107a6766fae23331f201a2b5511c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f5cb107a6766fae23331f201a2b5511c)) {
        Py_XDECREF(cache_frame_f5cb107a6766fae23331f201a2b5511c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f5cb107a6766fae23331f201a2b5511c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f5cb107a6766fae23331f201a2b5511c = MAKE_FUNCTION_FRAME(codeobj_f5cb107a6766fae23331f201a2b5511c, module_websocket$_abnf, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f5cb107a6766fae23331f201a2b5511c->m_type_description == NULL);
    frame_f5cb107a6766fae23331f201a2b5511c = cache_frame_f5cb107a6766fae23331f201a2b5511c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f5cb107a6766fae23331f201a2b5511c);
    assert(Py_REFCNT(frame_f5cb107a6766fae23331f201a2b5511c) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        tmp_add_expr_left_5 = mod_consts[42];
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f5cb107a6766fae23331f201a2b5511c->m_frame.f_lineno = 185;
        tmp_add_expr_right_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_add_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_4 = mod_consts[44];
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f5cb107a6766fae23331f201a2b5511c->m_frame.f_lineno = 186;
        tmp_add_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[45];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f5cb107a6766fae23331f201a2b5511c->m_frame.f_lineno = 187;
        tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
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
        exception_tb = MAKE_TRACEBACK(frame_f5cb107a6766fae23331f201a2b5511c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f5cb107a6766fae23331f201a2b5511c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5cb107a6766fae23331f201a2b5511c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f5cb107a6766fae23331f201a2b5511c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f5cb107a6766fae23331f201a2b5511c == cache_frame_f5cb107a6766fae23331f201a2b5511c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f5cb107a6766fae23331f201a2b5511c);
        cache_frame_f5cb107a6766fae23331f201a2b5511c = NULL;
    }

    assertFrameObject(frame_f5cb107a6766fae23331f201a2b5511c);

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


static PyObject *impl_websocket$_abnf$$$function__7_create_frame(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_opcode = python_pars[1];
    PyObject *par_fin = python_pars[2];
    struct Nuitka_FrameObject *frame_96ada1925d857b9f6616b7124b9ed8d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_96ada1925d857b9f6616b7124b9ed8d5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_96ada1925d857b9f6616b7124b9ed8d5)) {
        Py_XDECREF(cache_frame_96ada1925d857b9f6616b7124b9ed8d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96ada1925d857b9f6616b7124b9ed8d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96ada1925d857b9f6616b7124b9ed8d5 = MAKE_FUNCTION_FRAME(codeobj_96ada1925d857b9f6616b7124b9ed8d5, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96ada1925d857b9f6616b7124b9ed8d5->m_type_description == NULL);
    frame_96ada1925d857b9f6616b7124b9ed8d5 = cache_frame_96ada1925d857b9f6616b7124b9ed8d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96ada1925d857b9f6616b7124b9ed8d5);
    assert(Py_REFCNT(frame_96ada1925d857b9f6616b7124b9ed8d5) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_opcode);
        tmp_cmp_expr_left_1 = par_opcode;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_96ada1925d857b9f6616b7124b9ed8d5->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        if (par_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_data;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[48]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_96ada1925d857b9f6616b7124b9ed8d5->m_frame.f_lineno = 206;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[49]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            par_data = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fin);
        tmp_args_element_value_3 = par_fin;
        tmp_args_element_value_4 = mod_consts[35];
        tmp_args_element_value_5 = mod_consts[35];
        tmp_args_element_value_6 = mod_consts[35];
        CHECK_OBJECT(par_opcode);
        tmp_args_element_value_7 = par_opcode;
        tmp_args_element_value_8 = mod_consts[28];
        if (par_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = par_data;
        frame_96ada1925d857b9f6616b7124b9ed8d5->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_3, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
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
        exception_tb = MAKE_TRACEBACK(frame_96ada1925d857b9f6616b7124b9ed8d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96ada1925d857b9f6616b7124b9ed8d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96ada1925d857b9f6616b7124b9ed8d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96ada1925d857b9f6616b7124b9ed8d5,
        type_description_1,
        par_data,
        par_opcode,
        par_fin
    );


    // Release cached frame if used for exception.
    if (frame_96ada1925d857b9f6616b7124b9ed8d5 == cache_frame_96ada1925d857b9f6616b7124b9ed8d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96ada1925d857b9f6616b7124b9ed8d5);
        cache_frame_96ada1925d857b9f6616b7124b9ed8d5 = NULL;
    }

    assertFrameObject(frame_96ada1925d857b9f6616b7124b9ed8d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_data);
    par_data = NULL;
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

    Py_XDECREF(par_data);
    par_data = NULL;
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
    CHECK_OBJECT(par_opcode);
    Py_DECREF(par_opcode);
    CHECK_OBJECT(par_fin);
    Py_DECREF(par_fin);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_opcode);
    Py_DECREF(par_opcode);
    CHECK_OBJECT(par_fin);
    Py_DECREF(par_fin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_abnf$$$function__8_format(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_length = NULL;
    PyObject *var_frame_header = NULL;
    PyObject *var_mask_key = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_7c31d2b42c3c89f8cec1e494235fdb87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7c31d2b42c3c89f8cec1e494235fdb87 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7c31d2b42c3c89f8cec1e494235fdb87)) {
        Py_XDECREF(cache_frame_7c31d2b42c3c89f8cec1e494235fdb87);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c31d2b42c3c89f8cec1e494235fdb87 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c31d2b42c3c89f8cec1e494235fdb87 = MAKE_FUNCTION_FRAME(codeobj_7c31d2b42c3c89f8cec1e494235fdb87, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c31d2b42c3c89f8cec1e494235fdb87->m_type_description == NULL);
    frame_7c31d2b42c3c89f8cec1e494235fdb87 = cache_frame_7c31d2b42c3c89f8cec1e494235fdb87;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7c31d2b42c3c89f8cec1e494235fdb87);
    assert(Py_REFCNT(frame_7c31d2b42c3c89f8cec1e494235fdb87) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_expression_value_2;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_expression_value_4;
                PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(par_self);
                tmp_expression_value_2 = par_self;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
                CHECK_OBJECT(par_self);
                tmp_expression_value_3 = par_self;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_iter_arg_1, 2, tmp_tuple_element_1);
                CHECK_OBJECT(par_self);
                tmp_expression_value_4 = par_self;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;
                    type_description_1 = "oooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_iter_arg_1, 3, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_iter_arg_1);
            goto frame_exception_exit_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            assert(!(tmp_assign_source_1 == NULL));
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_args_element_value_1 = MAKE_GENERATOR_websocket$_abnf$$$function__8_format$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 214;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 214;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 215;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[53]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 215;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[12]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 216;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[23]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 216;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 217;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[54]);

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 217;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[15]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 218;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_length == NULL);
        var_length = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_length);
        tmp_cmp_expr_left_2 = var_length;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[55]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooo";
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
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 220;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[56]);

        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 220;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_bitor_expr_left_3;
        PyObject *tmp_bitor_expr_right_3;
        PyObject *tmp_bitor_expr_left_4;
        PyObject *tmp_bitor_expr_right_4;
        PyObject *tmp_lshift_expr_left_1;
        PyObject *tmp_lshift_expr_right_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_lshift_expr_left_2;
        PyObject *tmp_lshift_expr_right_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_lshift_expr_left_3;
        PyObject *tmp_lshift_expr_right_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_lshift_expr_left_4;
        PyObject *tmp_lshift_expr_right_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_lshift_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[8]);
        if (tmp_lshift_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_lshift_expr_right_1 = mod_consts[58];
        tmp_bitor_expr_left_4 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
        Py_DECREF(tmp_lshift_expr_left_1);
        if (tmp_bitor_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_lshift_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[9]);
        if (tmp_lshift_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_lshift_expr_right_2 = mod_consts[59];
        tmp_bitor_expr_right_4 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
        Py_DECREF(tmp_lshift_expr_left_2);
        if (tmp_bitor_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
        Py_DECREF(tmp_bitor_expr_left_4);
        Py_DECREF(tmp_bitor_expr_right_4);
        if (tmp_bitor_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_lshift_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[10]);
        if (tmp_lshift_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_lshift_expr_right_3 = mod_consts[60];
        tmp_bitor_expr_right_3 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_3, tmp_lshift_expr_right_3);
        Py_DECREF(tmp_lshift_expr_left_3);
        if (tmp_bitor_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
        Py_DECREF(tmp_bitor_expr_left_3);
        Py_DECREF(tmp_bitor_expr_right_3);
        if (tmp_bitor_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_lshift_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[11]);
        if (tmp_lshift_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_lshift_expr_right_4 = mod_consts[6];
        tmp_bitor_expr_right_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_4, tmp_lshift_expr_right_4);
        Py_DECREF(tmp_lshift_expr_left_4);
        if (tmp_bitor_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        Py_DECREF(tmp_bitor_expr_left_2);
        Py_DECREF(tmp_bitor_expr_right_2);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[12]);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 224;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 222;
        tmp_expression_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[48]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 222;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[61]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_frame_header == NULL);
        var_frame_header = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_length);
        tmp_cmp_expr_left_3 = var_length;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[62]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_bitor_expr_left_5;
        PyObject *tmp_bitor_expr_right_5;
        PyObject *tmp_lshift_expr_left_5;
        PyObject *tmp_lshift_expr_right_5;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_frame_header);
        tmp_iadd_expr_left_1 = var_frame_header;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_lshift_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[13]);
        if (tmp_lshift_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_lshift_expr_right_5 = mod_consts[58];
        tmp_bitor_expr_left_5 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_5, tmp_lshift_expr_right_5);
        Py_DECREF(tmp_lshift_expr_left_5);
        if (tmp_bitor_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_length);
        tmp_bitor_expr_right_5 = var_length;
        tmp_args_element_value_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
        Py_DECREF(tmp_bitor_expr_left_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 226;
        tmp_expression_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[48]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 226;
        tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[61]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_iadd_expr_left_1;
        var_frame_header = tmp_assign_source_4;

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(var_length);
        tmp_cmp_expr_left_4 = var_length;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[63]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_bitor_expr_left_6;
        PyObject *tmp_bitor_expr_right_6;
        PyObject *tmp_lshift_expr_left_6;
        PyObject *tmp_lshift_expr_right_6;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(var_frame_header);
        tmp_iadd_expr_left_2 = var_frame_header;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_20 = par_self;
        tmp_lshift_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[13]);
        if (tmp_lshift_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_lshift_expr_right_6 = mod_consts[58];
        tmp_bitor_expr_left_6 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_6, tmp_lshift_expr_right_6);
        Py_DECREF(tmp_lshift_expr_left_6);
        if (tmp_bitor_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_6 = mod_consts[29];
        tmp_args_element_value_5 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_LONG(tmp_bitor_expr_left_6, tmp_bitor_expr_right_6);
        Py_DECREF(tmp_bitor_expr_left_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 228;
        tmp_expression_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[48]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 228;
        tmp_iadd_expr_right_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[61]);

        Py_DECREF(tmp_called_value_10);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_iadd_expr_left_2;
        var_frame_header = tmp_assign_source_5;

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_frame_header);
        tmp_iadd_expr_left_3 = var_frame_header;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[66];
        CHECK_OBJECT(var_length);
        tmp_args_element_value_7 = var_length;
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_iadd_expr_right_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[65],
                call_args
            );
        }

        if (tmp_iadd_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = tmp_iadd_expr_left_3;
        var_frame_header = tmp_assign_source_6;

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_bitor_expr_left_7;
        PyObject *tmp_bitor_expr_right_7;
        PyObject *tmp_lshift_expr_left_7;
        PyObject *tmp_lshift_expr_right_7;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(var_frame_header);
        tmp_iadd_expr_left_4 = var_frame_header;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_22 = par_self;
        tmp_lshift_expr_left_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[13]);
        if (tmp_lshift_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_lshift_expr_right_7 = mod_consts[58];
        tmp_bitor_expr_left_7 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_7, tmp_lshift_expr_right_7);
        Py_DECREF(tmp_lshift_expr_left_7);
        if (tmp_bitor_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_7 = mod_consts[67];
        tmp_args_element_value_8 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_LONG(tmp_bitor_expr_left_7, tmp_bitor_expr_right_7);
        Py_DECREF(tmp_bitor_expr_left_7);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 231;
        tmp_expression_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[48]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 231;
        tmp_iadd_expr_right_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[61]);

        Py_DECREF(tmp_called_value_12);
        if (tmp_iadd_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        Py_DECREF(tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_iadd_expr_left_4;
        var_frame_header = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_frame_header);
        tmp_iadd_expr_left_5 = var_frame_header;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[68];
        CHECK_OBJECT(var_length);
        tmp_args_element_value_10 = var_length;
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_iadd_expr_right_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[65],
                call_args
            );
        }

        if (tmp_iadd_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        Py_DECREF(tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_5;
        var_frame_header = tmp_assign_source_8;

    }
    branch_end_5:;
    branch_end_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[13]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
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
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(var_frame_header);
        tmp_add_expr_left_1 = var_frame_header;
        CHECK_OBJECT(par_self);
        tmp_expression_value_24 = par_self;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[15]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 237;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[18],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask_key == NULL);
        var_mask_key = tmp_assign_source_9;
    }
    {
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(var_frame_header);
        tmp_add_expr_left_2 = var_frame_header;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_mask_key);
        tmp_args_element_value_11 = var_mask_key;
        frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame.f_lineno = 238;
        tmp_add_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[70], tmp_args_element_value_11);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_6:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c31d2b42c3c89f8cec1e494235fdb87, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c31d2b42c3c89f8cec1e494235fdb87->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c31d2b42c3c89f8cec1e494235fdb87, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c31d2b42c3c89f8cec1e494235fdb87,
        type_description_1,
        par_self,
        var_length,
        var_frame_header,
        var_mask_key
    );


    // Release cached frame if used for exception.
    if (frame_7c31d2b42c3c89f8cec1e494235fdb87 == cache_frame_7c31d2b42c3c89f8cec1e494235fdb87) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c31d2b42c3c89f8cec1e494235fdb87);
        cache_frame_7c31d2b42c3c89f8cec1e494235fdb87 = NULL;
    }

    assertFrameObject(frame_7c31d2b42c3c89f8cec1e494235fdb87);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_frame_header);
    var_frame_header = NULL;
    Py_XDECREF(var_mask_key);
    var_mask_key = NULL;
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

    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_frame_header);
    var_frame_header = NULL;
    Py_XDECREF(var_mask_key);
    var_mask_key = NULL;
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



#if 1
struct websocket$_abnf$$$function__8_format$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
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

static PyObject *websocket$_abnf$$$function__8_format$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct websocket$_abnf$$$function__8_format$$$genexpr__1_genexpr_locals *generator_heap = (struct websocket$_abnf$$$function__8_format$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_7b1fbd50473d4c15d9c1f9d5d9cc01fd, module_websocket$_abnf, sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 214;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_cmp_expr_left_1 = generator_heap->var_x;
        tmp_cmp_expr_right_1 = mod_consts[72];
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = (generator_heap->tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 214;
        generator_heap->type_description_1 = "No";
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

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
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
            NULL,
            generator_heap->var_x
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

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_websocket$_abnf$$$function__8_format$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        websocket$_abnf$$$function__8_format$$$genexpr__1_genexpr_context,
        module_websocket$_abnf,
        mod_consts[73],
#if PYTHON_VERSION >= 0x350
        mod_consts[74],
#endif
        codeobj_7b1fbd50473d4c15d9c1f9d5d9cc01fd,
        closure,
        1,
#if 1
        sizeof(struct websocket$_abnf$$$function__8_format$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_websocket$_abnf$$$function__9__get_masked(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mask_key = python_pars[1];
    PyObject *var_s = NULL;
    struct Nuitka_FrameObject *frame_8a1732c9bd76c58877018e4933c09fa1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8a1732c9bd76c58877018e4933c09fa1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8a1732c9bd76c58877018e4933c09fa1)) {
        Py_XDECREF(cache_frame_8a1732c9bd76c58877018e4933c09fa1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a1732c9bd76c58877018e4933c09fa1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a1732c9bd76c58877018e4933c09fa1 = MAKE_FUNCTION_FRAME(codeobj_8a1732c9bd76c58877018e4933c09fa1, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8a1732c9bd76c58877018e4933c09fa1->m_type_description == NULL);
    frame_8a1732c9bd76c58877018e4933c09fa1 = cache_frame_8a1732c9bd76c58877018e4933c09fa1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8a1732c9bd76c58877018e4933c09fa1);
    assert(Py_REFCNT(frame_8a1732c9bd76c58877018e4933c09fa1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mask_key);
        tmp_args_element_value_1 = par_mask_key;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8a1732c9bd76c58877018e4933c09fa1->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        int tmp_truth_name_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mask_key);
        tmp_args_element_value_3 = par_mask_key;
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8a1732c9bd76c58877018e4933c09fa1->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_mask_key);
        tmp_expression_value_3 = par_mask_key;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[48]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8a1732c9bd76c58877018e4933c09fa1->m_frame.f_lineno = 244;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[49]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mask_key;
            assert(old != NULL);
            par_mask_key = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        if (par_mask_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 246;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_1 = par_mask_key;
        CHECK_OBJECT(var_s);
        tmp_add_expr_right_1 = var_s;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
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
        exception_tb = MAKE_TRACEBACK(frame_8a1732c9bd76c58877018e4933c09fa1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a1732c9bd76c58877018e4933c09fa1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a1732c9bd76c58877018e4933c09fa1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a1732c9bd76c58877018e4933c09fa1,
        type_description_1,
        par_self,
        par_mask_key,
        var_s
    );


    // Release cached frame if used for exception.
    if (frame_8a1732c9bd76c58877018e4933c09fa1 == cache_frame_8a1732c9bd76c58877018e4933c09fa1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8a1732c9bd76c58877018e4933c09fa1);
        cache_frame_8a1732c9bd76c58877018e4933c09fa1 = NULL;
    }

    assertFrameObject(frame_8a1732c9bd76c58877018e4933c09fa1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_mask_key);
    par_mask_key = NULL;
    CHECK_OBJECT(var_s);
    Py_DECREF(var_s);
    var_s = NULL;
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

    Py_XDECREF(par_mask_key);
    par_mask_key = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
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


static PyObject *impl_websocket$_abnf$$$function__10_mask(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mask_key = python_pars[0];
    PyObject *par_data = python_pars[1];
    struct Nuitka_FrameObject *frame_570211cf7d205e23fe60594d744c2d6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_570211cf7d205e23fe60594d744c2d6b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_data);
        tmp_cmp_expr_left_1 = par_data;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[14];
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_1;
            Py_INCREF(par_data);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_570211cf7d205e23fe60594d744c2d6b)) {
        Py_XDECREF(cache_frame_570211cf7d205e23fe60594d744c2d6b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_570211cf7d205e23fe60594d744c2d6b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_570211cf7d205e23fe60594d744c2d6b = MAKE_FUNCTION_FRAME(codeobj_570211cf7d205e23fe60594d744c2d6b, module_websocket$_abnf, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_570211cf7d205e23fe60594d744c2d6b->m_type_description == NULL);
    frame_570211cf7d205e23fe60594d744c2d6b = cache_frame_570211cf7d205e23fe60594d744c2d6b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_570211cf7d205e23fe60594d744c2d6b);
    assert(Py_REFCNT(frame_570211cf7d205e23fe60594d744c2d6b) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mask_key);
        tmp_args_element_value_1 = par_mask_key;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_570211cf7d205e23fe60594d744c2d6b->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 263;
            type_description_1 = "oo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_mask_key);
        tmp_expression_value_1 = par_mask_key;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_570211cf7d205e23fe60594d744c2d6b->m_frame.f_lineno = 264;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[61]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mask_key;
            assert(old != NULL);
            par_mask_key = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        int tmp_truth_name_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_3 = par_data;
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_570211cf7d205e23fe60594d744c2d6b->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_data);
        tmp_expression_value_2 = par_data;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[48]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_570211cf7d205e23fe60594d744c2d6b->m_frame.f_lineno = 267;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[61]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[77]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[78];
        if (par_mask_key == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = par_mask_key;
        frame_570211cf7d205e23fe60594d744c2d6b->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[77]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[78];
        if (par_data == NULL) {
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = par_data;
        frame_570211cf7d205e23fe60594d744c2d6b->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_args_element_value_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_570211cf7d205e23fe60594d744c2d6b->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_8};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_570211cf7d205e23fe60594d744c2d6b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_570211cf7d205e23fe60594d744c2d6b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_570211cf7d205e23fe60594d744c2d6b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_570211cf7d205e23fe60594d744c2d6b,
        type_description_1,
        par_mask_key,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_570211cf7d205e23fe60594d744c2d6b == cache_frame_570211cf7d205e23fe60594d744c2d6b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_570211cf7d205e23fe60594d744c2d6b);
        cache_frame_570211cf7d205e23fe60594d744c2d6b = NULL;
    }

    assertFrameObject(frame_570211cf7d205e23fe60594d744c2d6b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_mask_key);
    par_mask_key = NULL;
    Py_XDECREF(par_data);
    par_data = NULL;
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

    Py_XDECREF(par_mask_key);
    par_mask_key = NULL;
    Py_XDECREF(par_data);
    par_data = NULL;
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


static PyObject *impl_websocket$_abnf$$$function__11___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_recv_fn = python_pars[1];
    PyObject *par_skip_utf8_validation = python_pars[2];
    struct Nuitka_FrameObject *frame_3f1c69a9f19b4e8af4a008ad30265e88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3f1c69a9f19b4e8af4a008ad30265e88 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3f1c69a9f19b4e8af4a008ad30265e88)) {
        Py_XDECREF(cache_frame_3f1c69a9f19b4e8af4a008ad30265e88);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f1c69a9f19b4e8af4a008ad30265e88 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f1c69a9f19b4e8af4a008ad30265e88 = MAKE_FUNCTION_FRAME(codeobj_3f1c69a9f19b4e8af4a008ad30265e88, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3f1c69a9f19b4e8af4a008ad30265e88->m_type_description == NULL);
    frame_3f1c69a9f19b4e8af4a008ad30265e88 = cache_frame_3f1c69a9f19b4e8af4a008ad30265e88;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3f1c69a9f19b4e8af4a008ad30265e88);
    assert(Py_REFCNT(frame_3f1c69a9f19b4e8af4a008ad30265e88) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_recv_fn);
        tmp_assattr_value_1 = par_recv_fn;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[80], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_skip_utf8_validation);
        tmp_assattr_value_2 = par_skip_utf8_validation;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[81], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[82], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[83]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3f1c69a9f19b4e8af4a008ad30265e88->m_frame.f_lineno = 282;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3f1c69a9f19b4e8af4a008ad30265e88->m_frame.f_lineno = 283;
        tmp_assattr_value_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[85], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3f1c69a9f19b4e8af4a008ad30265e88, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f1c69a9f19b4e8af4a008ad30265e88->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f1c69a9f19b4e8af4a008ad30265e88, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f1c69a9f19b4e8af4a008ad30265e88,
        type_description_1,
        par_self,
        par_recv_fn,
        par_skip_utf8_validation
    );


    // Release cached frame if used for exception.
    if (frame_3f1c69a9f19b4e8af4a008ad30265e88 == cache_frame_3f1c69a9f19b4e8af4a008ad30265e88) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3f1c69a9f19b4e8af4a008ad30265e88);
        cache_frame_3f1c69a9f19b4e8af4a008ad30265e88 = NULL;
    }

    assertFrameObject(frame_3f1c69a9f19b4e8af4a008ad30265e88);

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
    CHECK_OBJECT(par_recv_fn);
    Py_DECREF(par_recv_fn);
    CHECK_OBJECT(par_skip_utf8_validation);
    Py_DECREF(par_skip_utf8_validation);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_recv_fn);
    Py_DECREF(par_recv_fn);
    CHECK_OBJECT(par_skip_utf8_validation);
    Py_DECREF(par_skip_utf8_validation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_abnf$$$function__12_clear(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c57b8b4a2d5f362d7b186e41b2eb57b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c57b8b4a2d5f362d7b186e41b2eb57b4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c57b8b4a2d5f362d7b186e41b2eb57b4)) {
        Py_XDECREF(cache_frame_c57b8b4a2d5f362d7b186e41b2eb57b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c57b8b4a2d5f362d7b186e41b2eb57b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c57b8b4a2d5f362d7b186e41b2eb57b4 = MAKE_FUNCTION_FRAME(codeobj_c57b8b4a2d5f362d7b186e41b2eb57b4, module_websocket$_abnf, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c57b8b4a2d5f362d7b186e41b2eb57b4->m_type_description == NULL);
    frame_c57b8b4a2d5f362d7b186e41b2eb57b4 = cache_frame_c57b8b4a2d5f362d7b186e41b2eb57b4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c57b8b4a2d5f362d7b186e41b2eb57b4);
    assert(Py_REFCNT(frame_c57b8b4a2d5f362d7b186e41b2eb57b4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[86], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[87], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[13], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c57b8b4a2d5f362d7b186e41b2eb57b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c57b8b4a2d5f362d7b186e41b2eb57b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c57b8b4a2d5f362d7b186e41b2eb57b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c57b8b4a2d5f362d7b186e41b2eb57b4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c57b8b4a2d5f362d7b186e41b2eb57b4 == cache_frame_c57b8b4a2d5f362d7b186e41b2eb57b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c57b8b4a2d5f362d7b186e41b2eb57b4);
        cache_frame_c57b8b4a2d5f362d7b186e41b2eb57b4 = NULL;
    }

    assertFrameObject(frame_c57b8b4a2d5f362d7b186e41b2eb57b4);

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


static PyObject *impl_websocket$_abnf$$$function__13_has_received_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8e34a4297e9b02c5577f6310970abc34;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8e34a4297e9b02c5577f6310970abc34 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8e34a4297e9b02c5577f6310970abc34)) {
        Py_XDECREF(cache_frame_8e34a4297e9b02c5577f6310970abc34);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8e34a4297e9b02c5577f6310970abc34 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8e34a4297e9b02c5577f6310970abc34 = MAKE_FUNCTION_FRAME(codeobj_8e34a4297e9b02c5577f6310970abc34, module_websocket$_abnf, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8e34a4297e9b02c5577f6310970abc34->m_type_description == NULL);
    frame_8e34a4297e9b02c5577f6310970abc34 = cache_frame_8e34a4297e9b02c5577f6310970abc34;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8e34a4297e9b02c5577f6310970abc34);
    assert(Py_REFCNT(frame_8e34a4297e9b02c5577f6310970abc34) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[86]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
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
        exception_tb = MAKE_TRACEBACK(frame_8e34a4297e9b02c5577f6310970abc34, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e34a4297e9b02c5577f6310970abc34->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e34a4297e9b02c5577f6310970abc34, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8e34a4297e9b02c5577f6310970abc34,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8e34a4297e9b02c5577f6310970abc34 == cache_frame_8e34a4297e9b02c5577f6310970abc34) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8e34a4297e9b02c5577f6310970abc34);
        cache_frame_8e34a4297e9b02c5577f6310970abc34 = NULL;
    }

    assertFrameObject(frame_8e34a4297e9b02c5577f6310970abc34);

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


static PyObject *impl_websocket$_abnf$$$function__14_recv_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_header = NULL;
    PyObject *var_b1 = NULL;
    PyObject *var_fin = NULL;
    PyObject *var_rsv1 = NULL;
    PyObject *var_rsv2 = NULL;
    PyObject *var_rsv3 = NULL;
    PyObject *var_opcode = NULL;
    PyObject *var_b2 = NULL;
    PyObject *var_has_mask = NULL;
    PyObject *var_length_bits = NULL;
    struct Nuitka_FrameObject *frame_cd1f5e6c6694079940125a00c4917ab8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_cd1f5e6c6694079940125a00c4917ab8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cd1f5e6c6694079940125a00c4917ab8)) {
        Py_XDECREF(cache_frame_cd1f5e6c6694079940125a00c4917ab8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cd1f5e6c6694079940125a00c4917ab8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cd1f5e6c6694079940125a00c4917ab8 = MAKE_FUNCTION_FRAME(codeobj_cd1f5e6c6694079940125a00c4917ab8, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cd1f5e6c6694079940125a00c4917ab8->m_type_description == NULL);
    frame_cd1f5e6c6694079940125a00c4917ab8 = cache_frame_cd1f5e6c6694079940125a00c4917ab8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cd1f5e6c6694079940125a00c4917ab8);
    assert(Py_REFCNT(frame_cd1f5e6c6694079940125a00c4917ab8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_cd1f5e6c6694079940125a00c4917ab8->m_frame.f_lineno = 294;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[88],
            PyTuple_GET_ITEM(mod_consts[89], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_header == NULL);
        var_header = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_header);
        tmp_expression_value_1 = var_header;
        tmp_subscript_value_1 = mod_consts[35];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_b1 == NULL);
        var_b1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_rshift_expr_left_1;
        PyObject *tmp_rshift_expr_right_1;
        CHECK_OBJECT(var_b1);
        tmp_rshift_expr_left_1 = var_b1;
        tmp_rshift_expr_right_1 = mod_consts[58];
        tmp_bitand_expr_left_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_1 = mod_consts[28];
        tmp_assign_source_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fin == NULL);
        var_fin = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        PyObject *tmp_rshift_expr_left_2;
        PyObject *tmp_rshift_expr_right_2;
        CHECK_OBJECT(var_b1);
        tmp_rshift_expr_left_2 = var_b1;
        tmp_rshift_expr_right_2 = mod_consts[59];
        tmp_bitand_expr_left_2 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_2, tmp_rshift_expr_right_2);
        if (tmp_bitand_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_2 = mod_consts[28];
        tmp_assign_source_4 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        Py_DECREF(tmp_bitand_expr_left_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rsv1 == NULL);
        var_rsv1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        PyObject *tmp_rshift_expr_left_3;
        PyObject *tmp_rshift_expr_right_3;
        CHECK_OBJECT(var_b1);
        tmp_rshift_expr_left_3 = var_b1;
        tmp_rshift_expr_right_3 = mod_consts[60];
        tmp_bitand_expr_left_3 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_3, tmp_rshift_expr_right_3);
        if (tmp_bitand_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_3 = mod_consts[28];
        tmp_assign_source_5 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        Py_DECREF(tmp_bitand_expr_left_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rsv2 == NULL);
        var_rsv2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_bitand_expr_left_4;
        PyObject *tmp_bitand_expr_right_4;
        PyObject *tmp_rshift_expr_left_4;
        PyObject *tmp_rshift_expr_right_4;
        CHECK_OBJECT(var_b1);
        tmp_rshift_expr_left_4 = var_b1;
        tmp_rshift_expr_right_4 = mod_consts[6];
        tmp_bitand_expr_left_4 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_4, tmp_rshift_expr_right_4);
        if (tmp_bitand_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_4 = mod_consts[28];
        tmp_assign_source_6 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
        Py_DECREF(tmp_bitand_expr_left_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rsv3 == NULL);
        var_rsv3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_bitand_expr_left_5;
        PyObject *tmp_bitand_expr_right_5;
        CHECK_OBJECT(var_b1);
        tmp_bitand_expr_left_5 = var_b1;
        tmp_bitand_expr_right_5 = mod_consts[90];
        tmp_assign_source_7 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_opcode == NULL);
        var_opcode = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_header);
        tmp_expression_value_2 = var_header;
        tmp_subscript_value_2 = mod_consts[28];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_b2 == NULL);
        var_b2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_bitand_expr_left_6;
        PyObject *tmp_bitand_expr_right_6;
        PyObject *tmp_rshift_expr_left_5;
        PyObject *tmp_rshift_expr_right_5;
        CHECK_OBJECT(var_b2);
        tmp_rshift_expr_left_5 = var_b2;
        tmp_rshift_expr_right_5 = mod_consts[58];
        tmp_bitand_expr_left_6 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_5, tmp_rshift_expr_right_5);
        if (tmp_bitand_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_6 = mod_consts[28];
        tmp_assign_source_9 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
        Py_DECREF(tmp_bitand_expr_left_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_has_mask == NULL);
        var_has_mask = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_bitand_expr_left_7;
        PyObject *tmp_bitand_expr_right_7;
        CHECK_OBJECT(var_b2);
        tmp_bitand_expr_left_7 = var_b2;
        tmp_bitand_expr_right_7 = mod_consts[67];
        tmp_assign_source_10 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_7, tmp_bitand_expr_right_7);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_length_bits == NULL);
        var_length_bits = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_fin);
        tmp_tuple_element_1 = var_fin;
        tmp_assattr_value_1 = MAKE_TUPLE_EMPTY(7);
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_rsv1);
        tmp_tuple_element_1 = var_rsv1;
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_rsv2);
        tmp_tuple_element_1 = var_rsv2;
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_rsv3);
        tmp_tuple_element_1 = var_rsv3;
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(var_opcode);
        tmp_tuple_element_1 = var_opcode;
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 4, tmp_tuple_element_1);
        CHECK_OBJECT(var_has_mask);
        tmp_tuple_element_1 = var_has_mask;
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 5, tmp_tuple_element_1);
        CHECK_OBJECT(var_length_bits);
        tmp_tuple_element_1 = var_length_bits;
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 6, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[86], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cd1f5e6c6694079940125a00c4917ab8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd1f5e6c6694079940125a00c4917ab8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd1f5e6c6694079940125a00c4917ab8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cd1f5e6c6694079940125a00c4917ab8,
        type_description_1,
        par_self,
        var_header,
        var_b1,
        var_fin,
        var_rsv1,
        var_rsv2,
        var_rsv3,
        var_opcode,
        var_b2,
        var_has_mask,
        var_length_bits
    );


    // Release cached frame if used for exception.
    if (frame_cd1f5e6c6694079940125a00c4917ab8 == cache_frame_cd1f5e6c6694079940125a00c4917ab8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cd1f5e6c6694079940125a00c4917ab8);
        cache_frame_cd1f5e6c6694079940125a00c4917ab8 = NULL;
    }

    assertFrameObject(frame_cd1f5e6c6694079940125a00c4917ab8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_header);
    Py_DECREF(var_header);
    var_header = NULL;
    CHECK_OBJECT(var_b1);
    Py_DECREF(var_b1);
    var_b1 = NULL;
    CHECK_OBJECT(var_fin);
    Py_DECREF(var_fin);
    var_fin = NULL;
    CHECK_OBJECT(var_rsv1);
    Py_DECREF(var_rsv1);
    var_rsv1 = NULL;
    CHECK_OBJECT(var_rsv2);
    Py_DECREF(var_rsv2);
    var_rsv2 = NULL;
    CHECK_OBJECT(var_rsv3);
    Py_DECREF(var_rsv3);
    var_rsv3 = NULL;
    CHECK_OBJECT(var_opcode);
    Py_DECREF(var_opcode);
    var_opcode = NULL;
    CHECK_OBJECT(var_b2);
    Py_DECREF(var_b2);
    var_b2 = NULL;
    CHECK_OBJECT(var_has_mask);
    Py_DECREF(var_has_mask);
    var_has_mask = NULL;
    CHECK_OBJECT(var_length_bits);
    Py_DECREF(var_length_bits);
    var_length_bits = NULL;
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

    Py_XDECREF(var_header);
    var_header = NULL;
    Py_XDECREF(var_b1);
    var_b1 = NULL;
    Py_XDECREF(var_fin);
    var_fin = NULL;
    Py_XDECREF(var_rsv1);
    var_rsv1 = NULL;
    Py_XDECREF(var_rsv2);
    var_rsv2 = NULL;
    Py_XDECREF(var_rsv3);
    var_rsv3 = NULL;
    Py_XDECREF(var_opcode);
    var_opcode = NULL;
    Py_XDECREF(var_b2);
    var_b2 = NULL;
    Py_XDECREF(var_has_mask);
    var_has_mask = NULL;
    Py_XDECREF(var_length_bits);
    var_length_bits = NULL;
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


static PyObject *impl_websocket$_abnf$$$function__15_has_mask(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_46810db60828a02037429a77a1b33ff3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_46810db60828a02037429a77a1b33ff3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_46810db60828a02037429a77a1b33ff3)) {
        Py_XDECREF(cache_frame_46810db60828a02037429a77a1b33ff3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_46810db60828a02037429a77a1b33ff3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_46810db60828a02037429a77a1b33ff3 = MAKE_FUNCTION_FRAME(codeobj_46810db60828a02037429a77a1b33ff3, module_websocket$_abnf, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_46810db60828a02037429a77a1b33ff3->m_type_description == NULL);
    frame_46810db60828a02037429a77a1b33ff3 = cache_frame_46810db60828a02037429a77a1b33ff3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_46810db60828a02037429a77a1b33ff3);
    assert(Py_REFCNT(frame_46810db60828a02037429a77a1b33ff3) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[86]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "o";
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[86]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[92]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
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
        exception_tb = MAKE_TRACEBACK(frame_46810db60828a02037429a77a1b33ff3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_46810db60828a02037429a77a1b33ff3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46810db60828a02037429a77a1b33ff3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_46810db60828a02037429a77a1b33ff3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_46810db60828a02037429a77a1b33ff3 == cache_frame_46810db60828a02037429a77a1b33ff3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_46810db60828a02037429a77a1b33ff3);
        cache_frame_46810db60828a02037429a77a1b33ff3 = NULL;
    }

    assertFrameObject(frame_46810db60828a02037429a77a1b33ff3);

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


static PyObject *impl_websocket$_abnf$$$function__16_has_received_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9196d87d5a8a65fe83b1a4588af8824a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9196d87d5a8a65fe83b1a4588af8824a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9196d87d5a8a65fe83b1a4588af8824a)) {
        Py_XDECREF(cache_frame_9196d87d5a8a65fe83b1a4588af8824a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9196d87d5a8a65fe83b1a4588af8824a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9196d87d5a8a65fe83b1a4588af8824a = MAKE_FUNCTION_FRAME(codeobj_9196d87d5a8a65fe83b1a4588af8824a, module_websocket$_abnf, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9196d87d5a8a65fe83b1a4588af8824a->m_type_description == NULL);
    frame_9196d87d5a8a65fe83b1a4588af8824a = cache_frame_9196d87d5a8a65fe83b1a4588af8824a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9196d87d5a8a65fe83b1a4588af8824a);
    assert(Py_REFCNT(frame_9196d87d5a8a65fe83b1a4588af8824a) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[87]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
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
        exception_tb = MAKE_TRACEBACK(frame_9196d87d5a8a65fe83b1a4588af8824a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9196d87d5a8a65fe83b1a4588af8824a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9196d87d5a8a65fe83b1a4588af8824a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9196d87d5a8a65fe83b1a4588af8824a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9196d87d5a8a65fe83b1a4588af8824a == cache_frame_9196d87d5a8a65fe83b1a4588af8824a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9196d87d5a8a65fe83b1a4588af8824a);
        cache_frame_9196d87d5a8a65fe83b1a4588af8824a = NULL;
    }

    assertFrameObject(frame_9196d87d5a8a65fe83b1a4588af8824a);

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


static PyObject *impl_websocket$_abnf$$$function__17_recv_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_bits = NULL;
    PyObject *var_length_bits = NULL;
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_ad0e3077c3aea39936a2b386a783d22f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ad0e3077c3aea39936a2b386a783d22f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ad0e3077c3aea39936a2b386a783d22f)) {
        Py_XDECREF(cache_frame_ad0e3077c3aea39936a2b386a783d22f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad0e3077c3aea39936a2b386a783d22f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad0e3077c3aea39936a2b386a783d22f = MAKE_FUNCTION_FRAME(codeobj_ad0e3077c3aea39936a2b386a783d22f, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad0e3077c3aea39936a2b386a783d22f->m_type_description == NULL);
    frame_ad0e3077c3aea39936a2b386a783d22f = cache_frame_ad0e3077c3aea39936a2b386a783d22f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad0e3077c3aea39936a2b386a783d22f);
    assert(Py_REFCNT(frame_ad0e3077c3aea39936a2b386a783d22f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[86]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[93]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_bits == NULL);
        var_bits = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(var_bits);
        tmp_bitand_expr_left_1 = var_bits;
        tmp_bitand_expr_right_1 = mod_consts[67];
        tmp_assign_source_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_length_bits == NULL);
        var_length_bits = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_length_bits);
        tmp_cmp_expr_left_1 = var_length_bits;
        tmp_cmp_expr_right_1 = mod_consts[29];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ad0e3077c3aea39936a2b386a783d22f->m_frame.f_lineno = 319;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[88],
            PyTuple_GET_ITEM(mod_consts[89], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_v == NULL);
        var_v = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[66];
        CHECK_OBJECT(var_v);
        tmp_args_element_value_2 = var_v;
        frame_ad0e3077c3aea39936a2b386a783d22f->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[94],
                call_args
            );
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[35];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[87], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_length_bits);
        tmp_cmp_expr_left_2 = var_length_bits;
        tmp_cmp_expr_right_2 = mod_consts[67];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_ad0e3077c3aea39936a2b386a783d22f->m_frame.f_lineno = 322;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[88],
            PyTuple_GET_ITEM(mod_consts[95], 0)
        );

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_v == NULL);
        var_v = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_assattr_target_2;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[68];
        CHECK_OBJECT(var_v);
        tmp_args_element_value_4 = var_v;
        frame_ad0e3077c3aea39936a2b386a783d22f->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_expression_value_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[94],
                call_args
            );
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[35];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_3, 0);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[87], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_length_bits);
        tmp_assattr_value_3 = var_length_bits;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[87], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad0e3077c3aea39936a2b386a783d22f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad0e3077c3aea39936a2b386a783d22f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad0e3077c3aea39936a2b386a783d22f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad0e3077c3aea39936a2b386a783d22f,
        type_description_1,
        par_self,
        var_bits,
        var_length_bits,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_ad0e3077c3aea39936a2b386a783d22f == cache_frame_ad0e3077c3aea39936a2b386a783d22f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad0e3077c3aea39936a2b386a783d22f);
        cache_frame_ad0e3077c3aea39936a2b386a783d22f = NULL;
    }

    assertFrameObject(frame_ad0e3077c3aea39936a2b386a783d22f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_bits);
    Py_DECREF(var_bits);
    var_bits = NULL;
    Py_XDECREF(var_length_bits);
    var_length_bits = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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

    Py_XDECREF(var_bits);
    var_bits = NULL;
    Py_XDECREF(var_length_bits);
    var_length_bits = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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


static PyObject *impl_websocket$_abnf$$$function__18_has_received_mask(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a76acd46443c1552844a991da89a19cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a76acd46443c1552844a991da89a19cd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a76acd46443c1552844a991da89a19cd)) {
        Py_XDECREF(cache_frame_a76acd46443c1552844a991da89a19cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a76acd46443c1552844a991da89a19cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a76acd46443c1552844a991da89a19cd = MAKE_FUNCTION_FRAME(codeobj_a76acd46443c1552844a991da89a19cd, module_websocket$_abnf, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a76acd46443c1552844a991da89a19cd->m_type_description == NULL);
    frame_a76acd46443c1552844a991da89a19cd = cache_frame_a76acd46443c1552844a991da89a19cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a76acd46443c1552844a991da89a19cd);
    assert(Py_REFCNT(frame_a76acd46443c1552844a991da89a19cd) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
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
        exception_tb = MAKE_TRACEBACK(frame_a76acd46443c1552844a991da89a19cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a76acd46443c1552844a991da89a19cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a76acd46443c1552844a991da89a19cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a76acd46443c1552844a991da89a19cd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a76acd46443c1552844a991da89a19cd == cache_frame_a76acd46443c1552844a991da89a19cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a76acd46443c1552844a991da89a19cd);
        cache_frame_a76acd46443c1552844a991da89a19cd = NULL;
    }

    assertFrameObject(frame_a76acd46443c1552844a991da89a19cd);

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


static PyObject *impl_websocket$_abnf$$$function__19_recv_mask(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4f747998c791decb1e3fa0819b371fa0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4f747998c791decb1e3fa0819b371fa0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4f747998c791decb1e3fa0819b371fa0)) {
        Py_XDECREF(cache_frame_4f747998c791decb1e3fa0819b371fa0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f747998c791decb1e3fa0819b371fa0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f747998c791decb1e3fa0819b371fa0 = MAKE_FUNCTION_FRAME(codeobj_4f747998c791decb1e3fa0819b371fa0, module_websocket$_abnf, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f747998c791decb1e3fa0819b371fa0->m_type_description == NULL);
    frame_4f747998c791decb1e3fa0819b371fa0 = cache_frame_4f747998c791decb1e3fa0819b371fa0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f747998c791decb1e3fa0819b371fa0);
    assert(Py_REFCNT(frame_4f747998c791decb1e3fa0819b371fa0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_4f747998c791decb1e3fa0819b371fa0->m_frame.f_lineno = 331;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[96]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 331;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_4f747998c791decb1e3fa0819b371fa0->m_frame.f_lineno = 331;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[88],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assattr_value_1 = mod_consts[14];
        Py_INCREF(tmp_assattr_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4f747998c791decb1e3fa0819b371fa0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f747998c791decb1e3fa0819b371fa0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f747998c791decb1e3fa0819b371fa0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f747998c791decb1e3fa0819b371fa0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4f747998c791decb1e3fa0819b371fa0 == cache_frame_4f747998c791decb1e3fa0819b371fa0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f747998c791decb1e3fa0819b371fa0);
        cache_frame_4f747998c791decb1e3fa0819b371fa0 = NULL;
    }

    assertFrameObject(frame_4f747998c791decb1e3fa0819b371fa0);

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


static PyObject *impl_websocket$_abnf$$$function__20_recv_frame(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_fin = NULL;
    PyObject *var_rsv1 = NULL;
    PyObject *var_rsv2 = NULL;
    PyObject *var_rsv3 = NULL;
    PyObject *var_opcode = NULL;
    PyObject *var_has_mask = NULL;
    PyObject *var__ = NULL;
    PyObject *var_length = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_payload = NULL;
    PyObject *var_frame = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_6aca04127c62f4f70b43950b3ef48ed9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6aca04127c62f4f70b43950b3ef48ed9 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6aca04127c62f4f70b43950b3ef48ed9)) {
        Py_XDECREF(cache_frame_6aca04127c62f4f70b43950b3ef48ed9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6aca04127c62f4f70b43950b3ef48ed9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6aca04127c62f4f70b43950b3ef48ed9 = MAKE_FUNCTION_FRAME(codeobj_6aca04127c62f4f70b43950b3ef48ed9, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6aca04127c62f4f70b43950b3ef48ed9->m_type_description == NULL);
    frame_6aca04127c62f4f70b43950b3ef48ed9 = cache_frame_6aca04127c62f4f70b43950b3ef48ed9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6aca04127c62f4f70b43950b3ef48ed9);
    assert(Py_REFCNT(frame_6aca04127c62f4f70b43950b3ef48ed9) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[85]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[97]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 335;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[98]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 337;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[99]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 337;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 338;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[100]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[86]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 7);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooo";
            exception_lineno = 339;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 7);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooo";
            exception_lineno = 339;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_3, 2, 7);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooo";
            exception_lineno = 339;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_4, 3, 7);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooo";
            exception_lineno = 339;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_5, 4, 7);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooo";
            exception_lineno = 339;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_6, 5, 7);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooo";
            exception_lineno = 339;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_7, 6, 7);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooo";
            exception_lineno = 339;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_7 == NULL);
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 339;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[101];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooo";
            exception_lineno = 339;
            goto try_except_handler_6;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        assert(var_fin == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_fin = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        assert(var_rsv1 == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_rsv1 = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_3;
        assert(var_rsv2 == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_rsv2 = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_4;
        assert(var_rsv3 == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_rsv3 = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_5;
        assert(var_opcode == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_opcode = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_6;
        assert(var_has_mask == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_has_mask = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_7;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_19);
        var__ = tmp_assign_source_19;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 342;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[102]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 342;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 343;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[103]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[87]);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_length == NULL);
        var_length = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 347;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[104]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 347;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 348;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[105]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[13]);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_mask == NULL);
        var_mask = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        CHECK_OBJECT(var_length);
        tmp_args_element_value_1 = var_length;
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 352;
        tmp_assign_source_22 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[88], tmp_args_element_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_payload == NULL);
        var_payload = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_has_mask);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_has_mask);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_mask);
        tmp_args_element_value_2 = var_mask;
        CHECK_OBJECT(var_payload);
        tmp_args_element_value_3 = var_payload;
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_23 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_8,
                mod_consts[13],
                call_args
            );
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_payload;
            assert(old != NULL);
            var_payload = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[83]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 357;
        tmp_call_result_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_fin);
        tmp_args_element_value_4 = var_fin;
        CHECK_OBJECT(var_rsv1);
        tmp_args_element_value_5 = var_rsv1;
        CHECK_OBJECT(var_rsv2);
        tmp_args_element_value_6 = var_rsv2;
        CHECK_OBJECT(var_rsv3);
        tmp_args_element_value_7 = var_rsv3;
        CHECK_OBJECT(var_opcode);
        tmp_args_element_value_8 = var_opcode;
        CHECK_OBJECT(var_has_mask);
        tmp_args_element_value_9 = var_has_mask;
        CHECK_OBJECT(var_payload);
        tmp_args_element_value_10 = var_payload;
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_frame == NULL);
        var_frame = tmp_assign_source_24;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_frame);
        tmp_expression_value_8 = var_frame;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[106]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[81]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 360;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 360;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_8);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_6aca04127c62f4f70b43950b3ef48ed9, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_6aca04127c62f4f70b43950b3ef48ed9, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_assign_source_25;
        tmp_assign_source_25 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_12 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_13 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_14 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 335;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame) frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 335;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame) frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
    branch_end_5:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_5;
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

    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 335;
        tmp_call_result_9 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[107]);

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_5);
            Py_XDECREF(exception_keeper_value_5);
            Py_XDECREF(exception_keeper_tb_5);

            exception_lineno = 335;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_7:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame.f_lineno = 335;
        tmp_call_result_10 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[107]);

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_8:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    if (var_frame == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 362;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_frame;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6aca04127c62f4f70b43950b3ef48ed9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6aca04127c62f4f70b43950b3ef48ed9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6aca04127c62f4f70b43950b3ef48ed9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6aca04127c62f4f70b43950b3ef48ed9,
        type_description_1,
        par_self,
        var_fin,
        var_rsv1,
        var_rsv2,
        var_rsv3,
        var_opcode,
        var_has_mask,
        var__,
        var_length,
        var_mask,
        var_payload,
        var_frame
    );


    // Release cached frame if used for exception.
    if (frame_6aca04127c62f4f70b43950b3ef48ed9 == cache_frame_6aca04127c62f4f70b43950b3ef48ed9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6aca04127c62f4f70b43950b3ef48ed9);
        cache_frame_6aca04127c62f4f70b43950b3ef48ed9 = NULL;
    }

    assertFrameObject(frame_6aca04127c62f4f70b43950b3ef48ed9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_fin);
    var_fin = NULL;
    Py_XDECREF(var_rsv1);
    var_rsv1 = NULL;
    Py_XDECREF(var_rsv2);
    var_rsv2 = NULL;
    Py_XDECREF(var_rsv3);
    var_rsv3 = NULL;
    Py_XDECREF(var_opcode);
    var_opcode = NULL;
    Py_XDECREF(var_has_mask);
    var_has_mask = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_mask);
    var_mask = NULL;
    Py_XDECREF(var_payload);
    var_payload = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_fin);
    var_fin = NULL;
    Py_XDECREF(var_rsv1);
    var_rsv1 = NULL;
    Py_XDECREF(var_rsv2);
    var_rsv2 = NULL;
    Py_XDECREF(var_rsv3);
    var_rsv3 = NULL;
    Py_XDECREF(var_opcode);
    var_opcode = NULL;
    Py_XDECREF(var_has_mask);
    var_has_mask = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_mask);
    var_mask = NULL;
    Py_XDECREF(var_payload);
    var_payload = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

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


static PyObject *impl_websocket$_abnf$$$function__21_recv_strict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bufsize = python_pars[1];
    PyObject *var_shortage = NULL;
    PyObject *var_bytes_ = NULL;
    PyObject *var_unified = NULL;
    struct Nuitka_FrameObject *frame_4ceedf03bb2b93be9c13d775db760ab2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4ceedf03bb2b93be9c13d775db760ab2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4ceedf03bb2b93be9c13d775db760ab2)) {
        Py_XDECREF(cache_frame_4ceedf03bb2b93be9c13d775db760ab2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ceedf03bb2b93be9c13d775db760ab2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ceedf03bb2b93be9c13d775db760ab2 = MAKE_FUNCTION_FRAME(codeobj_4ceedf03bb2b93be9c13d775db760ab2, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ceedf03bb2b93be9c13d775db760ab2->m_type_description == NULL);
    frame_4ceedf03bb2b93be9c13d775db760ab2 = cache_frame_4ceedf03bb2b93be9c13d775db760ab2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ceedf03bb2b93be9c13d775db760ab2);
    assert(Py_REFCNT(frame_4ceedf03bb2b93be9c13d775db760ab2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_bufsize);
        tmp_sub_expr_left_1 = par_bufsize;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[82]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4ceedf03bb2b93be9c13d775db760ab2->m_frame.f_lineno = 365;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4ceedf03bb2b93be9c13d775db760ab2->m_frame.f_lineno = 365;
        tmp_sub_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_shortage == NULL);
        var_shortage = tmp_assign_source_1;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_shortage == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_shortage;
        tmp_cmp_expr_right_1 = mod_consts[35];
        tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooo";
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
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[80]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[114];
        if (var_shortage == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = var_shortage;
        frame_4ceedf03bb2b93be9c13d775db760ab2->m_frame.f_lineno = 373;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4ceedf03bb2b93be9c13d775db760ab2->m_frame.f_lineno = 373;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_bytes_;
            var_bytes_ = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[82]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[115]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bytes_);
        tmp_args_element_value_7 = var_bytes_;
        frame_4ceedf03bb2b93be9c13d775db760ab2->m_frame.f_lineno = 374;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_8;
        if (var_shortage == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 375;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_isub_expr_left_1 = var_shortage;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bytes_);
        tmp_args_element_value_8 = var_bytes_;
        frame_4ceedf03bb2b93be9c13d775db760ab2->m_frame.f_lineno = 375;
        tmp_isub_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_8);
        if (tmp_isub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        Py_DECREF(tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_isub_expr_left_1;
        var_shortage = tmp_assign_source_3;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 366;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_bytes_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_expression_value_5;
        tmp_bytes_arg_value_1 = mod_consts[116];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 377;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_self;
        tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[82]);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BYTES_JOIN(tmp_bytes_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_unified == NULL);
        var_unified = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_shortage == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 379;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_shortage;
        tmp_cmp_expr_right_2 = mod_consts[35];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(0);
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 380;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[82], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    CHECK_OBJECT(var_unified);
    tmp_return_value = var_unified;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_unified);
        tmp_expression_value_6 = var_unified;
        CHECK_OBJECT(par_bufsize);
        tmp_start_value_1 = par_bufsize;
        tmp_stop_value_1 = Py_None;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_list_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_2, 0, tmp_list_element_1);
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[82], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_stop_value_2;
        CHECK_OBJECT(var_unified);
        tmp_expression_value_7 = var_unified;
        CHECK_OBJECT(par_bufsize);
        tmp_stop_value_2 = par_bufsize;
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT1(tmp_stop_value_2);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ceedf03bb2b93be9c13d775db760ab2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ceedf03bb2b93be9c13d775db760ab2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ceedf03bb2b93be9c13d775db760ab2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ceedf03bb2b93be9c13d775db760ab2,
        type_description_1,
        par_self,
        par_bufsize,
        var_shortage,
        var_bytes_,
        var_unified
    );


    // Release cached frame if used for exception.
    if (frame_4ceedf03bb2b93be9c13d775db760ab2 == cache_frame_4ceedf03bb2b93be9c13d775db760ab2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ceedf03bb2b93be9c13d775db760ab2);
        cache_frame_4ceedf03bb2b93be9c13d775db760ab2 = NULL;
    }

    assertFrameObject(frame_4ceedf03bb2b93be9c13d775db760ab2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_shortage);
    var_shortage = NULL;
    Py_XDECREF(var_bytes_);
    var_bytes_ = NULL;
    CHECK_OBJECT(var_unified);
    Py_DECREF(var_unified);
    var_unified = NULL;
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

    Py_XDECREF(var_shortage);
    var_shortage = NULL;
    Py_XDECREF(var_bytes_);
    var_bytes_ = NULL;
    Py_XDECREF(var_unified);
    var_unified = NULL;
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
    CHECK_OBJECT(par_bufsize);
    Py_DECREF(par_bufsize);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bufsize);
    Py_DECREF(par_bufsize);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_abnf$$$function__22___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_fire_cont_frame = python_pars[1];
    PyObject *par_skip_utf8_validation = python_pars[2];
    struct Nuitka_FrameObject *frame_96a5409e9fe3aa5927ef11a6c6fb8eaa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96a5409e9fe3aa5927ef11a6c6fb8eaa = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96a5409e9fe3aa5927ef11a6c6fb8eaa)) {
        Py_XDECREF(cache_frame_96a5409e9fe3aa5927ef11a6c6fb8eaa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96a5409e9fe3aa5927ef11a6c6fb8eaa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96a5409e9fe3aa5927ef11a6c6fb8eaa = MAKE_FUNCTION_FRAME(codeobj_96a5409e9fe3aa5927ef11a6c6fb8eaa, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96a5409e9fe3aa5927ef11a6c6fb8eaa->m_type_description == NULL);
    frame_96a5409e9fe3aa5927ef11a6c6fb8eaa = cache_frame_96a5409e9fe3aa5927ef11a6c6fb8eaa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96a5409e9fe3aa5927ef11a6c6fb8eaa);
    assert(Py_REFCNT(frame_96a5409e9fe3aa5927ef11a6c6fb8eaa) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_fire_cont_frame);
        tmp_assattr_value_1 = par_fire_cont_frame;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[117], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_skip_utf8_validation);
        tmp_assattr_value_2 = par_skip_utf8_validation;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[81], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[118], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[119], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96a5409e9fe3aa5927ef11a6c6fb8eaa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96a5409e9fe3aa5927ef11a6c6fb8eaa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96a5409e9fe3aa5927ef11a6c6fb8eaa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96a5409e9fe3aa5927ef11a6c6fb8eaa,
        type_description_1,
        par_self,
        par_fire_cont_frame,
        par_skip_utf8_validation
    );


    // Release cached frame if used for exception.
    if (frame_96a5409e9fe3aa5927ef11a6c6fb8eaa == cache_frame_96a5409e9fe3aa5927ef11a6c6fb8eaa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96a5409e9fe3aa5927ef11a6c6fb8eaa);
        cache_frame_96a5409e9fe3aa5927ef11a6c6fb8eaa = NULL;
    }

    assertFrameObject(frame_96a5409e9fe3aa5927ef11a6c6fb8eaa);

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
    CHECK_OBJECT(par_fire_cont_frame);
    Py_DECREF(par_fire_cont_frame);
    CHECK_OBJECT(par_skip_utf8_validation);
    Py_DECREF(par_skip_utf8_validation);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fire_cont_frame);
    Py_DECREF(par_fire_cont_frame);
    CHECK_OBJECT(par_skip_utf8_validation);
    Py_DECREF(par_skip_utf8_validation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_abnf$$$function__23_validate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_frame = python_pars[1];
    struct Nuitka_FrameObject *frame_1c5fb571632323599cc417b89c45eaf0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1c5fb571632323599cc417b89c45eaf0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c5fb571632323599cc417b89c45eaf0)) {
        Py_XDECREF(cache_frame_1c5fb571632323599cc417b89c45eaf0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c5fb571632323599cc417b89c45eaf0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c5fb571632323599cc417b89c45eaf0 = MAKE_FUNCTION_FRAME(codeobj_1c5fb571632323599cc417b89c45eaf0, module_websocket$_abnf, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c5fb571632323599cc417b89c45eaf0->m_type_description == NULL);
    frame_1c5fb571632323599cc417b89c45eaf0 = cache_frame_1c5fb571632323599cc417b89c45eaf0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c5fb571632323599cc417b89c45eaf0);
    assert(Py_REFCNT(frame_1c5fb571632323599cc417b89c45eaf0) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[119]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_2 = par_frame;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[120]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1c5fb571632323599cc417b89c45eaf0->m_frame.f_lineno = 397;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[121]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 397;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[119]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 398;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (par_frame == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_frame;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[12]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 399;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[46]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 399;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 0, tmp_tuple_element_1);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[122]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1c5fb571632323599cc417b89c45eaf0->m_frame.f_lineno = 400;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[121]);

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 400;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c5fb571632323599cc417b89c45eaf0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c5fb571632323599cc417b89c45eaf0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c5fb571632323599cc417b89c45eaf0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c5fb571632323599cc417b89c45eaf0,
        type_description_1,
        par_self,
        par_frame
    );


    // Release cached frame if used for exception.
    if (frame_1c5fb571632323599cc417b89c45eaf0 == cache_frame_1c5fb571632323599cc417b89c45eaf0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c5fb571632323599cc417b89c45eaf0);
        cache_frame_1c5fb571632323599cc417b89c45eaf0 = NULL;
    }

    assertFrameObject(frame_1c5fb571632323599cc417b89c45eaf0);

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
    CHECK_OBJECT(par_frame);
    Py_DECREF(par_frame);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_frame);
    Py_DECREF(par_frame);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_abnf$$$function__24_add(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_frame = python_pars[1];
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    struct Nuitka_FrameObject *frame_76dc98e0f370efb220f010947fedbe77;
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
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_76dc98e0f370efb220f010947fedbe77 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_76dc98e0f370efb220f010947fedbe77)) {
        Py_XDECREF(cache_frame_76dc98e0f370efb220f010947fedbe77);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76dc98e0f370efb220f010947fedbe77 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76dc98e0f370efb220f010947fedbe77 = MAKE_FUNCTION_FRAME(codeobj_76dc98e0f370efb220f010947fedbe77, module_websocket$_abnf, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_76dc98e0f370efb220f010947fedbe77->m_type_description == NULL);
    frame_76dc98e0f370efb220f010947fedbe77 = cache_frame_76dc98e0f370efb220f010947fedbe77;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_76dc98e0f370efb220f010947fedbe77);
    assert(Py_REFCNT(frame_76dc98e0f370efb220f010947fedbe77) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[118]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 403;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[118]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_subscr_1__target == NULL);
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_3 = tmp_inplace_assign_subscr_1__target;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        assert(tmp_inplace_assign_subscr_1__value == NULL);
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_4 = par_frame;
        tmp_iadd_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[15]);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_3;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_1 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        tmp_ass_subscript_1 = mod_consts[28];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 1, tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_5 = par_frame;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[12]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 406;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[46]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 406;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[122]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_8 = par_frame;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[12]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[119], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_9 = par_frame;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[12]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyList_SET_ITEM(tmp_assattr_value_2, 0, tmp_list_element_1);
            CHECK_OBJECT(par_frame);
            tmp_expression_value_10 = par_frame;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[15]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_value_2, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[118], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        if (par_frame == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 410;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_frame;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[8]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 410;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[119], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_76dc98e0f370efb220f010947fedbe77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76dc98e0f370efb220f010947fedbe77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76dc98e0f370efb220f010947fedbe77, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76dc98e0f370efb220f010947fedbe77,
        type_description_1,
        par_self,
        par_frame
    );


    // Release cached frame if used for exception.
    if (frame_76dc98e0f370efb220f010947fedbe77 == cache_frame_76dc98e0f370efb220f010947fedbe77) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_76dc98e0f370efb220f010947fedbe77);
        cache_frame_76dc98e0f370efb220f010947fedbe77 = NULL;
    }

    assertFrameObject(frame_76dc98e0f370efb220f010947fedbe77);

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
    CHECK_OBJECT(par_frame);
    Py_DECREF(par_frame);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_frame);
    Py_DECREF(par_frame);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_abnf$$$function__25_is_fire(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_frame = python_pars[1];
    struct Nuitka_FrameObject *frame_186abe8538b31f2e7acefa1ac9d36808;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_186abe8538b31f2e7acefa1ac9d36808 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_186abe8538b31f2e7acefa1ac9d36808)) {
        Py_XDECREF(cache_frame_186abe8538b31f2e7acefa1ac9d36808);

#if _DEBUG_REFCOUNTS
        if (cache_frame_186abe8538b31f2e7acefa1ac9d36808 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_186abe8538b31f2e7acefa1ac9d36808 = MAKE_FUNCTION_FRAME(codeobj_186abe8538b31f2e7acefa1ac9d36808, module_websocket$_abnf, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_186abe8538b31f2e7acefa1ac9d36808->m_type_description == NULL);
    frame_186abe8538b31f2e7acefa1ac9d36808 = cache_frame_186abe8538b31f2e7acefa1ac9d36808;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_186abe8538b31f2e7acefa1ac9d36808);
    assert(Py_REFCNT(frame_186abe8538b31f2e7acefa1ac9d36808) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_frame);
        tmp_expression_value_1 = par_frame;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[117]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_186abe8538b31f2e7acefa1ac9d36808, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_186abe8538b31f2e7acefa1ac9d36808->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_186abe8538b31f2e7acefa1ac9d36808, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_186abe8538b31f2e7acefa1ac9d36808,
        type_description_1,
        par_self,
        par_frame
    );


    // Release cached frame if used for exception.
    if (frame_186abe8538b31f2e7acefa1ac9d36808 == cache_frame_186abe8538b31f2e7acefa1ac9d36808) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_186abe8538b31f2e7acefa1ac9d36808);
        cache_frame_186abe8538b31f2e7acefa1ac9d36808 = NULL;
    }

    assertFrameObject(frame_186abe8538b31f2e7acefa1ac9d36808);

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
    CHECK_OBJECT(par_frame);
    Py_DECREF(par_frame);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_frame);
    Py_DECREF(par_frame);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_abnf$$$function__26_extract(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_frame = python_pars[1];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_c1d9e8616457def9d2bba3194fb6df8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c1d9e8616457def9d2bba3194fb6df8b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c1d9e8616457def9d2bba3194fb6df8b)) {
        Py_XDECREF(cache_frame_c1d9e8616457def9d2bba3194fb6df8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1d9e8616457def9d2bba3194fb6df8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1d9e8616457def9d2bba3194fb6df8b = MAKE_FUNCTION_FRAME(codeobj_c1d9e8616457def9d2bba3194fb6df8b, module_websocket$_abnf, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c1d9e8616457def9d2bba3194fb6df8b->m_type_description == NULL);
    frame_c1d9e8616457def9d2bba3194fb6df8b = cache_frame_c1d9e8616457def9d2bba3194fb6df8b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c1d9e8616457def9d2bba3194fb6df8b);
    assert(Py_REFCNT(frame_c1d9e8616457def9d2bba3194fb6df8b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[118]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[118], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_data);
        tmp_expression_value_2 = var_data;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_assattr_target_2 = par_frame;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[15], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_5;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[117]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_data);
        tmp_expression_value_4 = var_data;
        tmp_subscript_value_2 = mod_consts[35];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[46]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[81]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_expression_value_7 = par_frame;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[15]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c1d9e8616457def9d2bba3194fb6df8b->m_frame.f_lineno = 420;
        tmp_operand_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_8;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = mod_consts[124];
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_frame);
        tmp_expression_value_8 = par_frame;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[15]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c1d9e8616457def9d2bba3194fb6df8b->m_frame.f_lineno = 422;
        tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c1d9e8616457def9d2bba3194fb6df8b->m_frame.f_lineno = 421;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 421;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_data);
        tmp_expression_value_9 = var_data;
        tmp_subscript_value_3 = mod_consts[35];
        tmp_list_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_3, 0);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
        CHECK_OBJECT(par_frame);
        tmp_list_element_1 = par_frame;
        PyList_SET_ITEM0(tmp_return_value, 1, tmp_list_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_c1d9e8616457def9d2bba3194fb6df8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1d9e8616457def9d2bba3194fb6df8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1d9e8616457def9d2bba3194fb6df8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1d9e8616457def9d2bba3194fb6df8b,
        type_description_1,
        par_self,
        par_frame,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_c1d9e8616457def9d2bba3194fb6df8b == cache_frame_c1d9e8616457def9d2bba3194fb6df8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c1d9e8616457def9d2bba3194fb6df8b);
        cache_frame_c1d9e8616457def9d2bba3194fb6df8b = NULL;
    }

    assertFrameObject(frame_c1d9e8616457def9d2bba3194fb6df8b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
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
    CHECK_OBJECT(par_frame);
    Py_DECREF(par_frame);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_frame);
    Py_DECREF(par_frame);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__10_mask(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__10_mask,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_570211cf7d205e23fe60594d744c2d6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__11___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__11___init__,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        mod_consts[216],
#endif
        codeobj_3f1c69a9f19b4e8af4a008ad30265e88,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__12_clear(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__12_clear,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[218],
#endif
        codeobj_c57b8b4a2d5f362d7b186e41b2eb57b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__13_has_received_header(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__13_has_received_header,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[219],
#endif
        codeobj_8e34a4297e9b02c5577f6310970abc34,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__14_recv_header(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__14_recv_header,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[220],
#endif
        codeobj_cd1f5e6c6694079940125a00c4917ab8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__15_has_mask(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__15_has_mask,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[221],
#endif
        codeobj_46810db60828a02037429a77a1b33ff3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__16_has_received_length(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__16_has_received_length,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[222],
#endif
        codeobj_9196d87d5a8a65fe83b1a4588af8824a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__17_recv_length(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__17_recv_length,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[223],
#endif
        codeobj_ad0e3077c3aea39936a2b386a783d22f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__18_has_received_mask(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__18_has_received_mask,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[224],
#endif
        codeobj_a76acd46443c1552844a991da89a19cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__19_recv_mask(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__19_recv_mask,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[225],
#endif
        codeobj_4f747998c791decb1e3fa0819b371fa0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__1__mask(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__1__mask,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_399b30a5be8d609a0e58af9db4c5aabf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__20_recv_frame(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__20_recv_frame,
        mod_consts[226],
#if PYTHON_VERSION >= 0x300
        mod_consts[227],
#endif
        codeobj_6aca04127c62f4f70b43950b3ef48ed9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__21_recv_strict(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__21_recv_strict,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        mod_consts[229],
#endif
        codeobj_4ceedf03bb2b93be9c13d775db760ab2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__22___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__22___init__,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        mod_consts[231],
#endif
        codeobj_96a5409e9fe3aa5927ef11a6c6fb8eaa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__23_validate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__23_validate,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[232],
#endif
        codeobj_1c5fb571632323599cc417b89c45eaf0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__24_add(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__24_add,
        mod_consts[233],
#if PYTHON_VERSION >= 0x300
        mod_consts[234],
#endif
        codeobj_76dc98e0f370efb220f010947fedbe77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__25_is_fire(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__25_is_fire,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        mod_consts[236],
#endif
        codeobj_186abe8538b31f2e7acefa1ac9d36808,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__26_extract(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__26_extract,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        codeobj_c1d9e8616457def9d2bba3194fb6df8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__2__mask(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__2__mask,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_af07b117f90dac3989b37320d9eed3e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__3___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__3___init__,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_f6e747d168f828d956ef1e8a7afa3057,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__4_validate(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__4_validate,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_4b81b8d8410f21a3b15119fd6dcaccd1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__5__is_valid_close_status(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__5__is_valid_close_status,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_7369c9282ce7625939e5c1b88afc7d19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__6___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__6___str__,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_f5cb107a6766fae23331f201a2b5511c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__7_create_frame(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__7_create_frame,
        mod_consts[208],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_96ada1925d857b9f6616b7124b9ed8d5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__8_format(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__8_format,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        mod_consts[211],
#endif
        codeobj_7c31d2b42c3c89f8cec1e494235fdb87,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_abnf$$$function__9__get_masked(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_abnf$$$function__9__get_masked,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_8a1732c9bd76c58877018e4933c09fa1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_abnf,
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

function_impl_code functable_websocket$_abnf[] = {
    impl_websocket$_abnf$$$function__1__mask,
    impl_websocket$_abnf$$$function__2__mask,
    impl_websocket$_abnf$$$function__3___init__,
    impl_websocket$_abnf$$$function__4_validate,
    impl_websocket$_abnf$$$function__5__is_valid_close_status,
    impl_websocket$_abnf$$$function__6___str__,
    impl_websocket$_abnf$$$function__7_create_frame,
    impl_websocket$_abnf$$$function__8_format,
    impl_websocket$_abnf$$$function__9__get_masked,
    impl_websocket$_abnf$$$function__10_mask,
    impl_websocket$_abnf$$$function__11___init__,
    impl_websocket$_abnf$$$function__12_clear,
    impl_websocket$_abnf$$$function__13_has_received_header,
    impl_websocket$_abnf$$$function__14_recv_header,
    impl_websocket$_abnf$$$function__15_has_mask,
    impl_websocket$_abnf$$$function__16_has_received_length,
    impl_websocket$_abnf$$$function__17_recv_length,
    impl_websocket$_abnf$$$function__18_has_received_mask,
    impl_websocket$_abnf$$$function__19_recv_mask,
    impl_websocket$_abnf$$$function__20_recv_frame,
    impl_websocket$_abnf$$$function__21_recv_strict,
    impl_websocket$_abnf$$$function__22___init__,
    impl_websocket$_abnf$$$function__23_validate,
    impl_websocket$_abnf$$$function__24_add,
    impl_websocket$_abnf$$$function__25_is_fire,
    impl_websocket$_abnf$$$function__26_extract,
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

    function_impl_code *current = functable_websocket$_abnf;
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

    if (offset > sizeof(functable_websocket$_abnf) || offset < 0) {
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
        functable_websocket$_abnf[offset],
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
        module_websocket$_abnf,
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
PyObject *modulecode_websocket$_abnf(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websocket._abnf");

    // Store the module for future use.
    module_websocket$_abnf = module;

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
        PRINT_STRING("websocket._abnf: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websocket._abnf: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websocket._abnf: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwebsocket$_abnf\n");

    moduledict_websocket$_abnf = MODULE_DICT(module_websocket$_abnf);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websocket$_abnf,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websocket$_abnf,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[14]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websocket$_abnf,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_abnf,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_abnf,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websocket$_abnf);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_websocket$_abnf);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_d6766ad828fe8b2fb4c0cd26bb84a451;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *locals_websocket$_abnf$$$class__1_ABNF_100 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_35a8564586efeb65f5139dbfebc0089e_2;
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
    PyObject *locals_websocket$_abnf$$$class__2_frame_buffer_272 = NULL;
    struct Nuitka_FrameObject *frame_ab0b6e4897c40fe3519f6a59fb68733c_3;
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
    PyObject *locals_websocket$_abnf$$$class__3_continuous_frame_387 = NULL;
    struct Nuitka_FrameObject *frame_7577dd06aa927d56b2e59ab06a9cc57c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[127];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_2);
    }
    frame_d6766ad828fe8b2fb4c0cd26bb84a451 = MAKE_MODULE_FRAME(codeobj_d6766ad828fe8b2fb4c0cd26bb84a451, module_websocket$_abnf);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d6766ad828fe8b2fb4c0cd26bb84a451);
    assert(Py_REFCNT(frame_d6766ad828fe8b2fb4c0cd26bb84a451) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[127];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[130], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[131], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[77];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_websocket$_abnf;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[35];
        frame_d6766ad828fe8b2fb4c0cd26bb84a451->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[64];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_websocket$_abnf;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[35];
        frame_d6766ad828fe8b2fb4c0cd26bb84a451->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_7);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[134];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_websocket$_abnf;
        tmp_locals_arg_value_3 = (PyObject *)moduledict_websocket$_abnf;
        tmp_fromlist_value_3 = mod_consts[135];
        tmp_level_value_3 = mod_consts[28];
        frame_d6766ad828fe8b2fb4c0cd26bb84a451->m_frame.f_lineno = 6;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_websocket$_abnf, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[136];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_websocket$_abnf;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[137];
        tmp_level_value_4 = mod_consts[28];
        frame_d6766ad828fe8b2fb4c0cd26bb84a451->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_websocket$_abnf,
                mod_consts[32],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[138];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_websocket$_abnf;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[139];
        tmp_level_value_5 = mod_consts[35];
        frame_d6766ad828fe8b2fb4c0cd26bb84a451->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_websocket$_abnf,
                mod_consts[84],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[84]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_9);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[140];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_websocket$_abnf;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[141];
        tmp_level_value_6 = mod_consts[35];
        frame_d6766ad828fe8b2fb4c0cd26bb84a451->m_frame.f_lineno = 34;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_websocket$_abnf,
                mod_consts[0],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[142];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_11 = MAKE_FUNCTION_websocket$_abnf$$$function__1__mask(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_11);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d6766ad828fe8b2fb4c0cd26bb84a451, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d6766ad828fe8b2fb4c0cd26bb84a451, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[145]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_2;
        tmp_dict_key_2 = mod_consts[146];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_2;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[77]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_2;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_3;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[147];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[77]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[142];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[143]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_2);
        goto try_except_handler_2;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_13 = MAKE_FUNCTION_websocket$_abnf$$$function__2__mask(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_13);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 29;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d6766ad828fe8b2fb4c0cd26bb84a451->m_frame) frame_d6766ad828fe8b2fb4c0cd26bb84a451->m_frame.f_lineno = exception_tb->tb_lineno;

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
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = LIST_COPY(mod_consts[148]);
        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[150];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[154];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[156];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[158];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[164];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[166];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[178];
        UPDATE_STRING_DICT0(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(12);
        PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_30, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_30, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_30, 3, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_30, 4, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[165]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_30, 5, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_30, 6, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_30, 7, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_30, 8, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_30, 9, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_30, 10, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_assign_source_30, 11, tmp_tuple_element_1);
        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_websocket$_abnf$$$class__1_ABNF_100 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[181], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[182];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[126], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[22];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[183], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[35];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[120], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[46], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[122], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[184];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[27], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[185];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[25], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[186];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[187], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_tuple_element_2;
            tmp_tuple_element_2 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[120]);

            if (unlikely(tmp_tuple_element_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 116;

                goto outline_exception_1;
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto outline_exception_1;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(6);
            PyTuple_SET_ITEM0(tmp_dictset_value, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[46]);

            if (unlikely(tmp_tuple_element_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[46]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 116;

                goto outline_exception_1;
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto outline_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_dictset_value, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[122]);

            if (unlikely(tmp_tuple_element_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[122]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 116;

                goto outline_exception_1;
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto outline_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_dictset_value, 2, tmp_tuple_element_2);
            tmp_tuple_element_2 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[27]);

            if (unlikely(tmp_tuple_element_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[27]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 116;

                goto outline_exception_1;
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto outline_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_dictset_value, 3, tmp_tuple_element_2);
            tmp_tuple_element_2 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[25]);

            if (unlikely(tmp_tuple_element_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[25]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 117;

                goto outline_exception_1;
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto outline_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_dictset_value, 4, tmp_tuple_element_2);
            tmp_tuple_element_2 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[187]);

            if (unlikely(tmp_tuple_element_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[187]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 117;

                goto outline_exception_1;
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto outline_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_dictset_value, 5, tmp_tuple_element_2);
            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_35a8564586efeb65f5139dbfebc0089e_2 = MAKE_CLASS_FRAME(codeobj_35a8564586efeb65f5139dbfebc0089e, module_websocket$_abnf, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_35a8564586efeb65f5139dbfebc0089e_2);
        assert(Py_REFCNT(frame_35a8564586efeb65f5139dbfebc0089e_2) == 2);

        // Framed code:
        {
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[120]);

            if (unlikely(tmp_dict_key_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[120]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_3 = mod_consts[188];
            tmp_dictset_value = _PyDict_NewPresized( 6 );
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_dict_key_3 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[46]);

            if (unlikely(tmp_dict_key_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[46]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 122;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }

            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_dict_value_3 = mod_consts[189];
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_dict_key_3 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[122]);

            if (unlikely(tmp_dict_key_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[122]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 123;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }

            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_dict_value_3 = mod_consts[190];
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_dict_key_3 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[27]);

            if (unlikely(tmp_dict_key_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[27]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 124;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }

            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_dict_value_3 = mod_consts[191];
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_dict_key_3 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[25]);

            if (unlikely(tmp_dict_key_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[25]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 125;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }

            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_dict_value_3 = mod_consts[192];
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_dict_key_3 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[187]);

            if (unlikely(tmp_dict_key_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[187]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 126;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }

            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_dict_value_3 = mod_consts[193];
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[194], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = mod_consts[29];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[62], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[195];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[63], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[196];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[55], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_tuple_element_3 = mod_consts[35];
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(7);
            PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = DICT_GET_ITEM0(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[46]);

            if (unlikely(tmp_tuple_element_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[46]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[28];
            PyTuple_SET_ITEM0(tmp_defaults_1, 5, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[14];
            PyTuple_SET_ITEM0(tmp_defaults_1, 6, tmp_tuple_element_3);
            tmp_dict_key_4 = mod_consts[8];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_1);

                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 8 );
            {
                int tmp_or_left_truth_1;
                PyObject *tmp_or_left_value_1;
                PyObject *tmp_or_right_value_1;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[9];
                tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

                if (unlikely(tmp_dict_value_4 == NULL)) {
                    tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                }

                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 134;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[10];
                tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

                if (unlikely(tmp_dict_value_4 == NULL)) {
                    tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                }

                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 134;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[11];
                tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

                if (unlikely(tmp_dict_value_4 == NULL)) {
                    tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                }

                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 134;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[12];
                tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

                if (unlikely(tmp_dict_value_4 == NULL)) {
                    tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                }

                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 135;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[13];
                tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

                if (unlikely(tmp_dict_value_4 == NULL)) {
                    tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                }

                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 135;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[15];
                tmp_or_left_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

                if (unlikely(tmp_or_left_value_1 == NULL)) {
                    tmp_or_left_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                }

                if (tmp_or_left_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 135;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
                if (tmp_or_left_truth_1 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 135;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                if (tmp_or_left_truth_1 == 1) {
                    goto or_left_1;
                } else {
                    goto or_right_1;
                }
                or_right_1:;
                tmp_or_right_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[143]);

                if (unlikely(tmp_or_right_value_1 == NULL)) {
                    tmp_or_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                }

                if (tmp_or_right_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 135;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_4 = tmp_or_right_value_1;
                goto or_end_1;
                or_left_1:;
                tmp_dict_value_4 = tmp_or_left_value_1;
                or_end_1:;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[142];
                tmp_dict_value_4 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_defaults_1);
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__3___init__(tmp_defaults_1, tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[197], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_defaults_2 = mod_consts[199];
            tmp_dict_key_5 = mod_consts[81];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[142];
            tmp_dict_value_5 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__4_validate(tmp_defaults_2, tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[202]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_6 = mod_consts[203];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[142];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_args_element_value_1 = MAKE_FUNCTION_websocket$_abnf$$$function__5__is_valid_close_status(tmp_annotations_5);

            frame_35a8564586efeb65f5139dbfebc0089e_2->m_frame.f_lineno = 180;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_dict_key_7 = mod_consts[142];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__6___str__(tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[205], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[202]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_3 = mod_consts[207];
            tmp_dict_key_8 = mod_consts[15];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[12];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[8];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[142];
            tmp_dict_value_8 = mod_consts[22];
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            Py_INCREF(tmp_defaults_3);


            tmp_args_element_value_2 = MAKE_FUNCTION_websocket$_abnf$$$function__7_create_frame(tmp_defaults_3, tmp_annotations_7);

            frame_35a8564586efeb65f5139dbfebc0089e_2->m_frame.f_lineno = 189;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[208], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_dict_key_9 = mod_consts[142];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[143]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__8_format(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[210], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            int tmp_or_left_truth_2;
            PyObject *tmp_or_left_value_2;
            PyObject *tmp_or_right_value_2;
            tmp_dict_key_10 = mod_consts[75];
            tmp_or_left_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_or_left_value_2 == NULL)) {
                tmp_or_left_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_or_left_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
            if (tmp_or_left_truth_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            if (tmp_or_left_truth_2 == 1) {
                goto or_left_2;
            } else {
                goto or_right_2;
            }
            or_right_2:;
            tmp_or_right_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[143]);

            if (unlikely(tmp_or_right_value_2 == NULL)) {
                tmp_or_right_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
            }

            if (tmp_or_right_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_10 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_dict_value_10 = tmp_or_left_value_2;
            or_end_2:;
            tmp_annotations_9 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[142];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[143]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__9__get_masked(tmp_annotations_9);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[70], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            int tmp_or_left_truth_3;
            PyObject *tmp_or_left_value_3;
            PyObject *tmp_or_right_value_3;
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[202]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_11 = mod_consts[75];
            tmp_or_left_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_or_left_value_3 == NULL)) {
                tmp_or_left_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
            }

            if (tmp_or_left_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
            if (tmp_or_left_truth_3 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            if (tmp_or_left_truth_3 == 1) {
                goto or_left_3;
            } else {
                goto or_right_3;
            }
            or_right_3:;
            tmp_or_right_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[143]);

            if (unlikely(tmp_or_right_value_3 == NULL)) {
                tmp_or_right_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
            }

            if (tmp_or_right_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_11 = tmp_or_right_value_3;
            goto or_end_3;
            or_left_3:;
            tmp_dict_value_11 = tmp_or_left_value_3;
            or_end_3:;
            tmp_annotations_10 = _PyDict_NewPresized( 3 );
            {
                int tmp_or_left_truth_4;
                PyObject *tmp_or_left_value_4;
                PyObject *tmp_or_right_value_4;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[15];
                tmp_or_left_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[43]);

                if (unlikely(tmp_or_left_value_4 == NULL)) {
                    tmp_or_left_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                }

                if (tmp_or_left_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
                if (tmp_or_left_truth_4 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                if (tmp_or_left_truth_4 == 1) {
                    goto or_left_4;
                } else {
                    goto or_right_4;
                }
                or_right_4:;
                tmp_or_right_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[143]);

                if (unlikely(tmp_or_right_value_4 == NULL)) {
                    tmp_or_right_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                }

                if (tmp_or_right_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_dict_value_11 = tmp_or_right_value_4;
                goto or_end_4;
                or_left_4:;
                tmp_dict_value_11 = tmp_or_left_value_4;
                or_end_4:;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[142];
                tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[143]);

                if (unlikely(tmp_dict_value_11 == NULL)) {
                    tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
                }

                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;


            tmp_args_element_value_3 = MAKE_FUNCTION_websocket$_abnf$$$function__10_mask(tmp_annotations_10);

            frame_35a8564586efeb65f5139dbfebc0089e_2->m_frame.f_lineno = 248;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__1_ABNF_100, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_35a8564586efeb65f5139dbfebc0089e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_35a8564586efeb65f5139dbfebc0089e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_35a8564586efeb65f5139dbfebc0089e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_35a8564586efeb65f5139dbfebc0089e_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_35a8564586efeb65f5139dbfebc0089e_2);

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
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_4 = (PyObject *)&PyType_Type;
            tmp_tuple_element_4 = mod_consts[22];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[214];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_websocket$_abnf$$$class__1_ABNF_100;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_d6766ad828fe8b2fb4c0cd26bb84a451->m_frame.f_lineno = 100;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_33 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_websocket$_abnf$$$class__1_ABNF_100);
        locals_websocket$_abnf$$$class__1_ABNF_100 = NULL;
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

        Py_DECREF(locals_websocket$_abnf$$$class__1_ABNF_100);
        locals_websocket$_abnf$$$class__1_ABNF_100 = NULL;
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
        exception_lineno = 100;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_33);
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
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_36;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_websocket$_abnf$$$class__2_frame_buffer_272 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[181], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[183], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[60];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[92], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[93], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_ab0b6e4897c40fe3519f6a59fb68733c_3 = MAKE_CLASS_FRAME(codeobj_ab0b6e4897c40fe3519f6a59fb68733c, module_websocket$_abnf, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ab0b6e4897c40fe3519f6a59fb68733c_3);
        assert(Py_REFCNT(frame_ab0b6e4897c40fe3519f6a59fb68733c_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_dict_key_12 = mod_consts[215];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[81];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[142];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_11);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__11___init__(tmp_annotations_11);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[197], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[217]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__12_clear(tmp_annotations_12);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_dict_key_13 = mod_consts[142];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__13_has_received_header(tmp_annotations_13);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_14;
            tmp_annotations_14 = DICT_COPY(mod_consts[217]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__14_recv_header(tmp_annotations_14);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            int tmp_or_left_truth_5;
            PyObject *tmp_or_left_value_5;
            PyObject *tmp_or_right_value_5;
            tmp_dict_key_14 = mod_consts[142];
            tmp_or_left_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_or_left_value_5 == NULL)) {
                tmp_or_left_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_or_left_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
            if (tmp_or_left_truth_5 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            if (tmp_or_left_truth_5 == 1) {
                goto or_left_5;
            } else {
                goto or_right_5;
            }
            or_right_5:;
            tmp_or_right_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_or_right_value_5 == NULL)) {
                tmp_or_right_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_or_right_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_14 = tmp_or_right_value_5;
            goto or_end_5;
            or_left_5:;
            tmp_dict_value_14 = tmp_or_left_value_5;
            or_end_5:;
            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__15_has_mask(tmp_annotations_15);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[96], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_dict_key_15 = mod_consts[142];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__16_has_received_length(tmp_annotations_16);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[102], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_17;
            tmp_annotations_17 = DICT_COPY(mod_consts[217]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__17_recv_length(tmp_annotations_17);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[103], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_dict_key_16 = mod_consts[142];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__18_has_received_mask(tmp_annotations_18);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[104], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_19;
            tmp_annotations_19 = DICT_COPY(mod_consts[217]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__19_recv_mask(tmp_annotations_19);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[105], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            tmp_dict_key_17 = mod_consts[142];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__20_recv_frame(tmp_annotations_20);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[226], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            tmp_dict_key_18 = mod_consts[228];
            tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_dict_value_18 == NULL)) {
                tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_21 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[142];
            tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[143]);

            if (unlikely(tmp_dict_value_18 == NULL)) {
                tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
            }

            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_annotations_21);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__21_recv_strict(tmp_annotations_21);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__2_frame_buffer_272, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ab0b6e4897c40fe3519f6a59fb68733c_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ab0b6e4897c40fe3519f6a59fb68733c_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ab0b6e4897c40fe3519f6a59fb68733c_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ab0b6e4897c40fe3519f6a59fb68733c_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_ab0b6e4897c40fe3519f6a59fb68733c_3);

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
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_5 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[91];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[214];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_websocket$_abnf$$$class__2_frame_buffer_272;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_d6766ad828fe8b2fb4c0cd26bb84a451->m_frame.f_lineno = 272;
            tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_38;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_37 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_websocket$_abnf$$$class__2_frame_buffer_272);
        locals_websocket$_abnf$$$class__2_frame_buffer_272 = NULL;
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

        Py_DECREF(locals_websocket$_abnf$$$class__2_frame_buffer_272);
        locals_websocket$_abnf$$$class__2_frame_buffer_272 = NULL;
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
        exception_lineno = 272;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_37);
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_40;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_websocket$_abnf$$$class__3_continuous_frame_387 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__3_continuous_frame_387, mod_consts[181], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[230];
        tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__3_continuous_frame_387, mod_consts[183], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_7577dd06aa927d56b2e59ab06a9cc57c_4 = MAKE_CLASS_FRAME(codeobj_7577dd06aa927d56b2e59ab06a9cc57c, module_websocket$_abnf, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7577dd06aa927d56b2e59ab06a9cc57c_4);
        assert(Py_REFCNT(frame_7577dd06aa927d56b2e59ab06a9cc57c_4) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            tmp_dict_key_19 = mod_consts[117];
            tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_19 == NULL)) {
                tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_22 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[81];
            tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_19 == NULL)) {
                tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;
                type_description_2 = "o";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[142];
            tmp_dict_value_19 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_22);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__22___init__(tmp_annotations_22);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__3_continuous_frame_387, mod_consts[197], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            tmp_dict_key_20 = mod_consts[108];
            tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_dict_value_20 == NULL)) {
                tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_23 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[142];
            tmp_dict_value_20 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__23_validate(tmp_annotations_23);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__3_continuous_frame_387, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            tmp_dict_key_21 = mod_consts[108];
            tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_dict_value_21 == NULL)) {
                tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_21, tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[142];
            tmp_dict_value_21 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_21, tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__24_add(tmp_annotations_24);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__3_continuous_frame_387, mod_consts[233], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            tmp_dict_key_22 = mod_consts[108];
            tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_dict_value_22 == NULL)) {
                tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 2 );
            {
                int tmp_or_left_truth_6;
                PyObject *tmp_or_left_value_6;
                PyObject *tmp_or_right_value_6;
                tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_22, tmp_dict_value_22);
                assert(!(tmp_res != 0));
                tmp_dict_key_22 = mod_consts[142];
                tmp_or_left_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[200]);

                if (unlikely(tmp_or_left_value_6 == NULL)) {
                    tmp_or_left_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
                }

                if (tmp_or_left_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 413;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
                if (tmp_or_left_truth_6 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 413;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                if (tmp_or_left_truth_6 == 1) {
                    goto or_left_6;
                } else {
                    goto or_right_6;
                }
                or_right_6:;
                tmp_or_right_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[3]);

                if (unlikely(tmp_or_right_value_6 == NULL)) {
                    tmp_or_right_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                }

                if (tmp_or_right_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 413;
                    type_description_2 = "o";
                    goto dict_build_exception_11;
                }
                tmp_dict_value_22 = tmp_or_right_value_6;
                goto or_end_6;
                or_left_6:;
                tmp_dict_value_22 = tmp_or_left_value_6;
                or_end_6:;
                tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_22, tmp_dict_value_22);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_annotations_25);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__25_is_fire(tmp_annotations_25);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__3_continuous_frame_387, mod_consts[235], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            tmp_dict_key_23 = mod_consts[108];
            tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_dict_value_23 == NULL)) {
                tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_26 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[142];
            tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[237]);

            if (unlikely(tmp_dict_value_23 == NULL)) {
                tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[237]);
            }

            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_2 = "o";
                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_12;
            // Exception handling pass through code for dict_build:
            dict_build_exception_12:;
            Py_DECREF(tmp_annotations_26);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_12:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_abnf$$$function__26_extract(tmp_annotations_26);

            tmp_res = PyDict_SetItem(locals_websocket$_abnf$$$class__3_continuous_frame_387, mod_consts[238], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7577dd06aa927d56b2e59ab06a9cc57c_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7577dd06aa927d56b2e59ab06a9cc57c_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7577dd06aa927d56b2e59ab06a9cc57c_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7577dd06aa927d56b2e59ab06a9cc57c_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_7577dd06aa927d56b2e59ab06a9cc57c_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_6 = (PyObject *)&PyType_Type;
            tmp_tuple_element_6 = mod_consts[230];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[214];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_websocket$_abnf$$$class__3_continuous_frame_387;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
            frame_d6766ad828fe8b2fb4c0cd26bb84a451->m_frame.f_lineno = 387;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_41 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_websocket$_abnf$$$class__3_continuous_frame_387);
        locals_websocket$_abnf$$$class__3_continuous_frame_387 = NULL;
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

        Py_DECREF(locals_websocket$_abnf$$$class__3_continuous_frame_387);
        locals_websocket$_abnf$$$class__3_continuous_frame_387 = NULL;
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
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 387;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_websocket$_abnf, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_41);
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d6766ad828fe8b2fb4c0cd26bb84a451, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6766ad828fe8b2fb4c0cd26bb84a451->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6766ad828fe8b2fb4c0cd26bb84a451, exception_lineno);
    }



    assertFrameObject(frame_d6766ad828fe8b2fb4c0cd26bb84a451);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websocket._abnf", false);

    Py_INCREF(module_websocket$_abnf);
    return module_websocket$_abnf;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_abnf, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("websocket$_abnf", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
