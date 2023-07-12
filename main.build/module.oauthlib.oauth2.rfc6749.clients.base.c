/* Generated code for Python module 'oauthlib.oauth2.rfc6749.clients.base'
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

/* The "module_oauthlib$oauth2$rfc6749$clients$base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauthlib$oauth2$rfc6749$clients$base;
PyDictObject *moduledict_oauthlib$oauth2$rfc6749$clients$base;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[208];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[208];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("oauthlib.oauth2.rfc6749.clients.base"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 208; i++) {
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
void checkModuleConstants_oauthlib$oauth2$rfc6749$clients$base(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 208; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_32565e9bd872c263b62bc32fdd8a7c4e;
static PyCodeObject *codeobj_582baca28693c4aa064d27d8c71cbd7b;
static PyCodeObject *codeobj_ae384f97b04c884aeba72a1233fa9d62;
static PyCodeObject *codeobj_594ecbb6f32b520ae63127d5968a18bb;
static PyCodeObject *codeobj_b4b1b152ce52c5726076e1f8b0758d12;
static PyCodeObject *codeobj_f0c126e285d0a73e3ca5648c16efa884;
static PyCodeObject *codeobj_33942d122a6c75c99c84004663a330cd;
static PyCodeObject *codeobj_4cb70d939150800d6672167d7db6e077;
static PyCodeObject *codeobj_1fe729518f412eb3fefcab5b6b6c76a1;
static PyCodeObject *codeobj_e9f44ea7e99b74b3ebe014ed91192b7c;
static PyCodeObject *codeobj_fc119401cdc326ea8bb9925a489f8112;
static PyCodeObject *codeobj_a451b86a9e1fe31f056c273ce950b063;
static PyCodeObject *codeobj_58472d914cc82c1f03a5d0145522ff3c;
static PyCodeObject *codeobj_9f946332f482fc30892c52eb737d558c;
static PyCodeObject *codeobj_2f31645eb1df308381620d4a3d910207;
static PyCodeObject *codeobj_ee92d5778bbb6b3b433acec01bc2ec5a;
static PyCodeObject *codeobj_853024e6b336e4f8ecc8ea5188adace8;
static PyCodeObject *codeobj_c60acbad55864ba0094e7c741ab34586;
static PyCodeObject *codeobj_9e8ee375c79d59ef65e5683ce6dbf52c;
static PyCodeObject *codeobj_98eb64ba4acabdf105f9dabb96431ef9;
static PyCodeObject *codeobj_4203ad27be980c5b1aaa39e7b71daa78;
static PyCodeObject *codeobj_a49c74f71dc45116e16bff87784422e5;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[126]; CHECK_OBJECT(module_filename_obj);
    codeobj_32565e9bd872c263b62bc32fdd8a7c4e = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[189], mod_consts[189], mod_consts[190], NULL, 1, 0, 0);
    codeobj_582baca28693c4aa064d27d8c71cbd7b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[191], mod_consts[191], NULL, NULL, 0, 0, 0);
    codeobj_ae384f97b04c884aeba72a1233fa9d62 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_NOFREE, mod_consts[150], mod_consts[150], mod_consts[192], NULL, 0, 0, 0);
    codeobj_594ecbb6f32b520ae63127d5968a18bb = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[193], NULL, 16, 0, 0);
    codeobj_b4b1b152ce52c5726076e1f8b0758d12 = MAKE_CODE_OBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[194], NULL, 6, 0, 0);
    codeobj_f0c126e285d0a73e3ca5648c16efa884 = MAKE_CODE_OBJECT(module_filename_obj, 553, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[195], NULL, 7, 0, 0);
    codeobj_33942d122a6c75c99c84004663a330cd = MAKE_CODE_OBJECT(module_filename_obj, 567, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[196], NULL, 2, 0, 0);
    codeobj_4cb70d939150800d6672167d7db6e077 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[197], NULL, 6, 0, 0);
    codeobj_1fe729518f412eb3fefcab5b6b6c76a1 = MAKE_CODE_OBJECT(module_filename_obj, 504, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[179], mod_consts[179], mod_consts[198], NULL, 3, 0, 0);
    codeobj_e9f44ea7e99b74b3ebe014ed91192b7c = MAKE_CODE_OBJECT(module_filename_obj, 468, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[177], mod_consts[177], mod_consts[199], NULL, 2, 0, 0);
    codeobj_fc119401cdc326ea8bb9925a489f8112 = MAKE_CODE_OBJECT(module_filename_obj, 378, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[200], NULL, 3, 0, 0);
    codeobj_a451b86a9e1fe31f056c273ce950b063 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[201], NULL, 1, 0, 0);
    codeobj_58472d914cc82c1f03a5d0145522ff3c = MAKE_CODE_OBJECT(module_filename_obj, 572, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[185], mod_consts[185], mod_consts[196], NULL, 2, 0, 0);
    codeobj_9f946332f482fc30892c52eb737d558c = MAKE_CODE_OBJECT(module_filename_obj, 578, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[196], NULL, 2, 0, 0);
    codeobj_2f31645eb1df308381620d4a3d910207 = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[202], NULL, 5, 0, 0);
    codeobj_ee92d5778bbb6b3b433acec01bc2ec5a = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[203], NULL, 4, 0, 0);
    codeobj_853024e6b336e4f8ecc8ea5188adace8 = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[167], mod_consts[167], mod_consts[204], NULL, 5, 0, 0);
    codeobj_c60acbad55864ba0094e7c741ab34586 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[201], NULL, 1, 0, 0);
    codeobj_9e8ee375c79d59ef65e5683ce6dbf52c = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[201], NULL, 1, 0, 0);
    codeobj_98eb64ba4acabdf105f9dabb96431ef9 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[205], NULL, 6, 0, 0);
    codeobj_4203ad27be980c5b1aaa39e7b71daa78 = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[206], NULL, 6, 0, 0);
    codeobj_a49c74f71dc45116e16bff87784422e5 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[207], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__9_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__12_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__10_prepare_token_revocation_request(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__11_parse_request_body_response(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__12_prepare_refresh_body(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__13__add_bearer_token(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__14_create_code_verifier();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__15_create_code_challenge(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__16__add_mac_token(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__17__populate_attributes();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__18_populate_code_attributes();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__19_populate_token_attributes();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__2_token_types();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__3_prepare_request_uri();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__4_prepare_request_body();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__5_parse_request_uri_response();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__6_add_token(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__7_prepare_authorization_request(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__8_prepare_token_request(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__9_prepare_refresh_token_request(PyObject *defaults);


// The module function definitions.
static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_default_token_placement = python_pars[2];
    PyObject *par_token_type = python_pars[3];
    PyObject *par_access_token = python_pars[4];
    PyObject *par_refresh_token = python_pars[5];
    PyObject *par_mac_key = python_pars[6];
    PyObject *par_mac_algorithm = python_pars[7];
    PyObject *par_token = python_pars[8];
    PyObject *par_scope = python_pars[9];
    PyObject *par_state = python_pars[10];
    PyObject *par_redirect_url = python_pars[11];
    PyObject *par_state_generator = python_pars[12];
    PyObject *par_code_verifier = python_pars[13];
    PyObject *par_code_challenge = python_pars[14];
    PyObject *par_code_challenge_method = python_pars[15];
    PyObject *par_kwargs = python_pars[16];
    struct Nuitka_FrameObject *frame_594ecbb6f32b520ae63127d5968a18bb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_594ecbb6f32b520ae63127d5968a18bb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_594ecbb6f32b520ae63127d5968a18bb)) {
        Py_XDECREF(cache_frame_594ecbb6f32b520ae63127d5968a18bb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_594ecbb6f32b520ae63127d5968a18bb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_594ecbb6f32b520ae63127d5968a18bb = MAKE_FUNCTION_FRAME(codeobj_594ecbb6f32b520ae63127d5968a18bb, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_594ecbb6f32b520ae63127d5968a18bb->m_type_description == NULL);
    frame_594ecbb6f32b520ae63127d5968a18bb = cache_frame_594ecbb6f32b520ae63127d5968a18bb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_594ecbb6f32b520ae63127d5968a18bb);
    assert(Py_REFCNT(frame_594ecbb6f32b520ae63127d5968a18bb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_client_id);
        tmp_assattr_value_1 = par_client_id;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_default_token_placement);
        tmp_assattr_value_2 = par_default_token_placement;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_token_type);
        tmp_assattr_value_3 = par_token_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_access_token);
        tmp_assattr_value_4 = par_access_token;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_refresh_token);
        tmp_assattr_value_5 = par_refresh_token;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[4], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_mac_key);
        tmp_assattr_value_6 = par_mac_key;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[5], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_mac_algorithm);
        tmp_assattr_value_7 = par_mac_algorithm;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[6], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_token);
        tmp_or_left_value_1 = par_token;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = MAKE_DICT_EMPTY();
        tmp_assattr_value_8 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assattr_value_8 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[7], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_scope);
        tmp_assattr_value_9 = par_scope;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[8], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_state_generator);
        tmp_assattr_value_10 = par_state_generator;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[9], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_state);
        tmp_assattr_value_11 = par_state;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[10], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_redirect_url);
        tmp_assattr_value_12 = par_redirect_url;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[11], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_code_verifier);
        tmp_assattr_value_13 = par_code_verifier;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[12], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(par_code_challenge);
        tmp_assattr_value_14 = par_code_challenge;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[13], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(par_code_challenge_method);
        tmp_assattr_value_15 = par_code_challenge_method;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[14], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[15], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        tmp_assattr_value_17 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[16], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_value_18 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[17], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_594ecbb6f32b520ae63127d5968a18bb->m_frame.f_lineno = 138;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_594ecbb6f32b520ae63127d5968a18bb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_594ecbb6f32b520ae63127d5968a18bb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_594ecbb6f32b520ae63127d5968a18bb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_594ecbb6f32b520ae63127d5968a18bb,
        type_description_1,
        par_self,
        par_client_id,
        par_default_token_placement,
        par_token_type,
        par_access_token,
        par_refresh_token,
        par_mac_key,
        par_mac_algorithm,
        par_token,
        par_scope,
        par_state,
        par_redirect_url,
        par_state_generator,
        par_code_verifier,
        par_code_challenge,
        par_code_challenge_method,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_594ecbb6f32b520ae63127d5968a18bb == cache_frame_594ecbb6f32b520ae63127d5968a18bb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_594ecbb6f32b520ae63127d5968a18bb);
        cache_frame_594ecbb6f32b520ae63127d5968a18bb = NULL;
    }

    assertFrameObject(frame_594ecbb6f32b520ae63127d5968a18bb);

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
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_default_token_placement);
    Py_DECREF(par_default_token_placement);
    CHECK_OBJECT(par_token_type);
    Py_DECREF(par_token_type);
    CHECK_OBJECT(par_access_token);
    Py_DECREF(par_access_token);
    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);
    CHECK_OBJECT(par_mac_key);
    Py_DECREF(par_mac_key);
    CHECK_OBJECT(par_mac_algorithm);
    Py_DECREF(par_mac_algorithm);
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_redirect_url);
    Py_DECREF(par_redirect_url);
    CHECK_OBJECT(par_state_generator);
    Py_DECREF(par_state_generator);
    CHECK_OBJECT(par_code_verifier);
    Py_DECREF(par_code_verifier);
    CHECK_OBJECT(par_code_challenge);
    Py_DECREF(par_code_challenge);
    CHECK_OBJECT(par_code_challenge_method);
    Py_DECREF(par_code_challenge_method);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_default_token_placement);
    Py_DECREF(par_default_token_placement);
    CHECK_OBJECT(par_token_type);
    Py_DECREF(par_token_type);
    CHECK_OBJECT(par_access_token);
    Py_DECREF(par_access_token);
    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);
    CHECK_OBJECT(par_mac_key);
    Py_DECREF(par_mac_key);
    CHECK_OBJECT(par_mac_algorithm);
    Py_DECREF(par_mac_algorithm);
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_redirect_url);
    Py_DECREF(par_redirect_url);
    CHECK_OBJECT(par_state_generator);
    Py_DECREF(par_state_generator);
    CHECK_OBJECT(par_code_verifier);
    Py_DECREF(par_code_verifier);
    CHECK_OBJECT(par_code_challenge);
    Py_DECREF(par_code_challenge);
    CHECK_OBJECT(par_code_challenge_method);
    Py_DECREF(par_code_challenge_method);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__2_token_types(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a49c74f71dc45116e16bff87784422e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a49c74f71dc45116e16bff87784422e5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a49c74f71dc45116e16bff87784422e5)) {
        Py_XDECREF(cache_frame_a49c74f71dc45116e16bff87784422e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a49c74f71dc45116e16bff87784422e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a49c74f71dc45116e16bff87784422e5 = MAKE_FUNCTION_FRAME(codeobj_a49c74f71dc45116e16bff87784422e5, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a49c74f71dc45116e16bff87784422e5->m_type_description == NULL);
    frame_a49c74f71dc45116e16bff87784422e5 = cache_frame_a49c74f71dc45116e16bff87784422e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a49c74f71dc45116e16bff87784422e5);
    assert(Py_REFCNT(frame_a49c74f71dc45116e16bff87784422e5) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[20];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_2;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[22];
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[23]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_a49c74f71dc45116e16bff87784422e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a49c74f71dc45116e16bff87784422e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a49c74f71dc45116e16bff87784422e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a49c74f71dc45116e16bff87784422e5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a49c74f71dc45116e16bff87784422e5 == cache_frame_a49c74f71dc45116e16bff87784422e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a49c74f71dc45116e16bff87784422e5);
        cache_frame_a49c74f71dc45116e16bff87784422e5 = NULL;
    }

    assertFrameObject(frame_a49c74f71dc45116e16bff87784422e5);

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


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__3_prepare_request_uri(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_9e8ee375c79d59ef65e5683ce6dbf52c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9e8ee375c79d59ef65e5683ce6dbf52c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9e8ee375c79d59ef65e5683ce6dbf52c)) {
        Py_XDECREF(cache_frame_9e8ee375c79d59ef65e5683ce6dbf52c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9e8ee375c79d59ef65e5683ce6dbf52c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9e8ee375c79d59ef65e5683ce6dbf52c = MAKE_FUNCTION_FRAME(codeobj_9e8ee375c79d59ef65e5683ce6dbf52c, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9e8ee375c79d59ef65e5683ce6dbf52c->m_type_description == NULL);
    frame_9e8ee375c79d59ef65e5683ce6dbf52c = cache_frame_9e8ee375c79d59ef65e5683ce6dbf52c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9e8ee375c79d59ef65e5683ce6dbf52c);
    assert(Py_REFCNT(frame_9e8ee375c79d59ef65e5683ce6dbf52c) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[25];
        frame_9e8ee375c79d59ef65e5683ce6dbf52c->m_frame.f_lineno = 158;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 158;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9e8ee375c79d59ef65e5683ce6dbf52c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e8ee375c79d59ef65e5683ce6dbf52c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e8ee375c79d59ef65e5683ce6dbf52c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9e8ee375c79d59ef65e5683ce6dbf52c,
        type_description_1,
        par_self,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_9e8ee375c79d59ef65e5683ce6dbf52c == cache_frame_9e8ee375c79d59ef65e5683ce6dbf52c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9e8ee375c79d59ef65e5683ce6dbf52c);
        cache_frame_9e8ee375c79d59ef65e5683ce6dbf52c = NULL;
    }

    assertFrameObject(frame_9e8ee375c79d59ef65e5683ce6dbf52c);

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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__4_prepare_request_body(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_c60acbad55864ba0094e7c741ab34586;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c60acbad55864ba0094e7c741ab34586 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c60acbad55864ba0094e7c741ab34586)) {
        Py_XDECREF(cache_frame_c60acbad55864ba0094e7c741ab34586);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c60acbad55864ba0094e7c741ab34586 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c60acbad55864ba0094e7c741ab34586 = MAKE_FUNCTION_FRAME(codeobj_c60acbad55864ba0094e7c741ab34586, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c60acbad55864ba0094e7c741ab34586->m_type_description == NULL);
    frame_c60acbad55864ba0094e7c741ab34586 = cache_frame_c60acbad55864ba0094e7c741ab34586;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c60acbad55864ba0094e7c741ab34586);
    assert(Py_REFCNT(frame_c60acbad55864ba0094e7c741ab34586) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[25];
        frame_c60acbad55864ba0094e7c741ab34586->m_frame.f_lineno = 162;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 162;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c60acbad55864ba0094e7c741ab34586, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c60acbad55864ba0094e7c741ab34586->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c60acbad55864ba0094e7c741ab34586, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c60acbad55864ba0094e7c741ab34586,
        type_description_1,
        par_self,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_c60acbad55864ba0094e7c741ab34586 == cache_frame_c60acbad55864ba0094e7c741ab34586) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c60acbad55864ba0094e7c741ab34586);
        cache_frame_c60acbad55864ba0094e7c741ab34586 = NULL;
    }

    assertFrameObject(frame_c60acbad55864ba0094e7c741ab34586);

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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__5_parse_request_uri_response(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_a451b86a9e1fe31f056c273ce950b063;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a451b86a9e1fe31f056c273ce950b063 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a451b86a9e1fe31f056c273ce950b063)) {
        Py_XDECREF(cache_frame_a451b86a9e1fe31f056c273ce950b063);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a451b86a9e1fe31f056c273ce950b063 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a451b86a9e1fe31f056c273ce950b063 = MAKE_FUNCTION_FRAME(codeobj_a451b86a9e1fe31f056c273ce950b063, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a451b86a9e1fe31f056c273ce950b063->m_type_description == NULL);
    frame_a451b86a9e1fe31f056c273ce950b063 = cache_frame_a451b86a9e1fe31f056c273ce950b063;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a451b86a9e1fe31f056c273ce950b063);
    assert(Py_REFCNT(frame_a451b86a9e1fe31f056c273ce950b063) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[25];
        frame_a451b86a9e1fe31f056c273ce950b063->m_frame.f_lineno = 166;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 166;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a451b86a9e1fe31f056c273ce950b063, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a451b86a9e1fe31f056c273ce950b063->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a451b86a9e1fe31f056c273ce950b063, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a451b86a9e1fe31f056c273ce950b063,
        type_description_1,
        par_self,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_a451b86a9e1fe31f056c273ce950b063 == cache_frame_a451b86a9e1fe31f056c273ce950b063) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a451b86a9e1fe31f056c273ce950b063);
        cache_frame_a451b86a9e1fe31f056c273ce950b063 = NULL;
    }

    assertFrameObject(frame_a451b86a9e1fe31f056c273ce950b063);

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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__6_add_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_uri = python_pars[1];
    PyObject *par_http_method = python_pars[2];
    PyObject *par_body = python_pars[3];
    PyObject *par_headers = python_pars[4];
    PyObject *par_token_placement = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    PyObject *var_case_insensitive_token_types = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4cb70d939150800d6672167d7db6e077;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_32565e9bd872c263b62bc32fdd8a7c4e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_32565e9bd872c263b62bc32fdd8a7c4e_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4cb70d939150800d6672167d7db6e077 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4cb70d939150800d6672167d7db6e077)) {
        Py_XDECREF(cache_frame_4cb70d939150800d6672167d7db6e077);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4cb70d939150800d6672167d7db6e077 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4cb70d939150800d6672167d7db6e077 = MAKE_FUNCTION_FRAME(codeobj_4cb70d939150800d6672167d7db6e077, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4cb70d939150800d6672167d7db6e077->m_type_description == NULL);
    frame_4cb70d939150800d6672167d7db6e077 = cache_frame_4cb70d939150800d6672167d7db6e077;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4cb70d939150800d6672167d7db6e077);
    assert(Py_REFCNT(frame_4cb70d939150800d6672167d7db6e077) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_1 = par_uri;
        frame_4cb70d939150800d6672167d7db6e077->m_frame.f_lineno = 203;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4cb70d939150800d6672167d7db6e077->m_frame.f_lineno = 204;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 204;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_token_placement);
        tmp_or_left_value_1 = par_token_placement;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = par_token_placement;
            assert(old != NULL);
            par_token_placement = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[31]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 209;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }

            tmp_expression_value_3 = par_self;
            tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[32]);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[33]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            frame_4cb70d939150800d6672167d7db6e077->m_frame.f_lineno = 209;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
            Py_DECREF(tmp_called_value_3);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_32565e9bd872c263b62bc32fdd8a7c4e_2)) {
            Py_XDECREF(cache_frame_32565e9bd872c263b62bc32fdd8a7c4e_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_32565e9bd872c263b62bc32fdd8a7c4e_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_32565e9bd872c263b62bc32fdd8a7c4e_2 = MAKE_FUNCTION_FRAME(codeobj_32565e9bd872c263b62bc32fdd8a7c4e, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_32565e9bd872c263b62bc32fdd8a7c4e_2->m_type_description == NULL);
        frame_32565e9bd872c263b62bc32fdd8a7c4e_2 = cache_frame_32565e9bd872c263b62bc32fdd8a7c4e_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_32565e9bd872c263b62bc32fdd8a7c4e_2);
        assert(Py_REFCNT(frame_32565e9bd872c263b62bc32fdd8a7c4e_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 208;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_7 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 208;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_8 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 208;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                        type_description_2 = "oo";
                        exception_lineno = 208;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[34];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 208;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
        goto try_end_2;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_9 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_9;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_10 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_10;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_k);
            tmp_expression_value_4 = outline_0_var_k;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[35]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            frame_32565e9bd872c263b62bc32fdd8a7c4e_2->m_frame.f_lineno = 209;
            tmp_dictset38_key_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
            Py_DECREF(tmp_called_value_4);
            if (tmp_dictset38_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_v);
            tmp_dictset38_value_1 = outline_0_var_v;
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_2 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_2);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_32565e9bd872c263b62bc32fdd8a7c4e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_32565e9bd872c263b62bc32fdd8a7c4e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_32565e9bd872c263b62bc32fdd8a7c4e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_32565e9bd872c263b62bc32fdd8a7c4e_2,
            type_description_2,
            outline_0_var_k,
            outline_0_var_v
        );


        // Release cached frame if used for exception.
        if (frame_32565e9bd872c263b62bc32fdd8a7c4e_2 == cache_frame_32565e9bd872c263b62bc32fdd8a7c4e_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_32565e9bd872c263b62bc32fdd8a7c4e_2);
            cache_frame_32565e9bd872c263b62bc32fdd8a7c4e_2 = NULL;
        }

        assertFrameObject(frame_32565e9bd872c263b62bc32fdd8a7c4e_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
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
        exception_lineno = 208;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_case_insensitive_token_types == NULL);
        var_case_insensitive_token_types = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[2]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[35]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4cb70d939150800d6672167d7db6e077->m_frame.f_lineno = 210;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_case_insensitive_token_types);
        tmp_cmp_expr_right_1 = var_case_insensitive_token_types;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_7;
        tmp_mod_expr_left_1 = mod_consts[36];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_self;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[2]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4cb70d939150800d6672167d7db6e077->m_frame.f_lineno = 211;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 211;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[3]);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[7]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[37]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4cb70d939150800d6672167d7db6e077->m_frame.f_lineno = 213;
        tmp_or_right_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[38]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_operand_value_2 = tmp_or_left_value_2;
        or_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[39];
        frame_4cb70d939150800d6672167d7db6e077->m_frame.f_lineno = 214;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 214;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_called_instance_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[17]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[17]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4cb70d939150800d6672167d7db6e077->m_frame.f_lineno = 216;
        tmp_cmp_expr_right_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[40]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4cb70d939150800d6672167d7db6e077->m_frame.f_lineno = 217;
        tmp_raise_type_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        if (tmp_raise_type_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_4;
        exception_lineno = 217;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(var_case_insensitive_token_types);
        tmp_expression_value_13 = var_case_insensitive_token_types;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[2]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[35]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_4cb70d939150800d6672167d7db6e077->m_frame.f_lineno = 219;
        tmp_subscript_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_tuple_element_1 = par_uri;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_http_method);
        tmp_tuple_element_1 = par_http_method;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_body);
        tmp_tuple_element_1 = par_body;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_headers);
        tmp_tuple_element_1 = par_headers;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_token_placement);
        tmp_tuple_element_1 = par_token_placement;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 4, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__9_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4cb70d939150800d6672167d7db6e077, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4cb70d939150800d6672167d7db6e077->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4cb70d939150800d6672167d7db6e077, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4cb70d939150800d6672167d7db6e077,
        type_description_1,
        par_self,
        par_uri,
        par_http_method,
        par_body,
        par_headers,
        par_token_placement,
        par_kwargs,
        var_case_insensitive_token_types
    );


    // Release cached frame if used for exception.
    if (frame_4cb70d939150800d6672167d7db6e077 == cache_frame_4cb70d939150800d6672167d7db6e077) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4cb70d939150800d6672167d7db6e077);
        cache_frame_4cb70d939150800d6672167d7db6e077 = NULL;
    }

    assertFrameObject(frame_4cb70d939150800d6672167d7db6e077);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_token_placement);
    Py_DECREF(par_token_placement);
    par_token_placement = NULL;
    CHECK_OBJECT(var_case_insensitive_token_types);
    Py_DECREF(var_case_insensitive_token_types);
    var_case_insensitive_token_types = NULL;
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

    CHECK_OBJECT(par_token_placement);
    Py_DECREF(par_token_placement);
    par_token_placement = NULL;
    Py_XDECREF(var_case_insensitive_token_types);
    var_case_insensitive_token_types = NULL;
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
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_http_method);
    Py_DECREF(par_http_method);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_http_method);
    Py_DECREF(par_http_method);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__7_prepare_authorization_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_authorization_url = python_pars[1];
    PyObject *par_state = python_pars[2];
    PyObject *par_redirect_url = python_pars[3];
    PyObject *par_scope = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    PyObject *var_auth_url = NULL;
    struct Nuitka_FrameObject *frame_2f31645eb1df308381620d4a3d910207;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2f31645eb1df308381620d4a3d910207 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2f31645eb1df308381620d4a3d910207)) {
        Py_XDECREF(cache_frame_2f31645eb1df308381620d4a3d910207);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f31645eb1df308381620d4a3d910207 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f31645eb1df308381620d4a3d910207 = MAKE_FUNCTION_FRAME(codeobj_2f31645eb1df308381620d4a3d910207, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f31645eb1df308381620d4a3d910207->m_type_description == NULL);
    frame_2f31645eb1df308381620d4a3d910207 = cache_frame_2f31645eb1df308381620d4a3d910207;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2f31645eb1df308381620d4a3d910207);
    assert(Py_REFCNT(frame_2f31645eb1df308381620d4a3d910207) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_authorization_url);
        tmp_args_element_value_1 = par_authorization_url;
        frame_2f31645eb1df308381620d4a3d910207->m_frame.f_lineno = 248;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
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
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_2f31645eb1df308381620d4a3d910207->m_frame.f_lineno = 249;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 249;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_state);
        tmp_or_left_value_1 = par_state;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_2f31645eb1df308381620d4a3d910207->m_frame.f_lineno = 251;
        tmp_or_right_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assattr_value_1 = tmp_or_left_value_1;
        or_end_1:;
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_redirect_url);
        tmp_or_left_value_2 = par_redirect_url;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 252;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = par_self;
        tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_assattr_value_2 = tmp_or_left_value_2;
        or_end_2:;
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 252;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[11], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_scope);
        tmp_cmp_expr_left_1 = par_scope;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_scope);
        tmp_assign_source_1 = par_scope;
        Py_INCREF(tmp_assign_source_1);
        condexpr_end_1:;
        {
            PyObject *old = par_scope;
            assert(old != NULL);
            par_scope = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg4_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[43]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_authorization_url);
        tmp_tuple_element_1 = par_authorization_url;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[44];
        if (par_self == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_5;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[8];
            CHECK_OBJECT(par_scope);
            tmp_dict_value_1 = par_scope;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_5 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dircall_arg1_1);
        Py_DECREF(tmp_dircall_arg2_1);
        Py_DECREF(tmp_dircall_arg3_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_2 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_auth_url == NULL);
        var_auth_url = tmp_assign_source_2;
    }
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_auth_url);
        tmp_tuple_element_2 = var_auth_url;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[46];
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
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
        exception_tb = MAKE_TRACEBACK(frame_2f31645eb1df308381620d4a3d910207, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f31645eb1df308381620d4a3d910207->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f31645eb1df308381620d4a3d910207, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f31645eb1df308381620d4a3d910207,
        type_description_1,
        par_self,
        par_authorization_url,
        par_state,
        par_redirect_url,
        par_scope,
        par_kwargs,
        var_auth_url
    );


    // Release cached frame if used for exception.
    if (frame_2f31645eb1df308381620d4a3d910207 == cache_frame_2f31645eb1df308381620d4a3d910207) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f31645eb1df308381620d4a3d910207);
        cache_frame_2f31645eb1df308381620d4a3d910207 = NULL;
    }

    assertFrameObject(frame_2f31645eb1df308381620d4a3d910207);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    par_scope = NULL;
    CHECK_OBJECT(var_auth_url);
    Py_DECREF(var_auth_url);
    var_auth_url = NULL;
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

    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    par_scope = NULL;
    Py_XDECREF(var_auth_url);
    var_auth_url = NULL;
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
    CHECK_OBJECT(par_authorization_url);
    Py_DECREF(par_authorization_url);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_redirect_url);
    Py_DECREF(par_redirect_url);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_authorization_url);
    Py_DECREF(par_authorization_url);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);
    CHECK_OBJECT(par_redirect_url);
    Py_DECREF(par_redirect_url);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__8_prepare_token_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_token_url = python_pars[1];
    PyObject *par_authorization_response = python_pars[2];
    PyObject *par_redirect_url = python_pars[3];
    PyObject *par_state = python_pars[4];
    PyObject *par_body = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    struct Nuitka_FrameObject *frame_98eb64ba4acabdf105f9dabb96431ef9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_98eb64ba4acabdf105f9dabb96431ef9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_98eb64ba4acabdf105f9dabb96431ef9)) {
        Py_XDECREF(cache_frame_98eb64ba4acabdf105f9dabb96431ef9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_98eb64ba4acabdf105f9dabb96431ef9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_98eb64ba4acabdf105f9dabb96431ef9 = MAKE_FUNCTION_FRAME(codeobj_98eb64ba4acabdf105f9dabb96431ef9, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_98eb64ba4acabdf105f9dabb96431ef9->m_type_description == NULL);
    frame_98eb64ba4acabdf105f9dabb96431ef9 = cache_frame_98eb64ba4acabdf105f9dabb96431ef9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_98eb64ba4acabdf105f9dabb96431ef9);
    assert(Py_REFCNT(frame_98eb64ba4acabdf105f9dabb96431ef9) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_token_url);
        tmp_args_element_value_1 = par_token_url;
        frame_98eb64ba4acabdf105f9dabb96431ef9->m_frame.f_lineno = 281;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
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
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_98eb64ba4acabdf105f9dabb96431ef9->m_frame.f_lineno = 282;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 282;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_state);
        tmp_or_left_value_1 = par_state;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = par_state;
            assert(old != NULL);
            par_state = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_authorization_response);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_authorization_response);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 286;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[48]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_authorization_response);
        tmp_kw_call_arg_value_0_1 = par_authorization_response;
        CHECK_OBJECT(par_state);
        tmp_kw_call_dict_value_0_1 = par_state;
        frame_98eb64ba4acabdf105f9dabb96431ef9->m_frame.f_lineno = 286;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_redirect_url);
        tmp_or_left_value_2 = par_redirect_url;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_self;
        tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_assattr_value_1 = tmp_or_left_value_2;
        or_end_2:;
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[50]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[51];
        CHECK_OBJECT(par_body);
        tmp_dict_value_1 = par_body;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_5;
            tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[44];
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 290;
                type_description_1 = "ooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_5 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_1 = "ooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dircall_arg1_1);
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_2 = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_body;
            assert(old != NULL);
            par_body = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_token_url);
        tmp_tuple_element_1 = par_token_url;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_body);
        tmp_tuple_element_1 = par_body;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_98eb64ba4acabdf105f9dabb96431ef9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_98eb64ba4acabdf105f9dabb96431ef9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_98eb64ba4acabdf105f9dabb96431ef9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_98eb64ba4acabdf105f9dabb96431ef9,
        type_description_1,
        par_self,
        par_token_url,
        par_authorization_response,
        par_redirect_url,
        par_state,
        par_body,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_98eb64ba4acabdf105f9dabb96431ef9 == cache_frame_98eb64ba4acabdf105f9dabb96431ef9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_98eb64ba4acabdf105f9dabb96431ef9);
        cache_frame_98eb64ba4acabdf105f9dabb96431ef9 = NULL;
    }

    assertFrameObject(frame_98eb64ba4acabdf105f9dabb96431ef9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_state);
    par_state = NULL;
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    par_body = NULL;
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

    Py_XDECREF(par_state);
    par_state = NULL;
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    par_body = NULL;
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
    CHECK_OBJECT(par_token_url);
    Py_DECREF(par_token_url);
    CHECK_OBJECT(par_authorization_response);
    Py_DECREF(par_authorization_response);
    CHECK_OBJECT(par_redirect_url);
    Py_DECREF(par_redirect_url);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_token_url);
    Py_DECREF(par_token_url);
    CHECK_OBJECT(par_authorization_response);
    Py_DECREF(par_authorization_response);
    CHECK_OBJECT(par_redirect_url);
    Py_DECREF(par_redirect_url);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__9_prepare_refresh_token_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_token_url = python_pars[1];
    PyObject *par_refresh_token = python_pars[2];
    PyObject *par_body = python_pars[3];
    PyObject *par_scope = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    struct Nuitka_FrameObject *frame_853024e6b336e4f8ecc8ea5188adace8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_853024e6b336e4f8ecc8ea5188adace8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_853024e6b336e4f8ecc8ea5188adace8)) {
        Py_XDECREF(cache_frame_853024e6b336e4f8ecc8ea5188adace8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_853024e6b336e4f8ecc8ea5188adace8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_853024e6b336e4f8ecc8ea5188adace8 = MAKE_FUNCTION_FRAME(codeobj_853024e6b336e4f8ecc8ea5188adace8, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_853024e6b336e4f8ecc8ea5188adace8->m_type_description == NULL);
    frame_853024e6b336e4f8ecc8ea5188adace8 = cache_frame_853024e6b336e4f8ecc8ea5188adace8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_853024e6b336e4f8ecc8ea5188adace8);
    assert(Py_REFCNT(frame_853024e6b336e4f8ecc8ea5188adace8) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_token_url);
        tmp_args_element_value_1 = par_token_url;
        frame_853024e6b336e4f8ecc8ea5188adace8->m_frame.f_lineno = 314;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooo";
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
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_853024e6b336e4f8ecc8ea5188adace8->m_frame.f_lineno = 315;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 315;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_scope);
        tmp_cmp_expr_left_1 = par_scope;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_scope);
        tmp_assign_source_1 = par_scope;
        Py_INCREF(tmp_assign_source_1);
        condexpr_end_1:;
        {
            PyObject *old = par_scope;
            assert(old != NULL);
            par_scope = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[53]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[51];
        CHECK_OBJECT(par_body);
        tmp_dict_value_1 = par_body;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        CHECK_OBJECT(par_refresh_token);
        tmp_dict_value_1 = par_refresh_token;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_scope);
        tmp_dict_value_1 = par_scope;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_2 = impl___main__$$$function__12_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_body;
            assert(old != NULL);
            par_body = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_token_url);
        tmp_tuple_element_1 = par_token_url;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_body);
        tmp_tuple_element_1 = par_body;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_853024e6b336e4f8ecc8ea5188adace8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_853024e6b336e4f8ecc8ea5188adace8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_853024e6b336e4f8ecc8ea5188adace8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_853024e6b336e4f8ecc8ea5188adace8,
        type_description_1,
        par_self,
        par_token_url,
        par_refresh_token,
        par_body,
        par_scope,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_853024e6b336e4f8ecc8ea5188adace8 == cache_frame_853024e6b336e4f8ecc8ea5188adace8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_853024e6b336e4f8ecc8ea5188adace8);
        cache_frame_853024e6b336e4f8ecc8ea5188adace8 = NULL;
    }

    assertFrameObject(frame_853024e6b336e4f8ecc8ea5188adace8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    par_body = NULL;
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    par_scope = NULL;
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

    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    par_body = NULL;
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    par_scope = NULL;
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
    CHECK_OBJECT(par_token_url);
    Py_DECREF(par_token_url);
    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_token_url);
    Py_DECREF(par_token_url);
    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__10_prepare_token_revocation_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_revocation_url = python_pars[1];
    PyObject *par_token = python_pars[2];
    PyObject *par_token_type_hint = python_pars[3];
    PyObject *par_body = python_pars[4];
    PyObject *par_callback = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    struct Nuitka_FrameObject *frame_4203ad27be980c5b1aaa39e7b71daa78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4203ad27be980c5b1aaa39e7b71daa78 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4203ad27be980c5b1aaa39e7b71daa78)) {
        Py_XDECREF(cache_frame_4203ad27be980c5b1aaa39e7b71daa78);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4203ad27be980c5b1aaa39e7b71daa78 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4203ad27be980c5b1aaa39e7b71daa78 = MAKE_FUNCTION_FRAME(codeobj_4203ad27be980c5b1aaa39e7b71daa78, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4203ad27be980c5b1aaa39e7b71daa78->m_type_description == NULL);
    frame_4203ad27be980c5b1aaa39e7b71daa78 = cache_frame_4203ad27be980c5b1aaa39e7b71daa78;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4203ad27be980c5b1aaa39e7b71daa78);
    assert(Py_REFCNT(frame_4203ad27be980c5b1aaa39e7b71daa78) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_revocation_url);
        tmp_args_element_value_1 = par_revocation_url;
        frame_4203ad27be980c5b1aaa39e7b71daa78->m_frame.f_lineno = 371;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
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
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_4203ad27be980c5b1aaa39e7b71daa78->m_frame.f_lineno = 372;
        tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 372;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_revocation_url);
        tmp_tuple_element_1 = par_revocation_url;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_token);
        tmp_tuple_element_1 = par_token;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[56];
        CHECK_OBJECT(par_token_type_hint);
        tmp_dict_value_1 = par_token_type_hint;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[51];
        CHECK_OBJECT(par_body);
        tmp_dict_value_1 = par_body;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[57];
        CHECK_OBJECT(par_callback);
        tmp_dict_value_1 = par_callback;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4203ad27be980c5b1aaa39e7b71daa78, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4203ad27be980c5b1aaa39e7b71daa78->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4203ad27be980c5b1aaa39e7b71daa78, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4203ad27be980c5b1aaa39e7b71daa78,
        type_description_1,
        par_self,
        par_revocation_url,
        par_token,
        par_token_type_hint,
        par_body,
        par_callback,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_4203ad27be980c5b1aaa39e7b71daa78 == cache_frame_4203ad27be980c5b1aaa39e7b71daa78) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4203ad27be980c5b1aaa39e7b71daa78);
        cache_frame_4203ad27be980c5b1aaa39e7b71daa78 = NULL;
    }

    assertFrameObject(frame_4203ad27be980c5b1aaa39e7b71daa78);

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
    CHECK_OBJECT(par_revocation_url);
    Py_DECREF(par_revocation_url);
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_token_type_hint);
    Py_DECREF(par_token_type_hint);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_revocation_url);
    Py_DECREF(par_revocation_url);
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_token_type_hint);
    Py_DECREF(par_token_type_hint);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__11_parse_request_body_response(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_body = python_pars[1];
    PyObject *par_scope = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_fc119401cdc326ea8bb9925a489f8112;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fc119401cdc326ea8bb9925a489f8112 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fc119401cdc326ea8bb9925a489f8112)) {
        Py_XDECREF(cache_frame_fc119401cdc326ea8bb9925a489f8112);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc119401cdc326ea8bb9925a489f8112 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc119401cdc326ea8bb9925a489f8112 = MAKE_FUNCTION_FRAME(codeobj_fc119401cdc326ea8bb9925a489f8112, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc119401cdc326ea8bb9925a489f8112->m_type_description == NULL);
    frame_fc119401cdc326ea8bb9925a489f8112 = cache_frame_fc119401cdc326ea8bb9925a489f8112;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fc119401cdc326ea8bb9925a489f8112);
    assert(Py_REFCNT(frame_fc119401cdc326ea8bb9925a489f8112) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_scope);
        tmp_cmp_expr_left_1 = par_scope;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_scope);
        tmp_assign_source_1 = par_scope;
        Py_INCREF(tmp_assign_source_1);
        condexpr_end_1:;
        {
            PyObject *old = par_scope;
            assert(old != NULL);
            par_scope = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_body);
        tmp_kw_call_arg_value_0_1 = par_body;
        CHECK_OBJECT(par_scope);
        tmp_kw_call_dict_value_0_1 = par_scope;
        frame_fc119401cdc326ea8bb9925a489f8112->m_frame.f_lineno = 427;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[60]);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_fc119401cdc326ea8bb9925a489f8112->m_frame.f_lineno = 428;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
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
        exception_tb = MAKE_TRACEBACK(frame_fc119401cdc326ea8bb9925a489f8112, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc119401cdc326ea8bb9925a489f8112->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc119401cdc326ea8bb9925a489f8112, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc119401cdc326ea8bb9925a489f8112,
        type_description_1,
        par_self,
        par_body,
        par_scope,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_fc119401cdc326ea8bb9925a489f8112 == cache_frame_fc119401cdc326ea8bb9925a489f8112) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc119401cdc326ea8bb9925a489f8112);
        cache_frame_fc119401cdc326ea8bb9925a489f8112 = NULL;
    }

    assertFrameObject(frame_fc119401cdc326ea8bb9925a489f8112);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    par_scope = NULL;
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

    Py_XDECREF(par_scope);
    par_scope = NULL;
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
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__12_prepare_refresh_body(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_body = python_pars[1];
    PyObject *par_refresh_token = python_pars[2];
    PyObject *par_scope = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_ee92d5778bbb6b3b433acec01bc2ec5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ee92d5778bbb6b3b433acec01bc2ec5a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ee92d5778bbb6b3b433acec01bc2ec5a)) {
        Py_XDECREF(cache_frame_ee92d5778bbb6b3b433acec01bc2ec5a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee92d5778bbb6b3b433acec01bc2ec5a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee92d5778bbb6b3b433acec01bc2ec5a = MAKE_FUNCTION_FRAME(codeobj_ee92d5778bbb6b3b433acec01bc2ec5a, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ee92d5778bbb6b3b433acec01bc2ec5a->m_type_description == NULL);
    frame_ee92d5778bbb6b3b433acec01bc2ec5a = cache_frame_ee92d5778bbb6b3b433acec01bc2ec5a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ee92d5778bbb6b3b433acec01bc2ec5a);
    assert(Py_REFCNT(frame_ee92d5778bbb6b3b433acec01bc2ec5a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_refresh_token);
        tmp_or_left_value_1 = par_refresh_token;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = par_refresh_token;
            assert(old != NULL);
            par_refresh_token = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_scope);
        tmp_cmp_expr_left_1 = par_scope;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_scope);
        tmp_assign_source_2 = par_scope;
        Py_INCREF(tmp_assign_source_2);
        condexpr_end_1:;
        {
            PyObject *old = par_scope;
            assert(old != NULL);
            par_scope = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[51];
        CHECK_OBJECT(par_body);
        tmp_dict_value_1 = par_body;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[8];
        CHECK_OBJECT(par_scope);
        tmp_dict_value_1 = par_scope;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        CHECK_OBJECT(par_refresh_token);
        tmp_dict_value_1 = par_refresh_token;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee92d5778bbb6b3b433acec01bc2ec5a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee92d5778bbb6b3b433acec01bc2ec5a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee92d5778bbb6b3b433acec01bc2ec5a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee92d5778bbb6b3b433acec01bc2ec5a,
        type_description_1,
        par_self,
        par_body,
        par_refresh_token,
        par_scope,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_ee92d5778bbb6b3b433acec01bc2ec5a == cache_frame_ee92d5778bbb6b3b433acec01bc2ec5a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ee92d5778bbb6b3b433acec01bc2ec5a);
        cache_frame_ee92d5778bbb6b3b433acec01bc2ec5a = NULL;
    }

    assertFrameObject(frame_ee92d5778bbb6b3b433acec01bc2ec5a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);
    par_refresh_token = NULL;
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    par_scope = NULL;
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

    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);
    par_refresh_token = NULL;
    CHECK_OBJECT(par_scope);
    Py_DECREF(par_scope);
    par_scope = NULL;
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
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__13__add_bearer_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_uri = python_pars[1];
    PyObject *par_http_method = python_pars[2];
    PyObject *par_body = python_pars[3];
    PyObject *par_headers = python_pars[4];
    PyObject *par_token_placement = python_pars[5];
    struct Nuitka_FrameObject *frame_b4b1b152ce52c5726076e1f8b0758d12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b4b1b152ce52c5726076e1f8b0758d12 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b4b1b152ce52c5726076e1f8b0758d12)) {
        Py_XDECREF(cache_frame_b4b1b152ce52c5726076e1f8b0758d12);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4b1b152ce52c5726076e1f8b0758d12 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4b1b152ce52c5726076e1f8b0758d12 = MAKE_FUNCTION_FRAME(codeobj_b4b1b152ce52c5726076e1f8b0758d12, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b4b1b152ce52c5726076e1f8b0758d12->m_type_description == NULL);
    frame_b4b1b152ce52c5726076e1f8b0758d12 = cache_frame_b4b1b152ce52c5726076e1f8b0758d12;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b4b1b152ce52c5726076e1f8b0758d12);
    assert(Py_REFCNT(frame_b4b1b152ce52c5726076e1f8b0758d12) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_token_placement);
        tmp_cmp_expr_left_1 = par_token_placement;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 456;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_headers);
        tmp_args_element_value_2 = par_headers;
        frame_b4b1b152ce52c5726076e1f8b0758d12->m_frame.f_lineno = 456;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_headers;
            assert(old != NULL);
            par_headers = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_token_placement);
        tmp_cmp_expr_left_2 = par_token_placement;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[69]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 459;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_4 = par_uri;
        frame_b4b1b152ce52c5726076e1f8b0758d12->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_uri;
            assert(old != NULL);
            par_uri = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_token_placement);
        tmp_cmp_expr_left_3 = par_token_placement;
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[71]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[3]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 462;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_body);
        tmp_args_element_value_6 = par_body;
        frame_b4b1b152ce52c5726076e1f8b0758d12->m_frame.f_lineno = 462;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_body;
            assert(old != NULL);
            par_body = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[72];
        frame_b4b1b152ce52c5726076e1f8b0758d12->m_frame.f_lineno = 465;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 465;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b4b1b152ce52c5726076e1f8b0758d12, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4b1b152ce52c5726076e1f8b0758d12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4b1b152ce52c5726076e1f8b0758d12, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4b1b152ce52c5726076e1f8b0758d12,
        type_description_1,
        par_self,
        par_uri,
        par_http_method,
        par_body,
        par_headers,
        par_token_placement
    );


    // Release cached frame if used for exception.
    if (frame_b4b1b152ce52c5726076e1f8b0758d12 == cache_frame_b4b1b152ce52c5726076e1f8b0758d12) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b4b1b152ce52c5726076e1f8b0758d12);
        cache_frame_b4b1b152ce52c5726076e1f8b0758d12 = NULL;
    }

    assertFrameObject(frame_b4b1b152ce52c5726076e1f8b0758d12);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_uri);
        tmp_tuple_element_1 = par_uri;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_headers);
        tmp_tuple_element_1 = par_headers;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_body);
        tmp_tuple_element_1 = par_body;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    par_uri = NULL;
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    par_body = NULL;
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    par_headers = NULL;
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

    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    par_uri = NULL;
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    par_body = NULL;
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    par_headers = NULL;
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
    CHECK_OBJECT(par_http_method);
    Py_DECREF(par_http_method);
    CHECK_OBJECT(par_token_placement);
    Py_DECREF(par_token_placement);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_http_method);
    Py_DECREF(par_http_method);
    CHECK_OBJECT(par_token_placement);
    Py_DECREF(par_token_placement);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__14_create_code_verifier(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_length = python_pars[1];
    PyObject *var_code_verifier = NULL;
    PyObject *var_allowed_characters = NULL;
    struct Nuitka_FrameObject *frame_e9f44ea7e99b74b3ebe014ed91192b7c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e9f44ea7e99b74b3ebe014ed91192b7c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e9f44ea7e99b74b3ebe014ed91192b7c)) {
        Py_XDECREF(cache_frame_e9f44ea7e99b74b3ebe014ed91192b7c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e9f44ea7e99b74b3ebe014ed91192b7c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e9f44ea7e99b74b3ebe014ed91192b7c = MAKE_FUNCTION_FRAME(codeobj_e9f44ea7e99b74b3ebe014ed91192b7c, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e9f44ea7e99b74b3ebe014ed91192b7c->m_type_description == NULL);
    frame_e9f44ea7e99b74b3ebe014ed91192b7c = cache_frame_e9f44ea7e99b74b3ebe014ed91192b7c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e9f44ea7e99b74b3ebe014ed91192b7c);
    assert(Py_REFCNT(frame_e9f44ea7e99b74b3ebe014ed91192b7c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_length);
        tmp_cmp_expr_left_1 = par_length;
        tmp_cmp_expr_right_1 = mod_consts[74];
        tmp_operand_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oooo";
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
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[75];
        frame_e9f44ea7e99b74b3ebe014ed91192b7c->m_frame.f_lineno = 489;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 489;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_length);
        tmp_cmp_expr_left_2 = par_length;
        tmp_cmp_expr_right_2 = mod_consts[76];
        tmp_operand_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
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
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[77];
        frame_e9f44ea7e99b74b3ebe014ed91192b7c->m_frame.f_lineno = 492;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 492;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_e9f44ea7e99b74b3ebe014ed91192b7c->m_frame.f_lineno = 494;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[79],
            PyTuple_GET_ITEM(mod_consts[80], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_allowed_characters == NULL);
        var_allowed_characters = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_length);
        tmp_args_element_value_1 = par_length;
        frame_e9f44ea7e99b74b3ebe014ed91192b7c->m_frame.f_lineno = 495;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[82], tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_code_verifier == NULL);
        var_code_verifier = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_allowed_characters);
        tmp_args_element_value_2 = var_allowed_characters;
        CHECK_OBJECT(var_code_verifier);
        tmp_args_element_value_3 = var_code_verifier;
        frame_e9f44ea7e99b74b3ebe014ed91192b7c->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[83],
                call_args
            );
        }

        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooo";
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
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[84];
        frame_e9f44ea7e99b74b3ebe014ed91192b7c->m_frame.f_lineno = 498;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 498;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_code_verifier);
        tmp_assattr_value_1 = var_code_verifier;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e9f44ea7e99b74b3ebe014ed91192b7c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e9f44ea7e99b74b3ebe014ed91192b7c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9f44ea7e99b74b3ebe014ed91192b7c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e9f44ea7e99b74b3ebe014ed91192b7c,
        type_description_1,
        par_self,
        par_length,
        var_code_verifier,
        var_allowed_characters
    );


    // Release cached frame if used for exception.
    if (frame_e9f44ea7e99b74b3ebe014ed91192b7c == cache_frame_e9f44ea7e99b74b3ebe014ed91192b7c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e9f44ea7e99b74b3ebe014ed91192b7c);
        cache_frame_e9f44ea7e99b74b3ebe014ed91192b7c = NULL;
    }

    assertFrameObject(frame_e9f44ea7e99b74b3ebe014ed91192b7c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_code_verifier);
    tmp_return_value = var_code_verifier;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_code_verifier);
    Py_DECREF(var_code_verifier);
    var_code_verifier = NULL;
    CHECK_OBJECT(var_allowed_characters);
    Py_DECREF(var_allowed_characters);
    var_allowed_characters = NULL;
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

    Py_XDECREF(var_code_verifier);
    var_code_verifier = NULL;
    Py_XDECREF(var_allowed_characters);
    var_allowed_characters = NULL;
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


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__15_create_code_challenge(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_code_verifier = python_pars[1];
    PyObject *par_code_challenge_method = python_pars[2];
    PyObject *var_code_challenge = NULL;
    PyObject *var_h = NULL;
    PyObject *var_sha256_val = NULL;
    struct Nuitka_FrameObject *frame_1fe729518f412eb3fefcab5b6b6c76a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1fe729518f412eb3fefcab5b6b6c76a1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_code_challenge == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_code_challenge = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_1fe729518f412eb3fefcab5b6b6c76a1)) {
        Py_XDECREF(cache_frame_1fe729518f412eb3fefcab5b6b6c76a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1fe729518f412eb3fefcab5b6b6c76a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1fe729518f412eb3fefcab5b6b6c76a1 = MAKE_FUNCTION_FRAME(codeobj_1fe729518f412eb3fefcab5b6b6c76a1, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1fe729518f412eb3fefcab5b6b6c76a1->m_type_description == NULL);
    frame_1fe729518f412eb3fefcab5b6b6c76a1 = cache_frame_1fe729518f412eb3fefcab5b6b6c76a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1fe729518f412eb3fefcab5b6b6c76a1);
    assert(Py_REFCNT(frame_1fe729518f412eb3fefcab5b6b6c76a1) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_code_verifier);
        tmp_cmp_expr_left_1 = par_code_verifier;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[86];
        frame_1fe729518f412eb3fefcab5b6b6c76a1->m_frame.f_lineno = 534;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 534;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_code_challenge_method);
        tmp_cmp_expr_left_2 = par_code_challenge_method;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[87];
        {
            PyObject *old = par_code_challenge_method;
            assert(old != NULL);
            par_code_challenge_method = tmp_assign_source_2;
            Py_INCREF(par_code_challenge_method);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_code_challenge_method);
        tmp_assattr_value_1 = par_code_challenge_method;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(par_code_verifier);
        tmp_assign_source_3 = par_code_verifier;
        {
            PyObject *old = var_code_challenge;
            assert(old != NULL);
            var_code_challenge = tmp_assign_source_3;
            Py_INCREF(var_code_challenge);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_code_challenge);
        tmp_assattr_value_2 = var_code_challenge;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_code_challenge_method);
        tmp_cmp_expr_left_3 = par_code_challenge_method;
        tmp_cmp_expr_right_3 = mod_consts[88];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1fe729518f412eb3fefcab5b6b6c76a1->m_frame.f_lineno = 543;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[90]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_h == NULL);
        var_h = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_h);
        tmp_expression_value_1 = var_h;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[91]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_code_verifier == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 544;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_code_verifier;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[92]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 544;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1fe729518f412eb3fefcab5b6b6c76a1->m_frame.f_lineno = 544;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[93], 0), mod_consts[94]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 544;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1fe729518f412eb3fefcab5b6b6c76a1->m_frame.f_lineno = 544;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_h);
        tmp_called_instance_2 = var_h;
        frame_1fe729518f412eb3fefcab5b6b6c76a1->m_frame.f_lineno = 545;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[95]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sha256_val == NULL);
        var_sha256_val = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_3 = (PyObject *)&PyBytes_Type;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[96]);
        assert(!(tmp_called_value_3 == NULL));
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 546;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sha256_val);
        tmp_args_element_value_3 = var_sha256_val;
        frame_1fe729518f412eb3fefcab5b6b6c76a1->m_frame.f_lineno = 546;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[98], tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 546;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1fe729518f412eb3fefcab5b6b6c76a1->m_frame.f_lineno = 546;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_code_challenge;
            var_code_challenge = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_code_challenge);
        tmp_expression_value_6 = var_code_challenge;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[99]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1fe729518f412eb3fefcab5b6b6c76a1->m_frame.f_lineno = 548;
        tmp_expression_value_5 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[100]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[99]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1fe729518f412eb3fefcab5b6b6c76a1->m_frame.f_lineno = 548;
        tmp_expression_value_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[101]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[99]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_1fe729518f412eb3fefcab5b6b6c76a1->m_frame.f_lineno = 548;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[102]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_code_challenge;
            assert(old != NULL);
            var_code_challenge = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_code_challenge);
        tmp_assattr_value_3 = var_code_challenge;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 549;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[13], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    if (var_code_challenge == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 551;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_code_challenge;
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
        exception_tb = MAKE_TRACEBACK(frame_1fe729518f412eb3fefcab5b6b6c76a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1fe729518f412eb3fefcab5b6b6c76a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1fe729518f412eb3fefcab5b6b6c76a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1fe729518f412eb3fefcab5b6b6c76a1,
        type_description_1,
        par_self,
        par_code_verifier,
        par_code_challenge_method,
        var_code_challenge,
        var_h,
        var_sha256_val
    );


    // Release cached frame if used for exception.
    if (frame_1fe729518f412eb3fefcab5b6b6c76a1 == cache_frame_1fe729518f412eb3fefcab5b6b6c76a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1fe729518f412eb3fefcab5b6b6c76a1);
        cache_frame_1fe729518f412eb3fefcab5b6b6c76a1 = NULL;
    }

    assertFrameObject(frame_1fe729518f412eb3fefcab5b6b6c76a1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_code_challenge_method);
    Py_DECREF(par_code_challenge_method);
    par_code_challenge_method = NULL;
    Py_XDECREF(var_code_challenge);
    var_code_challenge = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_sha256_val);
    var_sha256_val = NULL;
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

    CHECK_OBJECT(par_code_challenge_method);
    Py_DECREF(par_code_challenge_method);
    par_code_challenge_method = NULL;
    Py_XDECREF(var_code_challenge);
    var_code_challenge = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_sha256_val);
    var_sha256_val = NULL;
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
    CHECK_OBJECT(par_code_verifier);
    Py_DECREF(par_code_verifier);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_code_verifier);
    Py_DECREF(par_code_verifier);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__16__add_mac_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_uri = python_pars[1];
    PyObject *par_http_method = python_pars[2];
    PyObject *par_body = python_pars[3];
    PyObject *par_headers = python_pars[4];
    PyObject *par_token_placement = python_pars[5];
    PyObject *par_ext = python_pars[6];
    PyObject *par_kwargs = python_pars[7];
    struct Nuitka_FrameObject *frame_f0c126e285d0a73e3ca5648c16efa884;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f0c126e285d0a73e3ca5648c16efa884 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f0c126e285d0a73e3ca5648c16efa884)) {
        Py_XDECREF(cache_frame_f0c126e285d0a73e3ca5648c16efa884);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0c126e285d0a73e3ca5648c16efa884 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0c126e285d0a73e3ca5648c16efa884 = MAKE_FUNCTION_FRAME(codeobj_f0c126e285d0a73e3ca5648c16efa884, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0c126e285d0a73e3ca5648c16efa884->m_type_description == NULL);
    frame_f0c126e285d0a73e3ca5648c16efa884 = cache_frame_f0c126e285d0a73e3ca5648c16efa884;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f0c126e285d0a73e3ca5648c16efa884);
    assert(Py_REFCNT(frame_f0c126e285d0a73e3ca5648c16efa884) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_token_placement);
        tmp_cmp_expr_left_1 = par_token_placement;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[72];
        frame_f0c126e285d0a73e3ca5648c16efa884->m_frame.f_lineno = 560;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 560;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[104]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 562;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_uri);
            tmp_tuple_element_1 = par_uri;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_http_method);
            tmp_tuple_element_1 = par_http_method;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dircall_arg1_1);
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[105];
        CHECK_OBJECT(par_headers);
        tmp_dict_value_1 = par_headers;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_4;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[51];
            CHECK_OBJECT(par_body);
            tmp_dict_value_1 = par_body;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[106];
            CHECK_OBJECT(par_ext);
            tmp_dict_value_1 = par_ext;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[107];
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dircall_arg1_1);
        Py_DECREF(tmp_dircall_arg2_1);
        Py_DECREF(tmp_dircall_arg3_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_1 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_headers;
            assert(old != NULL);
            par_headers = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0c126e285d0a73e3ca5648c16efa884, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0c126e285d0a73e3ca5648c16efa884->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0c126e285d0a73e3ca5648c16efa884, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0c126e285d0a73e3ca5648c16efa884,
        type_description_1,
        par_self,
        par_uri,
        par_http_method,
        par_body,
        par_headers,
        par_token_placement,
        par_ext,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_f0c126e285d0a73e3ca5648c16efa884 == cache_frame_f0c126e285d0a73e3ca5648c16efa884) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0c126e285d0a73e3ca5648c16efa884);
        cache_frame_f0c126e285d0a73e3ca5648c16efa884 = NULL;
    }

    assertFrameObject(frame_f0c126e285d0a73e3ca5648c16efa884);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_uri);
        tmp_tuple_element_2 = par_uri;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_headers);
        tmp_tuple_element_2 = par_headers;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_body);
        tmp_tuple_element_2 = par_body;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    par_headers = NULL;
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

    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    par_headers = NULL;
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
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_http_method);
    Py_DECREF(par_http_method);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_token_placement);
    Py_DECREF(par_token_placement);
    CHECK_OBJECT(par_ext);
    Py_DECREF(par_ext);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_http_method);
    Py_DECREF(par_http_method);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_token_placement);
    Py_DECREF(par_token_placement);
    CHECK_OBJECT(par_ext);
    Py_DECREF(par_ext);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__17__populate_attributes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_response = python_pars[1];
    struct Nuitka_FrameObject *frame_33942d122a6c75c99c84004663a330cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_33942d122a6c75c99c84004663a330cd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_33942d122a6c75c99c84004663a330cd)) {
        Py_XDECREF(cache_frame_33942d122a6c75c99c84004663a330cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_33942d122a6c75c99c84004663a330cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_33942d122a6c75c99c84004663a330cd = MAKE_FUNCTION_FRAME(codeobj_33942d122a6c75c99c84004663a330cd, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_33942d122a6c75c99c84004663a330cd->m_type_description == NULL);
    frame_33942d122a6c75c99c84004663a330cd = cache_frame_33942d122a6c75c99c84004663a330cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_33942d122a6c75c99c84004663a330cd);
    assert(Py_REFCNT(frame_33942d122a6c75c99c84004663a330cd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[110]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[111];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 569;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_33942d122a6c75c99c84004663a330cd->m_frame.f_lineno = 568;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_response);
        tmp_args_element_value_3 = par_response;
        frame_33942d122a6c75c99c84004663a330cd->m_frame.f_lineno = 570;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[18], tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
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
        exception_tb = MAKE_TRACEBACK(frame_33942d122a6c75c99c84004663a330cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_33942d122a6c75c99c84004663a330cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_33942d122a6c75c99c84004663a330cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_33942d122a6c75c99c84004663a330cd,
        type_description_1,
        par_self,
        par_response
    );


    // Release cached frame if used for exception.
    if (frame_33942d122a6c75c99c84004663a330cd == cache_frame_33942d122a6c75c99c84004663a330cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_33942d122a6c75c99c84004663a330cd);
        cache_frame_33942d122a6c75c99c84004663a330cd = NULL;
    }

    assertFrameObject(frame_33942d122a6c75c99c84004663a330cd);

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
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__18_populate_code_attributes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_response = python_pars[1];
    struct Nuitka_FrameObject *frame_58472d914cc82c1f03a5d0145522ff3c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_58472d914cc82c1f03a5d0145522ff3c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_58472d914cc82c1f03a5d0145522ff3c)) {
        Py_XDECREF(cache_frame_58472d914cc82c1f03a5d0145522ff3c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_58472d914cc82c1f03a5d0145522ff3c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_58472d914cc82c1f03a5d0145522ff3c = MAKE_FUNCTION_FRAME(codeobj_58472d914cc82c1f03a5d0145522ff3c, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_58472d914cc82c1f03a5d0145522ff3c->m_type_description == NULL);
    frame_58472d914cc82c1f03a5d0145522ff3c = cache_frame_58472d914cc82c1f03a5d0145522ff3c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_58472d914cc82c1f03a5d0145522ff3c);
    assert(Py_REFCNT(frame_58472d914cc82c1f03a5d0145522ff3c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[15];
        CHECK_OBJECT(par_response);
        tmp_cmp_expr_right_1 = par_response;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "oo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_response);
        tmp_expression_value_1 = par_response;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_58472d914cc82c1f03a5d0145522ff3c->m_frame.f_lineno = 576;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[113]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_58472d914cc82c1f03a5d0145522ff3c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_58472d914cc82c1f03a5d0145522ff3c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_58472d914cc82c1f03a5d0145522ff3c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_58472d914cc82c1f03a5d0145522ff3c,
        type_description_1,
        par_self,
        par_response
    );


    // Release cached frame if used for exception.
    if (frame_58472d914cc82c1f03a5d0145522ff3c == cache_frame_58472d914cc82c1f03a5d0145522ff3c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_58472d914cc82c1f03a5d0145522ff3c);
        cache_frame_58472d914cc82c1f03a5d0145522ff3c = NULL;
    }

    assertFrameObject(frame_58472d914cc82c1f03a5d0145522ff3c);

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
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$clients$base$$$function__19_populate_token_attributes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_response = python_pars[1];
    struct Nuitka_FrameObject *frame_9f946332f482fc30892c52eb737d558c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_9f946332f482fc30892c52eb737d558c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f946332f482fc30892c52eb737d558c)) {
        Py_XDECREF(cache_frame_9f946332f482fc30892c52eb737d558c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f946332f482fc30892c52eb737d558c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f946332f482fc30892c52eb737d558c = MAKE_FUNCTION_FRAME(codeobj_9f946332f482fc30892c52eb737d558c, module_oauthlib$oauth2$rfc6749$clients$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f946332f482fc30892c52eb737d558c->m_type_description == NULL);
    frame_9f946332f482fc30892c52eb737d558c = cache_frame_9f946332f482fc30892c52eb737d558c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9f946332f482fc30892c52eb737d558c);
    assert(Py_REFCNT(frame_9f946332f482fc30892c52eb737d558c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[3];
        CHECK_OBJECT(par_response);
        tmp_cmp_expr_right_1 = par_response;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "oo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_response);
        tmp_expression_value_1 = par_response;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9f946332f482fc30892c52eb737d558c->m_frame.f_lineno = 582;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[38]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = mod_consts[4];
        if (par_response == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 584;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = par_response;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
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
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_2;
        if (par_response == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 585;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_response;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[37]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9f946332f482fc30892c52eb737d558c->m_frame.f_lineno = 585;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[116]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 585;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = mod_consts[2];
        if (par_response == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 587;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_3 = par_response;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oo";
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
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_3;
        if (par_response == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 588;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_response;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[37]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9f946332f482fc30892c52eb737d558c->m_frame.f_lineno = 588;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[117]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 588;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = mod_consts[16];
        if (par_response == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 590;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_4 = par_response;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_4;
        if (par_response == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 591;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_response;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[37]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9f946332f482fc30892c52eb737d558c->m_frame.f_lineno = 591;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[118]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 591;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[16], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9f946332f482fc30892c52eb737d558c->m_frame.f_lineno = 592;
        tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[40]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 592;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_self;
        tmp_int_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[16]);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 592;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 592;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 592;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[17], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = mod_consts[119];
        if (par_response == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 594;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_5 = par_response;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    // Tried code:
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_assattr_target_6;
        if (par_response == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 596;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }

        tmp_expression_value_6 = par_response;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[37]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        frame_9f946332f482fc30892c52eb737d558c->m_frame.f_lineno = 596;
        tmp_int_arg_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[120]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_assattr_value_6 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 596;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }

        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[17], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_9f946332f482fc30892c52eb737d558c, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_9f946332f482fc30892c52eb737d558c, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = Py_None;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 598;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[17], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
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
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = mod_consts[5];
        if (par_response == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 600;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_6 = par_response;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_assattr_target_8;
        if (par_response == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 601;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_response;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[37]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9f946332f482fc30892c52eb737d558c->m_frame.f_lineno = 601;
        tmp_assattr_value_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[121]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 601;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[5], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = mod_consts[6];
        if (par_response == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 603;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_7 = par_response;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_assattr_target_9;
        if (par_response == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 604;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_response;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[37]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9f946332f482fc30892c52eb737d558c->m_frame.f_lineno = 604;
        tmp_assattr_value_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[122]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 604;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[6], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_7:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9f946332f482fc30892c52eb737d558c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f946332f482fc30892c52eb737d558c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f946332f482fc30892c52eb737d558c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f946332f482fc30892c52eb737d558c,
        type_description_1,
        par_self,
        par_response
    );


    // Release cached frame if used for exception.
    if (frame_9f946332f482fc30892c52eb737d558c == cache_frame_9f946332f482fc30892c52eb737d558c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f946332f482fc30892c52eb737d558c);
        cache_frame_9f946332f482fc30892c52eb737d558c = NULL;
    }

    assertFrameObject(frame_9f946332f482fc30892c52eb737d558c);

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
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__10_prepare_token_revocation_request(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__10_prepare_token_revocation_request,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_4203ad27be980c5b1aaa39e7b71daa78,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__11_parse_request_body_response(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__11_parse_request_body_response,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_fc119401cdc326ea8bb9925a489f8112,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__12_prepare_refresh_body(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__12_prepare_refresh_body,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_ee92d5778bbb6b3b433acec01bc2ec5a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__13__add_bearer_token(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__13__add_bearer_token,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_b4b1b152ce52c5726076e1f8b0758d12,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__14_create_code_verifier() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__14_create_code_verifier,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_e9f44ea7e99b74b3ebe014ed91192b7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[85],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__15_create_code_challenge(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__15_create_code_challenge,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_1fe729518f412eb3fefcab5b6b6c76a1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[103],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__16__add_mac_token(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__16__add_mac_token,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_f0c126e285d0a73e3ca5648c16efa884,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[108],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__17__populate_attributes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__17__populate_attributes,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_33942d122a6c75c99c84004663a330cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__18_populate_code_attributes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__18_populate_code_attributes,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_58472d914cc82c1f03a5d0145522ff3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__19_populate_token_attributes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__19_populate_token_attributes,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_9f946332f482fc30892c52eb737d558c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[123],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__1___init__,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_594ecbb6f32b520ae63127d5968a18bb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__2_token_types() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__2_token_types,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_a49c74f71dc45116e16bff87784422e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__3_prepare_request_uri() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__3_prepare_request_uri,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_9e8ee375c79d59ef65e5683ce6dbf52c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__4_prepare_request_body() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__4_prepare_request_body,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_c60acbad55864ba0094e7c741ab34586,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__5_parse_request_uri_response() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__5_parse_request_uri_response,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_a451b86a9e1fe31f056c273ce950b063,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__6_add_token(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__6_add_token,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_4cb70d939150800d6672167d7db6e077,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__7_prepare_authorization_request(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__7_prepare_authorization_request,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_2f31645eb1df308381620d4a3d910207,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__8_prepare_token_request(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__8_prepare_token_request,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_98eb64ba4acabdf105f9dabb96431ef9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[52],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__9_prepare_refresh_token_request(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$clients$base$$$function__9_prepare_refresh_token_request,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_853024e6b336e4f8ecc8ea5188adace8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$clients$base,
        mod_consts[54],
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

function_impl_code functable_oauthlib$oauth2$rfc6749$clients$base[] = {
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__1___init__,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__2_token_types,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__3_prepare_request_uri,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__4_prepare_request_body,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__5_parse_request_uri_response,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__6_add_token,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__7_prepare_authorization_request,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__8_prepare_token_request,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__9_prepare_refresh_token_request,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__10_prepare_token_revocation_request,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__11_parse_request_body_response,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__12_prepare_refresh_body,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__13__add_bearer_token,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__14_create_code_verifier,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__15_create_code_challenge,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__16__add_mac_token,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__17__populate_attributes,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__18_populate_code_attributes,
    impl_oauthlib$oauth2$rfc6749$clients$base$$$function__19_populate_token_attributes,
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

    function_impl_code *current = functable_oauthlib$oauth2$rfc6749$clients$base;
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

    if (offset > sizeof(functable_oauthlib$oauth2$rfc6749$clients$base) || offset < 0) {
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
        functable_oauthlib$oauth2$rfc6749$clients$base[offset],
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
        module_oauthlib$oauth2$rfc6749$clients$base,
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
PyObject *modulecode_oauthlib$oauth2$rfc6749$clients$base(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("oauthlib.oauth2.rfc6749.clients.base");

    // Store the module for future use.
    module_oauthlib$oauth2$rfc6749$clients$base = module;

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
        PRINT_STRING("oauthlib.oauth2.rfc6749.clients.base: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("oauthlib.oauth2.rfc6749.clients.base: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("oauthlib.oauth2.rfc6749.clients.base: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initoauthlib$oauth2$rfc6749$clients$base\n");

    moduledict_oauthlib$oauth2$rfc6749$clients$base = MODULE_DICT(module_oauthlib$oauth2$rfc6749$clients$base);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_oauthlib$oauth2$rfc6749$clients$base,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_oauthlib$oauth2$rfc6749$clients$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[46]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_oauthlib$oauth2$rfc6749$clients$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_oauthlib$oauth2$rfc6749$clients$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_oauthlib$oauth2$rfc6749$clients$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_oauthlib$oauth2$rfc6749$clients$base);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_oauthlib$oauth2$rfc6749$clients$base);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_582baca28693c4aa064d27d8c71cbd7b;
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
    PyObject *locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_ae384f97b04c884aeba72a1233fa9d62_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_2);
    }
    frame_582baca28693c4aa064d27d8c71cbd7b = MAKE_MODULE_FRAME(codeobj_582baca28693c4aa064d27d8c71cbd7b, module_oauthlib$oauth2$rfc6749$clients$base);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_582baca28693c4aa064d27d8c71cbd7b);
    assert(Py_REFCNT(frame_582baca28693c4aa064d27d8c71cbd7b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[126];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[129], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[130], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[97];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[132];
        frame_582baca28693c4aa064d27d8c71cbd7b->m_frame.f_lineno = 9;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[89];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[132];
        frame_582baca28693c4aa064d27d8c71cbd7b->m_frame.f_lineno = 10;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[78];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[132];
        frame_582baca28693c4aa064d27d8c71cbd7b->m_frame.f_lineno = 11;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[81];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[132];
        frame_582baca28693c4aa064d27d8c71cbd7b->m_frame.f_lineno = 12;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[40];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[132];
        frame_582baca28693c4aa064d27d8c71cbd7b->m_frame.f_lineno = 13;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[109];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[132];
        frame_582baca28693c4aa064d27d8c71cbd7b->m_frame.f_lineno = 14;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[133];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[134];
        tmp_level_value_7 = mod_consts[132];
        frame_582baca28693c4aa064d27d8c71cbd7b->m_frame.f_lineno = 16;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base,
                mod_consts[135],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[136];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[137];
        tmp_level_value_8 = mod_consts[132];
        frame_582baca28693c4aa064d27d8c71cbd7b->m_frame.f_lineno = 17;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base,
                mod_consts[66],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[66]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[138];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[139];
        tmp_level_value_9 = mod_consts[132];
        frame_582baca28693c4aa064d27d8c71cbd7b->m_frame.f_lineno = 18;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base,
                mod_consts[30],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[30]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base,
                mod_consts[41],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[41]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[140];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[141];
        tmp_level_value_10 = mod_consts[132];
        frame_582baca28693c4aa064d27d8c71cbd7b->m_frame.f_lineno = 21;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base,
                mod_consts[59],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[59]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base,
                mod_consts[62],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[62]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base,
                mod_consts[55],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[55]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_18);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[142];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[143];
        tmp_level_value_11 = mod_consts[132];
        frame_582baca28693c4aa064d27d8c71cbd7b->m_frame.f_lineno = 25;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients$base,
                mod_consts[29],
                mod_consts[132]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[144];
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[145];
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = DICT_COPY(mod_consts[146]);
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[147];
        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[148], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[125], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[150];
        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[151], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[4];
        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[63], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_ae384f97b04c884aeba72a1233fa9d62_2 = MAKE_CLASS_FRAME(codeobj_ae384f97b04c884aeba72a1233fa9d62, module_oauthlib$oauth2$rfc6749$clients$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ae384f97b04c884aeba72a1233fa9d62_2);
        assert(Py_REFCNT(frame_ae384f97b04c884aeba72a1233fa9d62_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_1;
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            assert(!(tmp_tuple_element_1 == NULL));
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(14);
            PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 7, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 8, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 9, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[135]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_defaults_1, 10, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 11, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 12, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_1, 13, tmp_tuple_element_1);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_1 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_1 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__2_token_types();

            frame_ae384f97b04c884aeba72a1233fa9d62_2->m_frame.f_lineno = 140;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ae384f97b04c884aeba72a1233fa9d62_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ae384f97b04c884aeba72a1233fa9d62_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ae384f97b04c884aeba72a1233fa9d62_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ae384f97b04c884aeba72a1233fa9d62_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_ae384f97b04c884aeba72a1233fa9d62_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__3_prepare_request_uri();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[43], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__4_prepare_request_body();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[50], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__5_parse_request_uri_response();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[48], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[158];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__6_add_token(tmp_defaults_2);

            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[159], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[161];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__7_prepare_authorization_request(tmp_defaults_3);

            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[162], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[164];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__8_prepare_token_request(tmp_defaults_4);

            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[166];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__9_prepare_refresh_token_request(tmp_defaults_5);

            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[167], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[169];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__10_prepare_token_revocation_request(tmp_defaults_6);

            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[55], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[171];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__11_parse_request_body_response(tmp_defaults_7);

            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[172], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = mod_consts[174];
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__12_prepare_refresh_body(tmp_defaults_8);

            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = mod_consts[158];
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__13__add_bearer_token(tmp_defaults_9);

            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__14_create_code_verifier();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[177], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_10;
            tmp_defaults_10 = mod_consts[171];
            Py_INCREF(tmp_defaults_10);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__15_create_code_challenge(tmp_defaults_10);

            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[179], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_11;
            PyObject *tmp_tuple_element_2;
            tmp_tuple_element_2 = mod_consts[181];
            tmp_defaults_11 = MAKE_TUPLE_EMPTY(5);
            PyTuple_SET_ITEM0(tmp_defaults_11, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_11, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_11, 2, tmp_tuple_element_2);
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            assert(!(tmp_tuple_element_2 == NULL));
            PyTuple_SET_ITEM0(tmp_defaults_11, 3, tmp_tuple_element_2);
            tmp_tuple_element_2 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_11, 4, tmp_tuple_element_2);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__16__add_mac_token(tmp_defaults_11);

            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__17__populate_attributes();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[183], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__18_populate_code_attributes();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[185], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$clients$base$$$function__19_populate_token_attributes();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36, mod_consts[18], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[150];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[188];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_582baca28693c4aa064d27d8c71cbd7b->m_frame.f_lineno = 36;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_26 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36);
        locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36 = NULL;
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

        Py_DECREF(locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36);
        locals_oauthlib$oauth2$rfc6749$clients$base$$$class__1_Client_36 = NULL;
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
        exception_lineno = 36;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_26);
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_582baca28693c4aa064d27d8c71cbd7b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_582baca28693c4aa064d27d8c71cbd7b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_582baca28693c4aa064d27d8c71cbd7b, exception_lineno);
    }



    assertFrameObject(frame_582baca28693c4aa064d27d8c71cbd7b);

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
    PGO_onModuleExit("oauthlib.oauth2.rfc6749.clients.base", false);

    Py_INCREF(module_oauthlib$oauth2$rfc6749$clients$base);
    return module_oauthlib$oauth2$rfc6749$clients$base;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$clients$base, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("oauthlib$oauth2$rfc6749$clients$base", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
