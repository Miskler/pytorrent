/* Generated code for Python module 'rfc3986.validators'
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

/* The "module_rfc3986$validators" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rfc3986$validators;
PyDictObject *moduledict_rfc3986$validators;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[167];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[167];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("rfc3986.validators"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 167; i++) {
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
void checkModuleConstants_rfc3986$validators(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 167; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0be2ace26da84fcf8b9d32048af939ac;
static PyCodeObject *codeobj_9e4cd65331b8d3b8fb917bb58853b967;
static PyCodeObject *codeobj_d9a5afaa18f4bcb4e51835a1c1607946;
static PyCodeObject *codeobj_f4d86c9cf417f55163d4d6d3d7cbb94d;
static PyCodeObject *codeobj_085e38d23244212392af5301e46d4ba0;
static PyCodeObject *codeobj_6b4a130c70e7bab4b121ac95d3f3a6d7;
static PyCodeObject *codeobj_c4f8c9de924730c9bdabd1f7d563cfe6;
static PyCodeObject *codeobj_302dfd8c6e6943eb2d316895fab2237a;
static PyCodeObject *codeobj_5265afaf64f83900185616374173f7d0;
static PyCodeObject *codeobj_35904c1a539f7389ef37eb5f01352226;
static PyCodeObject *codeobj_24440fb33375405ffb893b35b80ffd42;
static PyCodeObject *codeobj_cb4c1889f7013b88bcba5909bf5ef123;
static PyCodeObject *codeobj_1d79c239eabe6500cae74a93a20e8fda;
static PyCodeObject *codeobj_80448b8a44b44fa78618f62fde8e1abb;
static PyCodeObject *codeobj_a9fb9bad9994c0a9f455c1b87432a0a5;
static PyCodeObject *codeobj_63d2e222823c3fb1d18b63dd8b7a7149;
static PyCodeObject *codeobj_04bff987b9edbe43c5dce2cf20af1b42;
static PyCodeObject *codeobj_964813e62040d181d427701c1adfc92a;
static PyCodeObject *codeobj_8444ec55eb5603a5172198ef3ba4f69f;
static PyCodeObject *codeobj_02603e5504b63421f17206fea69be5d4;
static PyCodeObject *codeobj_aa54229593ea5bd3c762a61727ddd2fc;
static PyCodeObject *codeobj_9fb914497f35181759377a53225ebecf;
static PyCodeObject *codeobj_22a6990d4175f26b185b4f54716c124a;
static PyCodeObject *codeobj_6c71a3507ea9253f068865245b16b1ac;
static PyCodeObject *codeobj_cb61c1890ea7aa361006f338cc6fe939;
static PyCodeObject *codeobj_f1f756576f8c77fd40120d5c4f956245;
static PyCodeObject *codeobj_a5a84dbc7aee7f5407b6da030c2a132a;
static PyCodeObject *codeobj_8206a7cface950f786714952edc0c867;
static PyCodeObject *codeobj_7ef5389050231ef9f1c63ba9ef0a426d;
static PyCodeObject *codeobj_294f4f03333b7cf03e7b13f3f0189e7d;
static PyCodeObject *codeobj_056e7563cd2f9732167050d5acc4f672;
static PyCodeObject *codeobj_688a09613dbb7bde7f4c91d6001790af;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[84]; CHECK_OBJECT(module_filename_obj);
    codeobj_0be2ace26da84fcf8b9d32048af939ac = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[140], NULL, 1, 0, 0);
    codeobj_9e4cd65331b8d3b8fb917bb58853b967 = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[140], NULL, 1, 0, 0);
    codeobj_d9a5afaa18f4bcb4e51835a1c1607946 = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[142], NULL, 1, 0, 0);
    codeobj_f4d86c9cf417f55163d4d6d3d7cbb94d = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[143], NULL, 1, 0, 0);
    codeobj_085e38d23244212392af5301e46d4ba0 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[143], NULL, 1, 0, 0);
    codeobj_6b4a130c70e7bab4b121ac95d3f3a6d7 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[144], NULL, 1, 0, 0);
    codeobj_c4f8c9de924730c9bdabd1f7d563cfe6 = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[144], NULL, 1, 0, 0);
    codeobj_302dfd8c6e6943eb2d316895fab2237a = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[145], NULL, 1, 0, 0);
    codeobj_5265afaf64f83900185616374173f7d0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[146], mod_consts[146], NULL, NULL, 0, 0, 0);
    codeobj_35904c1a539f7389ef37eb5f01352226 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[147], NULL, 0, 0, 0);
    codeobj_24440fb33375405ffb893b35b80ffd42 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[148], NULL, 1, 0, 0);
    codeobj_cb4c1889f7013b88bcba5909bf5ef123 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[149], NULL, 1, 0, 0);
    codeobj_1d79c239eabe6500cae74a93a20e8fda = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[150], NULL, 1, 0, 0);
    codeobj_80448b8a44b44fa78618f62fde8e1abb = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[151], NULL, 1, 0, 0);
    codeobj_a9fb9bad9994c0a9f455c1b87432a0a5 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], mod_consts[117], mod_consts[148], NULL, 1, 0, 0);
    codeobj_63d2e222823c3fb1d18b63dd8b7a7149 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[152], NULL, 3, 0, 0);
    codeobj_04bff987b9edbe43c5dce2cf20af1b42 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[153], NULL, 1, 0, 0);
    codeobj_964813e62040d181d427701c1adfc92a = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[154], NULL, 1, 0, 0);
    codeobj_8444ec55eb5603a5172198ef3ba4f69f = MAKE_CODE_OBJECT(module_filename_obj, 430, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[155], NULL, 2, 0, 0);
    codeobj_02603e5504b63421f17206fea69be5d4 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[156], NULL, 3, 0, 0);
    codeobj_aa54229593ea5bd3c762a61727ddd2fc = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[157], NULL, 2, 0, 0);
    codeobj_9fb914497f35181759377a53225ebecf = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[148], NULL, 1, 0, 0);
    codeobj_22a6990d4175f26b185b4f54716c124a = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[158], NULL, 2, 0, 0);
    codeobj_6c71a3507ea9253f068865245b16b1ac = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[159], NULL, 2, 0, 0);
    codeobj_cb61c1890ea7aa361006f338cc6fe939 = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[160], NULL, 3, 0, 0);
    codeobj_f1f756576f8c77fd40120d5c4f956245 = MAKE_CODE_OBJECT(module_filename_obj, 344, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[161], NULL, 2, 0, 0);
    codeobj_a5a84dbc7aee7f5407b6da030c2a132a = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[133], mod_consts[133], mod_consts[162], NULL, 2, 0, 0);
    codeobj_8206a7cface950f786714952edc0c867 = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[154], NULL, 1, 0, 0);
    codeobj_7ef5389050231ef9f1c63ba9ef0a426d = MAKE_CODE_OBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[163], NULL, 2, 0, 0);
    codeobj_294f4f03333b7cf03e7b13f3f0189e7d = MAKE_CODE_OBJECT(module_filename_obj, 406, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[164], NULL, 2, 0, 0);
    codeobj_056e7563cd2f9732167050d5acc4f672 = MAKE_CODE_OBJECT(module_filename_obj, 389, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[165], NULL, 1, 0, 0);
    codeobj_688a09613dbb7bde7f4c91d6001790af = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[166], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__15_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__10_check_password();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__11_ensure_one_of();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__12_ensure_required_components_exist();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__13_is_valid();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__14_authority_is_valid(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__15_host_is_valid(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__16_scheme_is_valid(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__17_path_is_valid(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__18_query_is_valid(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__19_fragment_is_valid(PyObject *defaults);


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__1___init__();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__20_valid_ipv4_host_address();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__21_subauthority_component_is_valid();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__22_ensure_components_are_valid();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__2_allow_schemes();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__3_allow_hosts();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__4_allow_ports();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__5_allow_use_of_password();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__6_forbid_use_of_password();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__7_check_validity_of();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__8_require_presence_of();


static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__9_validate();


// The module function definitions.
static PyObject *impl_rfc3986$validators$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_24440fb33375405ffb893b35b80ffd42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_24440fb33375405ffb893b35b80ffd42 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_24440fb33375405ffb893b35b80ffd42)) {
        Py_XDECREF(cache_frame_24440fb33375405ffb893b35b80ffd42);

#if _DEBUG_REFCOUNTS
        if (cache_frame_24440fb33375405ffb893b35b80ffd42 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_24440fb33375405ffb893b35b80ffd42 = MAKE_FUNCTION_FRAME(codeobj_24440fb33375405ffb893b35b80ffd42, module_rfc3986$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_24440fb33375405ffb893b35b80ffd42->m_type_description == NULL);
    frame_24440fb33375405ffb893b35b80ffd42 = cache_frame_24440fb33375405ffb893b35b80ffd42;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_24440fb33375405ffb893b35b80ffd42);
    assert(Py_REFCNT(frame_24440fb33375405ffb893b35b80ffd42) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = PySet_New(NULL);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = PySet_New(NULL);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = PySet_New(NULL);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = DICT_COPY(mod_consts[4]);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[5], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_24440fb33375405ffb893b35b80ffd42->m_frame.f_lineno = 67;
        tmp_assattr_value_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[7], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_24440fb33375405ffb893b35b80ffd42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_24440fb33375405ffb893b35b80ffd42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_24440fb33375405ffb893b35b80ffd42, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_24440fb33375405ffb893b35b80ffd42,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_24440fb33375405ffb893b35b80ffd42 == cache_frame_24440fb33375405ffb893b35b80ffd42) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_24440fb33375405ffb893b35b80ffd42);
        cache_frame_24440fb33375405ffb893b35b80ffd42 = NULL;
    }

    assertFrameObject(frame_24440fb33375405ffb893b35b80ffd42);

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


static PyObject *impl_rfc3986$validators$$$function__2_allow_schemes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_schemes = python_pars[1];
    PyObject *var_scheme = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_80448b8a44b44fa78618f62fde8e1abb;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_80448b8a44b44fa78618f62fde8e1abb = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_80448b8a44b44fa78618f62fde8e1abb)) {
        Py_XDECREF(cache_frame_80448b8a44b44fa78618f62fde8e1abb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80448b8a44b44fa78618f62fde8e1abb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80448b8a44b44fa78618f62fde8e1abb = MAKE_FUNCTION_FRAME(codeobj_80448b8a44b44fa78618f62fde8e1abb, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_80448b8a44b44fa78618f62fde8e1abb->m_type_description == NULL);
    frame_80448b8a44b44fa78618f62fde8e1abb = cache_frame_80448b8a44b44fa78618f62fde8e1abb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_80448b8a44b44fa78618f62fde8e1abb);
    assert(Py_REFCNT(frame_80448b8a44b44fa78618f62fde8e1abb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_schemes);
        tmp_iter_arg_1 = par_schemes;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 81;
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
            PyObject *old = var_scheme;
            var_scheme = tmp_assign_source_3;
            Py_INCREF(var_scheme);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 82;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_scheme);
        tmp_args_element_value_2 = var_scheme;
        frame_80448b8a44b44fa78618f62fde8e1abb->m_frame.f_lineno = 82;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[12], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 82;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_80448b8a44b44fa78618f62fde8e1abb->m_frame.f_lineno = 82;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 81;
        type_description_1 = "ooo";
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
    if (par_self == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 83;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_self;
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
        exception_tb = MAKE_TRACEBACK(frame_80448b8a44b44fa78618f62fde8e1abb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80448b8a44b44fa78618f62fde8e1abb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80448b8a44b44fa78618f62fde8e1abb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80448b8a44b44fa78618f62fde8e1abb,
        type_description_1,
        par_self,
        par_schemes,
        var_scheme
    );


    // Release cached frame if used for exception.
    if (frame_80448b8a44b44fa78618f62fde8e1abb == cache_frame_80448b8a44b44fa78618f62fde8e1abb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_80448b8a44b44fa78618f62fde8e1abb);
        cache_frame_80448b8a44b44fa78618f62fde8e1abb = NULL;
    }

    assertFrameObject(frame_80448b8a44b44fa78618f62fde8e1abb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_scheme);
    var_scheme = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_scheme);
    var_scheme = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_schemes);
    Py_DECREF(par_schemes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_schemes);
    Py_DECREF(par_schemes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__3_allow_hosts(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_hosts = python_pars[1];
    PyObject *var_host = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_cb4c1889f7013b88bcba5909bf5ef123;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cb4c1889f7013b88bcba5909bf5ef123 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cb4c1889f7013b88bcba5909bf5ef123)) {
        Py_XDECREF(cache_frame_cb4c1889f7013b88bcba5909bf5ef123);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb4c1889f7013b88bcba5909bf5ef123 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb4c1889f7013b88bcba5909bf5ef123 = MAKE_FUNCTION_FRAME(codeobj_cb4c1889f7013b88bcba5909bf5ef123, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cb4c1889f7013b88bcba5909bf5ef123->m_type_description == NULL);
    frame_cb4c1889f7013b88bcba5909bf5ef123 = cache_frame_cb4c1889f7013b88bcba5909bf5ef123;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb4c1889f7013b88bcba5909bf5ef123);
    assert(Py_REFCNT(frame_cb4c1889f7013b88bcba5909bf5ef123) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_hosts);
        tmp_iter_arg_1 = par_hosts;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 97;
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
            PyObject *old = var_host;
            var_host = tmp_assign_source_3;
            Py_INCREF(var_host);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 98;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_host);
        tmp_args_element_value_2 = var_host;
        frame_cb4c1889f7013b88bcba5909bf5ef123->m_frame.f_lineno = 98;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[14], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 98;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_cb4c1889f7013b88bcba5909bf5ef123->m_frame.f_lineno = 98;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 97;
        type_description_1 = "ooo";
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
    if (par_self == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 99;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_self;
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
        exception_tb = MAKE_TRACEBACK(frame_cb4c1889f7013b88bcba5909bf5ef123, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb4c1889f7013b88bcba5909bf5ef123->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb4c1889f7013b88bcba5909bf5ef123, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb4c1889f7013b88bcba5909bf5ef123,
        type_description_1,
        par_self,
        par_hosts,
        var_host
    );


    // Release cached frame if used for exception.
    if (frame_cb4c1889f7013b88bcba5909bf5ef123 == cache_frame_cb4c1889f7013b88bcba5909bf5ef123) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cb4c1889f7013b88bcba5909bf5ef123);
        cache_frame_cb4c1889f7013b88bcba5909bf5ef123 = NULL;
    }

    assertFrameObject(frame_cb4c1889f7013b88bcba5909bf5ef123);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_host);
    var_host = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_host);
    var_host = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_hosts);
    Py_DECREF(par_hosts);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_hosts);
    Py_DECREF(par_hosts);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__4_allow_ports(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ports = python_pars[1];
    PyObject *var_port = NULL;
    PyObject *var_port_int = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1d79c239eabe6500cae74a93a20e8fda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1d79c239eabe6500cae74a93a20e8fda = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1d79c239eabe6500cae74a93a20e8fda)) {
        Py_XDECREF(cache_frame_1d79c239eabe6500cae74a93a20e8fda);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d79c239eabe6500cae74a93a20e8fda == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d79c239eabe6500cae74a93a20e8fda = MAKE_FUNCTION_FRAME(codeobj_1d79c239eabe6500cae74a93a20e8fda, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1d79c239eabe6500cae74a93a20e8fda->m_type_description == NULL);
    frame_1d79c239eabe6500cae74a93a20e8fda = cache_frame_1d79c239eabe6500cae74a93a20e8fda;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1d79c239eabe6500cae74a93a20e8fda);
    assert(Py_REFCNT(frame_1d79c239eabe6500cae74a93a20e8fda) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_ports);
        tmp_iter_arg_1 = par_ports;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 113;
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
            PyObject *old = var_port;
            var_port = tmp_assign_source_3;
            Py_INCREF(var_port);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_value_value_1;
        PyObject *tmp_base_value_1;
        CHECK_OBJECT(var_port);
        tmp_value_value_1 = var_port;
        tmp_base_value_1 = mod_consts[16];
        tmp_assign_source_4 = BUILTIN_INT2(tmp_value_value_1, tmp_base_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_port_int;
            var_port_int = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_1;
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(var_port_int);
            tmp_assign_source_5 = var_port_int;
            {
                PyObject *old = tmp_comparison_chain_1__operand_2;
                tmp_comparison_chain_1__operand_2 = tmp_assign_source_5;
                Py_INCREF(tmp_comparison_chain_1__operand_2);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            nuitka_digit tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            bool tmp_tmp_assign_source_6_cbool_1;
            tmp_cmp_expr_left_1 = 0;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
            tmp_tmp_assign_source_6_cbool_1 = RICH_COMPARE_GE_CBOOL_LONG_DIGIT(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
            tmp_assign_source_6 = (tmp_tmp_assign_source_6_cbool_1 != false) ? Py_True : Py_False;
            {
                PyObject *old = tmp_comparison_chain_1__comparison_result;
                tmp_comparison_chain_1__comparison_result = tmp_assign_source_6;
                Py_INCREF(tmp_comparison_chain_1__comparison_result);
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            bool tmp_condition_result_2;
            PyObject *tmp_operand_value_1;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_3;
        branch_no_2:;
        {
            PyObject *tmp_cmp_expr_left_2;
            nuitka_digit tmp_cmp_expr_right_2;
            bool tmp_tmp_outline_return_value_1_cbool_1;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
            tmp_cmp_expr_right_2 = 65535;
            tmp_tmp_outline_return_value_1_cbool_1 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            tmp_outline_return_value_1 = (tmp_tmp_outline_return_value_1_cbool_1 != false) ? Py_True : Py_False;
            Py_INCREF(tmp_outline_return_value_1);
            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
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

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_1);

            exception_lineno = 115;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_port);
        tmp_args_element_value_1 = var_port;
        frame_1d79c239eabe6500cae74a93a20e8fda->m_frame.f_lineno = 116;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[10], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 113;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (par_self == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 117;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_self;
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
        exception_tb = MAKE_TRACEBACK(frame_1d79c239eabe6500cae74a93a20e8fda, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d79c239eabe6500cae74a93a20e8fda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d79c239eabe6500cae74a93a20e8fda, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d79c239eabe6500cae74a93a20e8fda,
        type_description_1,
        par_self,
        par_ports,
        var_port,
        var_port_int
    );


    // Release cached frame if used for exception.
    if (frame_1d79c239eabe6500cae74a93a20e8fda == cache_frame_1d79c239eabe6500cae74a93a20e8fda) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1d79c239eabe6500cae74a93a20e8fda);
        cache_frame_1d79c239eabe6500cae74a93a20e8fda = NULL;
    }

    assertFrameObject(frame_1d79c239eabe6500cae74a93a20e8fda);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_port_int);
    var_port_int = NULL;
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

    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_port_int);
    var_port_int = NULL;
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
    CHECK_OBJECT(par_ports);
    Py_DECREF(par_ports);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ports);
    Py_DECREF(par_ports);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__5_allow_use_of_password(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a9fb9bad9994c0a9f455c1b87432a0a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a9fb9bad9994c0a9f455c1b87432a0a5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a9fb9bad9994c0a9f455c1b87432a0a5)) {
        Py_XDECREF(cache_frame_a9fb9bad9994c0a9f455c1b87432a0a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a9fb9bad9994c0a9f455c1b87432a0a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a9fb9bad9994c0a9f455c1b87432a0a5 = MAKE_FUNCTION_FRAME(codeobj_a9fb9bad9994c0a9f455c1b87432a0a5, module_rfc3986$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a9fb9bad9994c0a9f455c1b87432a0a5->m_type_description == NULL);
    frame_a9fb9bad9994c0a9f455c1b87432a0a5 = cache_frame_a9fb9bad9994c0a9f455c1b87432a0a5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a9fb9bad9994c0a9f455c1b87432a0a5);
    assert(Py_REFCNT(frame_a9fb9bad9994c0a9f455c1b87432a0a5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a9fb9bad9994c0a9f455c1b87432a0a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a9fb9bad9994c0a9f455c1b87432a0a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a9fb9bad9994c0a9f455c1b87432a0a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a9fb9bad9994c0a9f455c1b87432a0a5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a9fb9bad9994c0a9f455c1b87432a0a5 == cache_frame_a9fb9bad9994c0a9f455c1b87432a0a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a9fb9bad9994c0a9f455c1b87432a0a5);
        cache_frame_a9fb9bad9994c0a9f455c1b87432a0a5 = NULL;
    }

    assertFrameObject(frame_a9fb9bad9994c0a9f455c1b87432a0a5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
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


static PyObject *impl_rfc3986$validators$$$function__6_forbid_use_of_password(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9fb914497f35181759377a53225ebecf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9fb914497f35181759377a53225ebecf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9fb914497f35181759377a53225ebecf)) {
        Py_XDECREF(cache_frame_9fb914497f35181759377a53225ebecf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fb914497f35181759377a53225ebecf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fb914497f35181759377a53225ebecf = MAKE_FUNCTION_FRAME(codeobj_9fb914497f35181759377a53225ebecf, module_rfc3986$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9fb914497f35181759377a53225ebecf->m_type_description == NULL);
    frame_9fb914497f35181759377a53225ebecf = cache_frame_9fb914497f35181759377a53225ebecf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9fb914497f35181759377a53225ebecf);
    assert(Py_REFCNT(frame_9fb914497f35181759377a53225ebecf) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9fb914497f35181759377a53225ebecf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fb914497f35181759377a53225ebecf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fb914497f35181759377a53225ebecf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fb914497f35181759377a53225ebecf,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9fb914497f35181759377a53225ebecf == cache_frame_9fb914497f35181759377a53225ebecf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9fb914497f35181759377a53225ebecf);
        cache_frame_9fb914497f35181759377a53225ebecf = NULL;
    }

    assertFrameObject(frame_9fb914497f35181759377a53225ebecf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
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


static PyObject *impl_rfc3986$validators$$$function__7_check_validity_of(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_components = python_pars[1];
    PyObject *var_component = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *outline_1_var_component = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_964813e62040d181d427701c1adfc92a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_0be2ace26da84fcf8b9d32048af939ac_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_0be2ace26da84fcf8b9d32048af939ac_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_964813e62040d181d427701c1adfc92a = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_964813e62040d181d427701c1adfc92a)) {
        Py_XDECREF(cache_frame_964813e62040d181d427701c1adfc92a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_964813e62040d181d427701c1adfc92a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_964813e62040d181d427701c1adfc92a = MAKE_FUNCTION_FRAME(codeobj_964813e62040d181d427701c1adfc92a, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_964813e62040d181d427701c1adfc92a->m_type_description == NULL);
    frame_964813e62040d181d427701c1adfc92a = cache_frame_964813e62040d181d427701c1adfc92a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_964813e62040d181d427701c1adfc92a);
    assert(Py_REFCNT(frame_964813e62040d181d427701c1adfc92a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_components);
            tmp_iter_arg_1 = par_components;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_1 = "ooo";
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
        if (isFrameUnusable(cache_frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2)) {
            Py_XDECREF(cache_frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2 = MAKE_FUNCTION_FRAME(codeobj_f4d86c9cf417f55163d4d6d3d7cbb94d, module_rfc3986$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2->m_type_description == NULL);
        frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2 = cache_frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2);
        assert(Py_REFCNT(frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2) == 2);

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
                    exception_lineno = 159;
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
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_5;
                Py_INCREF(outline_0_var_c);
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
            CHECK_OBJECT(outline_0_var_c);
            tmp_expression_value_1 = outline_0_var_c;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2->m_frame.f_lineno = 159;
            tmp_append_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
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
        goto frame_return_exit_2;
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
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2,
            type_description_2,
            outline_0_var_c
        );


        // Release cached frame if used for exception.
        if (frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2 == cache_frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2);
            cache_frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2 = NULL;
        }

        assertFrameObject(frame_f4d86c9cf417f55163d4d6d3d7cbb94d_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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
        exception_lineno = 159;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = par_components;
            assert(old != NULL);
            par_components = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(par_components);
        tmp_iter_arg_2 = par_components;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 160;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_component;
            var_component = tmp_assign_source_8;
            Py_INCREF(var_component);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_component);
        tmp_cmp_expr_left_1 = var_component;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooo";
            goto try_except_handler_4;
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
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[22];
        CHECK_OBJECT(var_component);
        tmp_kw_call_arg_value_1_1 = var_component;
        frame_964813e62040d181d427701c1adfc92a->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        frame_964813e62040d181d427701c1adfc92a->m_frame.f_lineno = 162;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 162;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 160;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(par_components);
            tmp_iter_arg_3 = par_components;
            tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_10;
        }
        if (isFrameUnusable(cache_frame_0be2ace26da84fcf8b9d32048af939ac_3)) {
            Py_XDECREF(cache_frame_0be2ace26da84fcf8b9d32048af939ac_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0be2ace26da84fcf8b9d32048af939ac_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0be2ace26da84fcf8b9d32048af939ac_3 = MAKE_FUNCTION_FRAME(codeobj_0be2ace26da84fcf8b9d32048af939ac, module_rfc3986$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0be2ace26da84fcf8b9d32048af939ac_3->m_type_description == NULL);
        frame_0be2ace26da84fcf8b9d32048af939ac_3 = cache_frame_0be2ace26da84fcf8b9d32048af939ac_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0be2ace26da84fcf8b9d32048af939ac_3);
        assert(Py_REFCNT(frame_0be2ace26da84fcf8b9d32048af939ac_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_3 = tmp_dictcontraction_1__$0;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 166;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_assign_source_12 = tmp_dictcontraction_1__iter_value_0;
            {
                PyObject *old = outline_1_var_component;
                outline_1_var_component = tmp_assign_source_12;
                Py_INCREF(outline_1_var_component);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_1_var_component);
            tmp_dictset38_key_1 = outline_1_var_component;
            tmp_dictset38_value_1 = Py_True;
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_args_element_value_1 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_3;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0be2ace26da84fcf8b9d32048af939ac_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0be2ace26da84fcf8b9d32048af939ac_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0be2ace26da84fcf8b9d32048af939ac_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0be2ace26da84fcf8b9d32048af939ac_3,
            type_description_2,
            outline_1_var_component
        );


        // Release cached frame if used for exception.
        if (frame_0be2ace26da84fcf8b9d32048af939ac_3 == cache_frame_0be2ace26da84fcf8b9d32048af939ac_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0be2ace26da84fcf8b9d32048af939ac_3);
            cache_frame_0be2ace26da84fcf8b9d32048af939ac_3 = NULL;
        }

        assertFrameObject(frame_0be2ace26da84fcf8b9d32048af939ac_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooo";
        goto try_except_handler_5;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_1_var_component);
        outline_1_var_component = NULL;
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

        Py_XDECREF(outline_1_var_component);
        outline_1_var_component = NULL;
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
        exception_lineno = 166;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_964813e62040d181d427701c1adfc92a->m_frame.f_lineno = 165;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (par_self == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 168;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_964813e62040d181d427701c1adfc92a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_964813e62040d181d427701c1adfc92a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_964813e62040d181d427701c1adfc92a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_964813e62040d181d427701c1adfc92a,
        type_description_1,
        par_self,
        par_components,
        var_component
    );


    // Release cached frame if used for exception.
    if (frame_964813e62040d181d427701c1adfc92a == cache_frame_964813e62040d181d427701c1adfc92a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_964813e62040d181d427701c1adfc92a);
        cache_frame_964813e62040d181d427701c1adfc92a = NULL;
    }

    assertFrameObject(frame_964813e62040d181d427701c1adfc92a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_components);
    Py_DECREF(par_components);
    par_components = NULL;
    Py_XDECREF(var_component);
    var_component = NULL;
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

    Py_XDECREF(par_components);
    par_components = NULL;
    Py_XDECREF(var_component);
    var_component = NULL;
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


static PyObject *impl_rfc3986$validators$$$function__8_require_presence_of(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_components = python_pars[1];
    PyObject *var_component = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *outline_1_var_component = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_8206a7cface950f786714952edc0c867;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_085e38d23244212392af5301e46d4ba0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_085e38d23244212392af5301e46d4ba0_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_9e4cd65331b8d3b8fb917bb58853b967_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_9e4cd65331b8d3b8fb917bb58853b967_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8206a7cface950f786714952edc0c867 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8206a7cface950f786714952edc0c867)) {
        Py_XDECREF(cache_frame_8206a7cface950f786714952edc0c867);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8206a7cface950f786714952edc0c867 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8206a7cface950f786714952edc0c867 = MAKE_FUNCTION_FRAME(codeobj_8206a7cface950f786714952edc0c867, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8206a7cface950f786714952edc0c867->m_type_description == NULL);
    frame_8206a7cface950f786714952edc0c867 = cache_frame_8206a7cface950f786714952edc0c867;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8206a7cface950f786714952edc0c867);
    assert(Py_REFCNT(frame_8206a7cface950f786714952edc0c867) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_components);
            tmp_iter_arg_1 = par_components;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_1 = "ooo";
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
        if (isFrameUnusable(cache_frame_085e38d23244212392af5301e46d4ba0_2)) {
            Py_XDECREF(cache_frame_085e38d23244212392af5301e46d4ba0_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_085e38d23244212392af5301e46d4ba0_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_085e38d23244212392af5301e46d4ba0_2 = MAKE_FUNCTION_FRAME(codeobj_085e38d23244212392af5301e46d4ba0, module_rfc3986$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_085e38d23244212392af5301e46d4ba0_2->m_type_description == NULL);
        frame_085e38d23244212392af5301e46d4ba0_2 = cache_frame_085e38d23244212392af5301e46d4ba0_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_085e38d23244212392af5301e46d4ba0_2);
        assert(Py_REFCNT(frame_085e38d23244212392af5301e46d4ba0_2) == 2);

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
                    exception_lineno = 184;
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
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_5;
                Py_INCREF(outline_0_var_c);
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
            CHECK_OBJECT(outline_0_var_c);
            tmp_expression_value_1 = outline_0_var_c;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            frame_085e38d23244212392af5301e46d4ba0_2->m_frame.f_lineno = 184;
            tmp_append_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
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
        goto frame_return_exit_2;
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
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_085e38d23244212392af5301e46d4ba0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_085e38d23244212392af5301e46d4ba0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_085e38d23244212392af5301e46d4ba0_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_085e38d23244212392af5301e46d4ba0_2,
            type_description_2,
            outline_0_var_c
        );


        // Release cached frame if used for exception.
        if (frame_085e38d23244212392af5301e46d4ba0_2 == cache_frame_085e38d23244212392af5301e46d4ba0_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_085e38d23244212392af5301e46d4ba0_2);
            cache_frame_085e38d23244212392af5301e46d4ba0_2 = NULL;
        }

        assertFrameObject(frame_085e38d23244212392af5301e46d4ba0_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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
        exception_lineno = 184;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = par_components;
            assert(old != NULL);
            par_components = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(par_components);
        tmp_iter_arg_2 = par_components;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 185;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_component;
            var_component = tmp_assign_source_8;
            Py_INCREF(var_component);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_component);
        tmp_cmp_expr_left_1 = var_component;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooo";
            goto try_except_handler_4;
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
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[22];
        CHECK_OBJECT(var_component);
        tmp_kw_call_arg_value_1_1 = var_component;
        frame_8206a7cface950f786714952edc0c867->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        frame_8206a7cface950f786714952edc0c867->m_frame.f_lineno = 187;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 187;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 185;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(par_components);
            tmp_iter_arg_3 = par_components;
            tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_10;
        }
        if (isFrameUnusable(cache_frame_9e4cd65331b8d3b8fb917bb58853b967_3)) {
            Py_XDECREF(cache_frame_9e4cd65331b8d3b8fb917bb58853b967_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9e4cd65331b8d3b8fb917bb58853b967_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9e4cd65331b8d3b8fb917bb58853b967_3 = MAKE_FUNCTION_FRAME(codeobj_9e4cd65331b8d3b8fb917bb58853b967, module_rfc3986$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_9e4cd65331b8d3b8fb917bb58853b967_3->m_type_description == NULL);
        frame_9e4cd65331b8d3b8fb917bb58853b967_3 = cache_frame_9e4cd65331b8d3b8fb917bb58853b967_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9e4cd65331b8d3b8fb917bb58853b967_3);
        assert(Py_REFCNT(frame_9e4cd65331b8d3b8fb917bb58853b967_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_3 = tmp_dictcontraction_1__$0;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 191;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_assign_source_12 = tmp_dictcontraction_1__iter_value_0;
            {
                PyObject *old = outline_1_var_component;
                outline_1_var_component = tmp_assign_source_12;
                Py_INCREF(outline_1_var_component);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_1_var_component);
            tmp_dictset38_key_1 = outline_1_var_component;
            tmp_dictset38_value_1 = Py_True;
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_args_element_value_1 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_3;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9e4cd65331b8d3b8fb917bb58853b967_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9e4cd65331b8d3b8fb917bb58853b967_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9e4cd65331b8d3b8fb917bb58853b967_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9e4cd65331b8d3b8fb917bb58853b967_3,
            type_description_2,
            outline_1_var_component
        );


        // Release cached frame if used for exception.
        if (frame_9e4cd65331b8d3b8fb917bb58853b967_3 == cache_frame_9e4cd65331b8d3b8fb917bb58853b967_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_9e4cd65331b8d3b8fb917bb58853b967_3);
            cache_frame_9e4cd65331b8d3b8fb917bb58853b967_3 = NULL;
        }

        assertFrameObject(frame_9e4cd65331b8d3b8fb917bb58853b967_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooo";
        goto try_except_handler_5;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_1_var_component);
        outline_1_var_component = NULL;
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

        Py_XDECREF(outline_1_var_component);
        outline_1_var_component = NULL;
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
        exception_lineno = 191;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_8206a7cface950f786714952edc0c867->m_frame.f_lineno = 190;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (par_self == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[9]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 193;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8206a7cface950f786714952edc0c867, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8206a7cface950f786714952edc0c867->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8206a7cface950f786714952edc0c867, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8206a7cface950f786714952edc0c867,
        type_description_1,
        par_self,
        par_components,
        var_component
    );


    // Release cached frame if used for exception.
    if (frame_8206a7cface950f786714952edc0c867 == cache_frame_8206a7cface950f786714952edc0c867) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8206a7cface950f786714952edc0c867);
        cache_frame_8206a7cface950f786714952edc0c867 = NULL;
    }

    assertFrameObject(frame_8206a7cface950f786714952edc0c867);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_components);
    Py_DECREF(par_components);
    par_components = NULL;
    Py_XDECREF(var_component);
    var_component = NULL;
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

    Py_XDECREF(par_components);
    par_components = NULL;
    Py_XDECREF(var_component);
    var_component = NULL;
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


static PyObject *impl_rfc3986$validators$$$function__9_validate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_uri = python_pars[1];
    PyObject *var_required_components = NULL;
    PyObject *var_validated_components = NULL;
    PyObject *outline_0_var_component = NULL;
    PyObject *outline_0_var_required = NULL;
    PyObject *outline_1_var_component = NULL;
    PyObject *outline_1_var_required = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_688a09613dbb7bde7f4c91d6001790af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_c4f8c9de924730c9bdabd1f7d563cfe6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_c4f8c9de924730c9bdabd1f7d563cfe6_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_688a09613dbb7bde7f4c91d6001790af = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_688a09613dbb7bde7f4c91d6001790af)) {
        Py_XDECREF(cache_frame_688a09613dbb7bde7f4c91d6001790af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_688a09613dbb7bde7f4c91d6001790af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_688a09613dbb7bde7f4c91d6001790af = MAKE_FUNCTION_FRAME(codeobj_688a09613dbb7bde7f4c91d6001790af, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_688a09613dbb7bde7f4c91d6001790af->m_type_description == NULL);
    frame_688a09613dbb7bde7f4c91d6001790af = cache_frame_688a09613dbb7bde7f4c91d6001790af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_688a09613dbb7bde7f4c91d6001790af);
    assert(Py_REFCNT(frame_688a09613dbb7bde7f4c91d6001790af) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_1 = par_uri;
        frame_688a09613dbb7bde7f4c91d6001790af->m_frame.f_lineno = 215;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            frame_688a09613dbb7bde7f4c91d6001790af->m_frame.f_lineno = 219;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_1 = "oooo";
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
        if (isFrameUnusable(cache_frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2)) {
            Py_XDECREF(cache_frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2 = MAKE_FUNCTION_FRAME(codeobj_6b4a130c70e7bab4b121ac95d3f3a6d7, module_rfc3986$validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2->m_type_description == NULL);
        frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2 = cache_frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2);
        assert(Py_REFCNT(frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2) == 2);

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
                    type_description_2 = "oo";
                    exception_lineno = 217;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_6 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 217;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
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
                exception_lineno = 217;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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
                        exception_lineno = 217;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[28];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 217;
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

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_8 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_component;
                outline_0_var_component = tmp_assign_source_8;
                Py_INCREF(outline_0_var_component);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_9 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_required;
                outline_0_var_required = tmp_assign_source_9;
                Py_INCREF(outline_0_var_required);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            CHECK_OBJECT(outline_0_var_required);
            tmp_truth_name_1 = CHECK_IF_TRUE(outline_0_var_required);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "oo";
                goto try_except_handler_3;
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
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_component);
            tmp_append_value_1 = outline_0_var_component;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        branch_no_2:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_2 = "oo";
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
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

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
            exception_tb = MAKE_TRACEBACK(frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2,
            type_description_2,
            outline_0_var_component,
            outline_0_var_required
        );


        // Release cached frame if used for exception.
        if (frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2 == cache_frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2);
            cache_frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2 = NULL;
        }

        assertFrameObject(frame_6b4a130c70e7bab4b121ac95d3f3a6d7_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_component);
        outline_0_var_component = NULL;
        Py_XDECREF(outline_0_var_required);
        outline_0_var_required = NULL;
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

        Py_XDECREF(outline_0_var_component);
        outline_0_var_component = NULL;
        Py_XDECREF(outline_0_var_required);
        outline_0_var_required = NULL;
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
        exception_lineno = 217;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_required_components == NULL);
        var_required_components = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_10;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[7]);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[27]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            frame_688a09613dbb7bde7f4c91d6001790af->m_frame.f_lineno = 224;
            tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
            Py_DECREF(tmp_called_value_3);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_1 = "oooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_12;
        }
        if (isFrameUnusable(cache_frame_c4f8c9de924730c9bdabd1f7d563cfe6_3)) {
            Py_XDECREF(cache_frame_c4f8c9de924730c9bdabd1f7d563cfe6_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c4f8c9de924730c9bdabd1f7d563cfe6_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c4f8c9de924730c9bdabd1f7d563cfe6_3 = MAKE_FUNCTION_FRAME(codeobj_c4f8c9de924730c9bdabd1f7d563cfe6, module_rfc3986$validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_c4f8c9de924730c9bdabd1f7d563cfe6_3->m_type_description == NULL);
        frame_c4f8c9de924730c9bdabd1f7d563cfe6_3 = cache_frame_c4f8c9de924730c9bdabd1f7d563cfe6_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c4f8c9de924730c9bdabd1f7d563cfe6_3);
        assert(Py_REFCNT(frame_c4f8c9de924730c9bdabd1f7d563cfe6_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 222;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_iter_arg_4 = tmp_listcomp_2__iter_value_0;
            tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__source_iter;
                tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
            if (tmp_assign_source_15 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 222;
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_1;
                tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_15;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
            if (tmp_assign_source_16 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 222;
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_2;
                tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 222;
                        goto try_except_handler_9;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[28];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 222;
                goto try_except_handler_9;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_8;
        // End of try:
        try_end_3:;
        goto try_end_4;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_1);
            tmp_assign_source_17 = tmp_listcomp$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_1_var_component;
                outline_1_var_component = tmp_assign_source_17;
                Py_INCREF(outline_1_var_component);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_2);
            tmp_assign_source_18 = tmp_listcomp$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_1_var_required;
                outline_1_var_required = tmp_assign_source_18;
                Py_INCREF(outline_1_var_required);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_3;
            int tmp_truth_name_2;
            CHECK_OBJECT(outline_1_var_required);
            tmp_truth_name_2 = CHECK_IF_TRUE(outline_1_var_required);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_component);
            tmp_append_value_2 = outline_1_var_component;
            tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
        }
        branch_no_3:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_10 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c4f8c9de924730c9bdabd1f7d563cfe6_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c4f8c9de924730c9bdabd1f7d563cfe6_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c4f8c9de924730c9bdabd1f7d563cfe6_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c4f8c9de924730c9bdabd1f7d563cfe6_3,
            type_description_2,
            outline_1_var_component,
            outline_1_var_required
        );


        // Release cached frame if used for exception.
        if (frame_c4f8c9de924730c9bdabd1f7d563cfe6_3 == cache_frame_c4f8c9de924730c9bdabd1f7d563cfe6_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_c4f8c9de924730c9bdabd1f7d563cfe6_3);
            cache_frame_c4f8c9de924730c9bdabd1f7d563cfe6_3 = NULL;
        }

        assertFrameObject(frame_c4f8c9de924730c9bdabd1f7d563cfe6_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooo";
        goto try_except_handler_6;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_1_var_component);
        outline_1_var_component = NULL;
        Py_XDECREF(outline_1_var_required);
        outline_1_var_required = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_component);
        outline_1_var_component = NULL;
        Py_XDECREF(outline_1_var_required);
        outline_1_var_required = NULL;
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
        exception_lineno = 222;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_validated_components == NULL);
        var_validated_components = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_required_components);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_required_components);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_uri == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_uri;
        CHECK_OBJECT(var_required_components);
        tmp_args_element_value_3 = var_required_components;
        frame_688a09613dbb7bde7f4c91d6001790af->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_validated_components);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_validated_components);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_uri == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_uri;
        CHECK_OBJECT(var_validated_components);
        tmp_args_element_value_5 = var_validated_components;
        frame_688a09613dbb7bde7f4c91d6001790af->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[0]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_uri == NULL) {
            Py_DECREF(tmp_args_element_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = par_uri;
        tmp_args_element_value_8 = mod_consts[33];
        frame_688a09613dbb7bde7f4c91d6001790af->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[1]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_uri == NULL) {
            Py_DECREF(tmp_args_element_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = par_uri;
        tmp_args_element_value_11 = mod_consts[34];
        frame_688a09613dbb7bde7f4c91d6001790af->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[2]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_uri == NULL) {
            Py_DECREF(tmp_args_element_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_13 = par_uri;
        tmp_args_element_value_14 = mod_consts[35];
        frame_688a09613dbb7bde7f4c91d6001790af->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_688a09613dbb7bde7f4c91d6001790af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_688a09613dbb7bde7f4c91d6001790af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_688a09613dbb7bde7f4c91d6001790af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_688a09613dbb7bde7f4c91d6001790af,
        type_description_1,
        par_self,
        par_uri,
        var_required_components,
        var_validated_components
    );


    // Release cached frame if used for exception.
    if (frame_688a09613dbb7bde7f4c91d6001790af == cache_frame_688a09613dbb7bde7f4c91d6001790af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_688a09613dbb7bde7f4c91d6001790af);
        cache_frame_688a09613dbb7bde7f4c91d6001790af = NULL;
    }

    assertFrameObject(frame_688a09613dbb7bde7f4c91d6001790af);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_required_components);
    var_required_components = NULL;
    Py_XDECREF(var_validated_components);
    var_validated_components = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_required_components);
    var_required_components = NULL;
    Py_XDECREF(var_validated_components);
    var_validated_components = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__10_check_password(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[0];
    PyObject *var_userinfo = NULL;
    PyObject *var_credentials = NULL;
    struct Nuitka_FrameObject *frame_04bff987b9edbe43c5dce2cf20af1b42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_04bff987b9edbe43c5dce2cf20af1b42 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_04bff987b9edbe43c5dce2cf20af1b42)) {
        Py_XDECREF(cache_frame_04bff987b9edbe43c5dce2cf20af1b42);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04bff987b9edbe43c5dce2cf20af1b42 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04bff987b9edbe43c5dce2cf20af1b42 = MAKE_FUNCTION_FRAME(codeobj_04bff987b9edbe43c5dce2cf20af1b42, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04bff987b9edbe43c5dce2cf20af1b42->m_type_description == NULL);
    frame_04bff987b9edbe43c5dce2cf20af1b42 = cache_frame_04bff987b9edbe43c5dce2cf20af1b42;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_04bff987b9edbe43c5dce2cf20af1b42);
    assert(Py_REFCNT(frame_04bff987b9edbe43c5dce2cf20af1b42) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_uri);
        tmp_expression_value_1 = par_uri;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_userinfo == NULL);
        var_userinfo = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_userinfo);
        tmp_operand_value_1 = var_userinfo;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_userinfo);
        tmp_expression_value_2 = var_userinfo;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_04bff987b9edbe43c5dce2cf20af1b42->m_frame.f_lineno = 242;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[39]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_credentials == NULL);
        var_credentials = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_credentials);
        tmp_len_arg_1 = var_credentials;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 1;
        tmp_condition_result_2 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_1 = par_uri;
        frame_04bff987b9edbe43c5dce2cf20af1b42->m_frame.f_lineno = 245;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[41], tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 245;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_04bff987b9edbe43c5dce2cf20af1b42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04bff987b9edbe43c5dce2cf20af1b42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04bff987b9edbe43c5dce2cf20af1b42, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04bff987b9edbe43c5dce2cf20af1b42,
        type_description_1,
        par_uri,
        var_userinfo,
        var_credentials
    );


    // Release cached frame if used for exception.
    if (frame_04bff987b9edbe43c5dce2cf20af1b42 == cache_frame_04bff987b9edbe43c5dce2cf20af1b42) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04bff987b9edbe43c5dce2cf20af1b42);
        cache_frame_04bff987b9edbe43c5dce2cf20af1b42 = NULL;
    }

    assertFrameObject(frame_04bff987b9edbe43c5dce2cf20af1b42);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
    Py_XDECREF(var_credentials);
    var_credentials = NULL;
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

    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
    Py_XDECREF(var_credentials);
    var_credentials = NULL;
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
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__11_ensure_one_of(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_allowed_values = python_pars[0];
    PyObject *par_uri = python_pars[1];
    PyObject *par_attribute = python_pars[2];
    PyObject *var_value = NULL;
    struct Nuitka_FrameObject *frame_02603e5504b63421f17206fea69be5d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_02603e5504b63421f17206fea69be5d4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_02603e5504b63421f17206fea69be5d4)) {
        Py_XDECREF(cache_frame_02603e5504b63421f17206fea69be5d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_02603e5504b63421f17206fea69be5d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_02603e5504b63421f17206fea69be5d4 = MAKE_FUNCTION_FRAME(codeobj_02603e5504b63421f17206fea69be5d4, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_02603e5504b63421f17206fea69be5d4->m_type_description == NULL);
    frame_02603e5504b63421f17206fea69be5d4 = cache_frame_02603e5504b63421f17206fea69be5d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_02603e5504b63421f17206fea69be5d4);
    assert(Py_REFCNT(frame_02603e5504b63421f17206fea69be5d4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(par_uri);
        tmp_getattr_target_1 = par_uri;
        CHECK_OBJECT(par_attribute);
        tmp_getattr_attr_1 = par_attribute;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_1 = var_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_allowed_values);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_allowed_values);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_2 = var_value;
        CHECK_OBJECT(par_allowed_values);
        tmp_cmp_expr_right_2 = par_allowed_values;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_attribute);
        tmp_args_element_value_1 = par_attribute;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_2 = var_value;
        CHECK_OBJECT(par_allowed_values);
        tmp_args_element_value_3 = par_allowed_values;
        frame_02603e5504b63421f17206fea69be5d4->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_raise_type_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[43],
                call_args
            );
        }

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 252;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_02603e5504b63421f17206fea69be5d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_02603e5504b63421f17206fea69be5d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_02603e5504b63421f17206fea69be5d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_02603e5504b63421f17206fea69be5d4,
        type_description_1,
        par_allowed_values,
        par_uri,
        par_attribute,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_02603e5504b63421f17206fea69be5d4 == cache_frame_02603e5504b63421f17206fea69be5d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_02603e5504b63421f17206fea69be5d4);
        cache_frame_02603e5504b63421f17206fea69be5d4 = NULL;
    }

    assertFrameObject(frame_02603e5504b63421f17206fea69be5d4);

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
    CHECK_OBJECT(var_value);
    Py_DECREF(var_value);
    var_value = NULL;
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

    Py_XDECREF(var_value);
    var_value = NULL;
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
    CHECK_OBJECT(par_allowed_values);
    Py_DECREF(par_allowed_values);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_attribute);
    Py_DECREF(par_attribute);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_allowed_values);
    Py_DECREF(par_allowed_values);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_attribute);
    Py_DECREF(par_attribute);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__12_ensure_required_components_exist(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[0];
    PyObject *par_required_components = python_pars[1];
    PyObject *var_missing_components = NULL;
    PyObject *outline_0_var_component = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_aa54229593ea5bd3c762a61727ddd2fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_302dfd8c6e6943eb2d316895fab2237a_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_302dfd8c6e6943eb2d316895fab2237a_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_aa54229593ea5bd3c762a61727ddd2fc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aa54229593ea5bd3c762a61727ddd2fc)) {
        Py_XDECREF(cache_frame_aa54229593ea5bd3c762a61727ddd2fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa54229593ea5bd3c762a61727ddd2fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa54229593ea5bd3c762a61727ddd2fc = MAKE_FUNCTION_FRAME(codeobj_aa54229593ea5bd3c762a61727ddd2fc, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aa54229593ea5bd3c762a61727ddd2fc->m_type_description == NULL);
    frame_aa54229593ea5bd3c762a61727ddd2fc = cache_frame_aa54229593ea5bd3c762a61727ddd2fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aa54229593ea5bd3c762a61727ddd2fc);
    assert(Py_REFCNT(frame_aa54229593ea5bd3c762a61727ddd2fc) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[45]);
        assert(tmp_called_value_1 != NULL);
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_required_components);
            tmp_iter_arg_1 = par_required_components;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "ooo";
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
        if (isFrameUnusable(cache_frame_302dfd8c6e6943eb2d316895fab2237a_2)) {
            Py_XDECREF(cache_frame_302dfd8c6e6943eb2d316895fab2237a_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_302dfd8c6e6943eb2d316895fab2237a_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_302dfd8c6e6943eb2d316895fab2237a_2 = MAKE_FUNCTION_FRAME(codeobj_302dfd8c6e6943eb2d316895fab2237a, module_rfc3986$validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_302dfd8c6e6943eb2d316895fab2237a_2->m_type_description == NULL);
        frame_302dfd8c6e6943eb2d316895fab2237a_2 = cache_frame_302dfd8c6e6943eb2d316895fab2237a_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_302dfd8c6e6943eb2d316895fab2237a_2);
        assert(Py_REFCNT(frame_302dfd8c6e6943eb2d316895fab2237a_2) == 2);

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
                    type_description_2 = "oo";
                    exception_lineno = 262;
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
                PyObject *old = outline_0_var_component;
                outline_0_var_component = tmp_assign_source_5;
                Py_INCREF(outline_0_var_component);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            CHECK_OBJECT(par_uri);
            tmp_getattr_target_1 = par_uri;
            CHECK_OBJECT(outline_0_var_component);
            tmp_getattr_attr_1 = outline_0_var_component;
            tmp_cmp_expr_left_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
            if (tmp_cmp_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "oo";
                goto try_except_handler_3;
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
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_component);
            tmp_append_value_1 = outline_0_var_component;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
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
            exception_tb = MAKE_TRACEBACK(frame_302dfd8c6e6943eb2d316895fab2237a_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_302dfd8c6e6943eb2d316895fab2237a_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_302dfd8c6e6943eb2d316895fab2237a_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_302dfd8c6e6943eb2d316895fab2237a_2,
            type_description_2,
            outline_0_var_component,
            par_uri
        );


        // Release cached frame if used for exception.
        if (frame_302dfd8c6e6943eb2d316895fab2237a_2 == cache_frame_302dfd8c6e6943eb2d316895fab2237a_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_302dfd8c6e6943eb2d316895fab2237a_2);
            cache_frame_302dfd8c6e6943eb2d316895fab2237a_2 = NULL;
        }

        assertFrameObject(frame_302dfd8c6e6943eb2d316895fab2237a_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_component);
        outline_0_var_component = NULL;
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

        Py_XDECREF(outline_0_var_component);
        outline_0_var_component = NULL;
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
        exception_lineno = 262;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_aa54229593ea5bd3c762a61727ddd2fc->m_frame.f_lineno = 261;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_missing_components == NULL);
        var_missing_components = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_missing_components);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_missing_components);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
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
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_tuple_element_1 = par_uri;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_missing_components);
        tmp_dircall_arg3_1 = var_missing_components;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_raise_type_1 = impl___main__$$$function__15_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 269;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa54229593ea5bd3c762a61727ddd2fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa54229593ea5bd3c762a61727ddd2fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa54229593ea5bd3c762a61727ddd2fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa54229593ea5bd3c762a61727ddd2fc,
        type_description_1,
        par_uri,
        par_required_components,
        var_missing_components
    );


    // Release cached frame if used for exception.
    if (frame_aa54229593ea5bd3c762a61727ddd2fc == cache_frame_aa54229593ea5bd3c762a61727ddd2fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aa54229593ea5bd3c762a61727ddd2fc);
        cache_frame_aa54229593ea5bd3c762a61727ddd2fc = NULL;
    }

    assertFrameObject(frame_aa54229593ea5bd3c762a61727ddd2fc);

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
    CHECK_OBJECT(var_missing_components);
    Py_DECREF(var_missing_components);
    var_missing_components = NULL;
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

    Py_XDECREF(var_missing_components);
    var_missing_components = NULL;
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
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_required_components);
    Py_DECREF(par_required_components);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_required_components);
    Py_DECREF(par_required_components);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__13_is_valid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_matcher = python_pars[1];
    PyObject *par_require = python_pars[2];
    struct Nuitka_FrameObject *frame_cb61c1890ea7aa361006f338cc6fe939;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cb61c1890ea7aa361006f338cc6fe939 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cb61c1890ea7aa361006f338cc6fe939)) {
        Py_XDECREF(cache_frame_cb61c1890ea7aa361006f338cc6fe939);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb61c1890ea7aa361006f338cc6fe939 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb61c1890ea7aa361006f338cc6fe939 = MAKE_FUNCTION_FRAME(codeobj_cb61c1890ea7aa361006f338cc6fe939, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cb61c1890ea7aa361006f338cc6fe939->m_type_description == NULL);
    frame_cb61c1890ea7aa361006f338cc6fe939 = cache_frame_cb61c1890ea7aa361006f338cc6fe939;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb61c1890ea7aa361006f338cc6fe939);
    assert(Py_REFCNT(frame_cb61c1890ea7aa361006f338cc6fe939) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_require);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_require);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_matcher);
        tmp_called_instance_1 = par_matcher;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_cb61c1890ea7aa361006f338cc6fe939->m_frame.f_lineno = 283;
        tmp_and_right_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[48], tmp_args_element_value_1);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_matcher);
        tmp_called_instance_2 = par_matcher;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_cb61c1890ea7aa361006f338cc6fe939->m_frame.f_lineno = 286;
        tmp_or_right_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[48], tmp_args_element_value_2);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_cb61c1890ea7aa361006f338cc6fe939, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb61c1890ea7aa361006f338cc6fe939->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb61c1890ea7aa361006f338cc6fe939, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb61c1890ea7aa361006f338cc6fe939,
        type_description_1,
        par_value,
        par_matcher,
        par_require
    );


    // Release cached frame if used for exception.
    if (frame_cb61c1890ea7aa361006f338cc6fe939 == cache_frame_cb61c1890ea7aa361006f338cc6fe939) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cb61c1890ea7aa361006f338cc6fe939);
        cache_frame_cb61c1890ea7aa361006f338cc6fe939 = NULL;
    }

    assertFrameObject(frame_cb61c1890ea7aa361006f338cc6fe939);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_matcher);
    Py_DECREF(par_matcher);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_matcher);
    Py_DECREF(par_matcher);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__14_authority_is_valid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_authority = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_require = python_pars[2];
    PyObject *var_validated = NULL;
    struct Nuitka_FrameObject *frame_63d2e222823c3fb1d18b63dd8b7a7149;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_63d2e222823c3fb1d18b63dd8b7a7149 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_63d2e222823c3fb1d18b63dd8b7a7149)) {
        Py_XDECREF(cache_frame_63d2e222823c3fb1d18b63dd8b7a7149);

#if _DEBUG_REFCOUNTS
        if (cache_frame_63d2e222823c3fb1d18b63dd8b7a7149 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_63d2e222823c3fb1d18b63dd8b7a7149 = MAKE_FUNCTION_FRAME(codeobj_63d2e222823c3fb1d18b63dd8b7a7149, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_63d2e222823c3fb1d18b63dd8b7a7149->m_type_description == NULL);
    frame_63d2e222823c3fb1d18b63dd8b7a7149 = cache_frame_63d2e222823c3fb1d18b63dd8b7a7149;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_63d2e222823c3fb1d18b63dd8b7a7149);
    assert(Py_REFCNT(frame_63d2e222823c3fb1d18b63dd8b7a7149) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_authority);
        tmp_args_element_value_1 = par_authority;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_require);
        tmp_args_element_value_3 = par_require;
        frame_63d2e222823c3fb1d18b63dd8b7a7149->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_validated == NULL);
        var_validated = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_validated);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_validated);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_host);
        tmp_cmp_expr_left_1 = par_host;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_args_element_value_4 = par_host;
        CHECK_OBJECT(par_require);
        tmp_args_element_value_5 = par_require;
        frame_63d2e222823c3fb1d18b63dd8b7a7149->m_frame.f_lineno = 305;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_63d2e222823c3fb1d18b63dd8b7a7149, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_63d2e222823c3fb1d18b63dd8b7a7149->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_63d2e222823c3fb1d18b63dd8b7a7149, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_63d2e222823c3fb1d18b63dd8b7a7149,
        type_description_1,
        par_authority,
        par_host,
        par_require,
        var_validated
    );


    // Release cached frame if used for exception.
    if (frame_63d2e222823c3fb1d18b63dd8b7a7149 == cache_frame_63d2e222823c3fb1d18b63dd8b7a7149) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_63d2e222823c3fb1d18b63dd8b7a7149);
        cache_frame_63d2e222823c3fb1d18b63dd8b7a7149 = NULL;
    }

    assertFrameObject(frame_63d2e222823c3fb1d18b63dd8b7a7149);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_validated);
    tmp_return_value = var_validated;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_validated);
    Py_DECREF(var_validated);
    var_validated = NULL;
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

    Py_XDECREF(var_validated);
    var_validated = NULL;
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
    CHECK_OBJECT(par_authority);
    Py_DECREF(par_authority);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_authority);
    Py_DECREF(par_authority);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__15_host_is_valid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_host = python_pars[0];
    PyObject *par_require = python_pars[1];
    PyObject *var_validated = NULL;
    struct Nuitka_FrameObject *frame_6c71a3507ea9253f068865245b16b1ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6c71a3507ea9253f068865245b16b1ac = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6c71a3507ea9253f068865245b16b1ac)) {
        Py_XDECREF(cache_frame_6c71a3507ea9253f068865245b16b1ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c71a3507ea9253f068865245b16b1ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c71a3507ea9253f068865245b16b1ac = MAKE_FUNCTION_FRAME(codeobj_6c71a3507ea9253f068865245b16b1ac, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6c71a3507ea9253f068865245b16b1ac->m_type_description == NULL);
    frame_6c71a3507ea9253f068865245b16b1ac = cache_frame_6c71a3507ea9253f068865245b16b1ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6c71a3507ea9253f068865245b16b1ac);
    assert(Py_REFCNT(frame_6c71a3507ea9253f068865245b16b1ac) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_args_element_value_1 = par_host;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_require);
        tmp_args_element_value_3 = par_require;
        frame_6c71a3507ea9253f068865245b16b1ac->m_frame.f_lineno = 321;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_validated == NULL);
        var_validated = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_validated);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_validated);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_host);
        tmp_cmp_expr_left_1 = par_host;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[56]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_args_element_value_4 = par_host;
        frame_6c71a3507ea9253f068865245b16b1ac->m_frame.f_lineno = 322;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[48], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 322;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_args_element_value_5 = par_host;
        frame_6c71a3507ea9253f068865245b16b1ac->m_frame.f_lineno = 323;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_3;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_validated);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_validated);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(par_host);
        tmp_cmp_expr_left_2 = par_host;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_left_value_4 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[58]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_args_element_value_6 = par_host;
        frame_6c71a3507ea9253f068865245b16b1ac->m_frame.f_lineno = 324;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[48], tmp_args_element_value_6);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_and_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_and_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        tmp_condition_result_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_2 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[59]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_args_element_value_7 = par_host;
        frame_6c71a3507ea9253f068865245b16b1ac->m_frame.f_lineno = 325;
        tmp_cmp_expr_left_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[48], tmp_args_element_value_7);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_return_value = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_no_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c71a3507ea9253f068865245b16b1ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c71a3507ea9253f068865245b16b1ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c71a3507ea9253f068865245b16b1ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c71a3507ea9253f068865245b16b1ac,
        type_description_1,
        par_host,
        par_require,
        var_validated
    );


    // Release cached frame if used for exception.
    if (frame_6c71a3507ea9253f068865245b16b1ac == cache_frame_6c71a3507ea9253f068865245b16b1ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6c71a3507ea9253f068865245b16b1ac);
        cache_frame_6c71a3507ea9253f068865245b16b1ac = NULL;
    }

    assertFrameObject(frame_6c71a3507ea9253f068865245b16b1ac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_validated);
    tmp_return_value = var_validated;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_validated);
    Py_DECREF(var_validated);
    var_validated = NULL;
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

    Py_XDECREF(var_validated);
    var_validated = NULL;
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
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__16_scheme_is_valid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_scheme = python_pars[0];
    PyObject *par_require = python_pars[1];
    struct Nuitka_FrameObject *frame_7ef5389050231ef9f1c63ba9ef0a426d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ef5389050231ef9f1c63ba9ef0a426d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ef5389050231ef9f1c63ba9ef0a426d)) {
        Py_XDECREF(cache_frame_7ef5389050231ef9f1c63ba9ef0a426d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ef5389050231ef9f1c63ba9ef0a426d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ef5389050231ef9f1c63ba9ef0a426d = MAKE_FUNCTION_FRAME(codeobj_7ef5389050231ef9f1c63ba9ef0a426d, module_rfc3986$validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ef5389050231ef9f1c63ba9ef0a426d->m_type_description == NULL);
    frame_7ef5389050231ef9f1c63ba9ef0a426d = cache_frame_7ef5389050231ef9f1c63ba9ef0a426d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ef5389050231ef9f1c63ba9ef0a426d);
    assert(Py_REFCNT(frame_7ef5389050231ef9f1c63ba9ef0a426d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scheme);
        tmp_args_element_value_1 = par_scheme;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[61]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_require);
        tmp_args_element_value_3 = par_require;
        frame_7ef5389050231ef9f1c63ba9ef0a426d->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
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
        exception_tb = MAKE_TRACEBACK(frame_7ef5389050231ef9f1c63ba9ef0a426d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ef5389050231ef9f1c63ba9ef0a426d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ef5389050231ef9f1c63ba9ef0a426d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ef5389050231ef9f1c63ba9ef0a426d,
        type_description_1,
        par_scheme,
        par_require
    );


    // Release cached frame if used for exception.
    if (frame_7ef5389050231ef9f1c63ba9ef0a426d == cache_frame_7ef5389050231ef9f1c63ba9ef0a426d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ef5389050231ef9f1c63ba9ef0a426d);
        cache_frame_7ef5389050231ef9f1c63ba9ef0a426d = NULL;
    }

    assertFrameObject(frame_7ef5389050231ef9f1c63ba9ef0a426d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__17_path_is_valid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *par_require = python_pars[1];
    struct Nuitka_FrameObject *frame_f1f756576f8c77fd40120d5c4f956245;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f1f756576f8c77fd40120d5c4f956245 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f1f756576f8c77fd40120d5c4f956245)) {
        Py_XDECREF(cache_frame_f1f756576f8c77fd40120d5c4f956245);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f1f756576f8c77fd40120d5c4f956245 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f1f756576f8c77fd40120d5c4f956245 = MAKE_FUNCTION_FRAME(codeobj_f1f756576f8c77fd40120d5c4f956245, module_rfc3986$validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f1f756576f8c77fd40120d5c4f956245->m_type_description == NULL);
    frame_f1f756576f8c77fd40120d5c4f956245 = cache_frame_f1f756576f8c77fd40120d5c4f956245;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f1f756576f8c77fd40120d5c4f956245);
    assert(Py_REFCNT(frame_f1f756576f8c77fd40120d5c4f956245) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_require);
        tmp_args_element_value_3 = par_require;
        frame_f1f756576f8c77fd40120d5c4f956245->m_frame.f_lineno = 356;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
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
        exception_tb = MAKE_TRACEBACK(frame_f1f756576f8c77fd40120d5c4f956245, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f1f756576f8c77fd40120d5c4f956245->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f1f756576f8c77fd40120d5c4f956245, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f1f756576f8c77fd40120d5c4f956245,
        type_description_1,
        par_path,
        par_require
    );


    // Release cached frame if used for exception.
    if (frame_f1f756576f8c77fd40120d5c4f956245 == cache_frame_f1f756576f8c77fd40120d5c4f956245) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f1f756576f8c77fd40120d5c4f956245);
        cache_frame_f1f756576f8c77fd40120d5c4f956245 = NULL;
    }

    assertFrameObject(frame_f1f756576f8c77fd40120d5c4f956245);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__18_query_is_valid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_query = python_pars[0];
    PyObject *par_require = python_pars[1];
    struct Nuitka_FrameObject *frame_a5a84dbc7aee7f5407b6da030c2a132a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a5a84dbc7aee7f5407b6da030c2a132a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a5a84dbc7aee7f5407b6da030c2a132a)) {
        Py_XDECREF(cache_frame_a5a84dbc7aee7f5407b6da030c2a132a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a5a84dbc7aee7f5407b6da030c2a132a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a5a84dbc7aee7f5407b6da030c2a132a = MAKE_FUNCTION_FRAME(codeobj_a5a84dbc7aee7f5407b6da030c2a132a, module_rfc3986$validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a5a84dbc7aee7f5407b6da030c2a132a->m_type_description == NULL);
    frame_a5a84dbc7aee7f5407b6da030c2a132a = cache_frame_a5a84dbc7aee7f5407b6da030c2a132a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a5a84dbc7aee7f5407b6da030c2a132a);
    assert(Py_REFCNT(frame_a5a84dbc7aee7f5407b6da030c2a132a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_query);
        tmp_args_element_value_1 = par_query;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[65]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_require);
        tmp_args_element_value_3 = par_require;
        frame_a5a84dbc7aee7f5407b6da030c2a132a->m_frame.f_lineno = 371;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
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
        exception_tb = MAKE_TRACEBACK(frame_a5a84dbc7aee7f5407b6da030c2a132a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5a84dbc7aee7f5407b6da030c2a132a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5a84dbc7aee7f5407b6da030c2a132a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a5a84dbc7aee7f5407b6da030c2a132a,
        type_description_1,
        par_query,
        par_require
    );


    // Release cached frame if used for exception.
    if (frame_a5a84dbc7aee7f5407b6da030c2a132a == cache_frame_a5a84dbc7aee7f5407b6da030c2a132a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a5a84dbc7aee7f5407b6da030c2a132a);
        cache_frame_a5a84dbc7aee7f5407b6da030c2a132a = NULL;
    }

    assertFrameObject(frame_a5a84dbc7aee7f5407b6da030c2a132a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_query);
    Py_DECREF(par_query);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__19_fragment_is_valid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fragment = python_pars[0];
    PyObject *par_require = python_pars[1];
    struct Nuitka_FrameObject *frame_22a6990d4175f26b185b4f54716c124a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_22a6990d4175f26b185b4f54716c124a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_22a6990d4175f26b185b4f54716c124a)) {
        Py_XDECREF(cache_frame_22a6990d4175f26b185b4f54716c124a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_22a6990d4175f26b185b4f54716c124a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_22a6990d4175f26b185b4f54716c124a = MAKE_FUNCTION_FRAME(codeobj_22a6990d4175f26b185b4f54716c124a, module_rfc3986$validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_22a6990d4175f26b185b4f54716c124a->m_type_description == NULL);
    frame_22a6990d4175f26b185b4f54716c124a = cache_frame_22a6990d4175f26b185b4f54716c124a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_22a6990d4175f26b185b4f54716c124a);
    assert(Py_REFCNT(frame_22a6990d4175f26b185b4f54716c124a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fragment);
        tmp_args_element_value_1 = par_fragment;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_require);
        tmp_args_element_value_3 = par_require;
        frame_22a6990d4175f26b185b4f54716c124a->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
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
        exception_tb = MAKE_TRACEBACK(frame_22a6990d4175f26b185b4f54716c124a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_22a6990d4175f26b185b4f54716c124a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_22a6990d4175f26b185b4f54716c124a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_22a6990d4175f26b185b4f54716c124a,
        type_description_1,
        par_fragment,
        par_require
    );


    // Release cached frame if used for exception.
    if (frame_22a6990d4175f26b185b4f54716c124a == cache_frame_22a6990d4175f26b185b4f54716c124a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_22a6990d4175f26b185b4f54716c124a);
        cache_frame_22a6990d4175f26b185b4f54716c124a = NULL;
    }

    assertFrameObject(frame_22a6990d4175f26b185b4f54716c124a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fragment);
    Py_DECREF(par_fragment);
    CHECK_OBJECT(par_require);
    Py_DECREF(par_require);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__20_valid_ipv4_host_address(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_host = python_pars[0];
    PyObject *outline_0_var_byte = NULL;
    PyObject *tmp_listcomp$comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_listcomp$comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_056e7563cd2f9732167050d5acc4f672;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_d9a5afaa18f4bcb4e51835a1c1607946_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d9a5afaa18f4bcb4e51835a1c1607946_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_056e7563cd2f9732167050d5acc4f672 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_056e7563cd2f9732167050d5acc4f672)) {
        Py_XDECREF(cache_frame_056e7563cd2f9732167050d5acc4f672);

#if _DEBUG_REFCOUNTS
        if (cache_frame_056e7563cd2f9732167050d5acc4f672 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_056e7563cd2f9732167050d5acc4f672 = MAKE_FUNCTION_FRAME(codeobj_056e7563cd2f9732167050d5acc4f672, module_rfc3986$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_056e7563cd2f9732167050d5acc4f672->m_type_description == NULL);
    frame_056e7563cd2f9732167050d5acc4f672 = cache_frame_056e7563cd2f9732167050d5acc4f672;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_056e7563cd2f9732167050d5acc4f672);
    assert(Py_REFCNT(frame_056e7563cd2f9732167050d5acc4f672) == 2);

    // Framed code:
    {
        PyObject *tmp_all_arg_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(par_host);
            tmp_expression_value_1 = par_host;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            frame_056e7563cd2f9732167050d5acc4f672->m_frame.f_lineno = 393;
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[69]);

            Py_DECREF(tmp_called_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
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
        if (isFrameUnusable(cache_frame_d9a5afaa18f4bcb4e51835a1c1607946_2)) {
            Py_XDECREF(cache_frame_d9a5afaa18f4bcb4e51835a1c1607946_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d9a5afaa18f4bcb4e51835a1c1607946_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d9a5afaa18f4bcb4e51835a1c1607946_2 = MAKE_FUNCTION_FRAME(codeobj_d9a5afaa18f4bcb4e51835a1c1607946, module_rfc3986$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_d9a5afaa18f4bcb4e51835a1c1607946_2->m_type_description == NULL);
        frame_d9a5afaa18f4bcb4e51835a1c1607946_2 = cache_frame_d9a5afaa18f4bcb4e51835a1c1607946_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d9a5afaa18f4bcb4e51835a1c1607946_2);
        assert(Py_REFCNT(frame_d9a5afaa18f4bcb4e51835a1c1607946_2) == 2);

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
                    exception_lineno = 393;
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
                PyObject *old = outline_0_var_byte;
                outline_0_var_byte = tmp_assign_source_4;
                Py_INCREF(outline_0_var_byte);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            // Tried code:
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_value_value_1;
                PyObject *tmp_base_value_1;
                CHECK_OBJECT(outline_0_var_byte);
                tmp_value_value_1 = outline_0_var_byte;
                tmp_base_value_1 = mod_consts[16];
                tmp_assign_source_5 = BUILTIN_INT2(tmp_value_value_1, tmp_base_value_1);
                if (tmp_assign_source_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 393;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
                {
                    PyObject *old = tmp_listcomp$comparison_chain_1__operand_2;
                    tmp_listcomp$comparison_chain_1__operand_2 = tmp_assign_source_5;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_6;
                nuitka_digit tmp_cmp_expr_left_1;
                PyObject *tmp_cmp_expr_right_1;
                bool tmp_tmp_assign_source_6_cbool_1;
                tmp_cmp_expr_left_1 = 0;
                CHECK_OBJECT(tmp_listcomp$comparison_chain_1__operand_2);
                tmp_cmp_expr_right_1 = tmp_listcomp$comparison_chain_1__operand_2;
                tmp_tmp_assign_source_6_cbool_1 = RICH_COMPARE_GE_CBOOL_LONG_DIGIT(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
                tmp_assign_source_6 = (tmp_tmp_assign_source_6_cbool_1 != false) ? Py_True : Py_False;
                {
                    PyObject *old = tmp_listcomp$comparison_chain_1__comparison_result;
                    tmp_listcomp$comparison_chain_1__comparison_result = tmp_assign_source_6;
                    Py_INCREF(tmp_listcomp$comparison_chain_1__comparison_result);
                    Py_XDECREF(old);
                }

            }
            {
                bool tmp_condition_result_1;
                PyObject *tmp_operand_value_1;
                CHECK_OBJECT(tmp_listcomp$comparison_chain_1__comparison_result);
                tmp_operand_value_1 = tmp_listcomp$comparison_chain_1__comparison_result;
                tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 393;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
                tmp_condition_result_1 = (tmp_res == 0) ? true : false;
                if (tmp_condition_result_1 != false) {
                    goto branch_yes_1;
                } else {
                    goto branch_no_1;
                }
            }
            branch_yes_1:;
            CHECK_OBJECT(tmp_listcomp$comparison_chain_1__comparison_result);
            tmp_append_value_1 = tmp_listcomp$comparison_chain_1__comparison_result;
            Py_INCREF(tmp_append_value_1);
            goto try_return_handler_3;
            branch_no_1:;
            {
                PyObject *tmp_cmp_expr_left_2;
                nuitka_digit tmp_cmp_expr_right_2;
                bool tmp_tmp_append_value_1_cbool_1;
                CHECK_OBJECT(tmp_listcomp$comparison_chain_1__operand_2);
                tmp_cmp_expr_left_2 = tmp_listcomp$comparison_chain_1__operand_2;
                tmp_cmp_expr_right_2 = 255;
                tmp_tmp_append_value_1_cbool_1 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
                tmp_append_value_1 = (tmp_tmp_append_value_1_cbool_1 != false) ? Py_True : Py_False;
                Py_INCREF(tmp_append_value_1);
                goto try_return_handler_3;
            }
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            CHECK_OBJECT(tmp_listcomp$comparison_chain_1__operand_2);
            Py_DECREF(tmp_listcomp$comparison_chain_1__operand_2);
            tmp_listcomp$comparison_chain_1__operand_2 = NULL;
            CHECK_OBJECT(tmp_listcomp$comparison_chain_1__comparison_result);
            Py_DECREF(tmp_listcomp$comparison_chain_1__comparison_result);
            tmp_listcomp$comparison_chain_1__comparison_result = NULL;
            goto outline_result_2;
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

            Py_XDECREF(tmp_listcomp$comparison_chain_1__operand_2);
            tmp_listcomp$comparison_chain_1__operand_2 = NULL;
            Py_XDECREF(tmp_listcomp$comparison_chain_1__comparison_result);
            tmp_listcomp$comparison_chain_1__comparison_result = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto try_except_handler_2;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_result_2:;
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_all_arg_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_all_arg_1);
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
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
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
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

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
            exception_tb = MAKE_TRACEBACK(frame_d9a5afaa18f4bcb4e51835a1c1607946_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d9a5afaa18f4bcb4e51835a1c1607946_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d9a5afaa18f4bcb4e51835a1c1607946_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d9a5afaa18f4bcb4e51835a1c1607946_2,
            type_description_2,
            outline_0_var_byte
        );


        // Release cached frame if used for exception.
        if (frame_d9a5afaa18f4bcb4e51835a1c1607946_2 == cache_frame_d9a5afaa18f4bcb4e51835a1c1607946_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_d9a5afaa18f4bcb4e51835a1c1607946_2);
            cache_frame_d9a5afaa18f4bcb4e51835a1c1607946_2 = NULL;
        }

        assertFrameObject(frame_d9a5afaa18f4bcb4e51835a1c1607946_2);

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
        Py_XDECREF(outline_0_var_byte);
        outline_0_var_byte = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_byte);
        outline_0_var_byte = NULL;
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
        exception_lineno = 393;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_return_value = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_056e7563cd2f9732167050d5acc4f672, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_056e7563cd2f9732167050d5acc4f672->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_056e7563cd2f9732167050d5acc4f672, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_056e7563cd2f9732167050d5acc4f672,
        type_description_1,
        par_host
    );


    // Release cached frame if used for exception.
    if (frame_056e7563cd2f9732167050d5acc4f672 == cache_frame_056e7563cd2f9732167050d5acc4f672) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_056e7563cd2f9732167050d5acc4f672);
        cache_frame_056e7563cd2f9732167050d5acc4f672 = NULL;
    }

    assertFrameObject(frame_056e7563cd2f9732167050d5acc4f672);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__21_subauthority_component_is_valid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[0];
    PyObject *par_component = python_pars[1];
    PyObject *var_subauthority_dict = NULL;
    PyObject *var_port = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_294f4f03333b7cf03e7b13f3f0189e7d;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_294f4f03333b7cf03e7b13f3f0189e7d = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_294f4f03333b7cf03e7b13f3f0189e7d)) {
        Py_XDECREF(cache_frame_294f4f03333b7cf03e7b13f3f0189e7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_294f4f03333b7cf03e7b13f3f0189e7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_294f4f03333b7cf03e7b13f3f0189e7d = MAKE_FUNCTION_FRAME(codeobj_294f4f03333b7cf03e7b13f3f0189e7d, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_294f4f03333b7cf03e7b13f3f0189e7d->m_type_description == NULL);
    frame_294f4f03333b7cf03e7b13f3f0189e7d = cache_frame_294f4f03333b7cf03e7b13f3f0189e7d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_294f4f03333b7cf03e7b13f3f0189e7d);
    assert(Py_REFCNT(frame_294f4f03333b7cf03e7b13f3f0189e7d) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_uri);
        tmp_called_instance_1 = par_uri;
        frame_294f4f03333b7cf03e7b13f3f0189e7d->m_frame.f_lineno = 409;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[71]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_subauthority_dict == NULL);
        var_subauthority_dict = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_294f4f03333b7cf03e7b13f3f0189e7d, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_294f4f03333b7cf03e7b13f3f0189e7d, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooo";
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 408;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_294f4f03333b7cf03e7b13f3f0189e7d->m_frame) frame_294f4f03333b7cf03e7b13f3f0189e7d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
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
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_component);
        tmp_cmp_expr_left_2 = par_component;
        tmp_cmp_expr_right_2 = mod_consts[34];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_subauthority_dict);
        tmp_expression_value_2 = var_subauthority_dict;
        tmp_subscript_value_1 = mod_consts[34];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_294f4f03333b7cf03e7b13f3f0189e7d->m_frame.f_lineno = 416;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_component);
        tmp_cmp_expr_left_3 = par_component;
        tmp_cmp_expr_right_3 = mod_consts[35];
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
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
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    branch_end_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_subauthority_dict);
        tmp_expression_value_3 = var_subauthority_dict;
        tmp_subscript_value_2 = mod_consts[35];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert(var_port == NULL);
        var_port = tmp_assign_source_2;
    }
    goto try_end_2;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_294f4f03333b7cf03e7b13f3f0189e7d, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_294f4f03333b7cf03e7b13f3f0189e7d, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_5;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 420;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_294f4f03333b7cf03e7b13f3f0189e7d->m_frame) frame_294f4f03333b7cf03e7b13f3f0189e7d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_5;
    branch_end_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto frame_return_exit_1;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(var_port);
        tmp_assign_source_3 = var_port;
        assert(tmp_comparison_chain_1__operand_2 == NULL);
        Py_INCREF(tmp_assign_source_3);
        tmp_comparison_chain_1__operand_2 = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = mod_consts[73];
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        tmp_cmp_expr_right_5 = tmp_comparison_chain_1__operand_2;
        tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooo";
            goto try_except_handler_6;
        }
        assert(tmp_comparison_chain_1__comparison_result == NULL);
        tmp_comparison_chain_1__comparison_result = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
    tmp_return_value = tmp_comparison_chain_1__comparison_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_6;
    branch_no_5:;
    {
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        tmp_cmp_expr_left_6 = tmp_comparison_chain_1__operand_2;
        tmp_cmp_expr_right_6 = mod_consts[74];
        tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooo";
            goto try_except_handler_6;
        }
        goto try_return_handler_6;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
    Py_DECREF(tmp_comparison_chain_1__operand_2);
    tmp_comparison_chain_1__operand_2 = NULL;
    CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
    Py_DECREF(tmp_comparison_chain_1__comparison_result);
    tmp_comparison_chain_1__comparison_result = NULL;
    goto outline_result_1;
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

    CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
    Py_DECREF(tmp_comparison_chain_1__operand_2);
    tmp_comparison_chain_1__operand_2 = NULL;
    Py_XDECREF(tmp_comparison_chain_1__comparison_result);
    tmp_comparison_chain_1__comparison_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_result_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_294f4f03333b7cf03e7b13f3f0189e7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_294f4f03333b7cf03e7b13f3f0189e7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_294f4f03333b7cf03e7b13f3f0189e7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_294f4f03333b7cf03e7b13f3f0189e7d,
        type_description_1,
        par_uri,
        par_component,
        var_subauthority_dict,
        var_port
    );


    // Release cached frame if used for exception.
    if (frame_294f4f03333b7cf03e7b13f3f0189e7d == cache_frame_294f4f03333b7cf03e7b13f3f0189e7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_294f4f03333b7cf03e7b13f3f0189e7d);
        cache_frame_294f4f03333b7cf03e7b13f3f0189e7d = NULL;
    }

    assertFrameObject(frame_294f4f03333b7cf03e7b13f3f0189e7d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_subauthority_dict);
    var_subauthority_dict = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
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

    Py_XDECREF(var_subauthority_dict);
    var_subauthority_dict = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
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
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_component);
    Py_DECREF(par_component);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_component);
    Py_DECREF(par_component);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_rfc3986$validators$$$function__22_ensure_components_are_valid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[0];
    PyObject *par_validated_components = python_pars[1];
    PyObject *var_invalid_components = NULL;
    PyObject *var_component = NULL;
    PyObject *var_validator = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8444ec55eb5603a5172198ef3ba4f69f;
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
    static struct Nuitka_FrameObject *cache_frame_8444ec55eb5603a5172198ef3ba4f69f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PySet_New(NULL);
        assert(var_invalid_components == NULL);
        var_invalid_components = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_8444ec55eb5603a5172198ef3ba4f69f)) {
        Py_XDECREF(cache_frame_8444ec55eb5603a5172198ef3ba4f69f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8444ec55eb5603a5172198ef3ba4f69f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8444ec55eb5603a5172198ef3ba4f69f = MAKE_FUNCTION_FRAME(codeobj_8444ec55eb5603a5172198ef3ba4f69f, module_rfc3986$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8444ec55eb5603a5172198ef3ba4f69f->m_type_description == NULL);
    frame_8444ec55eb5603a5172198ef3ba4f69f = cache_frame_8444ec55eb5603a5172198ef3ba4f69f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8444ec55eb5603a5172198ef3ba4f69f);
    assert(Py_REFCNT(frame_8444ec55eb5603a5172198ef3ba4f69f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_validated_components);
        tmp_iter_arg_1 = par_validated_components;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 433;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_component;
            var_component = tmp_assign_source_4;
            Py_INCREF(var_component);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_component);
        tmp_cmp_expr_left_1 = var_component;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_uri == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 435;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = par_uri;
        CHECK_OBJECT(var_component);
        tmp_args_element_value_2 = var_component;
        frame_8444ec55eb5603a5172198ef3ba4f69f->m_frame.f_lineno = 435;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        if (var_invalid_components == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = var_invalid_components;
        CHECK_OBJECT(var_component);
        tmp_args_element_value_3 = var_component;
        frame_8444ec55eb5603a5172198ef3ba4f69f->m_frame.f_lineno = 436;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[10], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    goto loop_start_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_component);
        tmp_subscript_value_1 = var_component;
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_validator;
            var_validator = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(var_validator);
        tmp_called_value_2 = var_validator;
        if (par_uri == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 443;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_getattr_target_1 = par_uri;
        CHECK_OBJECT(var_component);
        tmp_getattr_attr_1 = var_component;
        tmp_args_element_value_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_8444ec55eb5603a5172198ef3ba4f69f->m_frame.f_lineno = 443;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        if (var_invalid_components == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_invalid_components;
        CHECK_OBJECT(var_component);
        tmp_args_element_value_5 = var_component;
        frame_8444ec55eb5603a5172198ef3ba4f69f->m_frame.f_lineno = 444;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[10], tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 433;
        type_description_1 = "ooooo";
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
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        if (var_invalid_components == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_invalid_components);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[80]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_uri == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 447;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_uri;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (var_invalid_components == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 447;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = var_invalid_components;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_raise_type_1 = impl___main__$$$function__15_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 447;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8444ec55eb5603a5172198ef3ba4f69f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8444ec55eb5603a5172198ef3ba4f69f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8444ec55eb5603a5172198ef3ba4f69f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8444ec55eb5603a5172198ef3ba4f69f,
        type_description_1,
        par_uri,
        par_validated_components,
        var_invalid_components,
        var_component,
        var_validator
    );


    // Release cached frame if used for exception.
    if (frame_8444ec55eb5603a5172198ef3ba4f69f == cache_frame_8444ec55eb5603a5172198ef3ba4f69f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8444ec55eb5603a5172198ef3ba4f69f);
        cache_frame_8444ec55eb5603a5172198ef3ba4f69f = NULL;
    }

    assertFrameObject(frame_8444ec55eb5603a5172198ef3ba4f69f);

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
    Py_XDECREF(var_invalid_components);
    var_invalid_components = NULL;
    Py_XDECREF(var_component);
    var_component = NULL;
    Py_XDECREF(var_validator);
    var_validator = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_invalid_components);
    var_invalid_components = NULL;
    Py_XDECREF(var_component);
    var_component = NULL;
    Py_XDECREF(var_validator);
    var_validator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_validated_components);
    Py_DECREF(par_validated_components);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_validated_components);
    Py_DECREF(par_validated_components);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__10_check_password() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__10_check_password,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_04bff987b9edbe43c5dce2cf20af1b42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__11_ensure_one_of() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__11_ensure_one_of,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_02603e5504b63421f17206fea69be5d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__12_ensure_required_components_exist() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__12_ensure_required_components_exist,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa54229593ea5bd3c762a61727ddd2fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__13_is_valid() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__13_is_valid,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cb61c1890ea7aa361006f338cc6fe939,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__14_authority_is_valid(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__14_authority_is_valid,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_63d2e222823c3fb1d18b63dd8b7a7149,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__15_host_is_valid(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__15_host_is_valid,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6c71a3507ea9253f068865245b16b1ac,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__16_scheme_is_valid(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__16_scheme_is_valid,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ef5389050231ef9f1c63ba9ef0a426d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__17_path_is_valid(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__17_path_is_valid,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f1f756576f8c77fd40120d5c4f956245,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__18_query_is_valid(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__18_query_is_valid,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a5a84dbc7aee7f5407b6da030c2a132a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__19_fragment_is_valid(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__19_fragment_is_valid,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22a6990d4175f26b185b4f54716c124a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__1___init__,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_24440fb33375405ffb893b35b80ffd42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__20_valid_ipv4_host_address() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__20_valid_ipv4_host_address,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_056e7563cd2f9732167050d5acc4f672,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__21_subauthority_component_is_valid() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__21_subauthority_component_is_valid,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_294f4f03333b7cf03e7b13f3f0189e7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[75],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__22_ensure_components_are_valid() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__22_ensure_components_are_valid,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8444ec55eb5603a5172198ef3ba4f69f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[81],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__2_allow_schemes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__2_allow_schemes,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_80448b8a44b44fa78618f62fde8e1abb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__3_allow_hosts() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__3_allow_hosts,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_cb4c1889f7013b88bcba5909bf5ef123,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__4_allow_ports() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__4_allow_ports,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_1d79c239eabe6500cae74a93a20e8fda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__5_allow_use_of_password() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__5_allow_use_of_password,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_a9fb9bad9994c0a9f455c1b87432a0a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__6_forbid_use_of_password() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__6_forbid_use_of_password,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_9fb914497f35181759377a53225ebecf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__7_check_validity_of() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__7_check_validity_of,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_964813e62040d181d427701c1adfc92a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__8_require_presence_of() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__8_require_presence_of,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_8206a7cface950f786714952edc0c867,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rfc3986$validators$$$function__9_validate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rfc3986$validators$$$function__9_validate,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_688a09613dbb7bde7f4c91d6001790af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_rfc3986$validators,
        mod_consts[36],
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

function_impl_code functable_rfc3986$validators[] = {
    impl_rfc3986$validators$$$function__1___init__,
    impl_rfc3986$validators$$$function__2_allow_schemes,
    impl_rfc3986$validators$$$function__3_allow_hosts,
    impl_rfc3986$validators$$$function__4_allow_ports,
    impl_rfc3986$validators$$$function__5_allow_use_of_password,
    impl_rfc3986$validators$$$function__6_forbid_use_of_password,
    impl_rfc3986$validators$$$function__7_check_validity_of,
    impl_rfc3986$validators$$$function__8_require_presence_of,
    impl_rfc3986$validators$$$function__9_validate,
    impl_rfc3986$validators$$$function__10_check_password,
    impl_rfc3986$validators$$$function__11_ensure_one_of,
    impl_rfc3986$validators$$$function__12_ensure_required_components_exist,
    impl_rfc3986$validators$$$function__13_is_valid,
    impl_rfc3986$validators$$$function__14_authority_is_valid,
    impl_rfc3986$validators$$$function__15_host_is_valid,
    impl_rfc3986$validators$$$function__16_scheme_is_valid,
    impl_rfc3986$validators$$$function__17_path_is_valid,
    impl_rfc3986$validators$$$function__18_query_is_valid,
    impl_rfc3986$validators$$$function__19_fragment_is_valid,
    impl_rfc3986$validators$$$function__20_valid_ipv4_host_address,
    impl_rfc3986$validators$$$function__21_subauthority_component_is_valid,
    impl_rfc3986$validators$$$function__22_ensure_components_are_valid,
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

    function_impl_code *current = functable_rfc3986$validators;
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

    if (offset > sizeof(functable_rfc3986$validators) || offset < 0) {
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
        functable_rfc3986$validators[offset],
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
        module_rfc3986$validators,
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
PyObject *modulecode_rfc3986$validators(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("rfc3986.validators");

    // Store the module for future use.
    module_rfc3986$validators = module;

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
        PRINT_STRING("rfc3986.validators: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("rfc3986.validators: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("rfc3986.validators: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initrfc3986$validators\n");

    moduledict_rfc3986$validators = MODULE_DICT(module_rfc3986$validators);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_rfc3986$validators,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_rfc3986$validators,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[90]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_rfc3986$validators,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_rfc3986$validators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_rfc3986$validators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_rfc3986$validators);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_rfc3986$validators, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_rfc3986$validators, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_rfc3986$validators, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_rfc3986$validators);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_5265afaf64f83900185616374173f7d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_rfc3986$validators$$$class__1_Validator_21 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_35904c1a539f7389ef37eb5f01352226_2;
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
        tmp_assign_source_1 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_2);
    }
    frame_5265afaf64f83900185616374173f7d0 = MAKE_MODULE_FRAME(codeobj_5265afaf64f83900185616374173f7d0, module_rfc3986$validators);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5265afaf64f83900185616374173f7d0);
    assert(Py_REFCNT(frame_5265afaf64f83900185616374173f7d0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[84];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[87], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[88], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[90];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_rfc3986$validators;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[91];
        tmp_level_value_1 = mod_consts[92];
        frame_5265afaf64f83900185616374173f7d0->m_frame.f_lineno = 16;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_rfc3986$validators,
                mod_consts[40],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[90];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_rfc3986$validators;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[93];
        tmp_level_value_2 = mod_consts[92];
        frame_5265afaf64f83900185616374173f7d0->m_frame.f_lineno = 17;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_rfc3986$validators,
                mod_consts[51],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[51]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[90];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_rfc3986$validators;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[94];
        tmp_level_value_3 = mod_consts[92];
        frame_5265afaf64f83900185616374173f7d0->m_frame.f_lineno = 18;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_rfc3986$validators,
                mod_consts[11],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[95];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_7 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
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


            exception_lineno = 21;

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
        tmp_subscript_value_1 = mod_consts[73];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_9 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[96]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[96]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[97];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_5265afaf64f83900185616374173f7d0->m_frame.f_lineno = 21;
        tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[98]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[99];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[100];
        tmp_getattr_default_1 = mod_consts[101];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[100]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 21;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_rfc3986$validators$$$class__1_Validator_21 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[102];
        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[103], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[83], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        frame_35904c1a539f7389ef37eb5f01352226_2 = MAKE_CLASS_FRAME(codeobj_35904c1a539f7389ef37eb5f01352226, module_rfc3986$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_35904c1a539f7389ef37eb5f01352226_2);
        assert(Py_REFCNT(frame_35904c1a539f7389ef37eb5f01352226_2) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_call_arg_element_1;
            tmp_res = MAPPING_HAS_ITEM(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[106]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[106]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[106]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_call_arg_element_1 = MAKE_LIST7(mod_consts[107]);
            frame_35904c1a539f7389ef37eb5f01352226_2->m_frame.f_lineno = 48;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_call_arg_element_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_call_arg_element_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_dictset_value = mod_consts[108];
            Py_INCREF(tmp_dictset_value);
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_rfc3986$validators$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[109], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_rfc3986$validators$$$function__2_allow_schemes();

        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[111], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_rfc3986$validators$$$function__3_allow_hosts();

        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[113], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_rfc3986$validators$$$function__4_allow_ports();

        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[115], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_rfc3986$validators$$$function__5_allow_use_of_password();

        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_rfc3986$validators$$$function__6_forbid_use_of_password();

        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[119], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_rfc3986$validators$$$function__7_check_validity_of();

        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[121], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_rfc3986$validators$$$function__8_require_presence_of();

        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[123], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_rfc3986$validators$$$function__9_validate();

        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[125], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_35904c1a539f7389ef37eb5f01352226_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_35904c1a539f7389ef37eb5f01352226_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_35904c1a539f7389ef37eb5f01352226_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_35904c1a539f7389ef37eb5f01352226_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_35904c1a539f7389ef37eb5f01352226_2);

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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[95];
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[95];
        tmp_res = PyObject_SetItem(locals_rfc3986$validators$$$class__1_Validator_21, mod_consts[127], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[97];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_rfc3986$validators$$$class__1_Validator_21;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_5265afaf64f83900185616374173f7d0->m_frame.f_lineno = 21;
            tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_13;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_12 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_rfc3986$validators$$$class__1_Validator_21);
        locals_rfc3986$validators$$$class__1_Validator_21 = NULL;
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

        Py_DECREF(locals_rfc3986$validators$$$class__1_Validator_21);
        locals_rfc3986$validators$$$class__1_Validator_21 = NULL;
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
        exception_lineno = 21;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_12);
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
        exception_tb = MAKE_TRACEBACK(frame_5265afaf64f83900185616374173f7d0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5265afaf64f83900185616374173f7d0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5265afaf64f83900185616374173f7d0, exception_lineno);
    }



    assertFrameObject(frame_5265afaf64f83900185616374173f7d0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
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
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_rfc3986$validators$$$function__10_check_password();

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_rfc3986$validators$$$function__11_ensure_one_of();

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_rfc3986$validators$$$function__12_ensure_required_components_exist();

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_rfc3986$validators$$$function__13_is_valid();

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[128];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_18 = MAKE_FUNCTION_rfc3986$validators$$$function__14_authority_is_valid(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[130];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_19 = MAKE_FUNCTION_rfc3986$validators$$$function__15_host_is_valid(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[130];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_20 = MAKE_FUNCTION_rfc3986$validators$$$function__16_scheme_is_valid(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[130];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_21 = MAKE_FUNCTION_rfc3986$validators$$$function__17_path_is_valid(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[130];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_22 = MAKE_FUNCTION_rfc3986$validators$$$function__18_query_is_valid(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = mod_consts[130];
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_23 = MAKE_FUNCTION_rfc3986$validators$$$function__19_fragment_is_valid(tmp_defaults_6);

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_rfc3986$validators$$$function__20_valid_ipv4_host_address();

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[33];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_assign_source_25 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[135];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[136];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[137];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PySet_New(mod_consts[138]);
        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_rfc3986$validators$$$function__21_subauthority_component_is_valid();

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_rfc3986$validators$$$function__22_ensure_components_are_valid();

        UPDATE_STRING_DICT1(moduledict_rfc3986$validators, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_28);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("rfc3986.validators", false);

    Py_INCREF(module_rfc3986$validators);
    return module_rfc3986$validators;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rfc3986$validators, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("rfc3986$validators", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
