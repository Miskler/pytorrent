/* Generated code for Python module 'oauthlib.oauth2.rfc6749.grant_types.authorization_code'
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

/* The "module_oauthlib$oauth2$rfc6749$grant_types$authorization_code" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauthlib$oauth2$rfc6749$grant_types$authorization_code;
PyDictObject *moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[195];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[195];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("oauthlib.oauth2.rfc6749.grant_types.authorization_code"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 195; i++) {
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
void checkModuleConstants_oauthlib$oauth2$rfc6749$grant_types$authorization_code(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 195; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_83100715a9d42b7b0923dd6e566eb744;
static PyCodeObject *codeobj_2e1f184c670d7ec7ee79aadee88a7ea1;
static PyCodeObject *codeobj_57c71a5a23c4ea41bbbecbfe94e955a6;
static PyCodeObject *codeobj_80abda126d2431e0627c2afc861e9280;
static PyCodeObject *codeobj_e92d200852a85489945b1719e6745786;
static PyCodeObject *codeobj_014f85f9e626cf76d5bbe4fa99025aed;
static PyCodeObject *codeobj_bac0a8d98be669d9457afdf733153791;
static PyCodeObject *codeobj_1b7b77c8a5dcfafdb1f35058a1fdfafe;
static PyCodeObject *codeobj_e66aa54d2d5c42f991bdc198776d83e2;
static PyCodeObject *codeobj_847a5c3a17dfee01eb4c72c3baa44df4;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[142]; CHECK_OBJECT(module_filename_obj);
    codeobj_83100715a9d42b7b0923dd6e566eb744 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[186], mod_consts[186], NULL, NULL, 0, 0, 0);
    codeobj_2e1f184c670d7ec7ee79aadee88a7ea1 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[187], NULL, 0, 0, 0);
    codeobj_57c71a5a23c4ea41bbbecbfe94e955a6 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[188], NULL, 2, 0, 0);
    codeobj_80abda126d2431e0627c2afc861e9280 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[188], NULL, 2, 0, 0);
    codeobj_e92d200852a85489945b1719e6745786 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[189], NULL, 2, 0, 0);
    codeobj_014f85f9e626cf76d5bbe4fa99025aed = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[190], NULL, 3, 0, 0);
    codeobj_bac0a8d98be669d9457afdf733153791 = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[191], NULL, 3, 0, 0);
    codeobj_1b7b77c8a5dcfafdb1f35058a1fdfafe = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[192], NULL, 2, 0, 0);
    codeobj_e66aa54d2d5c42f991bdc198776d83e2 = MAKE_CODE_OBJECT(module_filename_obj, 545, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[193], NULL, 4, 0, 0);
    codeobj_847a5c3a17dfee01eb4c72c3baa44df4 = MAKE_CODE_OBJECT(module_filename_obj, 435, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[49], mod_consts[194], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__1_code_challenge_method_s256();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__2_code_challenge_method_plain();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__3_create_authorization_code();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__4_create_authorization_response();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__5_create_token_response();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__6_validate_authorization_request();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__7_validate_token_request();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__8_validate_code_challenge();


// The module function definitions.
static PyObject *impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__1_code_challenge_method_s256(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_verifier = python_pars[0];
    PyObject *par_challenge = python_pars[1];
    struct Nuitka_FrameObject *frame_80abda126d2431e0627c2afc861e9280;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_80abda126d2431e0627c2afc861e9280 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_80abda126d2431e0627c2afc861e9280)) {
        Py_XDECREF(cache_frame_80abda126d2431e0627c2afc861e9280);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80abda126d2431e0627c2afc861e9280 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80abda126d2431e0627c2afc861e9280 = MAKE_FUNCTION_FRAME(codeobj_80abda126d2431e0627c2afc861e9280, module_oauthlib$oauth2$rfc6749$grant_types$authorization_code, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_80abda126d2431e0627c2afc861e9280->m_type_description == NULL);
    frame_80abda126d2431e0627c2afc861e9280 = cache_frame_80abda126d2431e0627c2afc861e9280;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_80abda126d2431e0627c2afc861e9280);
    assert(Py_REFCNT(frame_80abda126d2431e0627c2afc861e9280) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_verifier);
        tmp_expression_value_5 = par_verifier;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[4]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_80abda126d2431e0627c2afc861e9280->m_frame.f_lineno = 48;
        tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_80abda126d2431e0627c2afc861e9280->m_frame.f_lineno = 48;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_80abda126d2431e0627c2afc861e9280->m_frame.f_lineno = 48;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_80abda126d2431e0627c2afc861e9280->m_frame.f_lineno = 47;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_80abda126d2431e0627c2afc861e9280->m_frame.f_lineno = 47;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_80abda126d2431e0627c2afc861e9280->m_frame.f_lineno = 47;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[8]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_challenge);
        tmp_cmp_expr_right_1 = par_challenge;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
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
        exception_tb = MAKE_TRACEBACK(frame_80abda126d2431e0627c2afc861e9280, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80abda126d2431e0627c2afc861e9280->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80abda126d2431e0627c2afc861e9280, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80abda126d2431e0627c2afc861e9280,
        type_description_1,
        par_verifier,
        par_challenge
    );


    // Release cached frame if used for exception.
    if (frame_80abda126d2431e0627c2afc861e9280 == cache_frame_80abda126d2431e0627c2afc861e9280) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_80abda126d2431e0627c2afc861e9280);
        cache_frame_80abda126d2431e0627c2afc861e9280 = NULL;
    }

    assertFrameObject(frame_80abda126d2431e0627c2afc861e9280);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_verifier);
    Py_DECREF(par_verifier);
    CHECK_OBJECT(par_challenge);
    Py_DECREF(par_challenge);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_verifier);
    Py_DECREF(par_verifier);
    CHECK_OBJECT(par_challenge);
    Py_DECREF(par_challenge);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__2_code_challenge_method_plain(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_verifier = python_pars[0];
    PyObject *par_challenge = python_pars[1];
    struct Nuitka_FrameObject *frame_57c71a5a23c4ea41bbbecbfe94e955a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_57c71a5a23c4ea41bbbecbfe94e955a6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_57c71a5a23c4ea41bbbecbfe94e955a6)) {
        Py_XDECREF(cache_frame_57c71a5a23c4ea41bbbecbfe94e955a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57c71a5a23c4ea41bbbecbfe94e955a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57c71a5a23c4ea41bbbecbfe94e955a6 = MAKE_FUNCTION_FRAME(codeobj_57c71a5a23c4ea41bbbecbfe94e955a6, module_oauthlib$oauth2$rfc6749$grant_types$authorization_code, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_57c71a5a23c4ea41bbbecbfe94e955a6->m_type_description == NULL);
    frame_57c71a5a23c4ea41bbbecbfe94e955a6 = cache_frame_57c71a5a23c4ea41bbbecbfe94e955a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_57c71a5a23c4ea41bbbecbfe94e955a6);
    assert(Py_REFCNT(frame_57c71a5a23c4ea41bbbecbfe94e955a6) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_verifier);
        tmp_cmp_expr_left_1 = par_verifier;
        CHECK_OBJECT(par_challenge);
        tmp_cmp_expr_right_1 = par_challenge;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
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
        exception_tb = MAKE_TRACEBACK(frame_57c71a5a23c4ea41bbbecbfe94e955a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57c71a5a23c4ea41bbbecbfe94e955a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57c71a5a23c4ea41bbbecbfe94e955a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57c71a5a23c4ea41bbbecbfe94e955a6,
        type_description_1,
        par_verifier,
        par_challenge
    );


    // Release cached frame if used for exception.
    if (frame_57c71a5a23c4ea41bbbecbfe94e955a6 == cache_frame_57c71a5a23c4ea41bbbecbfe94e955a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_57c71a5a23c4ea41bbbecbfe94e955a6);
        cache_frame_57c71a5a23c4ea41bbbecbfe94e955a6 = NULL;
    }

    assertFrameObject(frame_57c71a5a23c4ea41bbbecbfe94e955a6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_verifier);
    Py_DECREF(par_verifier);
    CHECK_OBJECT(par_challenge);
    Py_DECREF(par_challenge);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_verifier);
    Py_DECREF(par_verifier);
    CHECK_OBJECT(par_challenge);
    Py_DECREF(par_challenge);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__3_create_authorization_code(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *var_grant = NULL;
    struct Nuitka_FrameObject *frame_e92d200852a85489945b1719e6745786;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e92d200852a85489945b1719e6745786 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e92d200852a85489945b1719e6745786)) {
        Py_XDECREF(cache_frame_e92d200852a85489945b1719e6745786);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e92d200852a85489945b1719e6745786 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e92d200852a85489945b1719e6745786 = MAKE_FUNCTION_FRAME(codeobj_e92d200852a85489945b1719e6745786, module_oauthlib$oauth2$rfc6749$grant_types$authorization_code, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e92d200852a85489945b1719e6745786->m_type_description == NULL);
    frame_e92d200852a85489945b1719e6745786 = cache_frame_e92d200852a85489945b1719e6745786;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e92d200852a85489945b1719e6745786);
    assert(Py_REFCNT(frame_e92d200852a85489945b1719e6745786) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_1;
        tmp_dict_key_1 = mod_consts[11];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e92d200852a85489945b1719e6745786->m_frame.f_lineno = 167;
        tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[13]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_grant == NULL);
        var_grant = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_request);
        tmp_expression_value_1 = par_request;
        tmp_attribute_value_1 = mod_consts[14];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_request);
        tmp_expression_value_2 = par_request;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
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
        PyObject *tmp_expression_value_3;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_request;
        tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_grant);
        tmp_dictset_dict = var_grant;
        tmp_dictset_key = mod_consts[14];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[18];
        if (var_grant == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = var_grant;
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_request;
        frame_e92d200852a85489945b1719e6745786->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (var_grant == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 172;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_grant;
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
        exception_tb = MAKE_TRACEBACK(frame_e92d200852a85489945b1719e6745786, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e92d200852a85489945b1719e6745786->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e92d200852a85489945b1719e6745786, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e92d200852a85489945b1719e6745786,
        type_description_1,
        par_self,
        par_request,
        var_grant
    );


    // Release cached frame if used for exception.
    if (frame_e92d200852a85489945b1719e6745786 == cache_frame_e92d200852a85489945b1719e6745786) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e92d200852a85489945b1719e6745786);
        cache_frame_e92d200852a85489945b1719e6745786 = NULL;
    }

    assertFrameObject(frame_e92d200852a85489945b1719e6745786);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_grant);
    var_grant = NULL;
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

    Py_XDECREF(var_grant);
    var_grant = NULL;
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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__4_create_authorization_response(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_token_handler = python_pars[2];
    PyObject *var_e = NULL;
    PyObject *var_redirect_uri = NULL;
    PyObject *var_grant = NULL;
    PyObject *var_modifier = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_014f85f9e626cf76d5bbe4fa99025aed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_014f85f9e626cf76d5bbe4fa99025aed = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_014f85f9e626cf76d5bbe4fa99025aed)) {
        Py_XDECREF(cache_frame_014f85f9e626cf76d5bbe4fa99025aed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_014f85f9e626cf76d5bbe4fa99025aed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_014f85f9e626cf76d5bbe4fa99025aed = MAKE_FUNCTION_FRAME(codeobj_014f85f9e626cf76d5bbe4fa99025aed, module_oauthlib$oauth2$rfc6749$grant_types$authorization_code, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_014f85f9e626cf76d5bbe4fa99025aed->m_type_description == NULL);
    frame_014f85f9e626cf76d5bbe4fa99025aed = cache_frame_014f85f9e626cf76d5bbe4fa99025aed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_014f85f9e626cf76d5bbe4fa99025aed);
    assert(Py_REFCNT(frame_014f85f9e626cf76d5bbe4fa99025aed) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_request);
        tmp_args_element_value_1 = par_request;
        frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = 244;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[21], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = mod_consts[22];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_3 = par_request;
        frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = 245;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[17],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_014f85f9e626cf76d5bbe4fa99025aed, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_014f85f9e626cf76d5bbe4fa99025aed, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_4 = mod_consts[25];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_5 = par_request;
        CHECK_OBJECT(var_e);
        tmp_args_element_value_6 = var_e;
        frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_3,
                mod_consts[17],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 256;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame) frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_e = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_7 = mod_consts[27];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_8 = par_request;
        CHECK_OBJECT(var_e);
        tmp_args_element_value_9 = var_e;
        frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_4,
                mod_consts[17],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assattr_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_request);
        tmp_expression_value_3 = par_request;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[28]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_assattr_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assattr_value_1 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_request);
        tmp_assattr_target_1 = par_request;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_request);
        tmp_expression_value_6 = par_request;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[28]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_e);
        tmp_expression_value_7 = var_e;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[31]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(par_request);
        tmp_expression_value_8 = par_request;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[32]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_3 = mod_consts[33];
        tmp_kw_call_dict_value_0_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = 267;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        assert(var_redirect_uri == NULL);
        var_redirect_uri = tmp_assign_source_3;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[35];
        CHECK_OBJECT(var_redirect_uri);
        tmp_dict_value_1 = var_redirect_uri;
        tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_None;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[36];
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto try_return_handler_5;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto try_return_handler_3;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 243;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame) frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_3;
    branch_end_2:;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(par_request);
        tmp_args_element_value_10 = par_request;
        frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = 272;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[37], tmp_args_element_value_10);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_grant == NULL);
        var_grant = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[38]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooo";
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
                type_description_1 = "ooooooo";
                exception_lineno = 273;
                goto try_except_handler_6;
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
            PyObject *old = var_modifier;
            var_modifier = tmp_assign_source_7;
            Py_INCREF(var_modifier);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(var_modifier);
        tmp_called_value_2 = var_modifier;
        if (var_grant == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_11 = var_grant;
        if (par_token_handler == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_12 = par_token_handler;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_13 = par_request;
        frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_grant;
            var_grant = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 273;
        type_description_1 = "ooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = mod_consts[40];
        if (var_grant == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_4 = var_grant;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[41]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[42]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_grant == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = var_grant;
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_15 = par_request;
        frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[17]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = mod_consts[43];
        if (var_grant == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_17 = var_grant;
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_18 = par_request;
        frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[41]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[44]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = par_request;
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[45]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_grant == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_20 = var_grant;
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_21 = par_request;
        frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[46]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_22 = par_request;
        if (var_grant == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_23 = var_grant;
        tmp_args_element_value_24 = MAKE_DICT_EMPTY();
        tmp_args_element_value_25 = Py_None;
        tmp_args_element_value_26 = mod_consts[36];
        frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
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
        exception_tb = MAKE_TRACEBACK(frame_014f85f9e626cf76d5bbe4fa99025aed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_014f85f9e626cf76d5bbe4fa99025aed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_014f85f9e626cf76d5bbe4fa99025aed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_014f85f9e626cf76d5bbe4fa99025aed,
        type_description_1,
        par_self,
        par_request,
        par_token_handler,
        var_e,
        var_redirect_uri,
        var_grant,
        var_modifier
    );


    // Release cached frame if used for exception.
    if (frame_014f85f9e626cf76d5bbe4fa99025aed == cache_frame_014f85f9e626cf76d5bbe4fa99025aed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_014f85f9e626cf76d5bbe4fa99025aed);
        cache_frame_014f85f9e626cf76d5bbe4fa99025aed = NULL;
    }

    assertFrameObject(frame_014f85f9e626cf76d5bbe4fa99025aed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_redirect_uri);
    var_redirect_uri = NULL;
    Py_XDECREF(var_grant);
    var_grant = NULL;
    Py_XDECREF(var_modifier);
    var_modifier = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_grant);
    var_grant = NULL;
    Py_XDECREF(var_modifier);
    var_modifier = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_token_handler);
    Py_DECREF(par_token_handler);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_token_handler);
    Py_DECREF(par_token_handler);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__5_create_token_response(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_token_handler = python_pars[2];
    PyObject *var_headers = NULL;
    PyObject *var_e = NULL;
    PyObject *var_token = NULL;
    PyObject *var_modifier = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_bac0a8d98be669d9457afdf733153791;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_bac0a8d98be669d9457afdf733153791 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bac0a8d98be669d9457afdf733153791)) {
        Py_XDECREF(cache_frame_bac0a8d98be669d9457afdf733153791);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bac0a8d98be669d9457afdf733153791 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bac0a8d98be669d9457afdf733153791 = MAKE_FUNCTION_FRAME(codeobj_bac0a8d98be669d9457afdf733153791, module_oauthlib$oauth2$rfc6749$grant_types$authorization_code, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bac0a8d98be669d9457afdf733153791->m_type_description == NULL);
    frame_bac0a8d98be669d9457afdf733153791 = cache_frame_bac0a8d98be669d9457afdf733153791;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bac0a8d98be669d9457afdf733153791);
    assert(Py_REFCNT(frame_bac0a8d98be669d9457afdf733153791) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = 298;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[48]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_headers == NULL);
        var_headers = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_request);
        tmp_args_element_value_1 = par_request;
        frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = 300;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[49], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = mod_consts[50];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_3 = par_request;
        frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[17],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_bac0a8d98be669d9457afdf733153791, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_bac0a8d98be669d9457afdf733153791, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_e = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_4 = mod_consts[27];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_5 = par_request;
        CHECK_OBJECT(var_e);
        tmp_args_element_value_6 = var_e;
        frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_4,
                mod_consts[17],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_headers);
        tmp_expression_value_2 = var_headers;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[51]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_e);
        tmp_expression_value_3 = var_e;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[52]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = 304;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_headers);
        tmp_tuple_element_1 = var_headers;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_e);
            tmp_expression_value_4 = var_e;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[53]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_e);
            tmp_expression_value_5 = var_e;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[54]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto try_return_handler_4;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF(var_e);
    var_e = NULL;

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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 299;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bac0a8d98be669d9457afdf733153791->m_frame) frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_token_handler);
        tmp_expression_value_6 = par_token_handler;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[55]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_kw_call_arg_value_0_1 = par_request;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[56]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 307;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = 307;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[57]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_token == NULL);
        var_token = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[58]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 309;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_modifier;
            var_modifier = tmp_assign_source_6;
            Py_INCREF(var_modifier);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_modifier);
        tmp_called_value_3 = var_modifier;
        if (var_token == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 310;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_8 = var_token;
        if (par_token_handler == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 310;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_9 = par_token_handler;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 310;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_10 = par_request;
        frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = 310;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_token;
            var_token = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 309;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[41]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[42]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_token == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 312;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_11 = var_token;
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 312;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_12 = par_request;
        frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[41]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[60]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 314;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_request;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[45]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 314;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 314;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = par_request;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[11]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 314;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 314;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_15 = par_request;
        frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = 313;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(var_headers);
        tmp_expression_value_15 = var_headers;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[51]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[61]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_17 = par_request;
        frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = 315;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_7);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = 315;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_headers);
        tmp_tuple_element_2 = var_headers;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_args_element_value_18;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_2;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[62]);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_2;
            }
            if (var_token == NULL) {
                Py_DECREF(tmp_called_value_8);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 316;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_2;
            }

            tmp_args_element_value_18 = var_token;
            frame_bac0a8d98be669d9457afdf733153791->m_frame.f_lineno = 316;
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_8);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_bac0a8d98be669d9457afdf733153791, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bac0a8d98be669d9457afdf733153791->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bac0a8d98be669d9457afdf733153791, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bac0a8d98be669d9457afdf733153791,
        type_description_1,
        par_self,
        par_request,
        par_token_handler,
        var_headers,
        var_e,
        var_token,
        var_modifier
    );


    // Release cached frame if used for exception.
    if (frame_bac0a8d98be669d9457afdf733153791 == cache_frame_bac0a8d98be669d9457afdf733153791) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bac0a8d98be669d9457afdf733153791);
        cache_frame_bac0a8d98be669d9457afdf733153791 = NULL;
    }

    assertFrameObject(frame_bac0a8d98be669d9457afdf733153791);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_headers);
    var_headers = NULL;
    Py_XDECREF(var_token);
    var_token = NULL;
    Py_XDECREF(var_modifier);
    var_modifier = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_headers);
    var_headers = NULL;
    Py_XDECREF(var_token);
    var_token = NULL;
    Py_XDECREF(var_modifier);
    var_modifier = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_token_handler);
    Py_DECREF(par_token_handler);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_token_handler);
    Py_DECREF(par_token_handler);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__6_validate_authorization_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *var_param = NULL;
    PyObject *var_duplicate_params = NULL;
    PyObject *var_request_info = NULL;
    PyObject *var_validator = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1b7b77c8a5dcfafdb1f35058a1fdfafe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1b7b77c8a5dcfafdb1f35058a1fdfafe = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[65];
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_1b7b77c8a5dcfafdb1f35058a1fdfafe)) {
        Py_XDECREF(cache_frame_1b7b77c8a5dcfafdb1f35058a1fdfafe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b7b77c8a5dcfafdb1f35058a1fdfafe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b7b77c8a5dcfafdb1f35058a1fdfafe = MAKE_FUNCTION_FRAME(codeobj_1b7b77c8a5dcfafdb1f35058a1fdfafe, module_oauthlib$oauth2$rfc6749$grant_types$authorization_code, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_type_description == NULL);
    frame_1b7b77c8a5dcfafdb1f35058a1fdfafe = cache_frame_1b7b77c8a5dcfafdb1f35058a1fdfafe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1b7b77c8a5dcfafdb1f35058a1fdfafe);
    assert(Py_REFCNT(frame_1b7b77c8a5dcfafdb1f35058a1fdfafe) == 2);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 344;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_param;
            var_param = tmp_assign_source_3;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_1;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_1 = par_request;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[66]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_duplicate_params;
            var_duplicate_params = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    goto try_end_1;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_1b7b77c8a5dcfafdb1f35058a1fdfafe, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_1b7b77c8a5dcfafdb1f35058a1fdfafe, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ValueError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[67]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_value_0_1 = mod_consts[68];
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 348;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }

        tmp_kw_call_value_1_1 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 348;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_raise_type_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[69]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 348;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 345;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame) frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_4;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_param);
        tmp_cmp_expr_left_2 = var_param;
        CHECK_OBJECT(var_duplicate_params);
        tmp_cmp_expr_right_2 = var_duplicate_params;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_kw_call_value_1_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[67]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_left_1 = mod_consts[70];
        CHECK_OBJECT(var_param);
        tmp_mod_expr_right_1 = var_param;
        tmp_kw_call_value_0_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_0_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_1_2 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 350;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_raise_type_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[69]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 350;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 344;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_request;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[45]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooo";
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
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_3;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[71]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 355;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_3 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 355;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

            tmp_raise_type_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 355;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[41]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[73]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 357;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_request;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[45]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 357;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 357;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_value_0_4;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[74]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_4 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 358;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

            tmp_raise_type_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_raise_type_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_4;
        exception_lineno = 358;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[17]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[75];
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 363;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_request;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[28]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 363;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 363;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = par_request;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[45]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 363;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[76]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 367;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 367;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY();
        assert(var_request_info == NULL);
        var_request_info = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[77]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[78]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 382;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_8 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_validator;
            var_validator = tmp_assign_source_8;
            Py_INCREF(var_validator);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_8;
        if (var_request_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_16 = var_request_info;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[51]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_validator);
        tmp_called_value_9 = var_validator;
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_8 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 383;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 383;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 382;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_17;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 386;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = par_request;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[80]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_value_0_5;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[81]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_5 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 387;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};

            tmp_raise_type_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_10);
        if (tmp_raise_type_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_5;
        exception_lineno = 387;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_20;
        tmp_cmp_expr_left_4 = mod_consts[11];
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = par_request;
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[80]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooo";
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
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = par_request;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[80]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[82];
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_value_0_6;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[83]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_6 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 391;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};

            tmp_raise_type_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_raise_type_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_6;
        exception_lineno = 391;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    branch_end_5:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[41]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[84]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = par_request;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[45]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = par_request;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[80]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = par_request;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[85]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_12 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_29;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[17]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[86];
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = par_request;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[45]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = par_request;
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[80]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_kw_call_value_0_7;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[87]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_7 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 399;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};

            tmp_raise_type_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_14);
        if (tmp_raise_type_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_7;
        exception_lineno = 399;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(par_self);
        tmp_expression_value_32 = par_self;
        tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[41]);
        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[88]);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_33 = par_request;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[45]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 403;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_17 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 403;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_cmp_expr_left_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = Py_True;
        tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_34;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = par_request;
        tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[89]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_kw_call_value_0_8;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[90]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_8 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 405;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_8};

            tmp_raise_type_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_16);
        if (tmp_raise_type_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_8;
        exception_lineno = 405;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_9:;
    branch_no_8:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_36;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 407;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_36 = par_request;
        tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[89]);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = par_request;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[89]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_request_info == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_request_info;
        tmp_ass_subscript_1 = mod_consts[89];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_38;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = par_request;
        tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[91]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[92];
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_request;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[91], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_39 = par_request;
        tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[91]);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_40 = par_self;
        tmp_cmp_expr_right_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[93]);
        if (tmp_cmp_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_10);

            exception_lineno = 414;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_10, tmp_cmp_expr_left_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        Py_DECREF(tmp_cmp_expr_right_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_kw_call_value_0_9;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[94]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_9 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 415;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};

            tmp_raise_type_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_17);
        if (tmp_raise_type_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_9;
        exception_lineno = 415;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 416;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_42 = par_request;
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[91]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_request_info == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 416;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_request_info;
        tmp_ass_subscript_2 = mod_consts[91];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_10:;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_43 = par_self;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[95]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 420;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_18 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 420;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_45;
        if (var_request_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_44 = var_request_info;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[51]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[45];
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_45 = par_request;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[45]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 423;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_expression_value_48;
            tmp_res = PyDict_SetItem(tmp_args_element_value_19, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[28];
            if (par_request == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 424;
                type_description_1 = "oooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_46 = par_request;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[28]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_1 = "oooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_19, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[80];
            if (par_request == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 425;
                type_description_1 = "oooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_47 = par_request;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[80]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "oooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_19, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[14];
            if (par_request == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 426;
                type_description_1 = "oooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_48 = par_request;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[14]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;
                type_description_1 = "oooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_value_19, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[15];
            if (par_request == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 427;
                type_description_1 = "oooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = par_request;
            tmp_res = PyDict_SetItem(tmp_args_element_value_19, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_19);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 422;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(par_self);
        tmp_expression_value_50 = par_self;
        tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[77]);
        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[96]);
        Py_DECREF(tmp_expression_value_49);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 430;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_11 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_validator;
            var_validator = tmp_assign_source_11;
            Py_INCREF(var_validator);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_21;
        if (var_request_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_51 = var_request_info;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[51]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_validator);
        tmp_called_value_21 = var_validator;
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_21 = par_request;
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 431;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_21);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 431;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame.f_lineno = 431;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_7);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 430;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_52;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_52 = par_request;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[97]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_request_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "oooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_request_info;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_1b7b77c8a5dcfafdb1f35058a1fdfafe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b7b77c8a5dcfafdb1f35058a1fdfafe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b7b77c8a5dcfafdb1f35058a1fdfafe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b7b77c8a5dcfafdb1f35058a1fdfafe,
        type_description_1,
        par_self,
        par_request,
        var_param,
        var_duplicate_params,
        var_request_info,
        var_validator
    );


    // Release cached frame if used for exception.
    if (frame_1b7b77c8a5dcfafdb1f35058a1fdfafe == cache_frame_1b7b77c8a5dcfafdb1f35058a1fdfafe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b7b77c8a5dcfafdb1f35058a1fdfafe);
        cache_frame_1b7b77c8a5dcfafdb1f35058a1fdfafe = NULL;
    }

    assertFrameObject(frame_1b7b77c8a5dcfafdb1f35058a1fdfafe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_duplicate_params);
    var_duplicate_params = NULL;
    Py_XDECREF(var_request_info);
    var_request_info = NULL;
    Py_XDECREF(var_validator);
    var_validator = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_duplicate_params);
    var_duplicate_params = NULL;
    Py_XDECREF(var_request_info);
    var_request_info = NULL;
    Py_XDECREF(var_validator);
    var_validator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__7_validate_token_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *var_validator = NULL;
    PyObject *var_param = NULL;
    PyObject *var_challenge = NULL;
    PyObject *var_challenge_method = NULL;
    PyObject *var_attr = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    struct Nuitka_FrameObject *frame_847a5c3a17dfee01eb4c72c3baa44df4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_847a5c3a17dfee01eb4c72c3baa44df4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_847a5c3a17dfee01eb4c72c3baa44df4)) {
        Py_XDECREF(cache_frame_847a5c3a17dfee01eb4c72c3baa44df4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_847a5c3a17dfee01eb4c72c3baa44df4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_847a5c3a17dfee01eb4c72c3baa44df4 = MAKE_FUNCTION_FRAME(codeobj_847a5c3a17dfee01eb4c72c3baa44df4, module_oauthlib$oauth2$rfc6749$grant_types$authorization_code, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_847a5c3a17dfee01eb4c72c3baa44df4->m_type_description == NULL);
    frame_847a5c3a17dfee01eb4c72c3baa44df4 = cache_frame_847a5c3a17dfee01eb4c72c3baa44df4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_847a5c3a17dfee01eb4c72c3baa44df4);
    assert(Py_REFCNT(frame_847a5c3a17dfee01eb4c72c3baa44df4) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_request);
        tmp_expression_value_1 = par_request;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[99]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[100];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooooooo";
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[101]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_kw_call_value_0_1 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 442;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_raise_type_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 442;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[77]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[102]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 444;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_validator;
            var_validator = tmp_assign_source_3;
            Py_INCREF(var_validator);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_validator);
        tmp_called_value_2 = var_validator;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 445;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 445;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 444;
        type_description_1 = "ooooooo";
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 447;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_request;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
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
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[103]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[104];
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_1_1 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 448;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

            tmp_raise_type_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[69]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 448;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = mod_consts[105];
        tmp_assign_source_4 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 451;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_6 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_param;
            var_param = tmp_assign_source_6;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_param);
        tmp_cmp_expr_left_3 = var_param;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 452;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_7 = par_request;
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[66]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_kw_call_value_1_2;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[103]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_mod_expr_left_1 = mod_consts[70];
        CHECK_OBJECT(var_param);
        tmp_mod_expr_right_1 = var_param;
        tmp_kw_call_value_0_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 453;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 454;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_1_2 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 453;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2};

            tmp_raise_type_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[69]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 453;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    branch_no_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 451;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[41]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[106]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 456;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 456;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[41]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[107]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 462;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 462;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[17]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[108];
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 463;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 463;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_0_4;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[109]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 464;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_4 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 464;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

            tmp_raise_type_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_raise_type_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_4;
        exception_lineno = 464;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[41]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[110]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = par_request;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[45]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 465;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[17]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[108];
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 469;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 469;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_value_0_5;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[109]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_5 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 470;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};

            tmp_raise_type_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_raise_type_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_5;
        exception_lineno = 470;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    branch_end_4:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_attribute_value_1;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 472;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_21 = par_request;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[85]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = mod_consts[45];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_20, tmp_attribute_value_1);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[111];
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 473;
        tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_6 == NULL));
        exception_type = tmp_raise_type_6;
        exception_lineno = 473;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        PyObject *tmp_assattr_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_assattr_target_1;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = par_request;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[45]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 477;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = par_request;
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[85]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[45]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assattr_value_1 = tmp_or_left_value_1;
        or_end_1:;
        if (par_request == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_request;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[45], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[112]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 480;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 480;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_27 = par_self;
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[41]);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[113]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 484;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = par_request;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[45]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 484;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 485;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = par_request;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[11]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 485;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 485;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_30 = par_request;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[85]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 485;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 485;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 484;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_34;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[17]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[114];
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 487;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_32 = par_request;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[45]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 487;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 487;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_33 = par_request;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[85]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 487;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 487;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = par_request;
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[97]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 487;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 486;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_kw_call_value_0_6;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[115]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 488;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_6 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 488;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};

            tmp_raise_type_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_15);
        if (tmp_raise_type_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_7;
        exception_lineno = 488;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_20;
        CHECK_OBJECT(par_self);
        tmp_expression_value_37 = par_self;
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[41]);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[116]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = par_request;
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[11]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 491;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_20 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 491;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_challenge == NULL);
        var_challenge = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_challenge);
        tmp_cmp_expr_left_4 = var_challenge;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_39;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 494;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_39 = par_request;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[117]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_kw_call_value_0_7;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[118]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 495;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_7 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 495;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};

            tmp_raise_type_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_17);
        if (tmp_raise_type_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_8;
        exception_lineno = 495;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_22;
        CHECK_OBJECT(par_self);
        tmp_expression_value_42 = par_self;
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[41]);
        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[119]);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_43 = par_request;
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[11]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_22 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_challenge_method == NULL);
        var_challenge_method = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_challenge_method);
        tmp_cmp_expr_left_6 = var_challenge_method;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_11 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_3;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[115]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 499;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_8 = par_request;
        tmp_kw_call_value_1_3 = mod_consts[120];
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 499;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_3};

            tmp_raise_type_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_19, kw_values, mod_consts[121]);
        }

        Py_DECREF(tmp_called_value_19);
        if (tmp_raise_type_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_9;
        exception_lineno = 499;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(var_challenge_method);
        tmp_cmp_expr_left_7 = var_challenge_method;
        CHECK_OBJECT(par_self);
        tmp_expression_value_45 = par_self;
        tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[93]);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_value_1_4;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[122]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[123];
        CHECK_OBJECT(var_challenge_method);
        tmp_kw_call_arg_value_1_1 = var_challenge_method;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 503;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_kw_call_value_0_9 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_kw_call_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 503;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_kw_call_value_0_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_1_4 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 502;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_4};

            tmp_raise_type_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_20, kw_values, mod_consts[69]);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_kw_call_value_0_9);
        if (tmp_raise_type_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_10;
        exception_lineno = 502;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(par_self);
        tmp_expression_value_47 = par_self;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[124]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_challenge);
        tmp_args_element_value_23 = var_challenge;
        CHECK_OBJECT(var_challenge_method);
        tmp_args_element_value_24 = var_challenge_method;
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 509;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_48 = par_request;
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[117]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 509;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 507;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_7;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 510;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[125], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_kw_call_value_0_10;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[115]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 511;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_10 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 511;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_10};

            tmp_raise_type_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_22, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_22);
        if (tmp_raise_type_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_11;
        exception_lineno = 511;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_13:;
    goto branch_end_9;
    branch_no_9:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(par_self);
        tmp_expression_value_51 = par_self;
        tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[41]);
        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[88]);
        Py_DECREF(tmp_expression_value_50);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 512;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_52 = par_request;
        tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[45]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 512;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 512;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_27 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 512;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_cmp_expr_left_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = Py_True;
        tmp_condition_result_14 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_53;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 513;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_53 = par_request;
        tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[117]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_15 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_kw_call_value_0_11;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[118]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 514;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_11 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 514;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_11};

            tmp_raise_type_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_24);
        if (tmp_raise_type_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_12;
        exception_lineno = 514;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_15:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_5;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[115]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 515;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_12 = par_request;
        tmp_kw_call_value_1_5 = mod_consts[126];
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 515;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_5};

            tmp_raise_type_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_25, kw_values, mod_consts[121]);
        }

        Py_DECREF(tmp_called_value_25);
        if (tmp_raise_type_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_13;
        exception_lineno = 515;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_14:;
    branch_end_9:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        tmp_iter_arg_3 = mod_consts[127];
        tmp_assign_source_9 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        assert(!(tmp_assign_source_9 == NULL));
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 517;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_11 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_attr;
            var_attr = tmp_assign_source_11;
            Py_INCREF(var_attr);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 518;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }

        tmp_getattr_target_1 = par_request;
        CHECK_OBJECT(var_attr);
        tmp_getattr_attr_1 = var_attr;
        tmp_getattr_default_1 = Py_None;
        tmp_cmp_expr_left_10 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_16 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_28 = mod_consts[128];
        CHECK_OBJECT(var_attr);
        tmp_args_element_value_29 = var_attr;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 519;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_call_result_8 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[17],
                call_args
            );
        }

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_16:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 517;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
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

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_56;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 524;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_56 = par_request;
        tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[28]);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_11 = Py_None;
        tmp_condition_result_17 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 525;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_request;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[129], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_58 = par_self;
        tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[41]);
        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[130]);
        Py_DECREF(tmp_expression_value_57);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 527;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_59 = par_request;
        tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[45]);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 527;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_30);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 527;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_31 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 526;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 526;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_request;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[28], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_expression_value_61;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[17]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = mod_consts[131];
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 528;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_61 = par_request;
        tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[28]);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 528;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 528;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_27, call_args);
        }

        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_62;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 529;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_62 = par_request;
        tmp_operand_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[28]);
        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_kw_call_value_0_13;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[132]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 530;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_13 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 530;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_13};

            tmp_raise_type_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_28, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_28);
        if (tmp_raise_type_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_14;
        exception_lineno = 530;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_18:;
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_False;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 532;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_request;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[129], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_expression_value_65;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[17]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = mod_consts[133];
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 533;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_65 = par_request;
        tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[28]);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 533;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 533;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_end_17:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_element_value_40;
        CHECK_OBJECT(par_self);
        tmp_expression_value_67 = par_self;
        tmp_expression_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[41]);
        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[134]);
        Py_DECREF(tmp_expression_value_66);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_30);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 535;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_68 = par_request;
        tmp_args_element_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[45]);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 535;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 535;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_69 = par_request;
        tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[11]);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_36);

            exception_lineno = 535;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 536;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_70 = par_request;
        tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[28]);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);

            exception_lineno = 536;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 536;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_71 = par_request;
        tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[85]);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 536;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 537;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_40 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 535;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_operand_value_7 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_36);
        Py_DECREF(tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_operand_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        Py_DECREF(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_expression_value_75;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[17]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = mod_consts[135];
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_31);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_73 = par_request;
        tmp_args_element_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[28]);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_42);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_74 = par_request;
        tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[45]);
        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_75 = par_request;
        tmp_args_element_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[85]);
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_42);
            Py_DECREF(tmp_args_element_value_43);

            exception_lineno = 539;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 538;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_31, call_args);
        }

        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_43);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_kw_call_value_0_14;
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[136]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_32);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 540;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_14 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 540;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_14};

            tmp_raise_type_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_32, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_32);
        if (tmp_raise_type_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_15;
        exception_lineno = 540;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_19:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(par_self);
        tmp_expression_value_78 = par_self;
        tmp_expression_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[77]);
        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[137]);
        Py_DECREF(tmp_expression_value_77);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 542;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_14 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_validator;
            var_validator = tmp_assign_source_14;
            Py_INCREF(var_validator);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_45;
        CHECK_OBJECT(var_validator);
        tmp_called_value_33 = var_validator;
        if (par_request == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 543;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_45 = par_request;
        frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame.f_lineno = 543;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_45);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_12);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 542;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_847a5c3a17dfee01eb4c72c3baa44df4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_847a5c3a17dfee01eb4c72c3baa44df4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_847a5c3a17dfee01eb4c72c3baa44df4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_847a5c3a17dfee01eb4c72c3baa44df4,
        type_description_1,
        par_self,
        par_request,
        var_validator,
        var_param,
        var_challenge,
        var_challenge_method,
        var_attr
    );


    // Release cached frame if used for exception.
    if (frame_847a5c3a17dfee01eb4c72c3baa44df4 == cache_frame_847a5c3a17dfee01eb4c72c3baa44df4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_847a5c3a17dfee01eb4c72c3baa44df4);
        cache_frame_847a5c3a17dfee01eb4c72c3baa44df4 = NULL;
    }

    assertFrameObject(frame_847a5c3a17dfee01eb4c72c3baa44df4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_validator);
    var_validator = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    CHECK_OBJECT(var_challenge);
    Py_DECREF(var_challenge);
    var_challenge = NULL;
    Py_XDECREF(var_challenge_method);
    var_challenge_method = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_validator);
    var_validator = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_challenge);
    var_challenge = NULL;
    Py_XDECREF(var_challenge_method);
    var_challenge_method = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__8_validate_code_challenge(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_challenge = python_pars[1];
    PyObject *par_challenge_method = python_pars[2];
    PyObject *par_verifier = python_pars[3];
    struct Nuitka_FrameObject *frame_e66aa54d2d5c42f991bdc198776d83e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e66aa54d2d5c42f991bdc198776d83e2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e66aa54d2d5c42f991bdc198776d83e2)) {
        Py_XDECREF(cache_frame_e66aa54d2d5c42f991bdc198776d83e2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e66aa54d2d5c42f991bdc198776d83e2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e66aa54d2d5c42f991bdc198776d83e2 = MAKE_FUNCTION_FRAME(codeobj_e66aa54d2d5c42f991bdc198776d83e2, module_oauthlib$oauth2$rfc6749$grant_types$authorization_code, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e66aa54d2d5c42f991bdc198776d83e2->m_type_description == NULL);
    frame_e66aa54d2d5c42f991bdc198776d83e2 = cache_frame_e66aa54d2d5c42f991bdc198776d83e2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e66aa54d2d5c42f991bdc198776d83e2);
    assert(Py_REFCNT(frame_e66aa54d2d5c42f991bdc198776d83e2) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_challenge_method);
        tmp_cmp_expr_left_1 = par_challenge_method;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[93]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[93]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_challenge_method);
        tmp_subscript_value_1 = par_challenge_method;
        tmp_called_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_verifier);
        tmp_args_element_value_1 = par_verifier;
        CHECK_OBJECT(par_challenge);
        tmp_args_element_value_2 = par_challenge;
        frame_e66aa54d2d5c42f991bdc198776d83e2->m_frame.f_lineno = 547;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[139];
        CHECK_OBJECT(par_challenge_method);
        tmp_mod_expr_right_1 = par_challenge_method;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_e66aa54d2d5c42f991bdc198776d83e2->m_frame.f_lineno = 548;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 548;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_e66aa54d2d5c42f991bdc198776d83e2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e66aa54d2d5c42f991bdc198776d83e2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e66aa54d2d5c42f991bdc198776d83e2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e66aa54d2d5c42f991bdc198776d83e2,
        type_description_1,
        par_self,
        par_challenge,
        par_challenge_method,
        par_verifier
    );


    // Release cached frame if used for exception.
    if (frame_e66aa54d2d5c42f991bdc198776d83e2 == cache_frame_e66aa54d2d5c42f991bdc198776d83e2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e66aa54d2d5c42f991bdc198776d83e2);
        cache_frame_e66aa54d2d5c42f991bdc198776d83e2 = NULL;
    }

    assertFrameObject(frame_e66aa54d2d5c42f991bdc198776d83e2);

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
    CHECK_OBJECT(par_challenge);
    Py_DECREF(par_challenge);
    CHECK_OBJECT(par_challenge_method);
    Py_DECREF(par_challenge_method);
    CHECK_OBJECT(par_verifier);
    Py_DECREF(par_verifier);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_challenge);
    Py_DECREF(par_challenge);
    CHECK_OBJECT(par_challenge_method);
    Py_DECREF(par_challenge_method);
    CHECK_OBJECT(par_verifier);
    Py_DECREF(par_verifier);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__1_code_challenge_method_s256() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__1_code_challenge_method_s256,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_80abda126d2431e0627c2afc861e9280,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__2_code_challenge_method_plain() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__2_code_challenge_method_plain,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_57c71a5a23c4ea41bbbecbfe94e955a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__3_create_authorization_code() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__3_create_authorization_code,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_e92d200852a85489945b1719e6745786,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__4_create_authorization_response() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__4_create_authorization_response,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_014f85f9e626cf76d5bbe4fa99025aed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__5_create_token_response() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__5_create_token_response,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_bac0a8d98be669d9457afdf733153791,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__6_validate_authorization_request() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__6_validate_authorization_request,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_1b7b77c8a5dcfafdb1f35058a1fdfafe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
        mod_consts[98],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__7_validate_token_request() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__7_validate_token_request,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_847a5c3a17dfee01eb4c72c3baa44df4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
        mod_consts[138],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__8_validate_code_challenge() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__8_validate_code_challenge,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_e66aa54d2d5c42f991bdc198776d83e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
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

function_impl_code functable_oauthlib$oauth2$rfc6749$grant_types$authorization_code[] = {
    impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__1_code_challenge_method_s256,
    impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__2_code_challenge_method_plain,
    impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__3_create_authorization_code,
    impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__4_create_authorization_response,
    impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__5_create_token_response,
    impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__6_validate_authorization_request,
    impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__7_validate_token_request,
    impl_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__8_validate_code_challenge,
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

    function_impl_code *current = functable_oauthlib$oauth2$rfc6749$grant_types$authorization_code;
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

    if (offset > sizeof(functable_oauthlib$oauth2$rfc6749$grant_types$authorization_code) || offset < 0) {
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
        functable_oauthlib$oauth2$rfc6749$grant_types$authorization_code[offset],
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
        module_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
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
PyObject *modulecode_oauthlib$oauth2$rfc6749$grant_types$authorization_code(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("oauthlib.oauth2.rfc6749.grant_types.authorization_code");

    // Store the module for future use.
    module_oauthlib$oauth2$rfc6749$grant_types$authorization_code = module;

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
        PRINT_STRING("oauthlib.oauth2.rfc6749.grant_types.authorization_code: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("oauthlib.oauth2.rfc6749.grant_types.authorization_code: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("oauthlib.oauth2.rfc6749.grant_types.authorization_code: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initoauthlib$oauth2$rfc6749$grant_types$authorization_code\n");

    moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code = MODULE_DICT(module_oauthlib$oauth2$rfc6749$grant_types$authorization_code);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[152]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_oauthlib$oauth2$rfc6749$grant_types$authorization_code);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_oauthlib$oauth2$rfc6749$grant_types$authorization_code);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_83100715a9d42b7b0923dd6e566eb744;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_2e1f184c670d7ec7ee79aadee88a7ea1_2;
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
        tmp_assign_source_1 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_2);
    }
    frame_83100715a9d42b7b0923dd6e566eb744 = MAKE_MODULE_FRAME(codeobj_83100715a9d42b7b0923dd6e566eb744, module_oauthlib$oauth2$rfc6749$grant_types$authorization_code);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_83100715a9d42b7b0923dd6e566eb744);
    assert(Py_REFCNT(frame_83100715a9d42b7b0923dd6e566eb744) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[142];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[145], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[146], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[148];
        frame_83100715a9d42b7b0923dd6e566eb744->m_frame.f_lineno = 5;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[2];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[148];
        frame_83100715a9d42b7b0923dd6e566eb744->m_frame.f_lineno = 6;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[53];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[148];
        frame_83100715a9d42b7b0923dd6e566eb744->m_frame.f_lineno = 7;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[149];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[148];
        frame_83100715a9d42b7b0923dd6e566eb744->m_frame.f_lineno = 8;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[150];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[151];
        tmp_level_value_5 = mod_consts[148];
        frame_83100715a9d42b7b0923dd6e566eb744->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
                mod_consts[12],
                mod_consts[148]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[152];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[153];
        tmp_level_value_6 = mod_consts[154];
        frame_83100715a9d42b7b0923dd6e566eb744->m_frame.f_lineno = 12;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
                mod_consts[23],
                mod_consts[148]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[155];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[156];
        tmp_level_value_7 = mod_consts[157];
        frame_83100715a9d42b7b0923dd6e566eb744->m_frame.f_lineno = 13;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code,
                mod_consts[158],
                mod_consts[148]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[158]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        frame_83100715a9d42b7b0923dd6e566eb744->m_frame.f_lineno = 15;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[159],
            PyTuple_GET_ITEM(mod_consts[160], 0)
        );

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__1_code_challenge_method_s256();

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__2_code_challenge_method_plain();

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_13);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
        }
        tmp_assign_source_14 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_14, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_15 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
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


            exception_lineno = 64;

            goto try_except_handler_1;
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
        tmp_subscript_value_1 = mod_consts[148];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_17 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[163]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[163]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[164];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_83100715a9d42b7b0923dd6e566eb744->m_frame.f_lineno = 64;
        tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[165]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
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
        tmp_mod_expr_left_1 = mod_consts[166];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[167];
        tmp_getattr_default_1 = mod_consts[168];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[167]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 64;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_19;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[172], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_3;
        }
        frame_2e1f184c670d7ec7ee79aadee88a7ea1_2 = MAKE_CLASS_FRAME(codeobj_2e1f184c670d7ec7ee79aadee88a7ea1, module_oauthlib$oauth2$rfc6749$grant_types$authorization_code, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_2e1f184c670d7ec7ee79aadee88a7ea1_2);
        assert(Py_REFCNT(frame_2e1f184c670d7ec7ee79aadee88a7ea1_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[173];
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[174], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_LIST1(mod_consts[11]);
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[175], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_key_1 = mod_consts[92];
            tmp_dict_value_1 = PyObject_GetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[162]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[162]);

                    if (unlikely(tmp_dict_value_1 == NULL)) {
                        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
                    }

                    if (tmp_dict_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 156;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dictset_value = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[176];
            tmp_dict_value_1 = PyObject_GetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[161]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[161]);

                    if (unlikely(tmp_dict_value_1 == NULL)) {
                        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
                    }

                    if (tmp_dict_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 157;
                        type_description_2 = "o";
                        goto dict_build_exception_1;
                    }
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto dict_build_exception_1;
                }
            }

            tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__3_create_authorization_code();

        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[37], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__4_create_authorization_response();

        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[178], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__5_create_token_response();

        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__6_validate_authorization_request();

        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__7_validate_token_request();

        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[49], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$function__8_validate_code_challenge();

        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[124], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2e1f184c670d7ec7ee79aadee88a7ea1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2e1f184c670d7ec7ee79aadee88a7ea1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2e1f184c670d7ec7ee79aadee88a7ea1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2e1f184c670d7ec7ee79aadee88a7ea1_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_2e1f184c670d7ec7ee79aadee88a7ea1_2);

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


                exception_lineno = 64;

                goto try_except_handler_3;
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
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64, mod_consts[185], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[164];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_83100715a9d42b7b0923dd6e566eb744->m_frame.f_lineno = 64;
            tmp_assign_source_21 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_20 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64);
        locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64 = NULL;
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

        Py_DECREF(locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64);
        locals_oauthlib$oauth2$rfc6749$grant_types$authorization_code$$$class__1_AuthorizationCodeGrant_64 = NULL;
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
        exception_lineno = 64;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_20);
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
        exception_tb = MAKE_TRACEBACK(frame_83100715a9d42b7b0923dd6e566eb744, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83100715a9d42b7b0923dd6e566eb744->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83100715a9d42b7b0923dd6e566eb744, exception_lineno);
    }



    assertFrameObject(frame_83100715a9d42b7b0923dd6e566eb744);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("oauthlib.oauth2.rfc6749.grant_types.authorization_code", false);

    Py_INCREF(module_oauthlib$oauth2$rfc6749$grant_types$authorization_code);
    return module_oauthlib$oauth2$rfc6749$grant_types$authorization_code;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$grant_types$authorization_code, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("oauthlib$oauth2$rfc6749$grant_types$authorization_code", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
