/* Generated code for Python module 'oauthlib.oauth2.rfc6749.request_validator'
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

/* The "module_oauthlib$oauth2$rfc6749$request_validator" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauthlib$oauth2$rfc6749$request_validator;
PyDictObject *moduledict_oauthlib$oauth2$rfc6749$request_validator;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[125];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[125];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("oauthlib.oauth2.rfc6749.request_validator"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 125; i++) {
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
void checkModuleConstants_oauthlib$oauth2$rfc6749$request_validator(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 125; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_71c68a0e9349861aea34974fdce8ee03;
static PyCodeObject *codeobj_2b6c9a223f3d61367f58c8de6231c3cb;
static PyCodeObject *codeobj_3e4f089d5aab97c376821bfb5fd8b18b;
static PyCodeObject *codeobj_01806fce9aae28df8a8f43cf8ea08ca2;
static PyCodeObject *codeobj_af1c4c33b1461e1eb7a71e00261f2030;
static PyCodeObject *codeobj_b922b334a7feec9c77beaf2c5ee55f72;
static PyCodeObject *codeobj_c4d3656c3480c2030f3605c31b06ad5a;
static PyCodeObject *codeobj_d4e70c138d66844bbc2e89340e026c0e;
static PyCodeObject *codeobj_73cab270c952813ec07b70720beb14ea;
static PyCodeObject *codeobj_c21f244744fc56e49f311389a2ef9ad5;
static PyCodeObject *codeobj_a938233eedfc35e7e6d30f6df667738a;
static PyCodeObject *codeobj_757041dbae590e05a798a01acb08b3df;
static PyCodeObject *codeobj_a73d28b76418170db82ac45aa77bb008;
static PyCodeObject *codeobj_4ee38ac41a70367e04e49506d3d22282;
static PyCodeObject *codeobj_6080c9bfb83b5a470546ffc2fb4e4036;
static PyCodeObject *codeobj_6c328e48fc0c69ba45e56bc22ff70986;
static PyCodeObject *codeobj_d3fb18aeecc68b2b5288d0a71127a9bf;
static PyCodeObject *codeobj_3886326b45cc57f686a78283c054440c;
static PyCodeObject *codeobj_f6a81a0deb9266b7b114ff22b817980f;
static PyCodeObject *codeobj_9fbb645e57b4baafb21a7f23bd3cec4e;
static PyCodeObject *codeobj_415cd99d42afc119758e9ee5108cfbc3;
static PyCodeObject *codeobj_01a0f3654c0a4b973c14060dd4808fb7;
static PyCodeObject *codeobj_da974cdaf8b94a57902eec4ccf8cd775;
static PyCodeObject *codeobj_851ab8e6ce891a1c5cd7d62d0a57efcf;
static PyCodeObject *codeobj_69f50783ce454f0534054e28cd09a967;
static PyCodeObject *codeobj_5fd7c18ac4562f154cbcd863018c3932;
static PyCodeObject *codeobj_42857a1ed0df7b51b7238552b44eeb16;
static PyCodeObject *codeobj_badab76040de6f2e0b24783e127a8816;
static PyCodeObject *codeobj_edacd308c6071abfdb9dcee56e15d9a2;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[26]; CHECK_OBJECT(module_filename_obj);
    codeobj_71c68a0e9349861aea34974fdce8ee03 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[103], mod_consts[103], NULL, NULL, 0, 0, 0);
    codeobj_2b6c9a223f3d61367f58c8de6231c3cb = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[104], NULL, 2, 0, 0);
    codeobj_3e4f089d5aab97c376821bfb5fd8b18b = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[105], NULL, 3, 0, 0);
    codeobj_01806fce9aae28df8a8f43cf8ea08ca2 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[104], NULL, 2, 0, 0);
    codeobj_af1c4c33b1461e1eb7a71e00261f2030 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[106], NULL, 6, 0, 0);
    codeobj_b922b334a7feec9c77beaf2c5ee55f72 = MAKE_CODE_OBJECT(module_filename_obj, 607, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[107], NULL, 3, 0, 0);
    codeobj_c4d3656c3480c2030f3605c31b06ad5a = MAKE_CODE_OBJECT(module_filename_obj, 636, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[107], NULL, 3, 0, 0);
    codeobj_d4e70c138d66844bbc2e89340e026c0e = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[105], NULL, 3, 0, 0);
    codeobj_73cab270c952813ec07b70720beb14ea = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[105], NULL, 3, 0, 0);
    codeobj_c21f244744fc56e49f311389a2ef9ad5 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[108], NULL, 3, 0, 0);
    codeobj_a938233eedfc35e7e6d30f6df667738a = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[109], NULL, 4, 0, 0);
    codeobj_757041dbae590e05a798a01acb08b3df = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[110], NULL, 4, 0, 0);
    codeobj_a73d28b76418170db82ac45aa77bb008 = MAKE_CODE_OBJECT(module_filename_obj, 656, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[111], NULL, 4, 0, 0);
    codeobj_4ee38ac41a70367e04e49506d3d22282 = MAKE_CODE_OBJECT(module_filename_obj, 581, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[112], NULL, 3, 0, 0);
    codeobj_6080c9bfb83b5a470546ffc2fb4e4036 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[113], NULL, 4, 0, 0);
    codeobj_6c328e48fc0c69ba45e56bc22ff70986 = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[109], NULL, 4, 0, 0);
    codeobj_d3fb18aeecc68b2b5288d0a71127a9bf = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[114], NULL, 2, 0, 0);
    codeobj_3886326b45cc57f686a78283c054440c = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[110], NULL, 4, 0, 0);
    codeobj_f6a81a0deb9266b7b114ff22b817980f = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[115], NULL, 3, 0, 0);
    codeobj_9fbb645e57b4baafb21a7f23bd3cec4e = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[115], NULL, 3, 0, 0);
    codeobj_415cd99d42afc119758e9ee5108cfbc3 = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[116], NULL, 4, 0, 0);
    codeobj_01a0f3654c0a4b973c14060dd4808fb7 = MAKE_CODE_OBJECT(module_filename_obj, 419, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[105], NULL, 3, 0, 0);
    codeobj_da974cdaf8b94a57902eec4ccf8cd775 = MAKE_CODE_OBJECT(module_filename_obj, 437, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[117], NULL, 5, 0, 0);
    codeobj_851ab8e6ce891a1c5cd7d62d0a57efcf = MAKE_CODE_OBJECT(module_filename_obj, 472, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[118], NULL, 5, 0, 0);
    codeobj_69f50783ce454f0534054e28cd09a967 = MAKE_CODE_OBJECT(module_filename_obj, 490, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[119], NULL, 4, 0, 0);
    codeobj_5fd7c18ac4562f154cbcd863018c3932 = MAKE_CODE_OBJECT(module_filename_obj, 508, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[120], NULL, 4, 0, 0);
    codeobj_42857a1ed0df7b51b7238552b44eeb16 = MAKE_CODE_OBJECT(module_filename_obj, 527, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[121], NULL, 5, 0, 0);
    codeobj_badab76040de6f2e0b24783e127a8816 = MAKE_CODE_OBJECT(module_filename_obj, 543, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[122], NULL, 5, 0, 0);
    codeobj_edacd308c6071abfdb9dcee56e15d9a2 = MAKE_CODE_OBJECT(module_filename_obj, 561, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[123], NULL, 5, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__10_invalidate_authorization_code();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__11_revoke_token();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__12_rotate_refresh_token();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__13_save_authorization_code();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__14_save_token();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__15_save_bearer_token();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__16_validate_bearer_token();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__17_validate_client_id();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__18_validate_code();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__19_validate_grant_type();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__1_client_authentication_required();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__20_validate_redirect_uri();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__21_validate_refresh_token();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__22_validate_response_type();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__23_validate_scopes();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__24_validate_user();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__25_is_pkce_required();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__26_get_code_challenge();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__27_get_code_challenge_method();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__28_is_origin_allowed();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__2_authenticate_client();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__3_authenticate_client_id();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__4_confirm_redirect_uri();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__5_get_default_redirect_uri();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__6_get_default_scopes();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__7_get_original_scopes();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__8_is_within_original_scope();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__9_introspect_token();


// The module function definitions.
static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__2_authenticate_client(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_2b6c9a223f3d61367f58c8de6231c3cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b6c9a223f3d61367f58c8de6231c3cb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b6c9a223f3d61367f58c8de6231c3cb)) {
        Py_XDECREF(cache_frame_2b6c9a223f3d61367f58c8de6231c3cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b6c9a223f3d61367f58c8de6231c3cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b6c9a223f3d61367f58c8de6231c3cb = MAKE_FUNCTION_FRAME(codeobj_2b6c9a223f3d61367f58c8de6231c3cb, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b6c9a223f3d61367f58c8de6231c3cb->m_type_description == NULL);
    frame_2b6c9a223f3d61367f58c8de6231c3cb = cache_frame_2b6c9a223f3d61367f58c8de6231c3cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2b6c9a223f3d61367f58c8de6231c3cb);
    assert(Py_REFCNT(frame_2b6c9a223f3d61367f58c8de6231c3cb) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_2b6c9a223f3d61367f58c8de6231c3cb->m_frame.f_lineno = 75;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 75;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2b6c9a223f3d61367f58c8de6231c3cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b6c9a223f3d61367f58c8de6231c3cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b6c9a223f3d61367f58c8de6231c3cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b6c9a223f3d61367f58c8de6231c3cb,
        type_description_1,
        par_self,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_2b6c9a223f3d61367f58c8de6231c3cb == cache_frame_2b6c9a223f3d61367f58c8de6231c3cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b6c9a223f3d61367f58c8de6231c3cb);
        cache_frame_2b6c9a223f3d61367f58c8de6231c3cb = NULL;
    }

    assertFrameObject(frame_2b6c9a223f3d61367f58c8de6231c3cb);

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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__3_authenticate_client_id(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_request = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_3e4f089d5aab97c376821bfb5fd8b18b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3e4f089d5aab97c376821bfb5fd8b18b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3e4f089d5aab97c376821bfb5fd8b18b)) {
        Py_XDECREF(cache_frame_3e4f089d5aab97c376821bfb5fd8b18b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e4f089d5aab97c376821bfb5fd8b18b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e4f089d5aab97c376821bfb5fd8b18b = MAKE_FUNCTION_FRAME(codeobj_3e4f089d5aab97c376821bfb5fd8b18b, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e4f089d5aab97c376821bfb5fd8b18b->m_type_description == NULL);
    frame_3e4f089d5aab97c376821bfb5fd8b18b = cache_frame_3e4f089d5aab97c376821bfb5fd8b18b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3e4f089d5aab97c376821bfb5fd8b18b);
    assert(Py_REFCNT(frame_3e4f089d5aab97c376821bfb5fd8b18b) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_3e4f089d5aab97c376821bfb5fd8b18b->m_frame.f_lineno = 95;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 95;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3e4f089d5aab97c376821bfb5fd8b18b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e4f089d5aab97c376821bfb5fd8b18b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e4f089d5aab97c376821bfb5fd8b18b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e4f089d5aab97c376821bfb5fd8b18b,
        type_description_1,
        par_self,
        par_client_id,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_3e4f089d5aab97c376821bfb5fd8b18b == cache_frame_3e4f089d5aab97c376821bfb5fd8b18b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e4f089d5aab97c376821bfb5fd8b18b);
        cache_frame_3e4f089d5aab97c376821bfb5fd8b18b = NULL;
    }

    assertFrameObject(frame_3e4f089d5aab97c376821bfb5fd8b18b);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__4_confirm_redirect_uri(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_code = python_pars[2];
    PyObject *par_redirect_uri = python_pars[3];
    PyObject *par_client = python_pars[4];
    PyObject *par_request = python_pars[5];
    PyObject *par_args = python_pars[6];
    PyObject *par_kwargs = python_pars[7];
    struct Nuitka_FrameObject *frame_af1c4c33b1461e1eb7a71e00261f2030;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_af1c4c33b1461e1eb7a71e00261f2030 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_af1c4c33b1461e1eb7a71e00261f2030)) {
        Py_XDECREF(cache_frame_af1c4c33b1461e1eb7a71e00261f2030);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af1c4c33b1461e1eb7a71e00261f2030 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af1c4c33b1461e1eb7a71e00261f2030 = MAKE_FUNCTION_FRAME(codeobj_af1c4c33b1461e1eb7a71e00261f2030, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_af1c4c33b1461e1eb7a71e00261f2030->m_type_description == NULL);
    frame_af1c4c33b1461e1eb7a71e00261f2030 = cache_frame_af1c4c33b1461e1eb7a71e00261f2030;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_af1c4c33b1461e1eb7a71e00261f2030);
    assert(Py_REFCNT(frame_af1c4c33b1461e1eb7a71e00261f2030) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_af1c4c33b1461e1eb7a71e00261f2030->m_frame.f_lineno = 119;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 119;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_af1c4c33b1461e1eb7a71e00261f2030, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af1c4c33b1461e1eb7a71e00261f2030->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af1c4c33b1461e1eb7a71e00261f2030, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af1c4c33b1461e1eb7a71e00261f2030,
        type_description_1,
        par_self,
        par_client_id,
        par_code,
        par_redirect_uri,
        par_client,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_af1c4c33b1461e1eb7a71e00261f2030 == cache_frame_af1c4c33b1461e1eb7a71e00261f2030) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_af1c4c33b1461e1eb7a71e00261f2030);
        cache_frame_af1c4c33b1461e1eb7a71e00261f2030 = NULL;
    }

    assertFrameObject(frame_af1c4c33b1461e1eb7a71e00261f2030);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    CHECK_OBJECT(par_redirect_uri);
    Py_DECREF(par_redirect_uri);
    CHECK_OBJECT(par_client);
    Py_DECREF(par_client);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__5_get_default_redirect_uri(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_request = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_d4e70c138d66844bbc2e89340e026c0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d4e70c138d66844bbc2e89340e026c0e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d4e70c138d66844bbc2e89340e026c0e)) {
        Py_XDECREF(cache_frame_d4e70c138d66844bbc2e89340e026c0e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d4e70c138d66844bbc2e89340e026c0e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d4e70c138d66844bbc2e89340e026c0e = MAKE_FUNCTION_FRAME(codeobj_d4e70c138d66844bbc2e89340e026c0e, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d4e70c138d66844bbc2e89340e026c0e->m_type_description == NULL);
    frame_d4e70c138d66844bbc2e89340e026c0e = cache_frame_d4e70c138d66844bbc2e89340e026c0e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d4e70c138d66844bbc2e89340e026c0e);
    assert(Py_REFCNT(frame_d4e70c138d66844bbc2e89340e026c0e) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_d4e70c138d66844bbc2e89340e026c0e->m_frame.f_lineno = 133;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 133;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d4e70c138d66844bbc2e89340e026c0e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4e70c138d66844bbc2e89340e026c0e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4e70c138d66844bbc2e89340e026c0e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d4e70c138d66844bbc2e89340e026c0e,
        type_description_1,
        par_self,
        par_client_id,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_d4e70c138d66844bbc2e89340e026c0e == cache_frame_d4e70c138d66844bbc2e89340e026c0e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d4e70c138d66844bbc2e89340e026c0e);
        cache_frame_d4e70c138d66844bbc2e89340e026c0e = NULL;
    }

    assertFrameObject(frame_d4e70c138d66844bbc2e89340e026c0e);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__6_get_default_scopes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_request = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_73cab270c952813ec07b70720beb14ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_73cab270c952813ec07b70720beb14ea = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_73cab270c952813ec07b70720beb14ea)) {
        Py_XDECREF(cache_frame_73cab270c952813ec07b70720beb14ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_73cab270c952813ec07b70720beb14ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_73cab270c952813ec07b70720beb14ea = MAKE_FUNCTION_FRAME(codeobj_73cab270c952813ec07b70720beb14ea, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_73cab270c952813ec07b70720beb14ea->m_type_description == NULL);
    frame_73cab270c952813ec07b70720beb14ea = cache_frame_73cab270c952813ec07b70720beb14ea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_73cab270c952813ec07b70720beb14ea);
    assert(Py_REFCNT(frame_73cab270c952813ec07b70720beb14ea) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_73cab270c952813ec07b70720beb14ea->m_frame.f_lineno = 149;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 149;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73cab270c952813ec07b70720beb14ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_73cab270c952813ec07b70720beb14ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73cab270c952813ec07b70720beb14ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_73cab270c952813ec07b70720beb14ea,
        type_description_1,
        par_self,
        par_client_id,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_73cab270c952813ec07b70720beb14ea == cache_frame_73cab270c952813ec07b70720beb14ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_73cab270c952813ec07b70720beb14ea);
        cache_frame_73cab270c952813ec07b70720beb14ea = NULL;
    }

    assertFrameObject(frame_73cab270c952813ec07b70720beb14ea);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__7_get_original_scopes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_refresh_token = python_pars[1];
    PyObject *par_request = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_c21f244744fc56e49f311389a2ef9ad5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c21f244744fc56e49f311389a2ef9ad5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c21f244744fc56e49f311389a2ef9ad5)) {
        Py_XDECREF(cache_frame_c21f244744fc56e49f311389a2ef9ad5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c21f244744fc56e49f311389a2ef9ad5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c21f244744fc56e49f311389a2ef9ad5 = MAKE_FUNCTION_FRAME(codeobj_c21f244744fc56e49f311389a2ef9ad5, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c21f244744fc56e49f311389a2ef9ad5->m_type_description == NULL);
    frame_c21f244744fc56e49f311389a2ef9ad5 = cache_frame_c21f244744fc56e49f311389a2ef9ad5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c21f244744fc56e49f311389a2ef9ad5);
    assert(Py_REFCNT(frame_c21f244744fc56e49f311389a2ef9ad5) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_c21f244744fc56e49f311389a2ef9ad5->m_frame.f_lineno = 162;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 162;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c21f244744fc56e49f311389a2ef9ad5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c21f244744fc56e49f311389a2ef9ad5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c21f244744fc56e49f311389a2ef9ad5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c21f244744fc56e49f311389a2ef9ad5,
        type_description_1,
        par_self,
        par_refresh_token,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_c21f244744fc56e49f311389a2ef9ad5 == cache_frame_c21f244744fc56e49f311389a2ef9ad5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c21f244744fc56e49f311389a2ef9ad5);
        cache_frame_c21f244744fc56e49f311389a2ef9ad5 = NULL;
    }

    assertFrameObject(frame_c21f244744fc56e49f311389a2ef9ad5);

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
    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__9_introspect_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_token = python_pars[1];
    PyObject *par_token_type_hint = python_pars[2];
    PyObject *par_request = python_pars[3];
    PyObject *par_args = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    struct Nuitka_FrameObject *frame_a938233eedfc35e7e6d30f6df667738a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a938233eedfc35e7e6d30f6df667738a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a938233eedfc35e7e6d30f6df667738a)) {
        Py_XDECREF(cache_frame_a938233eedfc35e7e6d30f6df667738a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a938233eedfc35e7e6d30f6df667738a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a938233eedfc35e7e6d30f6df667738a = MAKE_FUNCTION_FRAME(codeobj_a938233eedfc35e7e6d30f6df667738a, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a938233eedfc35e7e6d30f6df667738a->m_type_description == NULL);
    frame_a938233eedfc35e7e6d30f6df667738a = cache_frame_a938233eedfc35e7e6d30f6df667738a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a938233eedfc35e7e6d30f6df667738a);
    assert(Py_REFCNT(frame_a938233eedfc35e7e6d30f6df667738a) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_a938233eedfc35e7e6d30f6df667738a->m_frame.f_lineno = 226;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 226;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a938233eedfc35e7e6d30f6df667738a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a938233eedfc35e7e6d30f6df667738a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a938233eedfc35e7e6d30f6df667738a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a938233eedfc35e7e6d30f6df667738a,
        type_description_1,
        par_self,
        par_token,
        par_token_type_hint,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_a938233eedfc35e7e6d30f6df667738a == cache_frame_a938233eedfc35e7e6d30f6df667738a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a938233eedfc35e7e6d30f6df667738a);
        cache_frame_a938233eedfc35e7e6d30f6df667738a = NULL;
    }

    assertFrameObject(frame_a938233eedfc35e7e6d30f6df667738a);

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
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_token_type_hint);
    Py_DECREF(par_token_type_hint);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__10_invalidate_authorization_code(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_code = python_pars[2];
    PyObject *par_request = python_pars[3];
    PyObject *par_args = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    struct Nuitka_FrameObject *frame_757041dbae590e05a798a01acb08b3df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_757041dbae590e05a798a01acb08b3df = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_757041dbae590e05a798a01acb08b3df)) {
        Py_XDECREF(cache_frame_757041dbae590e05a798a01acb08b3df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_757041dbae590e05a798a01acb08b3df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_757041dbae590e05a798a01acb08b3df = MAKE_FUNCTION_FRAME(codeobj_757041dbae590e05a798a01acb08b3df, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_757041dbae590e05a798a01acb08b3df->m_type_description == NULL);
    frame_757041dbae590e05a798a01acb08b3df = cache_frame_757041dbae590e05a798a01acb08b3df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_757041dbae590e05a798a01acb08b3df);
    assert(Py_REFCNT(frame_757041dbae590e05a798a01acb08b3df) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_757041dbae590e05a798a01acb08b3df->m_frame.f_lineno = 239;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 239;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_757041dbae590e05a798a01acb08b3df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_757041dbae590e05a798a01acb08b3df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_757041dbae590e05a798a01acb08b3df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_757041dbae590e05a798a01acb08b3df,
        type_description_1,
        par_self,
        par_client_id,
        par_code,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_757041dbae590e05a798a01acb08b3df == cache_frame_757041dbae590e05a798a01acb08b3df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_757041dbae590e05a798a01acb08b3df);
        cache_frame_757041dbae590e05a798a01acb08b3df = NULL;
    }

    assertFrameObject(frame_757041dbae590e05a798a01acb08b3df);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__11_revoke_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_token = python_pars[1];
    PyObject *par_token_type_hint = python_pars[2];
    PyObject *par_request = python_pars[3];
    PyObject *par_args = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    struct Nuitka_FrameObject *frame_6c328e48fc0c69ba45e56bc22ff70986;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6c328e48fc0c69ba45e56bc22ff70986 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6c328e48fc0c69ba45e56bc22ff70986)) {
        Py_XDECREF(cache_frame_6c328e48fc0c69ba45e56bc22ff70986);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c328e48fc0c69ba45e56bc22ff70986 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c328e48fc0c69ba45e56bc22ff70986 = MAKE_FUNCTION_FRAME(codeobj_6c328e48fc0c69ba45e56bc22ff70986, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6c328e48fc0c69ba45e56bc22ff70986->m_type_description == NULL);
    frame_6c328e48fc0c69ba45e56bc22ff70986 = cache_frame_6c328e48fc0c69ba45e56bc22ff70986;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6c328e48fc0c69ba45e56bc22ff70986);
    assert(Py_REFCNT(frame_6c328e48fc0c69ba45e56bc22ff70986) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_6c328e48fc0c69ba45e56bc22ff70986->m_frame.f_lineno = 252;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 252;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c328e48fc0c69ba45e56bc22ff70986, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c328e48fc0c69ba45e56bc22ff70986->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c328e48fc0c69ba45e56bc22ff70986, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c328e48fc0c69ba45e56bc22ff70986,
        type_description_1,
        par_self,
        par_token,
        par_token_type_hint,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_6c328e48fc0c69ba45e56bc22ff70986 == cache_frame_6c328e48fc0c69ba45e56bc22ff70986) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6c328e48fc0c69ba45e56bc22ff70986);
        cache_frame_6c328e48fc0c69ba45e56bc22ff70986 = NULL;
    }

    assertFrameObject(frame_6c328e48fc0c69ba45e56bc22ff70986);

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
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_token_type_hint);
    Py_DECREF(par_token_type_hint);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__13_save_authorization_code(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_code = python_pars[2];
    PyObject *par_request = python_pars[3];
    PyObject *par_args = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    struct Nuitka_FrameObject *frame_3886326b45cc57f686a78283c054440c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3886326b45cc57f686a78283c054440c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3886326b45cc57f686a78283c054440c)) {
        Py_XDECREF(cache_frame_3886326b45cc57f686a78283c054440c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3886326b45cc57f686a78283c054440c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3886326b45cc57f686a78283c054440c = MAKE_FUNCTION_FRAME(codeobj_3886326b45cc57f686a78283c054440c, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3886326b45cc57f686a78283c054440c->m_type_description == NULL);
    frame_3886326b45cc57f686a78283c054440c = cache_frame_3886326b45cc57f686a78283c054440c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3886326b45cc57f686a78283c054440c);
    assert(Py_REFCNT(frame_3886326b45cc57f686a78283c054440c) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_3886326b45cc57f686a78283c054440c->m_frame.f_lineno = 304;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 304;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3886326b45cc57f686a78283c054440c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3886326b45cc57f686a78283c054440c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3886326b45cc57f686a78283c054440c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3886326b45cc57f686a78283c054440c,
        type_description_1,
        par_self,
        par_client_id,
        par_code,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_3886326b45cc57f686a78283c054440c == cache_frame_3886326b45cc57f686a78283c054440c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3886326b45cc57f686a78283c054440c);
        cache_frame_3886326b45cc57f686a78283c054440c = NULL;
    }

    assertFrameObject(frame_3886326b45cc57f686a78283c054440c);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__14_save_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_token = python_pars[1];
    PyObject *par_request = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_9fbb645e57b4baafb21a7f23bd3cec4e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9fbb645e57b4baafb21a7f23bd3cec4e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9fbb645e57b4baafb21a7f23bd3cec4e)) {
        Py_XDECREF(cache_frame_9fbb645e57b4baafb21a7f23bd3cec4e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fbb645e57b4baafb21a7f23bd3cec4e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fbb645e57b4baafb21a7f23bd3cec4e = MAKE_FUNCTION_FRAME(codeobj_9fbb645e57b4baafb21a7f23bd3cec4e, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9fbb645e57b4baafb21a7f23bd3cec4e->m_type_description == NULL);
    frame_9fbb645e57b4baafb21a7f23bd3cec4e = cache_frame_9fbb645e57b4baafb21a7f23bd3cec4e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9fbb645e57b4baafb21a7f23bd3cec4e);
    assert(Py_REFCNT(frame_9fbb645e57b4baafb21a7f23bd3cec4e) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_token);
        tmp_tuple_element_1 = par_token;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_request);
        tmp_tuple_element_1 = par_request;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_9fbb645e57b4baafb21a7f23bd3cec4e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fbb645e57b4baafb21a7f23bd3cec4e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fbb645e57b4baafb21a7f23bd3cec4e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fbb645e57b4baafb21a7f23bd3cec4e,
        type_description_1,
        par_self,
        par_token,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_9fbb645e57b4baafb21a7f23bd3cec4e == cache_frame_9fbb645e57b4baafb21a7f23bd3cec4e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9fbb645e57b4baafb21a7f23bd3cec4e);
        cache_frame_9fbb645e57b4baafb21a7f23bd3cec4e = NULL;
    }

    assertFrameObject(frame_9fbb645e57b4baafb21a7f23bd3cec4e);

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
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__15_save_bearer_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_token = python_pars[1];
    PyObject *par_request = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_f6a81a0deb9266b7b114ff22b817980f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f6a81a0deb9266b7b114ff22b817980f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f6a81a0deb9266b7b114ff22b817980f)) {
        Py_XDECREF(cache_frame_f6a81a0deb9266b7b114ff22b817980f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6a81a0deb9266b7b114ff22b817980f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6a81a0deb9266b7b114ff22b817980f = MAKE_FUNCTION_FRAME(codeobj_f6a81a0deb9266b7b114ff22b817980f, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f6a81a0deb9266b7b114ff22b817980f->m_type_description == NULL);
    frame_f6a81a0deb9266b7b114ff22b817980f = cache_frame_f6a81a0deb9266b7b114ff22b817980f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f6a81a0deb9266b7b114ff22b817980f);
    assert(Py_REFCNT(frame_f6a81a0deb9266b7b114ff22b817980f) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_f6a81a0deb9266b7b114ff22b817980f->m_frame.f_lineno = 365;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 365;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f6a81a0deb9266b7b114ff22b817980f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6a81a0deb9266b7b114ff22b817980f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6a81a0deb9266b7b114ff22b817980f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6a81a0deb9266b7b114ff22b817980f,
        type_description_1,
        par_self,
        par_token,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_f6a81a0deb9266b7b114ff22b817980f == cache_frame_f6a81a0deb9266b7b114ff22b817980f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f6a81a0deb9266b7b114ff22b817980f);
        cache_frame_f6a81a0deb9266b7b114ff22b817980f = NULL;
    }

    assertFrameObject(frame_f6a81a0deb9266b7b114ff22b817980f);

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
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__16_validate_bearer_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_token = python_pars[1];
    PyObject *par_scopes = python_pars[2];
    PyObject *par_request = python_pars[3];
    struct Nuitka_FrameObject *frame_415cd99d42afc119758e9ee5108cfbc3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_415cd99d42afc119758e9ee5108cfbc3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_415cd99d42afc119758e9ee5108cfbc3)) {
        Py_XDECREF(cache_frame_415cd99d42afc119758e9ee5108cfbc3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_415cd99d42afc119758e9ee5108cfbc3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_415cd99d42afc119758e9ee5108cfbc3 = MAKE_FUNCTION_FRAME(codeobj_415cd99d42afc119758e9ee5108cfbc3, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_415cd99d42afc119758e9ee5108cfbc3->m_type_description == NULL);
    frame_415cd99d42afc119758e9ee5108cfbc3 = cache_frame_415cd99d42afc119758e9ee5108cfbc3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_415cd99d42afc119758e9ee5108cfbc3);
    assert(Py_REFCNT(frame_415cd99d42afc119758e9ee5108cfbc3) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_415cd99d42afc119758e9ee5108cfbc3->m_frame.f_lineno = 417;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 417;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_415cd99d42afc119758e9ee5108cfbc3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_415cd99d42afc119758e9ee5108cfbc3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_415cd99d42afc119758e9ee5108cfbc3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_415cd99d42afc119758e9ee5108cfbc3,
        type_description_1,
        par_self,
        par_token,
        par_scopes,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_415cd99d42afc119758e9ee5108cfbc3 == cache_frame_415cd99d42afc119758e9ee5108cfbc3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_415cd99d42afc119758e9ee5108cfbc3);
        cache_frame_415cd99d42afc119758e9ee5108cfbc3 = NULL;
    }

    assertFrameObject(frame_415cd99d42afc119758e9ee5108cfbc3);

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
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_scopes);
    Py_DECREF(par_scopes);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__17_validate_client_id(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_request = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_01a0f3654c0a4b973c14060dd4808fb7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_01a0f3654c0a4b973c14060dd4808fb7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_01a0f3654c0a4b973c14060dd4808fb7)) {
        Py_XDECREF(cache_frame_01a0f3654c0a4b973c14060dd4808fb7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_01a0f3654c0a4b973c14060dd4808fb7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_01a0f3654c0a4b973c14060dd4808fb7 = MAKE_FUNCTION_FRAME(codeobj_01a0f3654c0a4b973c14060dd4808fb7, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_01a0f3654c0a4b973c14060dd4808fb7->m_type_description == NULL);
    frame_01a0f3654c0a4b973c14060dd4808fb7 = cache_frame_01a0f3654c0a4b973c14060dd4808fb7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_01a0f3654c0a4b973c14060dd4808fb7);
    assert(Py_REFCNT(frame_01a0f3654c0a4b973c14060dd4808fb7) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_01a0f3654c0a4b973c14060dd4808fb7->m_frame.f_lineno = 435;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 435;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_01a0f3654c0a4b973c14060dd4808fb7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01a0f3654c0a4b973c14060dd4808fb7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01a0f3654c0a4b973c14060dd4808fb7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_01a0f3654c0a4b973c14060dd4808fb7,
        type_description_1,
        par_self,
        par_client_id,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_01a0f3654c0a4b973c14060dd4808fb7 == cache_frame_01a0f3654c0a4b973c14060dd4808fb7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_01a0f3654c0a4b973c14060dd4808fb7);
        cache_frame_01a0f3654c0a4b973c14060dd4808fb7 = NULL;
    }

    assertFrameObject(frame_01a0f3654c0a4b973c14060dd4808fb7);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__18_validate_code(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_code = python_pars[2];
    PyObject *par_client = python_pars[3];
    PyObject *par_request = python_pars[4];
    PyObject *par_args = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    struct Nuitka_FrameObject *frame_da974cdaf8b94a57902eec4ccf8cd775;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da974cdaf8b94a57902eec4ccf8cd775 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da974cdaf8b94a57902eec4ccf8cd775)) {
        Py_XDECREF(cache_frame_da974cdaf8b94a57902eec4ccf8cd775);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da974cdaf8b94a57902eec4ccf8cd775 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da974cdaf8b94a57902eec4ccf8cd775 = MAKE_FUNCTION_FRAME(codeobj_da974cdaf8b94a57902eec4ccf8cd775, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da974cdaf8b94a57902eec4ccf8cd775->m_type_description == NULL);
    frame_da974cdaf8b94a57902eec4ccf8cd775 = cache_frame_da974cdaf8b94a57902eec4ccf8cd775;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_da974cdaf8b94a57902eec4ccf8cd775);
    assert(Py_REFCNT(frame_da974cdaf8b94a57902eec4ccf8cd775) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_da974cdaf8b94a57902eec4ccf8cd775->m_frame.f_lineno = 470;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 470;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da974cdaf8b94a57902eec4ccf8cd775, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da974cdaf8b94a57902eec4ccf8cd775->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da974cdaf8b94a57902eec4ccf8cd775, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da974cdaf8b94a57902eec4ccf8cd775,
        type_description_1,
        par_self,
        par_client_id,
        par_code,
        par_client,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_da974cdaf8b94a57902eec4ccf8cd775 == cache_frame_da974cdaf8b94a57902eec4ccf8cd775) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da974cdaf8b94a57902eec4ccf8cd775);
        cache_frame_da974cdaf8b94a57902eec4ccf8cd775 = NULL;
    }

    assertFrameObject(frame_da974cdaf8b94a57902eec4ccf8cd775);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    CHECK_OBJECT(par_client);
    Py_DECREF(par_client);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__19_validate_grant_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_grant_type = python_pars[2];
    PyObject *par_client = python_pars[3];
    PyObject *par_request = python_pars[4];
    PyObject *par_args = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    struct Nuitka_FrameObject *frame_851ab8e6ce891a1c5cd7d62d0a57efcf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_851ab8e6ce891a1c5cd7d62d0a57efcf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_851ab8e6ce891a1c5cd7d62d0a57efcf)) {
        Py_XDECREF(cache_frame_851ab8e6ce891a1c5cd7d62d0a57efcf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_851ab8e6ce891a1c5cd7d62d0a57efcf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_851ab8e6ce891a1c5cd7d62d0a57efcf = MAKE_FUNCTION_FRAME(codeobj_851ab8e6ce891a1c5cd7d62d0a57efcf, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_851ab8e6ce891a1c5cd7d62d0a57efcf->m_type_description == NULL);
    frame_851ab8e6ce891a1c5cd7d62d0a57efcf = cache_frame_851ab8e6ce891a1c5cd7d62d0a57efcf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_851ab8e6ce891a1c5cd7d62d0a57efcf);
    assert(Py_REFCNT(frame_851ab8e6ce891a1c5cd7d62d0a57efcf) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_851ab8e6ce891a1c5cd7d62d0a57efcf->m_frame.f_lineno = 488;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 488;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_851ab8e6ce891a1c5cd7d62d0a57efcf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_851ab8e6ce891a1c5cd7d62d0a57efcf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_851ab8e6ce891a1c5cd7d62d0a57efcf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_851ab8e6ce891a1c5cd7d62d0a57efcf,
        type_description_1,
        par_self,
        par_client_id,
        par_grant_type,
        par_client,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_851ab8e6ce891a1c5cd7d62d0a57efcf == cache_frame_851ab8e6ce891a1c5cd7d62d0a57efcf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_851ab8e6ce891a1c5cd7d62d0a57efcf);
        cache_frame_851ab8e6ce891a1c5cd7d62d0a57efcf = NULL;
    }

    assertFrameObject(frame_851ab8e6ce891a1c5cd7d62d0a57efcf);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_grant_type);
    Py_DECREF(par_grant_type);
    CHECK_OBJECT(par_client);
    Py_DECREF(par_client);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__20_validate_redirect_uri(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_redirect_uri = python_pars[2];
    PyObject *par_request = python_pars[3];
    PyObject *par_args = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    struct Nuitka_FrameObject *frame_69f50783ce454f0534054e28cd09a967;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_69f50783ce454f0534054e28cd09a967 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_69f50783ce454f0534054e28cd09a967)) {
        Py_XDECREF(cache_frame_69f50783ce454f0534054e28cd09a967);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69f50783ce454f0534054e28cd09a967 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69f50783ce454f0534054e28cd09a967 = MAKE_FUNCTION_FRAME(codeobj_69f50783ce454f0534054e28cd09a967, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_69f50783ce454f0534054e28cd09a967->m_type_description == NULL);
    frame_69f50783ce454f0534054e28cd09a967 = cache_frame_69f50783ce454f0534054e28cd09a967;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69f50783ce454f0534054e28cd09a967);
    assert(Py_REFCNT(frame_69f50783ce454f0534054e28cd09a967) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_69f50783ce454f0534054e28cd09a967->m_frame.f_lineno = 506;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 506;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_69f50783ce454f0534054e28cd09a967, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69f50783ce454f0534054e28cd09a967->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69f50783ce454f0534054e28cd09a967, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69f50783ce454f0534054e28cd09a967,
        type_description_1,
        par_self,
        par_client_id,
        par_redirect_uri,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_69f50783ce454f0534054e28cd09a967 == cache_frame_69f50783ce454f0534054e28cd09a967) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_69f50783ce454f0534054e28cd09a967);
        cache_frame_69f50783ce454f0534054e28cd09a967 = NULL;
    }

    assertFrameObject(frame_69f50783ce454f0534054e28cd09a967);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_redirect_uri);
    Py_DECREF(par_redirect_uri);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__21_validate_refresh_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_refresh_token = python_pars[1];
    PyObject *par_client = python_pars[2];
    PyObject *par_request = python_pars[3];
    PyObject *par_args = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    struct Nuitka_FrameObject *frame_5fd7c18ac4562f154cbcd863018c3932;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5fd7c18ac4562f154cbcd863018c3932 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5fd7c18ac4562f154cbcd863018c3932)) {
        Py_XDECREF(cache_frame_5fd7c18ac4562f154cbcd863018c3932);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5fd7c18ac4562f154cbcd863018c3932 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5fd7c18ac4562f154cbcd863018c3932 = MAKE_FUNCTION_FRAME(codeobj_5fd7c18ac4562f154cbcd863018c3932, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5fd7c18ac4562f154cbcd863018c3932->m_type_description == NULL);
    frame_5fd7c18ac4562f154cbcd863018c3932 = cache_frame_5fd7c18ac4562f154cbcd863018c3932;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5fd7c18ac4562f154cbcd863018c3932);
    assert(Py_REFCNT(frame_5fd7c18ac4562f154cbcd863018c3932) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_5fd7c18ac4562f154cbcd863018c3932->m_frame.f_lineno = 525;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 525;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5fd7c18ac4562f154cbcd863018c3932, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5fd7c18ac4562f154cbcd863018c3932->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5fd7c18ac4562f154cbcd863018c3932, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5fd7c18ac4562f154cbcd863018c3932,
        type_description_1,
        par_self,
        par_refresh_token,
        par_client,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_5fd7c18ac4562f154cbcd863018c3932 == cache_frame_5fd7c18ac4562f154cbcd863018c3932) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5fd7c18ac4562f154cbcd863018c3932);
        cache_frame_5fd7c18ac4562f154cbcd863018c3932 = NULL;
    }

    assertFrameObject(frame_5fd7c18ac4562f154cbcd863018c3932);

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
    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);
    CHECK_OBJECT(par_client);
    Py_DECREF(par_client);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__22_validate_response_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_response_type = python_pars[2];
    PyObject *par_client = python_pars[3];
    PyObject *par_request = python_pars[4];
    PyObject *par_args = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    struct Nuitka_FrameObject *frame_42857a1ed0df7b51b7238552b44eeb16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_42857a1ed0df7b51b7238552b44eeb16 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_42857a1ed0df7b51b7238552b44eeb16)) {
        Py_XDECREF(cache_frame_42857a1ed0df7b51b7238552b44eeb16);

#if _DEBUG_REFCOUNTS
        if (cache_frame_42857a1ed0df7b51b7238552b44eeb16 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_42857a1ed0df7b51b7238552b44eeb16 = MAKE_FUNCTION_FRAME(codeobj_42857a1ed0df7b51b7238552b44eeb16, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_42857a1ed0df7b51b7238552b44eeb16->m_type_description == NULL);
    frame_42857a1ed0df7b51b7238552b44eeb16 = cache_frame_42857a1ed0df7b51b7238552b44eeb16;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_42857a1ed0df7b51b7238552b44eeb16);
    assert(Py_REFCNT(frame_42857a1ed0df7b51b7238552b44eeb16) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_42857a1ed0df7b51b7238552b44eeb16->m_frame.f_lineno = 541;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 541;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_42857a1ed0df7b51b7238552b44eeb16, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_42857a1ed0df7b51b7238552b44eeb16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_42857a1ed0df7b51b7238552b44eeb16, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_42857a1ed0df7b51b7238552b44eeb16,
        type_description_1,
        par_self,
        par_client_id,
        par_response_type,
        par_client,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_42857a1ed0df7b51b7238552b44eeb16 == cache_frame_42857a1ed0df7b51b7238552b44eeb16) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_42857a1ed0df7b51b7238552b44eeb16);
        cache_frame_42857a1ed0df7b51b7238552b44eeb16 = NULL;
    }

    assertFrameObject(frame_42857a1ed0df7b51b7238552b44eeb16);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_response_type);
    Py_DECREF(par_response_type);
    CHECK_OBJECT(par_client);
    Py_DECREF(par_client);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__23_validate_scopes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_scopes = python_pars[2];
    PyObject *par_client = python_pars[3];
    PyObject *par_request = python_pars[4];
    PyObject *par_args = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    struct Nuitka_FrameObject *frame_badab76040de6f2e0b24783e127a8816;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_badab76040de6f2e0b24783e127a8816 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_badab76040de6f2e0b24783e127a8816)) {
        Py_XDECREF(cache_frame_badab76040de6f2e0b24783e127a8816);

#if _DEBUG_REFCOUNTS
        if (cache_frame_badab76040de6f2e0b24783e127a8816 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_badab76040de6f2e0b24783e127a8816 = MAKE_FUNCTION_FRAME(codeobj_badab76040de6f2e0b24783e127a8816, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_badab76040de6f2e0b24783e127a8816->m_type_description == NULL);
    frame_badab76040de6f2e0b24783e127a8816 = cache_frame_badab76040de6f2e0b24783e127a8816;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_badab76040de6f2e0b24783e127a8816);
    assert(Py_REFCNT(frame_badab76040de6f2e0b24783e127a8816) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_badab76040de6f2e0b24783e127a8816->m_frame.f_lineno = 559;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 559;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_badab76040de6f2e0b24783e127a8816, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_badab76040de6f2e0b24783e127a8816->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_badab76040de6f2e0b24783e127a8816, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_badab76040de6f2e0b24783e127a8816,
        type_description_1,
        par_self,
        par_client_id,
        par_scopes,
        par_client,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_badab76040de6f2e0b24783e127a8816 == cache_frame_badab76040de6f2e0b24783e127a8816) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_badab76040de6f2e0b24783e127a8816);
        cache_frame_badab76040de6f2e0b24783e127a8816 = NULL;
    }

    assertFrameObject(frame_badab76040de6f2e0b24783e127a8816);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_scopes);
    Py_DECREF(par_scopes);
    CHECK_OBJECT(par_client);
    Py_DECREF(par_client);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__24_validate_user(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_username = python_pars[1];
    PyObject *par_password = python_pars[2];
    PyObject *par_client = python_pars[3];
    PyObject *par_request = python_pars[4];
    PyObject *par_args = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    struct Nuitka_FrameObject *frame_edacd308c6071abfdb9dcee56e15d9a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_edacd308c6071abfdb9dcee56e15d9a2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_edacd308c6071abfdb9dcee56e15d9a2)) {
        Py_XDECREF(cache_frame_edacd308c6071abfdb9dcee56e15d9a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_edacd308c6071abfdb9dcee56e15d9a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_edacd308c6071abfdb9dcee56e15d9a2 = MAKE_FUNCTION_FRAME(codeobj_edacd308c6071abfdb9dcee56e15d9a2, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_edacd308c6071abfdb9dcee56e15d9a2->m_type_description == NULL);
    frame_edacd308c6071abfdb9dcee56e15d9a2 = cache_frame_edacd308c6071abfdb9dcee56e15d9a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_edacd308c6071abfdb9dcee56e15d9a2);
    assert(Py_REFCNT(frame_edacd308c6071abfdb9dcee56e15d9a2) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_edacd308c6071abfdb9dcee56e15d9a2->m_frame.f_lineno = 579;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 579;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_edacd308c6071abfdb9dcee56e15d9a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_edacd308c6071abfdb9dcee56e15d9a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_edacd308c6071abfdb9dcee56e15d9a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_edacd308c6071abfdb9dcee56e15d9a2,
        type_description_1,
        par_self,
        par_username,
        par_password,
        par_client,
        par_request,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_edacd308c6071abfdb9dcee56e15d9a2 == cache_frame_edacd308c6071abfdb9dcee56e15d9a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_edacd308c6071abfdb9dcee56e15d9a2);
        cache_frame_edacd308c6071abfdb9dcee56e15d9a2 = NULL;
    }

    assertFrameObject(frame_edacd308c6071abfdb9dcee56e15d9a2);

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
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    CHECK_OBJECT(par_client);
    Py_DECREF(par_client);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$request_validator$$$function__27_get_code_challenge_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_code = python_pars[1];
    PyObject *par_request = python_pars[2];
    struct Nuitka_FrameObject *frame_c4d3656c3480c2030f3605c31b06ad5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c4d3656c3480c2030f3605c31b06ad5a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c4d3656c3480c2030f3605c31b06ad5a)) {
        Py_XDECREF(cache_frame_c4d3656c3480c2030f3605c31b06ad5a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c4d3656c3480c2030f3605c31b06ad5a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c4d3656c3480c2030f3605c31b06ad5a = MAKE_FUNCTION_FRAME(codeobj_c4d3656c3480c2030f3605c31b06ad5a, module_oauthlib$oauth2$rfc6749$request_validator, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c4d3656c3480c2030f3605c31b06ad5a->m_type_description == NULL);
    frame_c4d3656c3480c2030f3605c31b06ad5a = cache_frame_c4d3656c3480c2030f3605c31b06ad5a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c4d3656c3480c2030f3605c31b06ad5a);
    assert(Py_REFCNT(frame_c4d3656c3480c2030f3605c31b06ad5a) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_c4d3656c3480c2030f3605c31b06ad5a->m_frame.f_lineno = 654;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 654;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c4d3656c3480c2030f3605c31b06ad5a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c4d3656c3480c2030f3605c31b06ad5a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c4d3656c3480c2030f3605c31b06ad5a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c4d3656c3480c2030f3605c31b06ad5a,
        type_description_1,
        par_self,
        par_code,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_c4d3656c3480c2030f3605c31b06ad5a == cache_frame_c4d3656c3480c2030f3605c31b06ad5a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c4d3656c3480c2030f3605c31b06ad5a);
        cache_frame_c4d3656c3480c2030f3605c31b06ad5a = NULL;
    }

    assertFrameObject(frame_c4d3656c3480c2030f3605c31b06ad5a);

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
    CHECK_OBJECT(par_code);
    Py_DECREF(par_code);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__10_invalidate_authorization_code() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__10_invalidate_authorization_code,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_757041dbae590e05a798a01acb08b3df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__11_revoke_token() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__11_revoke_token,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_6c328e48fc0c69ba45e56bc22ff70986,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__12_rotate_refresh_token() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_d3fb18aeecc68b2b5288d0a71127a9bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[65],
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__13_save_authorization_code() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__13_save_authorization_code,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        mod_consts[69],
#endif
        codeobj_3886326b45cc57f686a78283c054440c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__14_save_token() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__14_save_token,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_9fbb645e57b4baafb21a7f23bd3cec4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__15_save_bearer_token() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__15_save_bearer_token,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_f6a81a0deb9266b7b114ff22b817980f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__16_validate_bearer_token() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__16_validate_bearer_token,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_415cd99d42afc119758e9ee5108cfbc3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__17_validate_client_id() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__17_validate_client_id,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_01a0f3654c0a4b973c14060dd4808fb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__18_validate_code() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__18_validate_code,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_da974cdaf8b94a57902eec4ccf8cd775,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__19_validate_grant_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__19_validate_grant_type,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_851ab8e6ce891a1c5cd7d62d0a57efcf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__1_client_authentication_required() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[43],
#endif
        codeobj_01806fce9aae28df8a8f43cf8ea08ca2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[41],
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__20_validate_redirect_uri() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__20_validate_redirect_uri,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_69f50783ce454f0534054e28cd09a967,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__21_validate_refresh_token() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__21_validate_refresh_token,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_5fd7c18ac4562f154cbcd863018c3932,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__22_validate_response_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__22_validate_response_type,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_42857a1ed0df7b51b7238552b44eeb16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__23_validate_scopes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__23_validate_scopes,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_badab76040de6f2e0b24783e127a8816,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__24_validate_user() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__24_validate_user,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_edacd308c6071abfdb9dcee56e15d9a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__25_is_pkce_required() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_4ee38ac41a70367e04e49506d3d22282,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[91],
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__26_get_code_challenge() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_b922b334a7feec9c77beaf2c5ee55f72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[94],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__27_get_code_challenge_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__27_get_code_challenge_method,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_c4d3656c3480c2030f3605c31b06ad5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__28_is_origin_allowed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_a73d28b76418170db82ac45aa77bb008,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[99],
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__2_authenticate_client() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__2_authenticate_client,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[45],
#endif
        codeobj_2b6c9a223f3d61367f58c8de6231c3cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__3_authenticate_client_id() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__3_authenticate_client_id,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[47],
#endif
        codeobj_3e4f089d5aab97c376821bfb5fd8b18b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__4_confirm_redirect_uri() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__4_confirm_redirect_uri,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_af1c4c33b1461e1eb7a71e00261f2030,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__5_get_default_redirect_uri() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__5_get_default_redirect_uri,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_d4e70c138d66844bbc2e89340e026c0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__6_get_default_scopes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__6_get_default_scopes,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[53],
#endif
        codeobj_73cab270c952813ec07b70720beb14ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__7_get_original_scopes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__7_get_original_scopes,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[55],
#endif
        codeobj_c21f244744fc56e49f311389a2ef9ad5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__8_is_within_original_scope() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_6080c9bfb83b5a470546ffc2fb4e4036,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[56],
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__9_introspect_token() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$request_validator$$$function__9_introspect_token,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_a938233eedfc35e7e6d30f6df667738a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$request_validator,
        mod_consts[7],
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

function_impl_code functable_oauthlib$oauth2$rfc6749$request_validator[] = {
    NULL,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__2_authenticate_client,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__3_authenticate_client_id,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__4_confirm_redirect_uri,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__5_get_default_redirect_uri,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__6_get_default_scopes,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__7_get_original_scopes,
    NULL,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__9_introspect_token,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__10_invalidate_authorization_code,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__11_revoke_token,
    NULL,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__13_save_authorization_code,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__14_save_token,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__15_save_bearer_token,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__16_validate_bearer_token,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__17_validate_client_id,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__18_validate_code,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__19_validate_grant_type,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__20_validate_redirect_uri,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__21_validate_refresh_token,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__22_validate_response_type,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__23_validate_scopes,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__24_validate_user,
    NULL,
    NULL,
    impl_oauthlib$oauth2$rfc6749$request_validator$$$function__27_get_code_challenge_method,
    NULL,
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

    function_impl_code *current = functable_oauthlib$oauth2$rfc6749$request_validator;
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

    if (offset > sizeof(functable_oauthlib$oauth2$rfc6749$request_validator) || offset < 0) {
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
        functable_oauthlib$oauth2$rfc6749$request_validator[offset],
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
        module_oauthlib$oauth2$rfc6749$request_validator,
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
PyObject *modulecode_oauthlib$oauth2$rfc6749$request_validator(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("oauthlib.oauth2.rfc6749.request_validator");

    // Store the module for future use.
    module_oauthlib$oauth2$rfc6749$request_validator = module;

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
        PRINT_STRING("oauthlib.oauth2.rfc6749.request_validator: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("oauthlib.oauth2.rfc6749.request_validator: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("oauthlib.oauth2.rfc6749.request_validator: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initoauthlib$oauth2$rfc6749$request_validator\n");

    moduledict_oauthlib$oauth2$rfc6749$request_validator = MODULE_DICT(module_oauthlib$oauth2$rfc6749$request_validator);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_oauthlib$oauth2$rfc6749$request_validator,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_oauthlib$oauth2$rfc6749$request_validator,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[124]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_oauthlib$oauth2$rfc6749$request_validator,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_oauthlib$oauth2$rfc6749$request_validator,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_oauthlib$oauth2$rfc6749$request_validator,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_oauthlib$oauth2$rfc6749$request_validator);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_oauthlib$oauth2$rfc6749$request_validator);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_71c68a0e9349861aea34974fdce8ee03;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10 = NULL;
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
        tmp_assign_source_1 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_2);
    }
    frame_71c68a0e9349861aea34974fdce8ee03 = MAKE_MODULE_FRAME(codeobj_71c68a0e9349861aea34974fdce8ee03, module_oauthlib$oauth2$rfc6749$request_validator);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_71c68a0e9349861aea34974fdce8ee03);
    assert(Py_REFCNT(frame_71c68a0e9349861aea34974fdce8ee03) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[26];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[29], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[30], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[32];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$request_validator;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[33];
        frame_71c68a0e9349861aea34974fdce8ee03->m_frame.f_lineno = 5;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_71c68a0e9349861aea34974fdce8ee03->m_frame.f_lineno = 7;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_5);
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
            locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[38], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[39];
        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[40], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__1_client_authentication_required();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__2_authenticate_client();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[44], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__3_authenticate_client_id();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[46], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__4_confirm_redirect_uri();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[48], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__5_get_default_redirect_uri();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[50], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__6_get_default_scopes();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[52], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__7_get_original_scopes();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[54], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__8_is_within_original_scope();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__9_introspect_token();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[59], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__10_invalidate_authorization_code();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__11_revoke_token();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[63], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__12_rotate_refresh_token();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__13_save_authorization_code();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[68], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__14_save_token();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[70], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__15_save_bearer_token();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__16_validate_bearer_token();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[73], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__17_validate_client_id();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[75], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__18_validate_code();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__19_validate_grant_type();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[79], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__20_validate_redirect_uri();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[81], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__21_validate_refresh_token();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[83], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__22_validate_response_type();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[85], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__23_validate_scopes();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[87], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__24_validate_user();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[89], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__25_is_pkce_required();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[92], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__26_get_code_challenge();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[95], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__27_get_code_challenge_method();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[97], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$request_validator$$$function__28_is_origin_allowed();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10, mod_consts[100], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[39];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_71c68a0e9349861aea34974fdce8ee03->m_frame.f_lineno = 10;
            tmp_assign_source_9 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;

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
        Py_DECREF(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10);
        locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10 = NULL;
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

        Py_DECREF(locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10);
        locals_oauthlib$oauth2$rfc6749$request_validator$$$class__1_RequestValidator_10 = NULL;
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
        exception_lineno = 10;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_8);
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
        exception_tb = MAKE_TRACEBACK(frame_71c68a0e9349861aea34974fdce8ee03, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_71c68a0e9349861aea34974fdce8ee03->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_71c68a0e9349861aea34974fdce8ee03, exception_lineno);
    }



    assertFrameObject(frame_71c68a0e9349861aea34974fdce8ee03);

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
    PGO_onModuleExit("oauthlib.oauth2.rfc6749.request_validator", false);

    Py_INCREF(module_oauthlib$oauth2$rfc6749$request_validator);
    return module_oauthlib$oauth2$rfc6749$request_validator;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$request_validator, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("oauthlib$oauth2$rfc6749$request_validator", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
