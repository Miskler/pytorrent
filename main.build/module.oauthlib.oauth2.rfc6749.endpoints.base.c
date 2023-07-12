/* Generated code for Python module 'oauthlib.oauth2.rfc6749.endpoints.base'
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

/* The "module_oauthlib$oauth2$rfc6749$endpoints$base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauthlib$oauth2$rfc6749$endpoints$base;
PyDictObject *moduledict_oauthlib$oauth2$rfc6749$endpoints$base;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[102];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[102];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("oauthlib.oauth2.rfc6749.endpoints.base"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 102; i++) {
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
void checkModuleConstants_oauthlib$oauth2$rfc6749$endpoints$base(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 102; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e3f092b12eb10ffbafcef195329f89f5;
static PyCodeObject *codeobj_be3a10a5d4fa17788d0c1dd8ed7433f9;
static PyCodeObject *codeobj_b87f4bd8ca706355761e0cda9a65a4e4;
static PyCodeObject *codeobj_f716ff5f420dc93fcf89d673f2537fe2;
static PyCodeObject *codeobj_edbe5764ba87f6c57eada96efebcd8ae;
static PyCodeObject *codeobj_8ffdb9a89054e28b6de7c5274f69b4b5;
static PyCodeObject *codeobj_3baf77090ec8c54f420a8df6f9f59535;
static PyCodeObject *codeobj_027233c628ca207842f7901a98fcf13a;
static PyCodeObject *codeobj_1c8d5a399abbe1f68a29e716c3cc8496;
static PyCodeObject *codeobj_471851b0d9bc67a16d99fe750cd39a21;
static PyCodeObject *codeobj_d7f5c6e670fd3468181ffd96995992ad;
static PyCodeObject *codeobj_31b46383ab7f43a8ec6bb26c90d65b3f;
static PyCodeObject *codeobj_77b1e1ecd22b8baaec7f0ea13c73638f;
static PyCodeObject *codeobj_449a9352f54576298a118c2db786250a;
static PyCodeObject *codeobj_1c4825efe56b33537d3de9c2a74f3b95;
static PyCodeObject *codeobj_a4937c99259a0c0d309ca5093253c6ac;
static PyCodeObject *codeobj_a02fa1e66a31eefc00b6d9b277dfee6e;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[54]; CHECK_OBJECT(module_filename_obj);
    codeobj_e3f092b12eb10ffbafcef195329f89f5 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[90], NULL, 1, 0, 0);
    codeobj_be3a10a5d4fa17788d0c1dd8ed7433f9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[91], mod_consts[91], NULL, NULL, 0, 0, 0);
    codeobj_b87f4bd8ca706355761e0cda9a65a4e4 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[92], NULL, 0, 0, 0);
    codeobj_f716ff5f420dc93fcf89d673f2537fe2 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[93], NULL, 1, 0, 0);
    codeobj_edbe5764ba87f6c57eada96efebcd8ae = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[94], NULL, 2, 0, 0);
    codeobj_8ffdb9a89054e28b6de7c5274f69b4b5 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[95], NULL, 2, 0, 0);
    codeobj_3baf77090ec8c54f420a8df6f9f59535 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[94], NULL, 2, 0, 0);
    codeobj_027233c628ca207842f7901a98fcf13a = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[94], NULL, 2, 0, 0);
    codeobj_1c8d5a399abbe1f68a29e716c3cc8496 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[94], NULL, 2, 0, 0);
    codeobj_471851b0d9bc67a16d99fe750cd39a21 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[93], NULL, 1, 0, 0);
    codeobj_d7f5c6e670fd3468181ffd96995992ad = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[96], NULL, 2, 0, 0);
    codeobj_31b46383ab7f43a8ec6bb26c90d65b3f = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[93], NULL, 1, 0, 0);
    codeobj_77b1e1ecd22b8baaec7f0ea13c73638f = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[97], NULL, 2, 0, 0);
    codeobj_449a9352f54576298a118c2db786250a = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[98], NULL, 1, 0, 0);
    codeobj_1c4825efe56b33537d3de9c2a74f3b95 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[93], NULL, 1, 0, 0);
    codeobj_a4937c99259a0c0d309ca5093253c6ac = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[99], NULL, 2, 0, 0);
    codeobj_a02fa1e66a31eefc00b6d9b277dfee6e = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[36], mod_consts[36], mod_consts[100], mod_consts[101], 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__10__raise_on_unsupported_token();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__11__raise_on_bad_method();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__12__raise_on_bad_post_request();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__13_catch_errors_and_unavailability();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__13_catch_errors_and_unavailability$$$function__1_wrapper(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__1___init__();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__2_valid_request_methods();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__3_valid_request_methods();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__4_available();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__5_available();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__6_catch_errors();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__7_catch_errors();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__8__raise_on_missing_token();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__9__raise_on_invalid_client();


// The module function definitions.
static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f716ff5f420dc93fcf89d673f2537fe2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f716ff5f420dc93fcf89d673f2537fe2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f716ff5f420dc93fcf89d673f2537fe2)) {
        Py_XDECREF(cache_frame_f716ff5f420dc93fcf89d673f2537fe2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f716ff5f420dc93fcf89d673f2537fe2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f716ff5f420dc93fcf89d673f2537fe2 = MAKE_FUNCTION_FRAME(codeobj_f716ff5f420dc93fcf89d673f2537fe2, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f716ff5f420dc93fcf89d673f2537fe2->m_type_description == NULL);
    frame_f716ff5f420dc93fcf89d673f2537fe2 = cache_frame_f716ff5f420dc93fcf89d673f2537fe2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f716ff5f420dc93fcf89d673f2537fe2);
    assert(Py_REFCNT(frame_f716ff5f420dc93fcf89d673f2537fe2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
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
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f716ff5f420dc93fcf89d673f2537fe2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f716ff5f420dc93fcf89d673f2537fe2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f716ff5f420dc93fcf89d673f2537fe2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f716ff5f420dc93fcf89d673f2537fe2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f716ff5f420dc93fcf89d673f2537fe2 == cache_frame_f716ff5f420dc93fcf89d673f2537fe2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f716ff5f420dc93fcf89d673f2537fe2);
        cache_frame_f716ff5f420dc93fcf89d673f2537fe2 = NULL;
    }

    assertFrameObject(frame_f716ff5f420dc93fcf89d673f2537fe2);

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


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__2_valid_request_methods(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1c4825efe56b33537d3de9c2a74f3b95;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1c4825efe56b33537d3de9c2a74f3b95 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c4825efe56b33537d3de9c2a74f3b95)) {
        Py_XDECREF(cache_frame_1c4825efe56b33537d3de9c2a74f3b95);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c4825efe56b33537d3de9c2a74f3b95 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c4825efe56b33537d3de9c2a74f3b95 = MAKE_FUNCTION_FRAME(codeobj_1c4825efe56b33537d3de9c2a74f3b95, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c4825efe56b33537d3de9c2a74f3b95->m_type_description == NULL);
    frame_1c4825efe56b33537d3de9c2a74f3b95 = cache_frame_1c4825efe56b33537d3de9c2a74f3b95;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c4825efe56b33537d3de9c2a74f3b95);
    assert(Py_REFCNT(frame_1c4825efe56b33537d3de9c2a74f3b95) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
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
        exception_tb = MAKE_TRACEBACK(frame_1c4825efe56b33537d3de9c2a74f3b95, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c4825efe56b33537d3de9c2a74f3b95->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c4825efe56b33537d3de9c2a74f3b95, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c4825efe56b33537d3de9c2a74f3b95,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1c4825efe56b33537d3de9c2a74f3b95 == cache_frame_1c4825efe56b33537d3de9c2a74f3b95) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c4825efe56b33537d3de9c2a74f3b95);
        cache_frame_1c4825efe56b33537d3de9c2a74f3b95 = NULL;
    }

    assertFrameObject(frame_1c4825efe56b33537d3de9c2a74f3b95);

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


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__3_valid_request_methods(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_valid_request_methods = python_pars[1];
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_a4937c99259a0c0d309ca5093253c6ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_e3f092b12eb10ffbafcef195329f89f5_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_e3f092b12eb10ffbafcef195329f89f5_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_a4937c99259a0c0d309ca5093253c6ac = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a4937c99259a0c0d309ca5093253c6ac)) {
        Py_XDECREF(cache_frame_a4937c99259a0c0d309ca5093253c6ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4937c99259a0c0d309ca5093253c6ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4937c99259a0c0d309ca5093253c6ac = MAKE_FUNCTION_FRAME(codeobj_a4937c99259a0c0d309ca5093253c6ac, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a4937c99259a0c0d309ca5093253c6ac->m_type_description == NULL);
    frame_a4937c99259a0c0d309ca5093253c6ac = cache_frame_a4937c99259a0c0d309ca5093253c6ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a4937c99259a0c0d309ca5093253c6ac);
    assert(Py_REFCNT(frame_a4937c99259a0c0d309ca5093253c6ac) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_valid_request_methods);
        tmp_cmp_expr_left_1 = par_valid_request_methods;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_valid_request_methods);
            tmp_iter_arg_1 = par_valid_request_methods;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_e3f092b12eb10ffbafcef195329f89f5_2)) {
            Py_XDECREF(cache_frame_e3f092b12eb10ffbafcef195329f89f5_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e3f092b12eb10ffbafcef195329f89f5_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e3f092b12eb10ffbafcef195329f89f5_2 = MAKE_FUNCTION_FRAME(codeobj_e3f092b12eb10ffbafcef195329f89f5, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_e3f092b12eb10ffbafcef195329f89f5_2->m_type_description == NULL);
        frame_e3f092b12eb10ffbafcef195329f89f5_2 = cache_frame_e3f092b12eb10ffbafcef195329f89f5_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e3f092b12eb10ffbafcef195329f89f5_2);
        assert(Py_REFCNT(frame_e3f092b12eb10ffbafcef195329f89f5_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 33;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_5;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_x);
            tmp_expression_value_1 = outline_0_var_x;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            frame_e3f092b12eb10ffbafcef195329f89f5_2->m_frame.f_lineno = 33;
            tmp_append_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
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
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e3f092b12eb10ffbafcef195329f89f5_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e3f092b12eb10ffbafcef195329f89f5_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e3f092b12eb10ffbafcef195329f89f5_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e3f092b12eb10ffbafcef195329f89f5_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_e3f092b12eb10ffbafcef195329f89f5_2 == cache_frame_e3f092b12eb10ffbafcef195329f89f5_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_e3f092b12eb10ffbafcef195329f89f5_2);
            cache_frame_e3f092b12eb10ffbafcef195329f89f5_2 = NULL;
        }

        assertFrameObject(frame_e3f092b12eb10ffbafcef195329f89f5_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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
        exception_lineno = 33;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = par_valid_request_methods;
            assert(old != NULL);
            par_valid_request_methods = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_valid_request_methods);
        tmp_assattr_value_1 = par_valid_request_methods;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a4937c99259a0c0d309ca5093253c6ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4937c99259a0c0d309ca5093253c6ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4937c99259a0c0d309ca5093253c6ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4937c99259a0c0d309ca5093253c6ac,
        type_description_1,
        par_self,
        par_valid_request_methods
    );


    // Release cached frame if used for exception.
    if (frame_a4937c99259a0c0d309ca5093253c6ac == cache_frame_a4937c99259a0c0d309ca5093253c6ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a4937c99259a0c0d309ca5093253c6ac);
        cache_frame_a4937c99259a0c0d309ca5093253c6ac = NULL;
    }

    assertFrameObject(frame_a4937c99259a0c0d309ca5093253c6ac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_valid_request_methods);
    Py_DECREF(par_valid_request_methods);
    par_valid_request_methods = NULL;
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

    Py_XDECREF(par_valid_request_methods);
    par_valid_request_methods = NULL;
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


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__4_available(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_471851b0d9bc67a16d99fe750cd39a21;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_471851b0d9bc67a16d99fe750cd39a21 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_471851b0d9bc67a16d99fe750cd39a21)) {
        Py_XDECREF(cache_frame_471851b0d9bc67a16d99fe750cd39a21);

#if _DEBUG_REFCOUNTS
        if (cache_frame_471851b0d9bc67a16d99fe750cd39a21 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_471851b0d9bc67a16d99fe750cd39a21 = MAKE_FUNCTION_FRAME(codeobj_471851b0d9bc67a16d99fe750cd39a21, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_471851b0d9bc67a16d99fe750cd39a21->m_type_description == NULL);
    frame_471851b0d9bc67a16d99fe750cd39a21 = cache_frame_471851b0d9bc67a16d99fe750cd39a21;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_471851b0d9bc67a16d99fe750cd39a21);
    assert(Py_REFCNT(frame_471851b0d9bc67a16d99fe750cd39a21) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
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
        exception_tb = MAKE_TRACEBACK(frame_471851b0d9bc67a16d99fe750cd39a21, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_471851b0d9bc67a16d99fe750cd39a21->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_471851b0d9bc67a16d99fe750cd39a21, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_471851b0d9bc67a16d99fe750cd39a21,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_471851b0d9bc67a16d99fe750cd39a21 == cache_frame_471851b0d9bc67a16d99fe750cd39a21) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_471851b0d9bc67a16d99fe750cd39a21);
        cache_frame_471851b0d9bc67a16d99fe750cd39a21 = NULL;
    }

    assertFrameObject(frame_471851b0d9bc67a16d99fe750cd39a21);

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


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__5_available(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_available = python_pars[1];
    struct Nuitka_FrameObject *frame_d7f5c6e670fd3468181ffd96995992ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d7f5c6e670fd3468181ffd96995992ad = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d7f5c6e670fd3468181ffd96995992ad)) {
        Py_XDECREF(cache_frame_d7f5c6e670fd3468181ffd96995992ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7f5c6e670fd3468181ffd96995992ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7f5c6e670fd3468181ffd96995992ad = MAKE_FUNCTION_FRAME(codeobj_d7f5c6e670fd3468181ffd96995992ad, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7f5c6e670fd3468181ffd96995992ad->m_type_description == NULL);
    frame_d7f5c6e670fd3468181ffd96995992ad = cache_frame_d7f5c6e670fd3468181ffd96995992ad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d7f5c6e670fd3468181ffd96995992ad);
    assert(Py_REFCNT(frame_d7f5c6e670fd3468181ffd96995992ad) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_available);
        tmp_assattr_value_1 = par_available;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d7f5c6e670fd3468181ffd96995992ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7f5c6e670fd3468181ffd96995992ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7f5c6e670fd3468181ffd96995992ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7f5c6e670fd3468181ffd96995992ad,
        type_description_1,
        par_self,
        par_available
    );


    // Release cached frame if used for exception.
    if (frame_d7f5c6e670fd3468181ffd96995992ad == cache_frame_d7f5c6e670fd3468181ffd96995992ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7f5c6e670fd3468181ffd96995992ad);
        cache_frame_d7f5c6e670fd3468181ffd96995992ad = NULL;
    }

    assertFrameObject(frame_d7f5c6e670fd3468181ffd96995992ad);

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
    CHECK_OBJECT(par_available);
    Py_DECREF(par_available);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_available);
    Py_DECREF(par_available);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__6_catch_errors(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_31b46383ab7f43a8ec6bb26c90d65b3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_31b46383ab7f43a8ec6bb26c90d65b3f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_31b46383ab7f43a8ec6bb26c90d65b3f)) {
        Py_XDECREF(cache_frame_31b46383ab7f43a8ec6bb26c90d65b3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31b46383ab7f43a8ec6bb26c90d65b3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31b46383ab7f43a8ec6bb26c90d65b3f = MAKE_FUNCTION_FRAME(codeobj_31b46383ab7f43a8ec6bb26c90d65b3f, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_31b46383ab7f43a8ec6bb26c90d65b3f->m_type_description == NULL);
    frame_31b46383ab7f43a8ec6bb26c90d65b3f = cache_frame_31b46383ab7f43a8ec6bb26c90d65b3f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_31b46383ab7f43a8ec6bb26c90d65b3f);
    assert(Py_REFCNT(frame_31b46383ab7f43a8ec6bb26c90d65b3f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
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
        exception_tb = MAKE_TRACEBACK(frame_31b46383ab7f43a8ec6bb26c90d65b3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31b46383ab7f43a8ec6bb26c90d65b3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31b46383ab7f43a8ec6bb26c90d65b3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31b46383ab7f43a8ec6bb26c90d65b3f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_31b46383ab7f43a8ec6bb26c90d65b3f == cache_frame_31b46383ab7f43a8ec6bb26c90d65b3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_31b46383ab7f43a8ec6bb26c90d65b3f);
        cache_frame_31b46383ab7f43a8ec6bb26c90d65b3f = NULL;
    }

    assertFrameObject(frame_31b46383ab7f43a8ec6bb26c90d65b3f);

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


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__7_catch_errors(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_catch_errors = python_pars[1];
    struct Nuitka_FrameObject *frame_77b1e1ecd22b8baaec7f0ea13c73638f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_77b1e1ecd22b8baaec7f0ea13c73638f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_77b1e1ecd22b8baaec7f0ea13c73638f)) {
        Py_XDECREF(cache_frame_77b1e1ecd22b8baaec7f0ea13c73638f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_77b1e1ecd22b8baaec7f0ea13c73638f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_77b1e1ecd22b8baaec7f0ea13c73638f = MAKE_FUNCTION_FRAME(codeobj_77b1e1ecd22b8baaec7f0ea13c73638f, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_77b1e1ecd22b8baaec7f0ea13c73638f->m_type_description == NULL);
    frame_77b1e1ecd22b8baaec7f0ea13c73638f = cache_frame_77b1e1ecd22b8baaec7f0ea13c73638f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_77b1e1ecd22b8baaec7f0ea13c73638f);
    assert(Py_REFCNT(frame_77b1e1ecd22b8baaec7f0ea13c73638f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_catch_errors);
        tmp_assattr_value_1 = par_catch_errors;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_77b1e1ecd22b8baaec7f0ea13c73638f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77b1e1ecd22b8baaec7f0ea13c73638f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77b1e1ecd22b8baaec7f0ea13c73638f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_77b1e1ecd22b8baaec7f0ea13c73638f,
        type_description_1,
        par_self,
        par_catch_errors
    );


    // Release cached frame if used for exception.
    if (frame_77b1e1ecd22b8baaec7f0ea13c73638f == cache_frame_77b1e1ecd22b8baaec7f0ea13c73638f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_77b1e1ecd22b8baaec7f0ea13c73638f);
        cache_frame_77b1e1ecd22b8baaec7f0ea13c73638f = NULL;
    }

    assertFrameObject(frame_77b1e1ecd22b8baaec7f0ea13c73638f);

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
    CHECK_OBJECT(par_catch_errors);
    Py_DECREF(par_catch_errors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_catch_errors);
    Py_DECREF(par_catch_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__8__raise_on_missing_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    struct Nuitka_FrameObject *frame_027233c628ca207842f7901a98fcf13a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_027233c628ca207842f7901a98fcf13a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_027233c628ca207842f7901a98fcf13a)) {
        Py_XDECREF(cache_frame_027233c628ca207842f7901a98fcf13a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_027233c628ca207842f7901a98fcf13a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_027233c628ca207842f7901a98fcf13a = MAKE_FUNCTION_FRAME(codeobj_027233c628ca207842f7901a98fcf13a, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_027233c628ca207842f7901a98fcf13a->m_type_description == NULL);
    frame_027233c628ca207842f7901a98fcf13a = cache_frame_027233c628ca207842f7901a98fcf13a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_027233c628ca207842f7901a98fcf13a);
    assert(Py_REFCNT(frame_027233c628ca207842f7901a98fcf13a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_request);
        tmp_expression_value_1 = par_request;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
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
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_kw_call_value_0_1 = par_request;
        tmp_kw_call_value_1_1 = mod_consts[6];
        frame_027233c628ca207842f7901a98fcf13a->m_frame.f_lineno = 56;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_raise_type_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[7]);
        }

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 56;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_027233c628ca207842f7901a98fcf13a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_027233c628ca207842f7901a98fcf13a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_027233c628ca207842f7901a98fcf13a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_027233c628ca207842f7901a98fcf13a,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_027233c628ca207842f7901a98fcf13a == cache_frame_027233c628ca207842f7901a98fcf13a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_027233c628ca207842f7901a98fcf13a);
        cache_frame_027233c628ca207842f7901a98fcf13a = NULL;
    }

    assertFrameObject(frame_027233c628ca207842f7901a98fcf13a);

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


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__9__raise_on_invalid_client(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    struct Nuitka_FrameObject *frame_3baf77090ec8c54f420a8df6f9f59535;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3baf77090ec8c54f420a8df6f9f59535 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3baf77090ec8c54f420a8df6f9f59535)) {
        Py_XDECREF(cache_frame_3baf77090ec8c54f420a8df6f9f59535);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3baf77090ec8c54f420a8df6f9f59535 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3baf77090ec8c54f420a8df6f9f59535 = MAKE_FUNCTION_FRAME(codeobj_3baf77090ec8c54f420a8df6f9f59535, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3baf77090ec8c54f420a8df6f9f59535->m_type_description == NULL);
    frame_3baf77090ec8c54f420a8df6f9f59535 = cache_frame_3baf77090ec8c54f420a8df6f9f59535;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3baf77090ec8c54f420a8df6f9f59535);
    assert(Py_REFCNT(frame_3baf77090ec8c54f420a8df6f9f59535) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_args_element_value_1 = par_request;
        frame_3baf77090ec8c54f420a8df6f9f59535->m_frame.f_lineno = 60;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[10], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 60;
            type_description_1 = "oo";
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
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_args_element_value_2 = par_request;
        frame_3baf77090ec8c54f420a8df6f9f59535->m_frame.f_lineno = 61;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[11], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[14];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_4 = par_request;
        frame_3baf77090ec8c54f420a8df6f9f59535->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[13],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_kw_call_value_0_1 = par_request;
        frame_3baf77090ec8c54f420a8df6f9f59535->m_frame.f_lineno = 63;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_raise_type_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[16]);
        }

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 63;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[9]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_expression_value_5 = par_request;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[18]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_args_element_value_6 = par_request;
        frame_3baf77090ec8c54f420a8df6f9f59535->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[14];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_8 = par_request;
        frame_3baf77090ec8c54f420a8df6f9f59535->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[13],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_kw_call_value_0_2 = par_request;
        frame_3baf77090ec8c54f420a8df6f9f59535->m_frame.f_lineno = 66;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_raise_type_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[16]);
        }

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 66;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3baf77090ec8c54f420a8df6f9f59535, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3baf77090ec8c54f420a8df6f9f59535->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3baf77090ec8c54f420a8df6f9f59535, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3baf77090ec8c54f420a8df6f9f59535,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_3baf77090ec8c54f420a8df6f9f59535 == cache_frame_3baf77090ec8c54f420a8df6f9f59535) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3baf77090ec8c54f420a8df6f9f59535);
        cache_frame_3baf77090ec8c54f420a8df6f9f59535 = NULL;
    }

    assertFrameObject(frame_3baf77090ec8c54f420a8df6f9f59535);

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


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__10__raise_on_unsupported_token(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    struct Nuitka_FrameObject *frame_1c8d5a399abbe1f68a29e716c3cc8496;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1c8d5a399abbe1f68a29e716c3cc8496 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c8d5a399abbe1f68a29e716c3cc8496)) {
        Py_XDECREF(cache_frame_1c8d5a399abbe1f68a29e716c3cc8496);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c8d5a399abbe1f68a29e716c3cc8496 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c8d5a399abbe1f68a29e716c3cc8496 = MAKE_FUNCTION_FRAME(codeobj_1c8d5a399abbe1f68a29e716c3cc8496, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c8d5a399abbe1f68a29e716c3cc8496->m_type_description == NULL);
    frame_1c8d5a399abbe1f68a29e716c3cc8496 = cache_frame_1c8d5a399abbe1f68a29e716c3cc8496;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c8d5a399abbe1f68a29e716c3cc8496);
    assert(Py_REFCNT(frame_1c8d5a399abbe1f68a29e716c3cc8496) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_request);
        tmp_expression_value_1 = par_request;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
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
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_request);
        tmp_expression_value_4 = par_request;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[20]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[22]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_kw_call_value_0_1 = par_request;
        frame_1c8d5a399abbe1f68a29e716c3cc8496->m_frame.f_lineno = 73;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_raise_type_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[16]);
        }

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 73;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c8d5a399abbe1f68a29e716c3cc8496, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c8d5a399abbe1f68a29e716c3cc8496->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c8d5a399abbe1f68a29e716c3cc8496, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c8d5a399abbe1f68a29e716c3cc8496,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_1c8d5a399abbe1f68a29e716c3cc8496 == cache_frame_1c8d5a399abbe1f68a29e716c3cc8496) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c8d5a399abbe1f68a29e716c3cc8496);
        cache_frame_1c8d5a399abbe1f68a29e716c3cc8496 = NULL;
    }

    assertFrameObject(frame_1c8d5a399abbe1f68a29e716c3cc8496);

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


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__11__raise_on_bad_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    struct Nuitka_FrameObject *frame_edbe5764ba87f6c57eada96efebcd8ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_edbe5764ba87f6c57eada96efebcd8ae = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_edbe5764ba87f6c57eada96efebcd8ae)) {
        Py_XDECREF(cache_frame_edbe5764ba87f6c57eada96efebcd8ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_edbe5764ba87f6c57eada96efebcd8ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_edbe5764ba87f6c57eada96efebcd8ae = MAKE_FUNCTION_FRAME(codeobj_edbe5764ba87f6c57eada96efebcd8ae, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_edbe5764ba87f6c57eada96efebcd8ae->m_type_description == NULL);
    frame_edbe5764ba87f6c57eada96efebcd8ae = cache_frame_edbe5764ba87f6c57eada96efebcd8ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_edbe5764ba87f6c57eada96efebcd8ae);
    assert(Py_REFCNT(frame_edbe5764ba87f6c57eada96efebcd8ae) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
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
        tmp_make_exception_arg_1 = mod_consts[26];
        frame_edbe5764ba87f6c57eada96efebcd8ae->m_frame.f_lineno = 77;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 77;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_request);
        tmp_expression_value_3 = par_request;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[27]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_edbe5764ba87f6c57eada96efebcd8ae->m_frame.f_lineno = 78;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[25]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
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
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_kw_call_value_0_1 = par_request;
        tmp_mod_expr_left_1 = mod_consts[28];
        CHECK_OBJECT(par_request);
        tmp_expression_value_6 = par_request;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[27]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_edbe5764ba87f6c57eada96efebcd8ae->m_frame.f_lineno = 80;
        tmp_mod_expr_right_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_edbe5764ba87f6c57eada96efebcd8ae->m_frame.f_lineno = 79;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_raise_type_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 79;
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
        exception_tb = MAKE_TRACEBACK(frame_edbe5764ba87f6c57eada96efebcd8ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_edbe5764ba87f6c57eada96efebcd8ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_edbe5764ba87f6c57eada96efebcd8ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_edbe5764ba87f6c57eada96efebcd8ae,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_edbe5764ba87f6c57eada96efebcd8ae == cache_frame_edbe5764ba87f6c57eada96efebcd8ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_edbe5764ba87f6c57eada96efebcd8ae);
        cache_frame_edbe5764ba87f6c57eada96efebcd8ae = NULL;
    }

    assertFrameObject(frame_edbe5764ba87f6c57eada96efebcd8ae);

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


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__12__raise_on_bad_post_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *var_query_params = NULL;
    struct Nuitka_FrameObject *frame_8ffdb9a89054e28b6de7c5274f69b4b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8ffdb9a89054e28b6de7c5274f69b4b5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8ffdb9a89054e28b6de7c5274f69b4b5)) {
        Py_XDECREF(cache_frame_8ffdb9a89054e28b6de7c5274f69b4b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ffdb9a89054e28b6de7c5274f69b4b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ffdb9a89054e28b6de7c5274f69b4b5 = MAKE_FUNCTION_FRAME(codeobj_8ffdb9a89054e28b6de7c5274f69b4b5, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ffdb9a89054e28b6de7c5274f69b4b5->m_type_description == NULL);
    frame_8ffdb9a89054e28b6de7c5274f69b4b5 = cache_frame_8ffdb9a89054e28b6de7c5274f69b4b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ffdb9a89054e28b6de7c5274f69b4b5);
    assert(Py_REFCNT(frame_8ffdb9a89054e28b6de7c5274f69b4b5) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_request);
        tmp_expression_value_2 = par_request;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8ffdb9a89054e28b6de7c5274f69b4b5->m_frame.f_lineno = 85;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[29];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
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
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_request);
        tmp_expression_value_3 = par_request;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[30]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[31];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_query_params == NULL);
        var_query_params = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_query_params);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_query_params);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_kw_call_value_0_1 = par_request;
        tmp_kw_call_value_1_1 = mod_consts[32];
        frame_8ffdb9a89054e28b6de7c5274f69b4b5->m_frame.f_lineno = 88;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_raise_type_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[7]);
        }

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 88;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8ffdb9a89054e28b6de7c5274f69b4b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ffdb9a89054e28b6de7c5274f69b4b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ffdb9a89054e28b6de7c5274f69b4b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ffdb9a89054e28b6de7c5274f69b4b5,
        type_description_1,
        par_self,
        par_request,
        var_query_params
    );


    // Release cached frame if used for exception.
    if (frame_8ffdb9a89054e28b6de7c5274f69b4b5 == cache_frame_8ffdb9a89054e28b6de7c5274f69b4b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ffdb9a89054e28b6de7c5274f69b4b5);
        cache_frame_8ffdb9a89054e28b6de7c5274f69b4b5 = NULL;
    }

    assertFrameObject(frame_8ffdb9a89054e28b6de7c5274f69b4b5);

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
    Py_XDECREF(var_query_params);
    var_query_params = NULL;
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

    Py_XDECREF(var_query_params);
    var_query_params = NULL;
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


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__13_catch_errors_and_unavailability(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_f = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_wrapper = NULL;
    struct Nuitka_FrameObject *frame_449a9352f54576298a118c2db786250a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_449a9352f54576298a118c2db786250a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_449a9352f54576298a118c2db786250a)) {
        Py_XDECREF(cache_frame_449a9352f54576298a118c2db786250a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_449a9352f54576298a118c2db786250a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_449a9352f54576298a118c2db786250a = MAKE_FUNCTION_FRAME(codeobj_449a9352f54576298a118c2db786250a, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_449a9352f54576298a118c2db786250a->m_type_description == NULL);
    frame_449a9352f54576298a118c2db786250a = cache_frame_449a9352f54576298a118c2db786250a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_449a9352f54576298a118c2db786250a);
    assert(Py_REFCNT(frame_449a9352f54576298a118c2db786250a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(Nuitka_Cell_GET(par_f));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_f);
        frame_449a9352f54576298a118c2db786250a->m_frame.f_lineno = 92;
        tmp_called_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[35], tmp_args_element_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_closure_1[0] = par_f;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_value_2 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__13_catch_errors_and_unavailability$$$function__1_wrapper(tmp_closure_1);

        frame_449a9352f54576298a118c2db786250a->m_frame.f_lineno = 92;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(var_wrapper == NULL);
        var_wrapper = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_449a9352f54576298a118c2db786250a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_449a9352f54576298a118c2db786250a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_449a9352f54576298a118c2db786250a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_449a9352f54576298a118c2db786250a,
        type_description_1,
        par_f,
        var_wrapper
    );


    // Release cached frame if used for exception.
    if (frame_449a9352f54576298a118c2db786250a == cache_frame_449a9352f54576298a118c2db786250a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_449a9352f54576298a118c2db786250a);
        cache_frame_449a9352f54576298a118c2db786250a = NULL;
    }

    assertFrameObject(frame_449a9352f54576298a118c2db786250a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_wrapper);
    tmp_return_value = var_wrapper;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_wrapper);
    Py_DECREF(var_wrapper);
    var_wrapper = NULL;
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


static PyObject *impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__13_catch_errors_and_unavailability$$$function__1_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_endpoint = python_pars[0];
    PyObject *par_uri = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    PyObject *var_e = NULL;
    PyObject *var_error = NULL;
    struct Nuitka_FrameObject *frame_a02fa1e66a31eefc00b6d9b277dfee6e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_a02fa1e66a31eefc00b6d9b277dfee6e = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a02fa1e66a31eefc00b6d9b277dfee6e)) {
        Py_XDECREF(cache_frame_a02fa1e66a31eefc00b6d9b277dfee6e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a02fa1e66a31eefc00b6d9b277dfee6e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a02fa1e66a31eefc00b6d9b277dfee6e = MAKE_FUNCTION_FRAME(codeobj_a02fa1e66a31eefc00b6d9b277dfee6e, module_oauthlib$oauth2$rfc6749$endpoints$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a02fa1e66a31eefc00b6d9b277dfee6e->m_type_description == NULL);
    frame_a02fa1e66a31eefc00b6d9b277dfee6e = cache_frame_a02fa1e66a31eefc00b6d9b277dfee6e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a02fa1e66a31eefc00b6d9b277dfee6e);
    assert(Py_REFCNT(frame_a02fa1e66a31eefc00b6d9b277dfee6e) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_endpoint);
        tmp_expression_value_1 = par_endpoint;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooc";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_a02fa1e66a31eefc00b6d9b277dfee6e->m_frame.f_lineno = 95;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_e == NULL);
        var_e = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[40]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[41];
        CHECK_OBJECT(par_uri);
        tmp_mod_expr_right_1 = par_uri;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 96;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_a02fa1e66a31eefc00b6d9b277dfee6e->m_frame.f_lineno = 96;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = MAKE_DICT_EMPTY();
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_e);
            tmp_expression_value_3 = var_e;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[42]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_endpoint);
        tmp_expression_value_4 = par_endpoint;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[44]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 99;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_endpoint);
        tmp_tuple_element_2 = par_endpoint;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_uri);
        tmp_tuple_element_2 = par_uri;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a02fa1e66a31eefc00b6d9b277dfee6e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a02fa1e66a31eefc00b6d9b277dfee6e, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 103;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a02fa1e66a31eefc00b6d9b277dfee6e->m_frame) frame_a02fa1e66a31eefc00b6d9b277dfee6e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooc";
    goto try_except_handler_3;
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 105;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a02fa1e66a31eefc00b6d9b277dfee6e->m_frame) frame_a02fa1e66a31eefc00b6d9b277dfee6e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooc";
    goto try_except_handler_3;
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_e = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooc";
            goto try_except_handler_4;
        }
        frame_a02fa1e66a31eefc00b6d9b277dfee6e->m_frame.f_lineno = 107;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooc";
            goto try_except_handler_4;
        }
        assert(var_error == NULL);
        var_error = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooc";
            goto try_except_handler_4;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[49]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooc";
            goto try_except_handler_4;
        }
        tmp_mod_expr_left_2 = mod_consts[50];
        CHECK_OBJECT(var_e);
        tmp_mod_expr_right_2 = var_e;
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 109;
            type_description_1 = "ooooooc";
            goto try_except_handler_4;
        }
        frame_a02fa1e66a31eefc00b6d9b277dfee6e->m_frame.f_lineno = 108;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooc";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = MAKE_DICT_EMPTY();
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_6;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_error);
            tmp_expression_value_6 = var_error;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[42]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_1 = "ooooooc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[51];
            PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
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
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 100;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a02fa1e66a31eefc00b6d9b277dfee6e->m_frame) frame_a02fa1e66a31eefc00b6d9b277dfee6e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooc";
    goto try_except_handler_3;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
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
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_dircall_arg4_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_endpoint);
        tmp_tuple_element_4 = par_endpoint;
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_uri);
        tmp_tuple_element_4 = par_uri;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_4);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_2 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);
        Py_INCREF(tmp_dircall_arg4_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_a02fa1e66a31eefc00b6d9b277dfee6e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a02fa1e66a31eefc00b6d9b277dfee6e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a02fa1e66a31eefc00b6d9b277dfee6e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a02fa1e66a31eefc00b6d9b277dfee6e,
        type_description_1,
        par_endpoint,
        par_uri,
        par_args,
        par_kwargs,
        var_e,
        var_error,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a02fa1e66a31eefc00b6d9b277dfee6e == cache_frame_a02fa1e66a31eefc00b6d9b277dfee6e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a02fa1e66a31eefc00b6d9b277dfee6e);
        cache_frame_a02fa1e66a31eefc00b6d9b277dfee6e = NULL;
    }

    assertFrameObject(frame_a02fa1e66a31eefc00b6d9b277dfee6e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_error);
    var_error = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_error);
    var_error = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_endpoint);
    Py_DECREF(par_endpoint);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_endpoint);
    Py_DECREF(par_endpoint);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
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



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__10__raise_on_unsupported_token() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__10__raise_on_unsupported_token,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_1c8d5a399abbe1f68a29e716c3cc8496,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__11__raise_on_bad_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__11__raise_on_bad_method,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_edbe5764ba87f6c57eada96efebcd8ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__12__raise_on_bad_post_request() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__12__raise_on_bad_post_request,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_8ffdb9a89054e28b6de7c5274f69b4b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__13_catch_errors_and_unavailability() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__13_catch_errors_and_unavailability,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_449a9352f54576298a118c2db786250a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__13_catch_errors_and_unavailability$$$function__1_wrapper(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__13_catch_errors_and_unavailability$$$function__1_wrapper,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[37],
#endif
        codeobj_a02fa1e66a31eefc00b6d9b277dfee6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__1___init__,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_f716ff5f420dc93fcf89d673f2537fe2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__2_valid_request_methods() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__2_valid_request_methods,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_1c4825efe56b33537d3de9c2a74f3b95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__3_valid_request_methods() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__3_valid_request_methods,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_a4937c99259a0c0d309ca5093253c6ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__4_available() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__4_available,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_471851b0d9bc67a16d99fe750cd39a21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__5_available() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__5_available,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_d7f5c6e670fd3468181ffd96995992ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__6_catch_errors() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__6_catch_errors,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_31b46383ab7f43a8ec6bb26c90d65b3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__7_catch_errors() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__7_catch_errors,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_77b1e1ecd22b8baaec7f0ea13c73638f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__8__raise_on_missing_token() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__8__raise_on_missing_token,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_027233c628ca207842f7901a98fcf13a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__9__raise_on_invalid_client() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__9__raise_on_invalid_client,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_3baf77090ec8c54f420a8df6f9f59535,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$endpoints$base,
        mod_consts[19],
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

function_impl_code functable_oauthlib$oauth2$rfc6749$endpoints$base[] = {
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__13_catch_errors_and_unavailability$$$function__1_wrapper,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__1___init__,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__2_valid_request_methods,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__3_valid_request_methods,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__4_available,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__5_available,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__6_catch_errors,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__7_catch_errors,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__8__raise_on_missing_token,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__9__raise_on_invalid_client,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__10__raise_on_unsupported_token,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__11__raise_on_bad_method,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__12__raise_on_bad_post_request,
    impl_oauthlib$oauth2$rfc6749$endpoints$base$$$function__13_catch_errors_and_unavailability,
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

    function_impl_code *current = functable_oauthlib$oauth2$rfc6749$endpoints$base;
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

    if (offset > sizeof(functable_oauthlib$oauth2$rfc6749$endpoints$base) || offset < 0) {
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
        functable_oauthlib$oauth2$rfc6749$endpoints$base[offset],
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
        module_oauthlib$oauth2$rfc6749$endpoints$base,
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
PyObject *modulecode_oauthlib$oauth2$rfc6749$endpoints$base(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("oauthlib.oauth2.rfc6749.endpoints.base");

    // Store the module for future use.
    module_oauthlib$oauth2$rfc6749$endpoints$base = module;

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
        PRINT_STRING("oauthlib.oauth2.rfc6749.endpoints.base: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("oauthlib.oauth2.rfc6749.endpoints.base: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("oauthlib.oauth2.rfc6749.endpoints.base: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initoauthlib$oauth2$rfc6749$endpoints$base\n");

    moduledict_oauthlib$oauth2$rfc6749$endpoints$base = MODULE_DICT(module_oauthlib$oauth2$rfc6749$endpoints$base);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_oauthlib$oauth2$rfc6749$endpoints$base,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_oauthlib$oauth2$rfc6749$endpoints$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[31]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_oauthlib$oauth2$rfc6749$endpoints$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_oauthlib$oauth2$rfc6749$endpoints$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_oauthlib$oauth2$rfc6749$endpoints$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_oauthlib$oauth2$rfc6749$endpoints$base);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_oauthlib$oauth2$rfc6749$endpoints$base);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_be3a10a5d4fa17788d0c1dd8ed7433f9;
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
    PyObject *locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_b87f4bd8ca706355761e0cda9a65a4e4_2;
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
        tmp_assign_source_1 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_2);
    }
    frame_be3a10a5d4fa17788d0c1dd8ed7433f9 = MAKE_MODULE_FRAME(codeobj_be3a10a5d4fa17788d0c1dd8ed7433f9, module_oauthlib$oauth2$rfc6749$endpoints$base);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be3a10a5d4fa17788d0c1dd8ed7433f9);
    assert(Py_REFCNT(frame_be3a10a5d4fa17788d0c1dd8ed7433f9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[54];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[57], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[58], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[60];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$endpoints$base;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[61];
        frame_be3a10a5d4fa17788d0c1dd8ed7433f9->m_frame.f_lineno = 9;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[62];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$endpoints$base;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[63];
        tmp_level_value_2 = mod_consts[64];
        frame_be3a10a5d4fa17788d0c1dd8ed7433f9->m_frame.f_lineno = 11;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
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
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$endpoints$base,
                mod_consts[47],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[47]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$endpoints$base,
                mod_consts[15],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[15]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$endpoints$base,
                mod_consts[5],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[5]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$endpoints$base,
                mod_consts[46],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[46]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$endpoints$base,
                mod_consts[48],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[48]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$endpoints$base,
                mod_consts[39],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[39]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$endpoints$base,
                mod_consts[23],
                mod_consts[61]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[23]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_be3a10a5d4fa17788d0c1dd8ed7433f9->m_frame.f_lineno = 16;
        tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[65],
            PyTuple_GET_ITEM(mod_consts[66], 0)
        );

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[68], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[70], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[71], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_b87f4bd8ca706355761e0cda9a65a4e4_2 = MAKE_CLASS_FRAME(codeobj_b87f4bd8ca706355761e0cda9a65a4e4, module_oauthlib$oauth2$rfc6749$endpoints$base, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b87f4bd8ca706355761e0cda9a65a4e4_2);
        assert(Py_REFCNT(frame_b87f4bd8ca706355761e0cda9a65a4e4_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_1 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_1 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__2_valid_request_methods();

            frame_b87f4bd8ca706355761e0cda9a65a4e4_2->m_frame.f_lineno = 26;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_2;
            tmp_called_instance_2 = DICT_GET_ITEM0(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[25]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[25]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__3_valid_request_methods();

            frame_b87f4bd8ca706355761e0cda9a65a4e4_2->m_frame.f_lineno = 30;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[74], tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_2 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_3 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__4_available();

            frame_b87f4bd8ca706355761e0cda9a65a4e4_2->m_frame.f_lineno = 37;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[38], tmp_dictset_value);
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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_4;
            tmp_called_instance_3 = DICT_GET_ITEM0(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[38]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[38]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__5_available();

            frame_b87f4bd8ca706355761e0cda9a65a4e4_2->m_frame.f_lineno = 41;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[74], tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_5;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_5 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__6_catch_errors();

            frame_b87f4bd8ca706355761e0cda9a65a4e4_2->m_frame.f_lineno = 45;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_6;
            tmp_called_instance_4 = DICT_GET_ITEM0(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[44]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[44]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__7_catch_errors();

            frame_b87f4bd8ca706355761e0cda9a65a4e4_2->m_frame.f_lineno = 49;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[74], tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b87f4bd8ca706355761e0cda9a65a4e4_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b87f4bd8ca706355761e0cda9a65a4e4_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b87f4bd8ca706355761e0cda9a65a4e4_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b87f4bd8ca706355761e0cda9a65a4e4_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_b87f4bd8ca706355761e0cda9a65a4e4_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__8__raise_on_missing_token();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__9__raise_on_invalid_client();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[79], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__10__raise_on_unsupported_token();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[81], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__11__raise_on_bad_method();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[83], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__12__raise_on_bad_post_request();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19, mod_consts[85], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_4 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[69];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[87];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_be3a10a5d4fa17788d0c1dd8ed7433f9->m_frame.f_lineno = 19;
            tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19);
        locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19 = NULL;
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

        Py_DECREF(locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19);
        locals_oauthlib$oauth2$rfc6749$endpoints$base$$$class__1_BaseEndpoint_19 = NULL;
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
        exception_lineno = 19;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_17);
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
        exception_tb = MAKE_TRACEBACK(frame_be3a10a5d4fa17788d0c1dd8ed7433f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be3a10a5d4fa17788d0c1dd8ed7433f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be3a10a5d4fa17788d0c1dd8ed7433f9, exception_lineno);
    }



    assertFrameObject(frame_be3a10a5d4fa17788d0c1dd8ed7433f9);

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
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$endpoints$base$$$function__13_catch_errors_and_unavailability();

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_19);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("oauthlib.oauth2.rfc6749.endpoints.base", false);

    Py_INCREF(module_oauthlib$oauth2$rfc6749$endpoints$base);
    return module_oauthlib$oauth2$rfc6749$endpoints$base;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$endpoints$base, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("oauthlib$oauth2$rfc6749$endpoints$base", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
