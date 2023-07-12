/* Generated code for Python module 'flet.auth.oauth_provider'
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

/* The "module_flet$auth$oauth_provider" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet$auth$oauth_provider;
PyDictObject *moduledict_flet$auth$oauth_provider;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[54];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[54];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet.auth.oauth_provider"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 54; i++) {
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
void checkModuleConstants_flet$auth$oauth_provider(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 54; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d0b9866bef237ab4638758ebf8175a59;
static PyCodeObject *codeobj_704ebd12c72f2f59dbca798cc4083b40;
static PyCodeObject *codeobj_25d22d2887ea52291997a5e64a175773;
static PyCodeObject *codeobj_fcc8a676186e07df872e8376a33dd05c;
static PyCodeObject *codeobj_b3d834d1cf85d649edeb02212c265e93;
static PyCodeObject *codeobj_a3304a31aed09971f33862f1e8da4dc0;
static PyCodeObject *codeobj_45fefac9ba9e1e75622c24ea7b227ce4;
static PyCodeObject *codeobj_6966fae0c94bd43f594117c14e9ca0ad;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[16]; CHECK_OBJECT(module_filename_obj);
    codeobj_d0b9866bef237ab4638758ebf8175a59 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[48], mod_consts[48], NULL, NULL, 0, 0, 0);
    codeobj_704ebd12c72f2f59dbca798cc4083b40 = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[49], NULL, 0, 0, 0);
    codeobj_25d22d2887ea52291997a5e64a175773 = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[50], NULL, 11, 0, 0);
    codeobj_fcc8a676186e07df872e8376a33dd05c = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[51], NULL, 2, 0, 0);
    codeobj_b3d834d1cf85d649edeb02212c265e93 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[51], NULL, 2, 0, 0);
    codeobj_a3304a31aed09971f33862f1e8da4dc0 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[45], mod_consts[51], NULL, 2, 0, 0);
    codeobj_45fefac9ba9e1e75622c24ea7b227ce4 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[51], NULL, 2, 0, 0);
    codeobj_6966fae0c94bd43f594117c14e9ca0ad = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[52], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_flet$auth$oauth_provider$$$function__4__fetch_groups_async$$$coroutine__1__fetch_groups_async();


static PyObject *MAKE_COROUTINE_flet$auth$oauth_provider$$$function__6__fetch_user_async$$$coroutine__1__fetch_user_async();


static PyObject *MAKE_FUNCTION_flet$auth$oauth_provider$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet$auth$oauth_provider$$$function__2__name();


static PyObject *MAKE_FUNCTION_flet$auth$oauth_provider$$$function__3__fetch_groups(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet$auth$oauth_provider$$$function__4__fetch_groups_async(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet$auth$oauth_provider$$$function__5__fetch_user(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet$auth$oauth_provider$$$function__6__fetch_user_async(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet$auth$oauth_provider$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_client_secret = python_pars[2];
    PyObject *par_authorization_endpoint = python_pars[3];
    PyObject *par_token_endpoint = python_pars[4];
    PyObject *par_redirect_url = python_pars[5];
    PyObject *par_scopes = python_pars[6];
    PyObject *par_user_scopes = python_pars[7];
    PyObject *par_user_endpoint = python_pars[8];
    PyObject *par_user_id_fn = python_pars[9];
    PyObject *par_group_scopes = python_pars[10];
    struct Nuitka_FrameObject *frame_25d22d2887ea52291997a5e64a175773;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_25d22d2887ea52291997a5e64a175773 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_25d22d2887ea52291997a5e64a175773)) {
        Py_XDECREF(cache_frame_25d22d2887ea52291997a5e64a175773);

#if _DEBUG_REFCOUNTS
        if (cache_frame_25d22d2887ea52291997a5e64a175773 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_25d22d2887ea52291997a5e64a175773 = MAKE_FUNCTION_FRAME(codeobj_25d22d2887ea52291997a5e64a175773, module_flet$auth$oauth_provider, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_25d22d2887ea52291997a5e64a175773->m_type_description == NULL);
    frame_25d22d2887ea52291997a5e64a175773 = cache_frame_25d22d2887ea52291997a5e64a175773;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_25d22d2887ea52291997a5e64a175773);
    assert(Py_REFCNT(frame_25d22d2887ea52291997a5e64a175773) == 2);

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


            exception_lineno = 21;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_client_secret);
        tmp_assattr_value_2 = par_client_secret;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_authorization_endpoint);
        tmp_assattr_value_3 = par_authorization_endpoint;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_token_endpoint);
        tmp_assattr_value_4 = par_token_endpoint;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_redirect_url);
        tmp_assattr_value_5 = par_redirect_url;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[4], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_scopes);
        tmp_cmp_expr_left_1 = par_scopes;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_scopes);
        tmp_assattr_value_6 = par_scopes;
        Py_INCREF(tmp_assattr_value_6);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assattr_value_6 = MAKE_LIST_EMPTY(0);
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[5], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_user_scopes);
        tmp_cmp_expr_left_2 = par_user_scopes;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(par_user_scopes);
        tmp_assattr_value_7 = par_user_scopes;
        Py_INCREF(tmp_assattr_value_7);
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assattr_value_7 = MAKE_LIST_EMPTY(0);
        condexpr_end_2:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[6], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_user_endpoint);
        tmp_assattr_value_8 = par_user_endpoint;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[7], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_user_id_fn);
        tmp_assattr_value_9 = par_user_id_fn;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[8], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_group_scopes);
        tmp_cmp_expr_left_3 = par_group_scopes;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(par_group_scopes);
        tmp_assattr_value_10 = par_group_scopes;
        Py_INCREF(tmp_assattr_value_10);
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assattr_value_10 = MAKE_LIST_EMPTY(0);
        condexpr_end_3:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[9], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_25d22d2887ea52291997a5e64a175773, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_25d22d2887ea52291997a5e64a175773->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_25d22d2887ea52291997a5e64a175773, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_25d22d2887ea52291997a5e64a175773,
        type_description_1,
        par_self,
        par_client_id,
        par_client_secret,
        par_authorization_endpoint,
        par_token_endpoint,
        par_redirect_url,
        par_scopes,
        par_user_scopes,
        par_user_endpoint,
        par_user_id_fn,
        par_group_scopes
    );


    // Release cached frame if used for exception.
    if (frame_25d22d2887ea52291997a5e64a175773 == cache_frame_25d22d2887ea52291997a5e64a175773) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_25d22d2887ea52291997a5e64a175773);
        cache_frame_25d22d2887ea52291997a5e64a175773 = NULL;
    }

    assertFrameObject(frame_25d22d2887ea52291997a5e64a175773);

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
    CHECK_OBJECT(par_client_secret);
    Py_DECREF(par_client_secret);
    CHECK_OBJECT(par_authorization_endpoint);
    Py_DECREF(par_authorization_endpoint);
    CHECK_OBJECT(par_token_endpoint);
    Py_DECREF(par_token_endpoint);
    CHECK_OBJECT(par_redirect_url);
    Py_DECREF(par_redirect_url);
    CHECK_OBJECT(par_scopes);
    Py_DECREF(par_scopes);
    CHECK_OBJECT(par_user_scopes);
    Py_DECREF(par_user_scopes);
    CHECK_OBJECT(par_user_endpoint);
    Py_DECREF(par_user_endpoint);
    CHECK_OBJECT(par_user_id_fn);
    Py_DECREF(par_user_id_fn);
    CHECK_OBJECT(par_group_scopes);
    Py_DECREF(par_group_scopes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_client_id);
    Py_DECREF(par_client_id);
    CHECK_OBJECT(par_client_secret);
    Py_DECREF(par_client_secret);
    CHECK_OBJECT(par_authorization_endpoint);
    Py_DECREF(par_authorization_endpoint);
    CHECK_OBJECT(par_token_endpoint);
    Py_DECREF(par_token_endpoint);
    CHECK_OBJECT(par_redirect_url);
    Py_DECREF(par_redirect_url);
    CHECK_OBJECT(par_scopes);
    Py_DECREF(par_scopes);
    CHECK_OBJECT(par_user_scopes);
    Py_DECREF(par_user_scopes);
    CHECK_OBJECT(par_user_endpoint);
    Py_DECREF(par_user_endpoint);
    CHECK_OBJECT(par_user_id_fn);
    Py_DECREF(par_user_id_fn);
    CHECK_OBJECT(par_group_scopes);
    Py_DECREF(par_group_scopes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet$auth$oauth_provider$$$function__2__name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6966fae0c94bd43f594117c14e9ca0ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6966fae0c94bd43f594117c14e9ca0ad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6966fae0c94bd43f594117c14e9ca0ad)) {
        Py_XDECREF(cache_frame_6966fae0c94bd43f594117c14e9ca0ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6966fae0c94bd43f594117c14e9ca0ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6966fae0c94bd43f594117c14e9ca0ad = MAKE_FUNCTION_FRAME(codeobj_6966fae0c94bd43f594117c14e9ca0ad, module_flet$auth$oauth_provider, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6966fae0c94bd43f594117c14e9ca0ad->m_type_description == NULL);
    frame_6966fae0c94bd43f594117c14e9ca0ad = cache_frame_6966fae0c94bd43f594117c14e9ca0ad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6966fae0c94bd43f594117c14e9ca0ad);
    assert(Py_REFCNT(frame_6966fae0c94bd43f594117c14e9ca0ad) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[10];
        frame_6966fae0c94bd43f594117c14e9ca0ad->m_frame.f_lineno = 33;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 33;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6966fae0c94bd43f594117c14e9ca0ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6966fae0c94bd43f594117c14e9ca0ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6966fae0c94bd43f594117c14e9ca0ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6966fae0c94bd43f594117c14e9ca0ad,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6966fae0c94bd43f594117c14e9ca0ad == cache_frame_6966fae0c94bd43f594117c14e9ca0ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6966fae0c94bd43f594117c14e9ca0ad);
        cache_frame_6966fae0c94bd43f594117c14e9ca0ad = NULL;
    }

    assertFrameObject(frame_6966fae0c94bd43f594117c14e9ca0ad);

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


static PyObject *impl_flet$auth$oauth_provider$$$function__3__fetch_groups(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_access_token = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_access_token);
    Py_DECREF(par_access_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet$auth$oauth_provider$$$function__4__fetch_groups_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_access_token = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_flet$auth$oauth_provider$$$function__4__fetch_groups_async$$$coroutine__1__fetch_groups_async();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_access_token);
    Py_DECREF(par_access_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct flet$auth$oauth_provider$$$function__4__fetch_groups_async$$$coroutine__1__fetch_groups_async_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet$auth$oauth_provider$$$function__4__fetch_groups_async$$$coroutine__1__fetch_groups_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet$auth$oauth_provider$$$function__4__fetch_groups_async$$$coroutine__1__fetch_groups_async_locals *coroutine_heap = (struct flet$auth$oauth_provider$$$function__4__fetch_groups_async$$$coroutine__1__fetch_groups_async_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = MAKE_LIST_EMPTY(0);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_flet$auth$oauth_provider$$$function__4__fetch_groups_async$$$coroutine__1__fetch_groups_async() {
    return Nuitka_Coroutine_New(
        flet$auth$oauth_provider$$$function__4__fetch_groups_async$$$coroutine__1__fetch_groups_async_context,
        module_flet$auth$oauth_provider,
        mod_consts[11],
        mod_consts[12],
        codeobj_b3d834d1cf85d649edeb02212c265e93,
        NULL,
        0,
#if 1
        sizeof(struct flet$auth$oauth_provider$$$function__4__fetch_groups_async$$$coroutine__1__fetch_groups_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet$auth$oauth_provider$$$function__6__fetch_user_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_access_token = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_flet$auth$oauth_provider$$$function__6__fetch_user_async$$$coroutine__1__fetch_user_async();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_access_token);
    Py_DECREF(par_access_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct flet$auth$oauth_provider$$$function__6__fetch_user_async$$$coroutine__1__fetch_user_async_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet$auth$oauth_provider$$$function__6__fetch_user_async$$$coroutine__1__fetch_user_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet$auth$oauth_provider$$$function__6__fetch_user_async$$$coroutine__1__fetch_user_async_locals *coroutine_heap = (struct flet$auth$oauth_provider$$$function__6__fetch_user_async$$$coroutine__1__fetch_user_async_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_flet$auth$oauth_provider$$$function__6__fetch_user_async$$$coroutine__1__fetch_user_async() {
    return Nuitka_Coroutine_New(
        flet$auth$oauth_provider$$$function__6__fetch_user_async$$$coroutine__1__fetch_user_async_context,
        module_flet$auth$oauth_provider,
        mod_consts[13],
        mod_consts[14],
        codeobj_45fefac9ba9e1e75622c24ea7b227ce4,
        NULL,
        0,
#if 1
        sizeof(struct flet$auth$oauth_provider$$$function__6__fetch_user_async$$$coroutine__1__fetch_user_async_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_flet$auth$oauth_provider$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$auth$oauth_provider$$$function__1___init__,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[39],
#endif
        codeobj_25d22d2887ea52291997a5e64a175773,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet$auth$oauth_provider,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$auth$oauth_provider$$$function__2__name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$auth$oauth_provider$$$function__2__name,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[41],
#endif
        codeobj_6966fae0c94bd43f594117c14e9ca0ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$auth$oauth_provider,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$auth$oauth_provider$$$function__3__fetch_groups(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$auth$oauth_provider$$$function__3__fetch_groups,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_fcc8a676186e07df872e8376a33dd05c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet$auth$oauth_provider,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$auth$oauth_provider$$$function__4__fetch_groups_async(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$auth$oauth_provider$$$function__4__fetch_groups_async,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[12],
#endif
        codeobj_b3d834d1cf85d649edeb02212c265e93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet$auth$oauth_provider,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$auth$oauth_provider$$$function__5__fetch_user(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        codeobj_a3304a31aed09971f33862f1e8da4dc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet$auth$oauth_provider,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$auth$oauth_provider$$$function__6__fetch_user_async(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$auth$oauth_provider$$$function__6__fetch_user_async,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[14],
#endif
        codeobj_45fefac9ba9e1e75622c24ea7b227ce4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet$auth$oauth_provider,
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

function_impl_code functable_flet$auth$oauth_provider[] = {
    impl_flet$auth$oauth_provider$$$function__1___init__,
    impl_flet$auth$oauth_provider$$$function__2__name,
    impl_flet$auth$oauth_provider$$$function__3__fetch_groups,
    impl_flet$auth$oauth_provider$$$function__4__fetch_groups_async,
    NULL,
    impl_flet$auth$oauth_provider$$$function__6__fetch_user_async,
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

    function_impl_code *current = functable_flet$auth$oauth_provider;
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

    if (offset > sizeof(functable_flet$auth$oauth_provider) || offset < 0) {
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
        functable_flet$auth$oauth_provider[offset],
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
        module_flet$auth$oauth_provider,
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
PyObject *modulecode_flet$auth$oauth_provider(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet.auth.oauth_provider");

    // Store the module for future use.
    module_flet$auth$oauth_provider = module;

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
        PRINT_STRING("flet.auth.oauth_provider: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet.auth.oauth_provider: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet.auth.oauth_provider: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet$auth$oauth_provider\n");

    moduledict_flet$auth$oauth_provider = MODULE_DICT(module_flet$auth$oauth_provider);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet$auth$oauth_provider,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet$auth$oauth_provider,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[53]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet$auth$oauth_provider,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet$auth$oauth_provider,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet$auth$oauth_provider,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet$auth$oauth_provider);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet$auth$oauth_provider);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_d0b9866bef237ab4638758ebf8175a59;
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
    PyObject *locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_704ebd12c72f2f59dbca798cc4083b40_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_2);
    }
    frame_d0b9866bef237ab4638758ebf8175a59 = MAKE_MODULE_FRAME(codeobj_d0b9866bef237ab4638758ebf8175a59, module_flet$auth$oauth_provider);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d0b9866bef237ab4638758ebf8175a59);
    assert(Py_REFCNT(frame_d0b9866bef237ab4638758ebf8175a59) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[16];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[18]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[18]);

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
        UPDATE_STRING_DICT0(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet$auth$oauth_provider,
                mod_consts[22],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[22]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet$auth$oauth_provider,
                mod_consts[24],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[24]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet$auth$oauth_provider,
                mod_consts[25],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[25]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_7);
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[26];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet$auth$oauth_provider;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[27];
        tmp_level_value_1 = mod_consts[23];
        frame_d0b9866bef237ab4638758ebf8175a59->m_frame.f_lineno = 3;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet$auth$oauth_provider,
                mod_consts[28],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[28]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[29];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet$auth$oauth_provider;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[30];
        tmp_level_value_2 = mod_consts[23];
        frame_d0b9866bef237ab4638758ebf8175a59->m_frame.f_lineno = 4;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet$auth$oauth_provider,
                mod_consts[31],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[32];
        tmp_res = PyDict_SetItem(locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7, mod_consts[33], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[34];
        tmp_res = PyDict_SetItem(locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7, mod_consts[35], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_704ebd12c72f2f59dbca798cc4083b40_2 = MAKE_CLASS_FRAME(codeobj_704ebd12c72f2f59dbca798cc4083b40, module_flet$auth$oauth_provider, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_704ebd12c72f2f59dbca798cc4083b40_2);
        assert(Py_REFCNT(frame_704ebd12c72f2f59dbca798cc4083b40_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_defaults_1 = mod_consts[36];
            tmp_dict_key_1 = mod_consts[0];
            tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_1 = _PyDict_NewPresized( 11 );
            {
                PyObject *tmp_expression_value_1;
                PyObject *tmp_subscript_value_1;
                PyObject *tmp_expression_value_2;
                PyObject *tmp_subscript_value_2;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_4;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_5;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_6;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_8;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[1];
                tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[2];
                tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[3];
                tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[4];
                tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[5];
                tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_1 == NULL)) {
                    tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                }

                if (tmp_expression_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 15;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_2 == NULL)) {
                    tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                if (tmp_expression_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 15;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
                if (tmp_subscript_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 15;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
                Py_DECREF(tmp_subscript_value_1);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 15;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[6];
                tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_3 == NULL)) {
                    tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                }

                if (tmp_expression_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 16;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 16;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
                if (tmp_subscript_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 16;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
                Py_DECREF(tmp_subscript_value_3);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 16;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_5 == NULL)) {
                    tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                }

                if (tmp_expression_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 17;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 17;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[8];
                tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_6 == NULL)) {
                    tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                }

                if (tmp_expression_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[22]);

                if (unlikely(tmp_subscript_value_6 == NULL)) {
                    tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
                }

                if (tmp_subscript_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[9];
                tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_7 == NULL)) {
                    tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                }

                if (tmp_expression_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_8 == NULL)) {
                    tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                if (tmp_expression_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_8 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
                if (tmp_subscript_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[37];
                tmp_dict_value_1 = Py_None;
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


            tmp_dictset_value = MAKE_FUNCTION_flet$auth$oauth_provider$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$auth$oauth_provider$$$function__2__name();

        tmp_res = PyDict_SetItem(locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_key_2 = mod_consts[42];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_2 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_9;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[37];
                tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_9 == NULL)) {
                    tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                if (tmp_expression_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_subscript_value_9 == NULL)) {
                    tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_subscript_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_9);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_2 = "o";
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
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_flet$auth$oauth_provider$$$function__3__fetch_groups(tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = mod_consts[42];
            tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_3 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_10;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[37];
                tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[24]);

                if (unlikely(tmp_expression_value_10 == NULL)) {
                    tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
                }

                if (tmp_expression_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[28]);

                if (unlikely(tmp_subscript_value_10 == NULL)) {
                    tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
                }

                if (tmp_subscript_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_10);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "o";
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
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_flet$auth$oauth_provider$$$function__4__fetch_groups_async(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[42];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_4 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_11;
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[37];
                tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_11 == NULL)) {
                    tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                }

                if (tmp_expression_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[31]);

                if (unlikely(tmp_subscript_value_11 == NULL)) {
                    tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                }

                if (tmp_subscript_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_11);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_2 = "o";
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
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_flet$auth$oauth_provider$$$function__5__fetch_user(tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_dict_key_5 = mod_consts[42];
            tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_5 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_12;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[37];
                tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[25]);

                if (unlikely(tmp_expression_value_12 == NULL)) {
                    tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
                }

                if (tmp_expression_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[31]);

                if (unlikely(tmp_subscript_value_12 == NULL)) {
                    tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                }

                if (tmp_subscript_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_12);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_flet$auth$oauth_provider$$$function__6__fetch_user_async(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_704ebd12c72f2f59dbca798cc4083b40_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_704ebd12c72f2f59dbca798cc4083b40_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_704ebd12c72f2f59dbca798cc4083b40_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_704ebd12c72f2f59dbca798cc4083b40_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_704ebd12c72f2f59dbca798cc4083b40_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[34];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[47];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_d0b9866bef237ab4638758ebf8175a59->m_frame.f_lineno = 7;
            tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_13;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_12 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7);
        locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7 = NULL;
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

        Py_DECREF(locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7);
        locals_flet$auth$oauth_provider$$$class__1_OAuthProvider_7 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 7;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_12);
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0b9866bef237ab4638758ebf8175a59, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0b9866bef237ab4638758ebf8175a59->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0b9866bef237ab4638758ebf8175a59, exception_lineno);
    }



    assertFrameObject(frame_d0b9866bef237ab4638758ebf8175a59);

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
    PGO_onModuleExit("flet.auth.oauth_provider", false);

    Py_INCREF(module_flet$auth$oauth_provider);
    return module_flet$auth$oauth_provider;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet$auth$oauth_provider, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet$auth$oauth_provider", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
