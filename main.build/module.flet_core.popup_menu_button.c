/* Generated code for Python module 'flet_core.popup_menu_button'
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

/* The "module_flet_core$popup_menu_button" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$popup_menu_button;
PyDictObject *moduledict_flet_core$popup_menu_button;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[131];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[131];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.popup_menu_button"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 131; i++) {
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
void checkModuleConstants_flet_core$popup_menu_button(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 131; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6968df251bbf2d1bd3facb1f35933948;
static PyCodeObject *codeobj_0bd6ccded88f64faa200fb8086f151ca;
static PyCodeObject *codeobj_d322e0c387c1128a63156dabf00b7a57;
static PyCodeObject *codeobj_c8036da525be3504132fb5132446832d;
static PyCodeObject *codeobj_41497795ac1a3158c0a71d0e5bdef6a8;
static PyCodeObject *codeobj_bd2174e89f13b4738509cf5ccee92637;
static PyCodeObject *codeobj_5372f0c69343a0e1b358b7569ed1462f;
static PyCodeObject *codeobj_fafbff147a8ae609a706d70d81c04db3;
static PyCodeObject *codeobj_0fe55cbfae2918cadf719f2cfe33ac56;
static PyCodeObject *codeobj_b2e88c9fb1e3d988ae31a9bfce761a02;
static PyCodeObject *codeobj_cf18950f04141ba832a921d0da83ead2;
static PyCodeObject *codeobj_06db22350fb75e3eb39b9910e1d2d363;
static PyCodeObject *codeobj_c2e252a32fbed26167b5afacad012b80;
static PyCodeObject *codeobj_7d6bc19de52f5adbe5723839d9c81fa8;
static PyCodeObject *codeobj_e337b3a028c7d72255c7ab85bf6dab4f;
static PyCodeObject *codeobj_795b7217f575147bf018a25672f3841b;
static PyCodeObject *codeobj_ddb6021c1d1730e883ae5df7d99ea535;
static PyCodeObject *codeobj_df274c34c6645cd9b3751330988f4749;
static PyCodeObject *codeobj_2eafb913169cd632f80f2b2168feeede;
static PyCodeObject *codeobj_fa9c152daf737aa6361af3bbfd82941b;
static PyCodeObject *codeobj_56973615788e108f727539224dada8cb;
static PyCodeObject *codeobj_04270aa260337c32fbaf2b32ff37962a;
static PyCodeObject *codeobj_6f070534214d192d4ef1540b708bb064;
static PyCodeObject *codeobj_f73f5d1a8ab3c68c6dd25646889d5e40;
static PyCodeObject *codeobj_115dc4d16ae8d953736a5ced6c8ac898;
static PyCodeObject *codeobj_6c34f28ddf975640ee0618d277909b71;
static PyCodeObject *codeobj_b04da1ccf4ff553b64ed485a437d246b;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[32]; CHECK_OBJECT(module_filename_obj);
    codeobj_6968df251bbf2d1bd3facb1f35933948 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[122], mod_consts[122], NULL, NULL, 0, 0, 0);
    codeobj_0bd6ccded88f64faa200fb8086f151ca = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[123], NULL, 0, 0, 0);
    codeobj_d322e0c387c1128a63156dabf00b7a57 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[123], NULL, 0, 0, 0);
    codeobj_c8036da525be3504132fb5132446832d = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[124], NULL, 31, 0, 0);
    codeobj_41497795ac1a3158c0a71d0e5bdef6a8 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[125], NULL, 8, 0, 0);
    codeobj_bd2174e89f13b4738509cf5ccee92637 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[126], NULL, 1, 0, 0);
    codeobj_5372f0c69343a0e1b358b7569ed1462f = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[126], NULL, 1, 0, 0);
    codeobj_fafbff147a8ae609a706d70d81c04db3 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[127], NULL, 1, 0, 0);
    codeobj_0fe55cbfae2918cadf719f2cfe33ac56 = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[127], NULL, 1, 0, 0);
    codeobj_b2e88c9fb1e3d988ae31a9bfce761a02 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[127], NULL, 1, 0, 0);
    codeobj_cf18950f04141ba832a921d0da83ead2 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[128], NULL, 2, 0, 0);
    codeobj_06db22350fb75e3eb39b9910e1d2d363 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[127], NULL, 1, 0, 0);
    codeobj_c2e252a32fbed26167b5afacad012b80 = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[127], NULL, 1, 0, 0);
    codeobj_7d6bc19de52f5adbe5723839d9c81fa8 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[128], NULL, 2, 0, 0);
    codeobj_e337b3a028c7d72255c7ab85bf6dab4f = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[128], NULL, 2, 0, 0);
    codeobj_795b7217f575147bf018a25672f3841b = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[127], NULL, 1, 0, 0);
    codeobj_ddb6021c1d1730e883ae5df7d99ea535 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[127], NULL, 1, 0, 0);
    codeobj_df274c34c6645cd9b3751330988f4749 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[128], NULL, 2, 0, 0);
    codeobj_2eafb913169cd632f80f2b2168feeede = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[128], NULL, 2, 0, 0);
    codeobj_fa9c152daf737aa6361af3bbfd82941b = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[127], NULL, 1, 0, 0);
    codeobj_56973615788e108f727539224dada8cb = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[128], NULL, 2, 0, 0);
    codeobj_04270aa260337c32fbaf2b32ff37962a = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[127], NULL, 1, 0, 0);
    codeobj_6f070534214d192d4ef1540b708bb064 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[129], NULL, 2, 0, 0);
    codeobj_f73f5d1a8ab3c68c6dd25646889d5e40 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[127], NULL, 1, 0, 0);
    codeobj_115dc4d16ae8d953736a5ced6c8ac898 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[129], NULL, 2, 0, 0);
    codeobj_6c34f28ddf975640ee0618d277909b71 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[127], NULL, 1, 0, 0);
    codeobj_b04da1ccf4ff553b64ed485a437d246b = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[128], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__10_content();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__11_content();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__12_on_click();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__13_on_click();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__14___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__15__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__16__get_children();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__17_items(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__18_items(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__19_on_cancelled();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__20_on_cancelled();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__21_icon();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__22_icon();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__23_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__24_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__3__get_children();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__4_checked(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__5_checked(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__6_icon();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__7_icon();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__8_text();


static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__9_text();


// The module function definitions.
static PyObject *impl_flet_core$popup_menu_button$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ref = python_pars[1];
    PyObject *par_checked = python_pars[2];
    PyObject *par_icon = python_pars[3];
    PyObject *par_text = python_pars[4];
    PyObject *par_content = python_pars[5];
    PyObject *par_on_click = python_pars[6];
    PyObject *par_data = python_pars[7];
    struct Nuitka_FrameObject *frame_41497795ac1a3158c0a71d0e5bdef6a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_41497795ac1a3158c0a71d0e5bdef6a8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41497795ac1a3158c0a71d0e5bdef6a8)) {
        Py_XDECREF(cache_frame_41497795ac1a3158c0a71d0e5bdef6a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41497795ac1a3158c0a71d0e5bdef6a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41497795ac1a3158c0a71d0e5bdef6a8 = MAKE_FUNCTION_FRAME(codeobj_41497795ac1a3158c0a71d0e5bdef6a8, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41497795ac1a3158c0a71d0e5bdef6a8->m_type_description == NULL);
    frame_41497795ac1a3158c0a71d0e5bdef6a8 = cache_frame_41497795ac1a3158c0a71d0e5bdef6a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_41497795ac1a3158c0a71d0e5bdef6a8);
    assert(Py_REFCNT(frame_41497795ac1a3158c0a71d0e5bdef6a8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        frame_41497795ac1a3158c0a71d0e5bdef6a8->m_frame.f_lineno = 26;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_checked);
        tmp_assattr_value_1 = par_checked;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_icon);
        tmp_assattr_value_2 = par_icon;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_text);
        tmp_assattr_value_3 = par_text;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_content);
        tmp_assattr_value_5 = par_content;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_on_click);
        tmp_assattr_value_6 = par_on_click;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_data);
        tmp_assattr_value_7 = par_data;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41497795ac1a3158c0a71d0e5bdef6a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41497795ac1a3158c0a71d0e5bdef6a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41497795ac1a3158c0a71d0e5bdef6a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41497795ac1a3158c0a71d0e5bdef6a8,
        type_description_1,
        par_self,
        par_ref,
        par_checked,
        par_icon,
        par_text,
        par_content,
        par_on_click,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_41497795ac1a3158c0a71d0e5bdef6a8 == cache_frame_41497795ac1a3158c0a71d0e5bdef6a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41497795ac1a3158c0a71d0e5bdef6a8);
        cache_frame_41497795ac1a3158c0a71d0e5bdef6a8 = NULL;
    }

    assertFrameObject(frame_41497795ac1a3158c0a71d0e5bdef6a8);

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
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_checked);
    Py_DECREF(par_checked);
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_on_click);
    Py_DECREF(par_on_click);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_checked);
    Py_DECREF(par_checked);
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_on_click);
    Py_DECREF(par_on_click);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$popup_menu_button$$$function__3__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_children = NULL;
    struct Nuitka_FrameObject *frame_bd2174e89f13b4738509cf5ccee92637;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bd2174e89f13b4738509cf5ccee92637 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_children == NULL);
        var_children = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_bd2174e89f13b4738509cf5ccee92637)) {
        Py_XDECREF(cache_frame_bd2174e89f13b4738509cf5ccee92637);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd2174e89f13b4738509cf5ccee92637 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd2174e89f13b4738509cf5ccee92637 = MAKE_FUNCTION_FRAME(codeobj_bd2174e89f13b4738509cf5ccee92637, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bd2174e89f13b4738509cf5ccee92637->m_type_description == NULL);
    frame_bd2174e89f13b4738509cf5ccee92637 = cache_frame_bd2174e89f13b4738509cf5ccee92637;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bd2174e89f13b4738509cf5ccee92637);
    assert(Py_REFCNT(frame_bd2174e89f13b4738509cf5ccee92637) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 41;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bd2174e89f13b4738509cf5ccee92637->m_frame.f_lineno = 42;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_children);
        tmp_list_arg_value_1 = var_children;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_item_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    if (var_children == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 44;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_children;
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
        exception_tb = MAKE_TRACEBACK(frame_bd2174e89f13b4738509cf5ccee92637, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd2174e89f13b4738509cf5ccee92637->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd2174e89f13b4738509cf5ccee92637, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd2174e89f13b4738509cf5ccee92637,
        type_description_1,
        par_self,
        var_children
    );


    // Release cached frame if used for exception.
    if (frame_bd2174e89f13b4738509cf5ccee92637 == cache_frame_bd2174e89f13b4738509cf5ccee92637) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bd2174e89f13b4738509cf5ccee92637);
        cache_frame_bd2174e89f13b4738509cf5ccee92637 = NULL;
    }

    assertFrameObject(frame_bd2174e89f13b4738509cf5ccee92637);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_children);
    var_children = NULL;
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

    Py_XDECREF(var_children);
    var_children = NULL;
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


static PyObject *impl_flet_core$popup_menu_button$$$function__4_checked(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b2e88c9fb1e3d988ae31a9bfce761a02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b2e88c9fb1e3d988ae31a9bfce761a02 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b2e88c9fb1e3d988ae31a9bfce761a02)) {
        Py_XDECREF(cache_frame_b2e88c9fb1e3d988ae31a9bfce761a02);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2e88c9fb1e3d988ae31a9bfce761a02 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2e88c9fb1e3d988ae31a9bfce761a02 = MAKE_FUNCTION_FRAME(codeobj_b2e88c9fb1e3d988ae31a9bfce761a02, module_flet_core$popup_menu_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b2e88c9fb1e3d988ae31a9bfce761a02->m_type_description == NULL);
    frame_b2e88c9fb1e3d988ae31a9bfce761a02 = cache_frame_b2e88c9fb1e3d988ae31a9bfce761a02;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b2e88c9fb1e3d988ae31a9bfce761a02);
    assert(Py_REFCNT(frame_b2e88c9fb1e3d988ae31a9bfce761a02) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b2e88c9fb1e3d988ae31a9bfce761a02->m_frame.f_lineno = 49;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[14], 0), mod_consts[15]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
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
        exception_tb = MAKE_TRACEBACK(frame_b2e88c9fb1e3d988ae31a9bfce761a02, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2e88c9fb1e3d988ae31a9bfce761a02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2e88c9fb1e3d988ae31a9bfce761a02, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2e88c9fb1e3d988ae31a9bfce761a02,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b2e88c9fb1e3d988ae31a9bfce761a02 == cache_frame_b2e88c9fb1e3d988ae31a9bfce761a02) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b2e88c9fb1e3d988ae31a9bfce761a02);
        cache_frame_b2e88c9fb1e3d988ae31a9bfce761a02 = NULL;
    }

    assertFrameObject(frame_b2e88c9fb1e3d988ae31a9bfce761a02);

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


static PyObject *impl_flet_core$popup_menu_button$$$function__5_checked(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_cf18950f04141ba832a921d0da83ead2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cf18950f04141ba832a921d0da83ead2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf18950f04141ba832a921d0da83ead2)) {
        Py_XDECREF(cache_frame_cf18950f04141ba832a921d0da83ead2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf18950f04141ba832a921d0da83ead2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf18950f04141ba832a921d0da83ead2 = MAKE_FUNCTION_FRAME(codeobj_cf18950f04141ba832a921d0da83ead2, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf18950f04141ba832a921d0da83ead2->m_type_description == NULL);
    frame_cf18950f04141ba832a921d0da83ead2 = cache_frame_cf18950f04141ba832a921d0da83ead2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf18950f04141ba832a921d0da83ead2);
    assert(Py_REFCNT(frame_cf18950f04141ba832a921d0da83ead2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[3];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_cf18950f04141ba832a921d0da83ead2->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[16],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
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
        exception_tb = MAKE_TRACEBACK(frame_cf18950f04141ba832a921d0da83ead2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf18950f04141ba832a921d0da83ead2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf18950f04141ba832a921d0da83ead2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf18950f04141ba832a921d0da83ead2,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_cf18950f04141ba832a921d0da83ead2 == cache_frame_cf18950f04141ba832a921d0da83ead2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf18950f04141ba832a921d0da83ead2);
        cache_frame_cf18950f04141ba832a921d0da83ead2 = NULL;
    }

    assertFrameObject(frame_cf18950f04141ba832a921d0da83ead2);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$popup_menu_button$$$function__6_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_795b7217f575147bf018a25672f3841b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_795b7217f575147bf018a25672f3841b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_795b7217f575147bf018a25672f3841b)) {
        Py_XDECREF(cache_frame_795b7217f575147bf018a25672f3841b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_795b7217f575147bf018a25672f3841b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_795b7217f575147bf018a25672f3841b = MAKE_FUNCTION_FRAME(codeobj_795b7217f575147bf018a25672f3841b, module_flet_core$popup_menu_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_795b7217f575147bf018a25672f3841b->m_type_description == NULL);
    frame_795b7217f575147bf018a25672f3841b = cache_frame_795b7217f575147bf018a25672f3841b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_795b7217f575147bf018a25672f3841b);
    assert(Py_REFCNT(frame_795b7217f575147bf018a25672f3841b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_795b7217f575147bf018a25672f3841b->m_frame.f_lineno = 58;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[13],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
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
        exception_tb = MAKE_TRACEBACK(frame_795b7217f575147bf018a25672f3841b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_795b7217f575147bf018a25672f3841b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_795b7217f575147bf018a25672f3841b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_795b7217f575147bf018a25672f3841b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_795b7217f575147bf018a25672f3841b == cache_frame_795b7217f575147bf018a25672f3841b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_795b7217f575147bf018a25672f3841b);
        cache_frame_795b7217f575147bf018a25672f3841b = NULL;
    }

    assertFrameObject(frame_795b7217f575147bf018a25672f3841b);

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


static PyObject *impl_flet_core$popup_menu_button$$$function__7_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_df274c34c6645cd9b3751330988f4749;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_df274c34c6645cd9b3751330988f4749 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_df274c34c6645cd9b3751330988f4749)) {
        Py_XDECREF(cache_frame_df274c34c6645cd9b3751330988f4749);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df274c34c6645cd9b3751330988f4749 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df274c34c6645cd9b3751330988f4749 = MAKE_FUNCTION_FRAME(codeobj_df274c34c6645cd9b3751330988f4749, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_df274c34c6645cd9b3751330988f4749->m_type_description == NULL);
    frame_df274c34c6645cd9b3751330988f4749 = cache_frame_df274c34c6645cd9b3751330988f4749;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_df274c34c6645cd9b3751330988f4749);
    assert(Py_REFCNT(frame_df274c34c6645cd9b3751330988f4749) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[4];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_df274c34c6645cd9b3751330988f4749->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[16],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
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
        exception_tb = MAKE_TRACEBACK(frame_df274c34c6645cd9b3751330988f4749, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df274c34c6645cd9b3751330988f4749->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df274c34c6645cd9b3751330988f4749, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df274c34c6645cd9b3751330988f4749,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_df274c34c6645cd9b3751330988f4749 == cache_frame_df274c34c6645cd9b3751330988f4749) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_df274c34c6645cd9b3751330988f4749);
        cache_frame_df274c34c6645cd9b3751330988f4749 = NULL;
    }

    assertFrameObject(frame_df274c34c6645cd9b3751330988f4749);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$popup_menu_button$$$function__8_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6c34f28ddf975640ee0618d277909b71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6c34f28ddf975640ee0618d277909b71 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6c34f28ddf975640ee0618d277909b71)) {
        Py_XDECREF(cache_frame_6c34f28ddf975640ee0618d277909b71);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c34f28ddf975640ee0618d277909b71 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c34f28ddf975640ee0618d277909b71 = MAKE_FUNCTION_FRAME(codeobj_6c34f28ddf975640ee0618d277909b71, module_flet_core$popup_menu_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6c34f28ddf975640ee0618d277909b71->m_type_description == NULL);
    frame_6c34f28ddf975640ee0618d277909b71 = cache_frame_6c34f28ddf975640ee0618d277909b71;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6c34f28ddf975640ee0618d277909b71);
    assert(Py_REFCNT(frame_6c34f28ddf975640ee0618d277909b71) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6c34f28ddf975640ee0618d277909b71->m_frame.f_lineno = 67;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[13],
            PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
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
        exception_tb = MAKE_TRACEBACK(frame_6c34f28ddf975640ee0618d277909b71, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c34f28ddf975640ee0618d277909b71->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c34f28ddf975640ee0618d277909b71, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c34f28ddf975640ee0618d277909b71,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6c34f28ddf975640ee0618d277909b71 == cache_frame_6c34f28ddf975640ee0618d277909b71) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6c34f28ddf975640ee0618d277909b71);
        cache_frame_6c34f28ddf975640ee0618d277909b71 = NULL;
    }

    assertFrameObject(frame_6c34f28ddf975640ee0618d277909b71);

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


static PyObject *impl_flet_core$popup_menu_button$$$function__9_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_b04da1ccf4ff553b64ed485a437d246b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b04da1ccf4ff553b64ed485a437d246b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b04da1ccf4ff553b64ed485a437d246b)) {
        Py_XDECREF(cache_frame_b04da1ccf4ff553b64ed485a437d246b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b04da1ccf4ff553b64ed485a437d246b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b04da1ccf4ff553b64ed485a437d246b = MAKE_FUNCTION_FRAME(codeobj_b04da1ccf4ff553b64ed485a437d246b, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b04da1ccf4ff553b64ed485a437d246b->m_type_description == NULL);
    frame_b04da1ccf4ff553b64ed485a437d246b = cache_frame_b04da1ccf4ff553b64ed485a437d246b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b04da1ccf4ff553b64ed485a437d246b);
    assert(Py_REFCNT(frame_b04da1ccf4ff553b64ed485a437d246b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[5];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_b04da1ccf4ff553b64ed485a437d246b->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[16],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_b04da1ccf4ff553b64ed485a437d246b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b04da1ccf4ff553b64ed485a437d246b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b04da1ccf4ff553b64ed485a437d246b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b04da1ccf4ff553b64ed485a437d246b,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b04da1ccf4ff553b64ed485a437d246b == cache_frame_b04da1ccf4ff553b64ed485a437d246b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b04da1ccf4ff553b64ed485a437d246b);
        cache_frame_b04da1ccf4ff553b64ed485a437d246b = NULL;
    }

    assertFrameObject(frame_b04da1ccf4ff553b64ed485a437d246b);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$popup_menu_button$$$function__10_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_06db22350fb75e3eb39b9910e1d2d363;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_06db22350fb75e3eb39b9910e1d2d363 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_06db22350fb75e3eb39b9910e1d2d363)) {
        Py_XDECREF(cache_frame_06db22350fb75e3eb39b9910e1d2d363);

#if _DEBUG_REFCOUNTS
        if (cache_frame_06db22350fb75e3eb39b9910e1d2d363 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_06db22350fb75e3eb39b9910e1d2d363 = MAKE_FUNCTION_FRAME(codeobj_06db22350fb75e3eb39b9910e1d2d363, module_flet_core$popup_menu_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_06db22350fb75e3eb39b9910e1d2d363->m_type_description == NULL);
    frame_06db22350fb75e3eb39b9910e1d2d363 = cache_frame_06db22350fb75e3eb39b9910e1d2d363;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_06db22350fb75e3eb39b9910e1d2d363);
    assert(Py_REFCNT(frame_06db22350fb75e3eb39b9910e1d2d363) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
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
        exception_tb = MAKE_TRACEBACK(frame_06db22350fb75e3eb39b9910e1d2d363, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_06db22350fb75e3eb39b9910e1d2d363->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_06db22350fb75e3eb39b9910e1d2d363, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_06db22350fb75e3eb39b9910e1d2d363,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_06db22350fb75e3eb39b9910e1d2d363 == cache_frame_06db22350fb75e3eb39b9910e1d2d363) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_06db22350fb75e3eb39b9910e1d2d363);
        cache_frame_06db22350fb75e3eb39b9910e1d2d363 = NULL;
    }

    assertFrameObject(frame_06db22350fb75e3eb39b9910e1d2d363);

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


static PyObject *impl_flet_core$popup_menu_button$$$function__11_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_7d6bc19de52f5adbe5723839d9c81fa8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d6bc19de52f5adbe5723839d9c81fa8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d6bc19de52f5adbe5723839d9c81fa8)) {
        Py_XDECREF(cache_frame_7d6bc19de52f5adbe5723839d9c81fa8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d6bc19de52f5adbe5723839d9c81fa8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d6bc19de52f5adbe5723839d9c81fa8 = MAKE_FUNCTION_FRAME(codeobj_7d6bc19de52f5adbe5723839d9c81fa8, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d6bc19de52f5adbe5723839d9c81fa8->m_type_description == NULL);
    frame_7d6bc19de52f5adbe5723839d9c81fa8 = cache_frame_7d6bc19de52f5adbe5723839d9c81fa8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7d6bc19de52f5adbe5723839d9c81fa8);
    assert(Py_REFCNT(frame_7d6bc19de52f5adbe5723839d9c81fa8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d6bc19de52f5adbe5723839d9c81fa8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d6bc19de52f5adbe5723839d9c81fa8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d6bc19de52f5adbe5723839d9c81fa8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d6bc19de52f5adbe5723839d9c81fa8,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7d6bc19de52f5adbe5723839d9c81fa8 == cache_frame_7d6bc19de52f5adbe5723839d9c81fa8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d6bc19de52f5adbe5723839d9c81fa8);
        cache_frame_7d6bc19de52f5adbe5723839d9c81fa8 = NULL;
    }

    assertFrameObject(frame_7d6bc19de52f5adbe5723839d9c81fa8);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$popup_menu_button$$$function__12_on_click(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f73f5d1a8ab3c68c6dd25646889d5e40;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f73f5d1a8ab3c68c6dd25646889d5e40 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f73f5d1a8ab3c68c6dd25646889d5e40)) {
        Py_XDECREF(cache_frame_f73f5d1a8ab3c68c6dd25646889d5e40);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f73f5d1a8ab3c68c6dd25646889d5e40 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f73f5d1a8ab3c68c6dd25646889d5e40 = MAKE_FUNCTION_FRAME(codeobj_f73f5d1a8ab3c68c6dd25646889d5e40, module_flet_core$popup_menu_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f73f5d1a8ab3c68c6dd25646889d5e40->m_type_description == NULL);
    frame_f73f5d1a8ab3c68c6dd25646889d5e40 = cache_frame_f73f5d1a8ab3c68c6dd25646889d5e40;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f73f5d1a8ab3c68c6dd25646889d5e40);
    assert(Py_REFCNT(frame_f73f5d1a8ab3c68c6dd25646889d5e40) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f73f5d1a8ab3c68c6dd25646889d5e40->m_frame.f_lineno = 85;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_f73f5d1a8ab3c68c6dd25646889d5e40, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f73f5d1a8ab3c68c6dd25646889d5e40->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f73f5d1a8ab3c68c6dd25646889d5e40, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f73f5d1a8ab3c68c6dd25646889d5e40,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f73f5d1a8ab3c68c6dd25646889d5e40 == cache_frame_f73f5d1a8ab3c68c6dd25646889d5e40) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f73f5d1a8ab3c68c6dd25646889d5e40);
        cache_frame_f73f5d1a8ab3c68c6dd25646889d5e40 = NULL;
    }

    assertFrameObject(frame_f73f5d1a8ab3c68c6dd25646889d5e40);

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


static PyObject *impl_flet_core$popup_menu_button$$$function__13_on_click(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_115dc4d16ae8d953736a5ced6c8ac898;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_115dc4d16ae8d953736a5ced6c8ac898 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_115dc4d16ae8d953736a5ced6c8ac898)) {
        Py_XDECREF(cache_frame_115dc4d16ae8d953736a5ced6c8ac898);

#if _DEBUG_REFCOUNTS
        if (cache_frame_115dc4d16ae8d953736a5ced6c8ac898 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_115dc4d16ae8d953736a5ced6c8ac898 = MAKE_FUNCTION_FRAME(codeobj_115dc4d16ae8d953736a5ced6c8ac898, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_115dc4d16ae8d953736a5ced6c8ac898->m_type_description == NULL);
    frame_115dc4d16ae8d953736a5ced6c8ac898 = cache_frame_115dc4d16ae8d953736a5ced6c8ac898;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_115dc4d16ae8d953736a5ced6c8ac898);
    assert(Py_REFCNT(frame_115dc4d16ae8d953736a5ced6c8ac898) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[22];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_115dc4d16ae8d953736a5ced6c8ac898->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[21],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
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
        exception_tb = MAKE_TRACEBACK(frame_115dc4d16ae8d953736a5ced6c8ac898, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_115dc4d16ae8d953736a5ced6c8ac898->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_115dc4d16ae8d953736a5ced6c8ac898, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_115dc4d16ae8d953736a5ced6c8ac898,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_115dc4d16ae8d953736a5ced6c8ac898 == cache_frame_115dc4d16ae8d953736a5ced6c8ac898) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_115dc4d16ae8d953736a5ced6c8ac898);
        cache_frame_115dc4d16ae8d953736a5ced6c8ac898 = NULL;
    }

    assertFrameObject(frame_115dc4d16ae8d953736a5ced6c8ac898);

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
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$popup_menu_button$$$function__14___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_content = python_pars[1];
    PyObject *par_ref = python_pars[2];
    PyObject *par_key = python_pars[3];
    PyObject *par_width = python_pars[4];
    PyObject *par_height = python_pars[5];
    PyObject *par_left = python_pars[6];
    PyObject *par_top = python_pars[7];
    PyObject *par_right = python_pars[8];
    PyObject *par_bottom = python_pars[9];
    PyObject *par_expand = python_pars[10];
    PyObject *par_col = python_pars[11];
    PyObject *par_opacity = python_pars[12];
    PyObject *par_rotate = python_pars[13];
    PyObject *par_scale = python_pars[14];
    PyObject *par_offset = python_pars[15];
    PyObject *par_aspect_ratio = python_pars[16];
    PyObject *par_animate_opacity = python_pars[17];
    PyObject *par_animate_size = python_pars[18];
    PyObject *par_animate_position = python_pars[19];
    PyObject *par_animate_rotation = python_pars[20];
    PyObject *par_animate_scale = python_pars[21];
    PyObject *par_animate_offset = python_pars[22];
    PyObject *par_on_animation_end = python_pars[23];
    PyObject *par_tooltip = python_pars[24];
    PyObject *par_visible = python_pars[25];
    PyObject *par_disabled = python_pars[26];
    PyObject *par_data = python_pars[27];
    PyObject *par_items = python_pars[28];
    PyObject *par_icon = python_pars[29];
    PyObject *par_on_cancelled = python_pars[30];
    struct Nuitka_FrameObject *frame_c8036da525be3504132fb5132446832d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c8036da525be3504132fb5132446832d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c8036da525be3504132fb5132446832d)) {
        Py_XDECREF(cache_frame_c8036da525be3504132fb5132446832d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8036da525be3504132fb5132446832d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8036da525be3504132fb5132446832d = MAKE_FUNCTION_FRAME(codeobj_c8036da525be3504132fb5132446832d, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8036da525be3504132fb5132446832d->m_type_description == NULL);
    frame_c8036da525be3504132fb5132446832d = cache_frame_c8036da525be3504132fb5132446832d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c8036da525be3504132fb5132446832d);
    assert(Py_REFCNT(frame_c8036da525be3504132fb5132446832d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        PyObject *tmp_kw_call_dict_value_10_1;
        PyObject *tmp_kw_call_dict_value_11_1;
        PyObject *tmp_kw_call_dict_value_12_1;
        PyObject *tmp_kw_call_dict_value_13_1;
        PyObject *tmp_kw_call_dict_value_14_1;
        PyObject *tmp_kw_call_dict_value_15_1;
        PyObject *tmp_kw_call_dict_value_16_1;
        PyObject *tmp_kw_call_dict_value_17_1;
        PyObject *tmp_kw_call_dict_value_18_1;
        PyObject *tmp_kw_call_dict_value_19_1;
        PyObject *tmp_kw_call_dict_value_20_1;
        PyObject *tmp_kw_call_dict_value_21_1;
        PyObject *tmp_kw_call_dict_value_22_1;
        PyObject *tmp_kw_call_dict_value_23_1;
        PyObject *tmp_kw_call_dict_value_24_1;
        PyObject *tmp_kw_call_dict_value_25_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        CHECK_OBJECT(par_key);
        tmp_kw_call_dict_value_1_1 = par_key;
        CHECK_OBJECT(par_width);
        tmp_kw_call_dict_value_2_1 = par_width;
        CHECK_OBJECT(par_height);
        tmp_kw_call_dict_value_3_1 = par_height;
        CHECK_OBJECT(par_left);
        tmp_kw_call_dict_value_4_1 = par_left;
        CHECK_OBJECT(par_top);
        tmp_kw_call_dict_value_5_1 = par_top;
        CHECK_OBJECT(par_right);
        tmp_kw_call_dict_value_6_1 = par_right;
        CHECK_OBJECT(par_bottom);
        tmp_kw_call_dict_value_7_1 = par_bottom;
        CHECK_OBJECT(par_expand);
        tmp_kw_call_dict_value_8_1 = par_expand;
        CHECK_OBJECT(par_col);
        tmp_kw_call_dict_value_9_1 = par_col;
        CHECK_OBJECT(par_opacity);
        tmp_kw_call_dict_value_10_1 = par_opacity;
        CHECK_OBJECT(par_rotate);
        tmp_kw_call_dict_value_11_1 = par_rotate;
        CHECK_OBJECT(par_scale);
        tmp_kw_call_dict_value_12_1 = par_scale;
        CHECK_OBJECT(par_offset);
        tmp_kw_call_dict_value_13_1 = par_offset;
        CHECK_OBJECT(par_aspect_ratio);
        tmp_kw_call_dict_value_14_1 = par_aspect_ratio;
        CHECK_OBJECT(par_animate_opacity);
        tmp_kw_call_dict_value_15_1 = par_animate_opacity;
        CHECK_OBJECT(par_animate_size);
        tmp_kw_call_dict_value_16_1 = par_animate_size;
        CHECK_OBJECT(par_animate_position);
        tmp_kw_call_dict_value_17_1 = par_animate_position;
        CHECK_OBJECT(par_animate_rotation);
        tmp_kw_call_dict_value_18_1 = par_animate_rotation;
        CHECK_OBJECT(par_animate_scale);
        tmp_kw_call_dict_value_19_1 = par_animate_scale;
        CHECK_OBJECT(par_animate_offset);
        tmp_kw_call_dict_value_20_1 = par_animate_offset;
        CHECK_OBJECT(par_on_animation_end);
        tmp_kw_call_dict_value_21_1 = par_on_animation_end;
        CHECK_OBJECT(par_tooltip);
        tmp_kw_call_dict_value_22_1 = par_tooltip;
        CHECK_OBJECT(par_visible);
        tmp_kw_call_dict_value_23_1 = par_visible;
        CHECK_OBJECT(par_disabled);
        tmp_kw_call_dict_value_24_1 = par_disabled;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_25_1 = par_data;
        frame_c8036da525be3504132fb5132446832d->m_frame.f_lineno = 169;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[26] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1, tmp_kw_call_dict_value_24_1, tmp_kw_call_dict_value_25_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[24]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_items);
        tmp_assattr_value_1 = par_items;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[25], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_icon);
        tmp_assattr_value_2 = par_icon;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_on_cancelled);
        tmp_assattr_value_3 = par_on_cancelled;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[26], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[27], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_content);
        tmp_assattr_value_5 = par_content;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c8036da525be3504132fb5132446832d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8036da525be3504132fb5132446832d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8036da525be3504132fb5132446832d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8036da525be3504132fb5132446832d,
        type_description_1,
        par_self,
        par_content,
        par_ref,
        par_key,
        par_width,
        par_height,
        par_left,
        par_top,
        par_right,
        par_bottom,
        par_expand,
        par_col,
        par_opacity,
        par_rotate,
        par_scale,
        par_offset,
        par_aspect_ratio,
        par_animate_opacity,
        par_animate_size,
        par_animate_position,
        par_animate_rotation,
        par_animate_scale,
        par_animate_offset,
        par_on_animation_end,
        par_tooltip,
        par_visible,
        par_disabled,
        par_data,
        par_items,
        par_icon,
        par_on_cancelled
    );


    // Release cached frame if used for exception.
    if (frame_c8036da525be3504132fb5132446832d == cache_frame_c8036da525be3504132fb5132446832d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8036da525be3504132fb5132446832d);
        cache_frame_c8036da525be3504132fb5132446832d = NULL;
    }

    assertFrameObject(frame_c8036da525be3504132fb5132446832d);

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
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_top);
    Py_DECREF(par_top);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    CHECK_OBJECT(par_bottom);
    Py_DECREF(par_bottom);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);
    CHECK_OBJECT(par_opacity);
    Py_DECREF(par_opacity);
    CHECK_OBJECT(par_rotate);
    Py_DECREF(par_rotate);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    CHECK_OBJECT(par_aspect_ratio);
    Py_DECREF(par_aspect_ratio);
    CHECK_OBJECT(par_animate_opacity);
    Py_DECREF(par_animate_opacity);
    CHECK_OBJECT(par_animate_size);
    Py_DECREF(par_animate_size);
    CHECK_OBJECT(par_animate_position);
    Py_DECREF(par_animate_position);
    CHECK_OBJECT(par_animate_rotation);
    Py_DECREF(par_animate_rotation);
    CHECK_OBJECT(par_animate_scale);
    Py_DECREF(par_animate_scale);
    CHECK_OBJECT(par_animate_offset);
    Py_DECREF(par_animate_offset);
    CHECK_OBJECT(par_on_animation_end);
    Py_DECREF(par_on_animation_end);
    CHECK_OBJECT(par_tooltip);
    Py_DECREF(par_tooltip);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    CHECK_OBJECT(par_on_cancelled);
    Py_DECREF(par_on_cancelled);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_top);
    Py_DECREF(par_top);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);
    CHECK_OBJECT(par_bottom);
    Py_DECREF(par_bottom);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);
    CHECK_OBJECT(par_opacity);
    Py_DECREF(par_opacity);
    CHECK_OBJECT(par_rotate);
    Py_DECREF(par_rotate);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    CHECK_OBJECT(par_aspect_ratio);
    Py_DECREF(par_aspect_ratio);
    CHECK_OBJECT(par_animate_opacity);
    Py_DECREF(par_animate_opacity);
    CHECK_OBJECT(par_animate_size);
    Py_DECREF(par_animate_size);
    CHECK_OBJECT(par_animate_position);
    Py_DECREF(par_animate_position);
    CHECK_OBJECT(par_animate_rotation);
    Py_DECREF(par_animate_rotation);
    CHECK_OBJECT(par_animate_scale);
    Py_DECREF(par_animate_scale);
    CHECK_OBJECT(par_animate_offset);
    Py_DECREF(par_animate_offset);
    CHECK_OBJECT(par_on_animation_end);
    Py_DECREF(par_on_animation_end);
    CHECK_OBJECT(par_tooltip);
    Py_DECREF(par_tooltip);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    CHECK_OBJECT(par_on_cancelled);
    Py_DECREF(par_on_cancelled);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$popup_menu_button$$$function__16__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_children = NULL;
    struct Nuitka_FrameObject *frame_5372f0c69343a0e1b358b7569ed1462f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5372f0c69343a0e1b358b7569ed1462f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_children == NULL);
        var_children = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_5372f0c69343a0e1b358b7569ed1462f)) {
        Py_XDECREF(cache_frame_5372f0c69343a0e1b358b7569ed1462f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5372f0c69343a0e1b358b7569ed1462f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5372f0c69343a0e1b358b7569ed1462f = MAKE_FUNCTION_FRAME(codeobj_5372f0c69343a0e1b358b7569ed1462f, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5372f0c69343a0e1b358b7569ed1462f->m_type_description == NULL);
    frame_5372f0c69343a0e1b358b7569ed1462f = cache_frame_5372f0c69343a0e1b358b7569ed1462f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5372f0c69343a0e1b358b7569ed1462f);
    assert(Py_REFCNT(frame_5372f0c69343a0e1b358b7569ed1462f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 210;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5372f0c69343a0e1b358b7569ed1462f->m_frame.f_lineno = 211;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_children);
        tmp_list_arg_value_1 = var_children;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_item_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[27]);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_value_value_1;
        PyObject *tmp_expression_value_4;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_2 = var_children;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_value_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_EXTEND_FROM_ITERABLE(tmp_list_arg_value_2, tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    if (var_children == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 214;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_children;
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
        exception_tb = MAKE_TRACEBACK(frame_5372f0c69343a0e1b358b7569ed1462f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5372f0c69343a0e1b358b7569ed1462f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5372f0c69343a0e1b358b7569ed1462f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5372f0c69343a0e1b358b7569ed1462f,
        type_description_1,
        par_self,
        var_children
    );


    // Release cached frame if used for exception.
    if (frame_5372f0c69343a0e1b358b7569ed1462f == cache_frame_5372f0c69343a0e1b358b7569ed1462f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5372f0c69343a0e1b358b7569ed1462f);
        cache_frame_5372f0c69343a0e1b358b7569ed1462f = NULL;
    }

    assertFrameObject(frame_5372f0c69343a0e1b358b7569ed1462f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_children);
    var_children = NULL;
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

    Py_XDECREF(var_children);
    var_children = NULL;
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


static PyObject *impl_flet_core$popup_menu_button$$$function__17_items(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fa9c152daf737aa6361af3bbfd82941b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fa9c152daf737aa6361af3bbfd82941b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa9c152daf737aa6361af3bbfd82941b)) {
        Py_XDECREF(cache_frame_fa9c152daf737aa6361af3bbfd82941b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa9c152daf737aa6361af3bbfd82941b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa9c152daf737aa6361af3bbfd82941b = MAKE_FUNCTION_FRAME(codeobj_fa9c152daf737aa6361af3bbfd82941b, module_flet_core$popup_menu_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa9c152daf737aa6361af3bbfd82941b->m_type_description == NULL);
    frame_fa9c152daf737aa6361af3bbfd82941b = cache_frame_fa9c152daf737aa6361af3bbfd82941b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fa9c152daf737aa6361af3bbfd82941b);
    assert(Py_REFCNT(frame_fa9c152daf737aa6361af3bbfd82941b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
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
        exception_tb = MAKE_TRACEBACK(frame_fa9c152daf737aa6361af3bbfd82941b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa9c152daf737aa6361af3bbfd82941b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa9c152daf737aa6361af3bbfd82941b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa9c152daf737aa6361af3bbfd82941b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fa9c152daf737aa6361af3bbfd82941b == cache_frame_fa9c152daf737aa6361af3bbfd82941b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa9c152daf737aa6361af3bbfd82941b);
        cache_frame_fa9c152daf737aa6361af3bbfd82941b = NULL;
    }

    assertFrameObject(frame_fa9c152daf737aa6361af3bbfd82941b);

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


static PyObject *impl_flet_core$popup_menu_button$$$function__18_items(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_56973615788e108f727539224dada8cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_56973615788e108f727539224dada8cb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_56973615788e108f727539224dada8cb)) {
        Py_XDECREF(cache_frame_56973615788e108f727539224dada8cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_56973615788e108f727539224dada8cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_56973615788e108f727539224dada8cb = MAKE_FUNCTION_FRAME(codeobj_56973615788e108f727539224dada8cb, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_56973615788e108f727539224dada8cb->m_type_description == NULL);
    frame_56973615788e108f727539224dada8cb = cache_frame_56973615788e108f727539224dada8cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_56973615788e108f727539224dada8cb);
    assert(Py_REFCNT(frame_56973615788e108f727539224dada8cb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        Py_INCREF(tmp_assattr_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(0);
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_56973615788e108f727539224dada8cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56973615788e108f727539224dada8cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56973615788e108f727539224dada8cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_56973615788e108f727539224dada8cb,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_56973615788e108f727539224dada8cb == cache_frame_56973615788e108f727539224dada8cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_56973615788e108f727539224dada8cb);
        cache_frame_56973615788e108f727539224dada8cb = NULL;
    }

    assertFrameObject(frame_56973615788e108f727539224dada8cb);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$popup_menu_button$$$function__19_on_cancelled(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_04270aa260337c32fbaf2b32ff37962a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_04270aa260337c32fbaf2b32ff37962a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_04270aa260337c32fbaf2b32ff37962a)) {
        Py_XDECREF(cache_frame_04270aa260337c32fbaf2b32ff37962a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04270aa260337c32fbaf2b32ff37962a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04270aa260337c32fbaf2b32ff37962a = MAKE_FUNCTION_FRAME(codeobj_04270aa260337c32fbaf2b32ff37962a, module_flet_core$popup_menu_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04270aa260337c32fbaf2b32ff37962a->m_type_description == NULL);
    frame_04270aa260337c32fbaf2b32ff37962a = cache_frame_04270aa260337c32fbaf2b32ff37962a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_04270aa260337c32fbaf2b32ff37962a);
    assert(Py_REFCNT(frame_04270aa260337c32fbaf2b32ff37962a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_04270aa260337c32fbaf2b32ff37962a->m_frame.f_lineno = 228;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[29], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
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
        exception_tb = MAKE_TRACEBACK(frame_04270aa260337c32fbaf2b32ff37962a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04270aa260337c32fbaf2b32ff37962a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04270aa260337c32fbaf2b32ff37962a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04270aa260337c32fbaf2b32ff37962a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_04270aa260337c32fbaf2b32ff37962a == cache_frame_04270aa260337c32fbaf2b32ff37962a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04270aa260337c32fbaf2b32ff37962a);
        cache_frame_04270aa260337c32fbaf2b32ff37962a = NULL;
    }

    assertFrameObject(frame_04270aa260337c32fbaf2b32ff37962a);

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


static PyObject *impl_flet_core$popup_menu_button$$$function__20_on_cancelled(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_6f070534214d192d4ef1540b708bb064;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6f070534214d192d4ef1540b708bb064 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f070534214d192d4ef1540b708bb064)) {
        Py_XDECREF(cache_frame_6f070534214d192d4ef1540b708bb064);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f070534214d192d4ef1540b708bb064 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f070534214d192d4ef1540b708bb064 = MAKE_FUNCTION_FRAME(codeobj_6f070534214d192d4ef1540b708bb064, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f070534214d192d4ef1540b708bb064->m_type_description == NULL);
    frame_6f070534214d192d4ef1540b708bb064 = cache_frame_6f070534214d192d4ef1540b708bb064;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6f070534214d192d4ef1540b708bb064);
    assert(Py_REFCNT(frame_6f070534214d192d4ef1540b708bb064) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[30];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_6f070534214d192d4ef1540b708bb064->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[21],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
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
        exception_tb = MAKE_TRACEBACK(frame_6f070534214d192d4ef1540b708bb064, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f070534214d192d4ef1540b708bb064->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f070534214d192d4ef1540b708bb064, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f070534214d192d4ef1540b708bb064,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_6f070534214d192d4ef1540b708bb064 == cache_frame_6f070534214d192d4ef1540b708bb064) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f070534214d192d4ef1540b708bb064);
        cache_frame_6f070534214d192d4ef1540b708bb064 = NULL;
    }

    assertFrameObject(frame_6f070534214d192d4ef1540b708bb064);

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
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$popup_menu_button$$$function__21_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ddb6021c1d1730e883ae5df7d99ea535;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ddb6021c1d1730e883ae5df7d99ea535 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ddb6021c1d1730e883ae5df7d99ea535)) {
        Py_XDECREF(cache_frame_ddb6021c1d1730e883ae5df7d99ea535);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ddb6021c1d1730e883ae5df7d99ea535 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ddb6021c1d1730e883ae5df7d99ea535 = MAKE_FUNCTION_FRAME(codeobj_ddb6021c1d1730e883ae5df7d99ea535, module_flet_core$popup_menu_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ddb6021c1d1730e883ae5df7d99ea535->m_type_description == NULL);
    frame_ddb6021c1d1730e883ae5df7d99ea535 = cache_frame_ddb6021c1d1730e883ae5df7d99ea535;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ddb6021c1d1730e883ae5df7d99ea535);
    assert(Py_REFCNT(frame_ddb6021c1d1730e883ae5df7d99ea535) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ddb6021c1d1730e883ae5df7d99ea535->m_frame.f_lineno = 237;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[13],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
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
        exception_tb = MAKE_TRACEBACK(frame_ddb6021c1d1730e883ae5df7d99ea535, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ddb6021c1d1730e883ae5df7d99ea535->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ddb6021c1d1730e883ae5df7d99ea535, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ddb6021c1d1730e883ae5df7d99ea535,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ddb6021c1d1730e883ae5df7d99ea535 == cache_frame_ddb6021c1d1730e883ae5df7d99ea535) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ddb6021c1d1730e883ae5df7d99ea535);
        cache_frame_ddb6021c1d1730e883ae5df7d99ea535 = NULL;
    }

    assertFrameObject(frame_ddb6021c1d1730e883ae5df7d99ea535);

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


static PyObject *impl_flet_core$popup_menu_button$$$function__22_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_2eafb913169cd632f80f2b2168feeede;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2eafb913169cd632f80f2b2168feeede = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2eafb913169cd632f80f2b2168feeede)) {
        Py_XDECREF(cache_frame_2eafb913169cd632f80f2b2168feeede);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2eafb913169cd632f80f2b2168feeede == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2eafb913169cd632f80f2b2168feeede = MAKE_FUNCTION_FRAME(codeobj_2eafb913169cd632f80f2b2168feeede, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2eafb913169cd632f80f2b2168feeede->m_type_description == NULL);
    frame_2eafb913169cd632f80f2b2168feeede = cache_frame_2eafb913169cd632f80f2b2168feeede;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2eafb913169cd632f80f2b2168feeede);
    assert(Py_REFCNT(frame_2eafb913169cd632f80f2b2168feeede) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[4];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_2eafb913169cd632f80f2b2168feeede->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[16],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
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
        exception_tb = MAKE_TRACEBACK(frame_2eafb913169cd632f80f2b2168feeede, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2eafb913169cd632f80f2b2168feeede->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2eafb913169cd632f80f2b2168feeede, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2eafb913169cd632f80f2b2168feeede,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_2eafb913169cd632f80f2b2168feeede == cache_frame_2eafb913169cd632f80f2b2168feeede) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2eafb913169cd632f80f2b2168feeede);
        cache_frame_2eafb913169cd632f80f2b2168feeede = NULL;
    }

    assertFrameObject(frame_2eafb913169cd632f80f2b2168feeede);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$popup_menu_button$$$function__23_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c2e252a32fbed26167b5afacad012b80;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c2e252a32fbed26167b5afacad012b80 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c2e252a32fbed26167b5afacad012b80)) {
        Py_XDECREF(cache_frame_c2e252a32fbed26167b5afacad012b80);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c2e252a32fbed26167b5afacad012b80 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c2e252a32fbed26167b5afacad012b80 = MAKE_FUNCTION_FRAME(codeobj_c2e252a32fbed26167b5afacad012b80, module_flet_core$popup_menu_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c2e252a32fbed26167b5afacad012b80->m_type_description == NULL);
    frame_c2e252a32fbed26167b5afacad012b80 = cache_frame_c2e252a32fbed26167b5afacad012b80;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c2e252a32fbed26167b5afacad012b80);
    assert(Py_REFCNT(frame_c2e252a32fbed26167b5afacad012b80) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
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
        exception_tb = MAKE_TRACEBACK(frame_c2e252a32fbed26167b5afacad012b80, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2e252a32fbed26167b5afacad012b80->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2e252a32fbed26167b5afacad012b80, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c2e252a32fbed26167b5afacad012b80,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c2e252a32fbed26167b5afacad012b80 == cache_frame_c2e252a32fbed26167b5afacad012b80) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c2e252a32fbed26167b5afacad012b80);
        cache_frame_c2e252a32fbed26167b5afacad012b80 = NULL;
    }

    assertFrameObject(frame_c2e252a32fbed26167b5afacad012b80);

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


static PyObject *impl_flet_core$popup_menu_button$$$function__24_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e337b3a028c7d72255c7ab85bf6dab4f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e337b3a028c7d72255c7ab85bf6dab4f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e337b3a028c7d72255c7ab85bf6dab4f)) {
        Py_XDECREF(cache_frame_e337b3a028c7d72255c7ab85bf6dab4f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e337b3a028c7d72255c7ab85bf6dab4f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e337b3a028c7d72255c7ab85bf6dab4f = MAKE_FUNCTION_FRAME(codeobj_e337b3a028c7d72255c7ab85bf6dab4f, module_flet_core$popup_menu_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e337b3a028c7d72255c7ab85bf6dab4f->m_type_description == NULL);
    frame_e337b3a028c7d72255c7ab85bf6dab4f = cache_frame_e337b3a028c7d72255c7ab85bf6dab4f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e337b3a028c7d72255c7ab85bf6dab4f);
    assert(Py_REFCNT(frame_e337b3a028c7d72255c7ab85bf6dab4f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e337b3a028c7d72255c7ab85bf6dab4f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e337b3a028c7d72255c7ab85bf6dab4f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e337b3a028c7d72255c7ab85bf6dab4f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e337b3a028c7d72255c7ab85bf6dab4f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e337b3a028c7d72255c7ab85bf6dab4f == cache_frame_e337b3a028c7d72255c7ab85bf6dab4f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e337b3a028c7d72255c7ab85bf6dab4f);
        cache_frame_e337b3a028c7d72255c7ab85bf6dab4f = NULL;
    }

    assertFrameObject(frame_e337b3a028c7d72255c7ab85bf6dab4f);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__10_content() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__10_content,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_06db22350fb75e3eb39b9910e1d2d363,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__11_content() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__11_content,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_7d6bc19de52f5adbe5723839d9c81fa8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__12_on_click() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__12_on_click,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_f73f5d1a8ab3c68c6dd25646889d5e40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__13_on_click() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__13_on_click,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_115dc4d16ae8d953736a5ced6c8ac898,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__14___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__14___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_c8036da525be3504132fb5132446832d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__15__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_0fe55cbfae2918cadf719f2cfe33ac56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[115]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__16__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__16__get_children,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_5372f0c69343a0e1b358b7569ed1462f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__17_items(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__17_items,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_fa9c152daf737aa6361af3bbfd82941b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__18_items(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__18_items,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_56973615788e108f727539224dada8cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__19_on_cancelled() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__19_on_cancelled,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_04270aa260337c32fbaf2b32ff37962a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_41497795ac1a3158c0a71d0e5bdef6a8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__20_on_cancelled() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__20_on_cancelled,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_6f070534214d192d4ef1540b708bb064,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__21_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__21_icon,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_ddb6021c1d1730e883ae5df7d99ea535,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__22_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__22_icon,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_2eafb913169cd632f80f2b2168feeede,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__23_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__23_content,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_c2e252a32fbed26167b5afacad012b80,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__24_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__24_content,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_e337b3a028c7d72255c7ab85bf6dab4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_fafbff147a8ae609a706d70d81c04db3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[72]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__3__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__3__get_children,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_bd2174e89f13b4738509cf5ccee92637,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__4_checked(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__4_checked,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_b2e88c9fb1e3d988ae31a9bfce761a02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__5_checked(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__5_checked,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_cf18950f04141ba832a921d0da83ead2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__6_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__6_icon,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_795b7217f575147bf018a25672f3841b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__7_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__7_icon,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_df274c34c6645cd9b3751330988f4749,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__8_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__8_text,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[83],
#endif
        codeobj_6c34f28ddf975640ee0618d277909b71,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$popup_menu_button$$$function__9_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$popup_menu_button$$$function__9_text,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[83],
#endif
        codeobj_b04da1ccf4ff553b64ed485a437d246b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$popup_menu_button,
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

function_impl_code functable_flet_core$popup_menu_button[] = {
    impl_flet_core$popup_menu_button$$$function__1___init__,
    NULL,
    impl_flet_core$popup_menu_button$$$function__3__get_children,
    impl_flet_core$popup_menu_button$$$function__4_checked,
    impl_flet_core$popup_menu_button$$$function__5_checked,
    impl_flet_core$popup_menu_button$$$function__6_icon,
    impl_flet_core$popup_menu_button$$$function__7_icon,
    impl_flet_core$popup_menu_button$$$function__8_text,
    impl_flet_core$popup_menu_button$$$function__9_text,
    impl_flet_core$popup_menu_button$$$function__10_content,
    impl_flet_core$popup_menu_button$$$function__11_content,
    impl_flet_core$popup_menu_button$$$function__12_on_click,
    impl_flet_core$popup_menu_button$$$function__13_on_click,
    impl_flet_core$popup_menu_button$$$function__14___init__,
    NULL,
    impl_flet_core$popup_menu_button$$$function__16__get_children,
    impl_flet_core$popup_menu_button$$$function__17_items,
    impl_flet_core$popup_menu_button$$$function__18_items,
    impl_flet_core$popup_menu_button$$$function__19_on_cancelled,
    impl_flet_core$popup_menu_button$$$function__20_on_cancelled,
    impl_flet_core$popup_menu_button$$$function__21_icon,
    impl_flet_core$popup_menu_button$$$function__22_icon,
    impl_flet_core$popup_menu_button$$$function__23_content,
    impl_flet_core$popup_menu_button$$$function__24_content,
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

    function_impl_code *current = functable_flet_core$popup_menu_button;
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

    if (offset > sizeof(functable_flet_core$popup_menu_button) || offset < 0) {
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
        functable_flet_core$popup_menu_button[offset],
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
        module_flet_core$popup_menu_button,
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
PyObject *modulecode_flet_core$popup_menu_button(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.popup_menu_button");

    // Store the module for future use.
    module_flet_core$popup_menu_button = module;

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
        PRINT_STRING("flet_core.popup_menu_button: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.popup_menu_button: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.popup_menu_button: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$popup_menu_button\n");

    moduledict_flet_core$popup_menu_button = MODULE_DICT(module_flet_core$popup_menu_button);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$popup_menu_button,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$popup_menu_button,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[130]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$popup_menu_button,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$popup_menu_button,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$popup_menu_button,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$popup_menu_button);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$popup_menu_button);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_6968df251bbf2d1bd3facb1f35933948;
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
    PyObject *locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d322e0c387c1128a63156dabf00b7a57_2;
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
    PyObject *locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92 = NULL;
    struct Nuitka_FrameObject *frame_0bd6ccded88f64faa200fb8086f151ca_3;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_2);
    }
    frame_6968df251bbf2d1bd3facb1f35933948 = MAKE_MODULE_FRAME(codeobj_6968df251bbf2d1bd3facb1f35933948, module_flet_core$popup_menu_button);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6968df251bbf2d1bd3facb1f35933948);
    assert(Py_REFCNT(frame_6968df251bbf2d1bd3facb1f35933948) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[32];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_3);
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
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[38],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[38]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[40],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[40]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[41],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[41]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[42],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[42]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_8);
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
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[43];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$popup_menu_button;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[44];
        tmp_level_value_1 = mod_consts[39];
        frame_6968df251bbf2d1bd3facb1f35933948->m_frame.f_lineno = 3;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[23],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[45];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$popup_menu_button;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[46];
        tmp_level_value_2 = mod_consts[39];
        frame_6968df251bbf2d1bd3facb1f35933948->m_frame.f_lineno = 4;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[0],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[0]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[47],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[47]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_12);
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
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[48];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$popup_menu_button;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[49];
        tmp_level_value_3 = mod_consts[39];
        frame_6968df251bbf2d1bd3facb1f35933948->m_frame.f_lineno = 5;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[50],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[50]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[51];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$popup_menu_button;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[52];
        tmp_level_value_4 = mod_consts[39];
        frame_6968df251bbf2d1bd3facb1f35933948->m_frame.f_lineno = 6;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[53],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[53]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[54],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[54]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[55],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[55]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[56],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[56]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$popup_menu_button,
                mod_consts[57],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[57]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_19);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        tmp_assign_source_20 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_20, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_21 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
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
        tmp_subscript_value_1 = mod_consts[39];
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
        tmp_assign_source_23 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[58]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[58]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[59];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_6968df251bbf2d1bd3facb1f35933948->m_frame.f_lineno = 15;
        tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[60]);
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
        tmp_mod_expr_left_1 = mod_consts[61];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[62];
        tmp_getattr_default_1 = mod_consts[63];
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[62]);
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
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_6;
        }
        frame_d322e0c387c1128a63156dabf00b7a57_2 = MAKE_CLASS_FRAME(codeobj_d322e0c387c1128a63156dabf00b7a57, module_flet_core$popup_menu_button, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d322e0c387c1128a63156dabf00b7a57_2);
        assert(Py_REFCNT(frame_d322e0c387c1128a63156dabf00b7a57_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            tmp_defaults_1 = mod_consts[67];
            tmp_dict_key_1 = mod_consts[68];
            tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[41]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 18;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[50]);

            if (tmp_subscript_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[50]);

                    if (unlikely(tmp_subscript_value_2 == NULL)) {
                        tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                    }

                    if (tmp_subscript_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_6);

                        exception_lineno = 18;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_6);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_6;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[3];
                tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[41]);

                if (tmp_expression_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_7 == NULL)) {
                            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                        }

                        if (tmp_expression_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 19;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_3 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[69]);

                if (tmp_subscript_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_3 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_3);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_7);
                Py_DECREF(tmp_subscript_value_3);
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
                tmp_dict_key_1 = mod_consts[4];
                tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[41]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 20;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[70]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_8);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 20;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[5];
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[41]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 21;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[70]);

                if (tmp_subscript_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_5);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_9);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 21;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[41]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 22;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[0]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_subscript_value_6 == NULL)) {
                            tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_subscript_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_10);

                            exception_lineno = 22;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[9];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[38]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[38]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 24;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
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


            tmp_dictset_value = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[73], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__3__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[75], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_8;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[77]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
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
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[77]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[78];
            tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[41]);

            if (tmp_expression_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_expression_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);

                        exception_lineno = 48;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[69]);

            if (tmp_subscript_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_7 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_11);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__4_checked(tmp_annotations_2);

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 47;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[78];
            tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[41]);

            if (tmp_expression_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[69]);

            if (tmp_subscript_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_8 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_12);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__4_checked(tmp_annotations_3);

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 47;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_9;
            tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[3]);

            if (unlikely(tmp_expression_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[80]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[81];
            tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[41]);

            if (tmp_expression_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_expression_value_14 == NULL)) {
                        tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_expression_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);

                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[69]);

            if (tmp_subscript_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_9 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_14);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__5_checked(tmp_annotations_4);

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 51;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[77]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[77]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__6_icon();

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 56;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__6_icon();

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 56;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_6;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[4]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__7_icon();

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 60;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[80], tmp_args_element_value_6);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_8;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[77]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_7 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[77]);

            if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__8_text();

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__8_text();

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_9;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[5]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__9_text();

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[80], tmp_args_element_value_9);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_11;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[77]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_9 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[77]);

            if (unlikely(tmp_called_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__10_content();

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 74;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__10_content();

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 74;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_12;
            tmp_called_instance_3 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[7]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__11_content();

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 78;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[80], tmp_args_element_value_12);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_14;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[77]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_11 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[77]);

            if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__12_on_click();

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 83;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__12_on_click();

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 83;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_15;
            tmp_called_instance_4 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[8]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__13_on_click();

            frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame.f_lineno = 87;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[80], tmp_args_element_value_15);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d322e0c387c1128a63156dabf00b7a57_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d322e0c387c1128a63156dabf00b7a57_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d322e0c387c1128a63156dabf00b7a57_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d322e0c387c1128a63156dabf00b7a57_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_d322e0c387c1128a63156dabf00b7a57_2);

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
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_13 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[59];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_6968df251bbf2d1bd3facb1f35933948->m_frame.f_lineno = 15;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_26 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15);
        locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15 = NULL;
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

        Py_DECREF(locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15);
        locals_flet_core$popup_menu_button$$$class__1_PopupMenuItem_15 = NULL;
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
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_26);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_7;
        }
        tmp_assign_source_28 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_29 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_7;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_15 = tmp_class_creation_2__bases;
        tmp_subscript_value_10 = mod_consts[39];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_10, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_7;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_16 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[58]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_17 = tmp_class_creation_2__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[58]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_7;
        }
        tmp_tuple_element_6 = mod_consts[87];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_6968df251bbf2d1bd3facb1f35933948->m_frame.f_lineno = 92;
        tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_18 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_18, mod_consts[60]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_7;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
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
        tmp_mod_expr_left_2 = mod_consts[61];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[62];
        tmp_getattr_default_2 = mod_consts[63];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[62]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

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


            exception_lineno = 92;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 92;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_33;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[65], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[88];
        tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[31], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_9;
        }
        frame_0bd6ccded88f64faa200fb8086f151ca_3 = MAKE_CLASS_FRAME(codeobj_0bd6ccded88f64faa200fb8086f151ca, module_flet_core$popup_menu_button, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0bd6ccded88f64faa200fb8086f151ca_3);
        assert(Py_REFCNT(frame_0bd6ccded88f64faa200fb8086f151ca_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_11;
            tmp_defaults_2 = mod_consts[89];
            tmp_dict_key_5 = mod_consts[7];
            tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 136;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[0]);

            if (tmp_subscript_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_11 == NULL)) {
                        tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_20);

                        exception_lineno = 136;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_20);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 28 );
            {
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_21;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[68];
                tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 137;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[50]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_subscript_value_12 == NULL)) {
                            tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_subscript_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_21);

                            exception_lineno = 137;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_21);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 137;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[90];
                tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 138;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[70]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[91];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[47]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[47]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 139;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[92];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[47]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[47]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 140;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[93];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[47]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[47]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 141;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[94];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[47]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[47]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 142;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[95];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[47]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[47]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 143;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[96];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[47]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[47]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 144;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[97];
                tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[42]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[42]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 145;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_8 = Py_None;
                tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_14, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[69]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[98]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_14, 2, tmp_tuple_element_8);
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[99];
                tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 146;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[55]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[55]);

                        if (unlikely(tmp_subscript_value_15 == NULL)) {
                            tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                        }

                        if (tmp_subscript_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_24);

                            exception_lineno = 146;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_15);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[100];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[47]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[47]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 147;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[101];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[56]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 148;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[102];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[57]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[57]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 149;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[103];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[54]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[54]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 150;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[104];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[47]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[47]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 151;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[105];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[53]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 152;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[106];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[53]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 153;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[107];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[53]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 154;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[108];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[53]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 155;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[109];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[53]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 156;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[110];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[53]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 157;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[111];
                tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 159;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[70]);

                if (tmp_subscript_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_16 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_16);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 159;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[112];
                tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 160;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[69]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_17);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 160;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[113];
                tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 161;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[69]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_18 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_18);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[9];
                tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[38]);

                if (tmp_dict_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[38]);

                        if (unlikely(tmp_dict_value_5 == NULL)) {
                            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                        }

                        if (tmp_dict_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 162;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[25];
                tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 165;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[40]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[40]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_28);

                            exception_lineno = 165;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[59]);

                if (tmp_subscript_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[59]);

                        if (unlikely(tmp_subscript_value_20 == NULL)) {
                            tmp_subscript_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                        }

                        if (tmp_subscript_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_28);
                            Py_DECREF(tmp_expression_value_29);

                            exception_lineno = 165;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_20);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_subscript_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_28);

                    exception_lineno = 165;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[4];
                tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 166;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[70]);

                if (tmp_subscript_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_21 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_21);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__14___init__(tmp_defaults_2, tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__15__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[73], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__16__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[75], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_25;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[77]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_15 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[77]);

            if (unlikely(tmp_called_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_6 = mod_consts[78];
            tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

            if (tmp_expression_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_31);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[40]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[40]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);
                        Py_DECREF(tmp_expression_value_31);

                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[59]);

            if (tmp_subscript_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_subscript_value_23 == NULL)) {
                        tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_subscript_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);
                        Py_DECREF(tmp_expression_value_31);
                        Py_DECREF(tmp_expression_value_32);

                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_23);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_23);
            Py_DECREF(tmp_expression_value_32);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_subscript_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_expression_value_31);

                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_31);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__17_items(tmp_annotations_6);

            frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame.f_lineno = 217;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_16 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_7 = mod_consts[78];
            tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[40]);

            if (tmp_expression_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[40]);

                    if (unlikely(tmp_expression_value_34 == NULL)) {
                        tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                    }

                    if (tmp_expression_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_33);

                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_34);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_25 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[59]);

            if (tmp_subscript_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_subscript_value_25 == NULL)) {
                        tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_subscript_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_33);
                        Py_DECREF(tmp_expression_value_34);

                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_25);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_25);
            Py_DECREF(tmp_expression_value_34);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_subscript_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_33);

                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_33);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__17_items(tmp_annotations_7);

            frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame.f_lineno = 217;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_27;
            tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[25]);

            if (unlikely(tmp_expression_value_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[25]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[80]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_8 = mod_consts[81];
            tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

            if (tmp_expression_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 222;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_36);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[40]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[40]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);
                        Py_DECREF(tmp_expression_value_36);

                        exception_lineno = 222;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_27 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[59]);

            if (tmp_subscript_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_subscript_value_27 == NULL)) {
                        tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_subscript_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);
                        Py_DECREF(tmp_expression_value_36);
                        Py_DECREF(tmp_expression_value_37);

                        exception_lineno = 222;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_27);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_subscript_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_expression_value_36);

                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_36);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__18_items(tmp_annotations_8);

            frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame.f_lineno = 221;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_20;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[77]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_18 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[77]);

            if (unlikely(tmp_called_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__19_on_cancelled();

            frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame.f_lineno = 226;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_19 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__19_on_cancelled();

            frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame.f_lineno = 226;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_21;
            tmp_called_instance_5 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[26]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[26]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__20_on_cancelled();

            frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame.f_lineno = 230;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[80], tmp_args_element_value_21);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_23;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[77]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_20 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[77]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__21_icon();

            frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame.f_lineno = 235;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__21_icon();

            frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame.f_lineno = 235;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_24;
            tmp_called_instance_6 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[4]);

            if (unlikely(tmp_called_instance_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__22_icon();

            frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame.f_lineno = 239;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[80], tmp_args_element_value_24);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_29;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[77]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_22 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[77]);

            if (unlikely(tmp_called_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 244;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_9 = mod_consts[78];
            tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

            if (tmp_expression_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 245;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_38);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[0]);

            if (tmp_subscript_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_28 == NULL)) {
                        tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_expression_value_38);

                        exception_lineno = 245;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_28);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_38);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 245;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__23_content(tmp_annotations_9);

            frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame.f_lineno = 244;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_23 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_10 = mod_consts[78];
            tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

            if (tmp_expression_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 245;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_39);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_29 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[0]);

            if (tmp_subscript_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_29 == NULL)) {
                        tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_39);

                        exception_lineno = 245;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_29);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_39);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__23_content(tmp_annotations_10);

            frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame.f_lineno = 244;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_30;
            tmp_expression_value_40 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[7]);

            if (unlikely(tmp_expression_value_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[80]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_11 = mod_consts[81];
            tmp_expression_value_41 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[41]);

            if (tmp_expression_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);

                        exception_lineno = 249;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_41);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_30 = PyObject_GetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[0]);

            if (tmp_subscript_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_30 == NULL)) {
                        tmp_subscript_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);
                        Py_DECREF(tmp_expression_value_41);

                        exception_lineno = 249;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_30);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_30);
            Py_DECREF(tmp_expression_value_41);
            Py_DECREF(tmp_subscript_value_30);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);

                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$popup_menu_button$$$function__24_content(tmp_annotations_11);

            frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame.f_lineno = 248;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0bd6ccded88f64faa200fb8086f151ca_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0bd6ccded88f64faa200fb8086f151ca_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0bd6ccded88f64faa200fb8086f151ca_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0bd6ccded88f64faa200fb8086f151ca_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_0bd6ccded88f64faa200fb8086f151ca_3);

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
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_25 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = mod_consts[87];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_6968df251bbf2d1bd3facb1f35933948->m_frame.f_lineno = 92;
            tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_34 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92);
        locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92 = NULL;
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

        Py_DECREF(locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92);
        locals_flet_core$popup_menu_button$$$class__2_PopupMenuButton_92 = NULL;
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
        exception_lineno = 92;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_34);
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6968df251bbf2d1bd3facb1f35933948, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6968df251bbf2d1bd3facb1f35933948->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6968df251bbf2d1bd3facb1f35933948, exception_lineno);
    }



    assertFrameObject(frame_6968df251bbf2d1bd3facb1f35933948);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flet_core.popup_menu_button", false);

    Py_INCREF(module_flet_core$popup_menu_button);
    return module_flet_core$popup_menu_button;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$popup_menu_button, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$popup_menu_button", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
