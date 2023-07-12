/* Generated code for Python module 'flet_core.snack_bar'
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

/* The "module_flet_core$snack_bar" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$snack_bar;
PyDictObject *moduledict_flet_core$snack_bar;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[85];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[85];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.snack_bar"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 85; i++) {
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
void checkModuleConstants_flet_core$snack_bar(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 85; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b738b3b7e6280b5f7ee2c9708cb6203a;
static PyCodeObject *codeobj_c630e70bcf02aa774b3d3948a95a411d;
static PyCodeObject *codeobj_fae998c37bd2d682682af1293e668928;
static PyCodeObject *codeobj_5a5ef92280b7d1ed99e3e3c0ca44f681;
static PyCodeObject *codeobj_0476f5d318108a104a7ab1f29d909451;
static PyCodeObject *codeobj_70e2c0d0fcc395d9153f81a98f8452b6;
static PyCodeObject *codeobj_72c77099d0206b8210b5b7016b147720;
static PyCodeObject *codeobj_9ee8ac9f63c611e8cb83df34695e5ac8;
static PyCodeObject *codeobj_d181a1fdbe1e611242db486ae907aea5;
static PyCodeObject *codeobj_f712ad380faa931c18f1c313c769ebba;
static PyCodeObject *codeobj_b4a9ea99f3a9fa76a86463106b4fefa2;
static PyCodeObject *codeobj_1dbf78b563715c7a6769280f194fd797;
static PyCodeObject *codeobj_152a6d6ed753afe62752c22bcfb2e563;
static PyCodeObject *codeobj_8c9cf94293cc63e5e3d3ca3fd737753c;
static PyCodeObject *codeobj_057f26b93823228009bf6392665c5e49;
static PyCodeObject *codeobj_00d60673c3171098b97194bed0641bdf;
static PyCodeObject *codeobj_d66da215961de8476cefdf4c7d53074b;
static PyCodeObject *codeobj_9184c973cf0191b15ec80bf51101684a;
static PyCodeObject *codeobj_30411857a9de0a41ee822db62395e227;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[27]; CHECK_OBJECT(module_filename_obj);
    codeobj_b738b3b7e6280b5f7ee2c9708cb6203a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[77], mod_consts[77], NULL, NULL, 0, 0, 0);
    codeobj_c630e70bcf02aa774b3d3948a95a411d = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[78], NULL, 0, 0, 0);
    codeobj_fae998c37bd2d682682af1293e668928 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[79], NULL, 12, 0, 0);
    codeobj_5a5ef92280b7d1ed99e3e3c0ca44f681 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[80], NULL, 1, 0, 0);
    codeobj_0476f5d318108a104a7ab1f29d909451 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[81], NULL, 1, 0, 0);
    codeobj_70e2c0d0fcc395d9153f81a98f8452b6 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[81], NULL, 1, 0, 0);
    codeobj_72c77099d0206b8210b5b7016b147720 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[82], NULL, 2, 0, 0);
    codeobj_9ee8ac9f63c611e8cb83df34695e5ac8 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[81], NULL, 1, 0, 0);
    codeobj_d181a1fdbe1e611242db486ae907aea5 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[82], NULL, 2, 0, 0);
    codeobj_f712ad380faa931c18f1c313c769ebba = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[81], NULL, 1, 0, 0);
    codeobj_b4a9ea99f3a9fa76a86463106b4fefa2 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[82], NULL, 2, 0, 0);
    codeobj_1dbf78b563715c7a6769280f194fd797 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[81], NULL, 1, 0, 0);
    codeobj_152a6d6ed753afe62752c22bcfb2e563 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[82], NULL, 2, 0, 0);
    codeobj_8c9cf94293cc63e5e3d3ca3fd737753c = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[81], NULL, 1, 0, 0);
    codeobj_057f26b93823228009bf6392665c5e49 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[82], NULL, 2, 0, 0);
    codeobj_00d60673c3171098b97194bed0641bdf = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[81], NULL, 1, 0, 0);
    codeobj_d66da215961de8476cefdf4c7d53074b = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[83], NULL, 2, 0, 0);
    codeobj_9184c973cf0191b15ec80bf51101684a = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[81], NULL, 1, 0, 0);
    codeobj_30411857a9de0a41ee822db62395e227 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[82], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__10_action_color();


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__11_action_color();


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__12_bgcolor();


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__13_bgcolor();


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__14_duration(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__15_duration(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__16_on_action();


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__17_on_action();


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__3__get_children();


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__4_open(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__5_open(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__6_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__7_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__8_action();


static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__9_action();


// The module function definitions.
static PyObject *impl_flet_core$snack_bar$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_content = python_pars[1];
    PyObject *par_ref = python_pars[2];
    PyObject *par_disabled = python_pars[3];
    PyObject *par_visible = python_pars[4];
    PyObject *par_data = python_pars[5];
    PyObject *par_open = python_pars[6];
    PyObject *par_action = python_pars[7];
    PyObject *par_action_color = python_pars[8];
    PyObject *par_bgcolor = python_pars[9];
    PyObject *par_duration = python_pars[10];
    PyObject *par_on_action = python_pars[11];
    struct Nuitka_FrameObject *frame_fae998c37bd2d682682af1293e668928;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fae998c37bd2d682682af1293e668928 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fae998c37bd2d682682af1293e668928)) {
        Py_XDECREF(cache_frame_fae998c37bd2d682682af1293e668928);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fae998c37bd2d682682af1293e668928 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fae998c37bd2d682682af1293e668928 = MAKE_FUNCTION_FRAME(codeobj_fae998c37bd2d682682af1293e668928, module_flet_core$snack_bar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fae998c37bd2d682682af1293e668928->m_type_description == NULL);
    frame_fae998c37bd2d682682af1293e668928 = cache_frame_fae998c37bd2d682682af1293e668928;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fae998c37bd2d682682af1293e668928);
    assert(Py_REFCNT(frame_fae998c37bd2d682682af1293e668928) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        CHECK_OBJECT(par_disabled);
        tmp_kw_call_dict_value_1_1 = par_disabled;
        CHECK_OBJECT(par_visible);
        tmp_kw_call_dict_value_2_1 = par_visible;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_3_1 = par_data;
        frame_fae998c37bd2d682682af1293e668928->m_frame.f_lineno = 64;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_open);
        tmp_assattr_value_1 = par_open;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_content);
        tmp_assattr_value_2 = par_content;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_action);
        tmp_assattr_value_3 = par_action;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_action_color);
        tmp_assattr_value_4 = par_action_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_bgcolor);
        tmp_assattr_value_5 = par_bgcolor;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_duration);
        tmp_assattr_value_6 = par_duration;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_on_action);
        tmp_assattr_value_7 = par_on_action;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fae998c37bd2d682682af1293e668928, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fae998c37bd2d682682af1293e668928->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fae998c37bd2d682682af1293e668928, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fae998c37bd2d682682af1293e668928,
        type_description_1,
        par_self,
        par_content,
        par_ref,
        par_disabled,
        par_visible,
        par_data,
        par_open,
        par_action,
        par_action_color,
        par_bgcolor,
        par_duration,
        par_on_action
    );


    // Release cached frame if used for exception.
    if (frame_fae998c37bd2d682682af1293e668928 == cache_frame_fae998c37bd2d682682af1293e668928) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fae998c37bd2d682682af1293e668928);
        cache_frame_fae998c37bd2d682682af1293e668928 = NULL;
    }

    assertFrameObject(frame_fae998c37bd2d682682af1293e668928);

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
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_open);
    Py_DECREF(par_open);
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);
    CHECK_OBJECT(par_action_color);
    Py_DECREF(par_action_color);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_duration);
    Py_DECREF(par_duration);
    CHECK_OBJECT(par_on_action);
    Py_DECREF(par_on_action);
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
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_open);
    Py_DECREF(par_open);
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);
    CHECK_OBJECT(par_action_color);
    Py_DECREF(par_action_color);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_duration);
    Py_DECREF(par_duration);
    CHECK_OBJECT(par_on_action);
    Py_DECREF(par_on_action);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$snack_bar$$$function__3__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_children = NULL;
    struct Nuitka_FrameObject *frame_5a5ef92280b7d1ed99e3e3c0ca44f681;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5a5ef92280b7d1ed99e3e3c0ca44f681 = NULL;
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
    if (isFrameUnusable(cache_frame_5a5ef92280b7d1ed99e3e3c0ca44f681)) {
        Py_XDECREF(cache_frame_5a5ef92280b7d1ed99e3e3c0ca44f681);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5a5ef92280b7d1ed99e3e3c0ca44f681 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5a5ef92280b7d1ed99e3e3c0ca44f681 = MAKE_FUNCTION_FRAME(codeobj_5a5ef92280b7d1ed99e3e3c0ca44f681, module_flet_core$snack_bar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5a5ef92280b7d1ed99e3e3c0ca44f681->m_type_description == NULL);
    frame_5a5ef92280b7d1ed99e3e3c0ca44f681 = cache_frame_5a5ef92280b7d1ed99e3e3c0ca44f681;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5a5ef92280b7d1ed99e3e3c0ca44f681);
    assert(Py_REFCNT(frame_5a5ef92280b7d1ed99e3e3c0ca44f681) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 86;
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
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5a5ef92280b7d1ed99e3e3c0ca44f681->m_frame.f_lineno = 87;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[11],
            &PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
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
        tmp_item_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    if (var_children == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 89;
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
        exception_tb = MAKE_TRACEBACK(frame_5a5ef92280b7d1ed99e3e3c0ca44f681, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5a5ef92280b7d1ed99e3e3c0ca44f681->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5a5ef92280b7d1ed99e3e3c0ca44f681, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5a5ef92280b7d1ed99e3e3c0ca44f681,
        type_description_1,
        par_self,
        var_children
    );


    // Release cached frame if used for exception.
    if (frame_5a5ef92280b7d1ed99e3e3c0ca44f681 == cache_frame_5a5ef92280b7d1ed99e3e3c0ca44f681) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5a5ef92280b7d1ed99e3e3c0ca44f681);
        cache_frame_5a5ef92280b7d1ed99e3e3c0ca44f681 = NULL;
    }

    assertFrameObject(frame_5a5ef92280b7d1ed99e3e3c0ca44f681);

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


static PyObject *impl_flet_core$snack_bar$$$function__4_open(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9184c973cf0191b15ec80bf51101684a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9184c973cf0191b15ec80bf51101684a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9184c973cf0191b15ec80bf51101684a)) {
        Py_XDECREF(cache_frame_9184c973cf0191b15ec80bf51101684a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9184c973cf0191b15ec80bf51101684a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9184c973cf0191b15ec80bf51101684a = MAKE_FUNCTION_FRAME(codeobj_9184c973cf0191b15ec80bf51101684a, module_flet_core$snack_bar, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9184c973cf0191b15ec80bf51101684a->m_type_description == NULL);
    frame_9184c973cf0191b15ec80bf51101684a = cache_frame_9184c973cf0191b15ec80bf51101684a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9184c973cf0191b15ec80bf51101684a);
    assert(Py_REFCNT(frame_9184c973cf0191b15ec80bf51101684a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9184c973cf0191b15ec80bf51101684a->m_frame.f_lineno = 94;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[15], 0), mod_consts[16]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
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
        exception_tb = MAKE_TRACEBACK(frame_9184c973cf0191b15ec80bf51101684a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9184c973cf0191b15ec80bf51101684a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9184c973cf0191b15ec80bf51101684a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9184c973cf0191b15ec80bf51101684a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9184c973cf0191b15ec80bf51101684a == cache_frame_9184c973cf0191b15ec80bf51101684a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9184c973cf0191b15ec80bf51101684a);
        cache_frame_9184c973cf0191b15ec80bf51101684a = NULL;
    }

    assertFrameObject(frame_9184c973cf0191b15ec80bf51101684a);

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


static PyObject *impl_flet_core$snack_bar$$$function__5_open(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_30411857a9de0a41ee822db62395e227;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_30411857a9de0a41ee822db62395e227 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_30411857a9de0a41ee822db62395e227)) {
        Py_XDECREF(cache_frame_30411857a9de0a41ee822db62395e227);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30411857a9de0a41ee822db62395e227 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30411857a9de0a41ee822db62395e227 = MAKE_FUNCTION_FRAME(codeobj_30411857a9de0a41ee822db62395e227, module_flet_core$snack_bar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30411857a9de0a41ee822db62395e227->m_type_description == NULL);
    frame_30411857a9de0a41ee822db62395e227 = cache_frame_30411857a9de0a41ee822db62395e227;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_30411857a9de0a41ee822db62395e227);
    assert(Py_REFCNT(frame_30411857a9de0a41ee822db62395e227) == 2);

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
        frame_30411857a9de0a41ee822db62395e227->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[17],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
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
        exception_tb = MAKE_TRACEBACK(frame_30411857a9de0a41ee822db62395e227, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30411857a9de0a41ee822db62395e227->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30411857a9de0a41ee822db62395e227, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30411857a9de0a41ee822db62395e227,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_30411857a9de0a41ee822db62395e227 == cache_frame_30411857a9de0a41ee822db62395e227) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30411857a9de0a41ee822db62395e227);
        cache_frame_30411857a9de0a41ee822db62395e227 = NULL;
    }

    assertFrameObject(frame_30411857a9de0a41ee822db62395e227);

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


static PyObject *impl_flet_core$snack_bar$$$function__6_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1dbf78b563715c7a6769280f194fd797;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1dbf78b563715c7a6769280f194fd797 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1dbf78b563715c7a6769280f194fd797)) {
        Py_XDECREF(cache_frame_1dbf78b563715c7a6769280f194fd797);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1dbf78b563715c7a6769280f194fd797 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1dbf78b563715c7a6769280f194fd797 = MAKE_FUNCTION_FRAME(codeobj_1dbf78b563715c7a6769280f194fd797, module_flet_core$snack_bar, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1dbf78b563715c7a6769280f194fd797->m_type_description == NULL);
    frame_1dbf78b563715c7a6769280f194fd797 = cache_frame_1dbf78b563715c7a6769280f194fd797;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1dbf78b563715c7a6769280f194fd797);
    assert(Py_REFCNT(frame_1dbf78b563715c7a6769280f194fd797) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
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
        exception_tb = MAKE_TRACEBACK(frame_1dbf78b563715c7a6769280f194fd797, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1dbf78b563715c7a6769280f194fd797->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1dbf78b563715c7a6769280f194fd797, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1dbf78b563715c7a6769280f194fd797,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1dbf78b563715c7a6769280f194fd797 == cache_frame_1dbf78b563715c7a6769280f194fd797) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1dbf78b563715c7a6769280f194fd797);
        cache_frame_1dbf78b563715c7a6769280f194fd797 = NULL;
    }

    assertFrameObject(frame_1dbf78b563715c7a6769280f194fd797);

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


static PyObject *impl_flet_core$snack_bar$$$function__7_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_152a6d6ed753afe62752c22bcfb2e563;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_152a6d6ed753afe62752c22bcfb2e563 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_152a6d6ed753afe62752c22bcfb2e563)) {
        Py_XDECREF(cache_frame_152a6d6ed753afe62752c22bcfb2e563);

#if _DEBUG_REFCOUNTS
        if (cache_frame_152a6d6ed753afe62752c22bcfb2e563 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_152a6d6ed753afe62752c22bcfb2e563 = MAKE_FUNCTION_FRAME(codeobj_152a6d6ed753afe62752c22bcfb2e563, module_flet_core$snack_bar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_152a6d6ed753afe62752c22bcfb2e563->m_type_description == NULL);
    frame_152a6d6ed753afe62752c22bcfb2e563 = cache_frame_152a6d6ed753afe62752c22bcfb2e563;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_152a6d6ed753afe62752c22bcfb2e563);
    assert(Py_REFCNT(frame_152a6d6ed753afe62752c22bcfb2e563) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_152a6d6ed753afe62752c22bcfb2e563, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_152a6d6ed753afe62752c22bcfb2e563->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_152a6d6ed753afe62752c22bcfb2e563, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_152a6d6ed753afe62752c22bcfb2e563,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_152a6d6ed753afe62752c22bcfb2e563 == cache_frame_152a6d6ed753afe62752c22bcfb2e563) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_152a6d6ed753afe62752c22bcfb2e563);
        cache_frame_152a6d6ed753afe62752c22bcfb2e563 = NULL;
    }

    assertFrameObject(frame_152a6d6ed753afe62752c22bcfb2e563);

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


static PyObject *impl_flet_core$snack_bar$$$function__8_action(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_70e2c0d0fcc395d9153f81a98f8452b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_70e2c0d0fcc395d9153f81a98f8452b6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_70e2c0d0fcc395d9153f81a98f8452b6)) {
        Py_XDECREF(cache_frame_70e2c0d0fcc395d9153f81a98f8452b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70e2c0d0fcc395d9153f81a98f8452b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70e2c0d0fcc395d9153f81a98f8452b6 = MAKE_FUNCTION_FRAME(codeobj_70e2c0d0fcc395d9153f81a98f8452b6, module_flet_core$snack_bar, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_70e2c0d0fcc395d9153f81a98f8452b6->m_type_description == NULL);
    frame_70e2c0d0fcc395d9153f81a98f8452b6 = cache_frame_70e2c0d0fcc395d9153f81a98f8452b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_70e2c0d0fcc395d9153f81a98f8452b6);
    assert(Py_REFCNT(frame_70e2c0d0fcc395d9153f81a98f8452b6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_70e2c0d0fcc395d9153f81a98f8452b6->m_frame.f_lineno = 124;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[14],
            PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
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
        exception_tb = MAKE_TRACEBACK(frame_70e2c0d0fcc395d9153f81a98f8452b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70e2c0d0fcc395d9153f81a98f8452b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70e2c0d0fcc395d9153f81a98f8452b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70e2c0d0fcc395d9153f81a98f8452b6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_70e2c0d0fcc395d9153f81a98f8452b6 == cache_frame_70e2c0d0fcc395d9153f81a98f8452b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_70e2c0d0fcc395d9153f81a98f8452b6);
        cache_frame_70e2c0d0fcc395d9153f81a98f8452b6 = NULL;
    }

    assertFrameObject(frame_70e2c0d0fcc395d9153f81a98f8452b6);

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


static PyObject *impl_flet_core$snack_bar$$$function__9_action(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_72c77099d0206b8210b5b7016b147720;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_72c77099d0206b8210b5b7016b147720 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_72c77099d0206b8210b5b7016b147720)) {
        Py_XDECREF(cache_frame_72c77099d0206b8210b5b7016b147720);

#if _DEBUG_REFCOUNTS
        if (cache_frame_72c77099d0206b8210b5b7016b147720 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_72c77099d0206b8210b5b7016b147720 = MAKE_FUNCTION_FRAME(codeobj_72c77099d0206b8210b5b7016b147720, module_flet_core$snack_bar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_72c77099d0206b8210b5b7016b147720->m_type_description == NULL);
    frame_72c77099d0206b8210b5b7016b147720 = cache_frame_72c77099d0206b8210b5b7016b147720;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_72c77099d0206b8210b5b7016b147720);
    assert(Py_REFCNT(frame_72c77099d0206b8210b5b7016b147720) == 2);

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
        frame_72c77099d0206b8210b5b7016b147720->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[17],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
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
        exception_tb = MAKE_TRACEBACK(frame_72c77099d0206b8210b5b7016b147720, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72c77099d0206b8210b5b7016b147720->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72c77099d0206b8210b5b7016b147720, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_72c77099d0206b8210b5b7016b147720,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_72c77099d0206b8210b5b7016b147720 == cache_frame_72c77099d0206b8210b5b7016b147720) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_72c77099d0206b8210b5b7016b147720);
        cache_frame_72c77099d0206b8210b5b7016b147720 = NULL;
    }

    assertFrameObject(frame_72c77099d0206b8210b5b7016b147720);

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


static PyObject *impl_flet_core$snack_bar$$$function__10_action_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9ee8ac9f63c611e8cb83df34695e5ac8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ee8ac9f63c611e8cb83df34695e5ac8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ee8ac9f63c611e8cb83df34695e5ac8)) {
        Py_XDECREF(cache_frame_9ee8ac9f63c611e8cb83df34695e5ac8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ee8ac9f63c611e8cb83df34695e5ac8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ee8ac9f63c611e8cb83df34695e5ac8 = MAKE_FUNCTION_FRAME(codeobj_9ee8ac9f63c611e8cb83df34695e5ac8, module_flet_core$snack_bar, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ee8ac9f63c611e8cb83df34695e5ac8->m_type_description == NULL);
    frame_9ee8ac9f63c611e8cb83df34695e5ac8 = cache_frame_9ee8ac9f63c611e8cb83df34695e5ac8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9ee8ac9f63c611e8cb83df34695e5ac8);
    assert(Py_REFCNT(frame_9ee8ac9f63c611e8cb83df34695e5ac8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_9ee8ac9f63c611e8cb83df34695e5ac8->m_frame.f_lineno = 133;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[14],
            PyTuple_GET_ITEM(mod_consts[19], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
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
        exception_tb = MAKE_TRACEBACK(frame_9ee8ac9f63c611e8cb83df34695e5ac8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ee8ac9f63c611e8cb83df34695e5ac8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ee8ac9f63c611e8cb83df34695e5ac8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ee8ac9f63c611e8cb83df34695e5ac8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9ee8ac9f63c611e8cb83df34695e5ac8 == cache_frame_9ee8ac9f63c611e8cb83df34695e5ac8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ee8ac9f63c611e8cb83df34695e5ac8);
        cache_frame_9ee8ac9f63c611e8cb83df34695e5ac8 = NULL;
    }

    assertFrameObject(frame_9ee8ac9f63c611e8cb83df34695e5ac8);

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


static PyObject *impl_flet_core$snack_bar$$$function__11_action_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d181a1fdbe1e611242db486ae907aea5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d181a1fdbe1e611242db486ae907aea5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d181a1fdbe1e611242db486ae907aea5)) {
        Py_XDECREF(cache_frame_d181a1fdbe1e611242db486ae907aea5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d181a1fdbe1e611242db486ae907aea5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d181a1fdbe1e611242db486ae907aea5 = MAKE_FUNCTION_FRAME(codeobj_d181a1fdbe1e611242db486ae907aea5, module_flet_core$snack_bar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d181a1fdbe1e611242db486ae907aea5->m_type_description == NULL);
    frame_d181a1fdbe1e611242db486ae907aea5 = cache_frame_d181a1fdbe1e611242db486ae907aea5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d181a1fdbe1e611242db486ae907aea5);
    assert(Py_REFCNT(frame_d181a1fdbe1e611242db486ae907aea5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[20];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_d181a1fdbe1e611242db486ae907aea5->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[17],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
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
        exception_tb = MAKE_TRACEBACK(frame_d181a1fdbe1e611242db486ae907aea5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d181a1fdbe1e611242db486ae907aea5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d181a1fdbe1e611242db486ae907aea5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d181a1fdbe1e611242db486ae907aea5,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d181a1fdbe1e611242db486ae907aea5 == cache_frame_d181a1fdbe1e611242db486ae907aea5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d181a1fdbe1e611242db486ae907aea5);
        cache_frame_d181a1fdbe1e611242db486ae907aea5 = NULL;
    }

    assertFrameObject(frame_d181a1fdbe1e611242db486ae907aea5);

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


static PyObject *impl_flet_core$snack_bar$$$function__12_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f712ad380faa931c18f1c313c769ebba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f712ad380faa931c18f1c313c769ebba = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f712ad380faa931c18f1c313c769ebba)) {
        Py_XDECREF(cache_frame_f712ad380faa931c18f1c313c769ebba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f712ad380faa931c18f1c313c769ebba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f712ad380faa931c18f1c313c769ebba = MAKE_FUNCTION_FRAME(codeobj_f712ad380faa931c18f1c313c769ebba, module_flet_core$snack_bar, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f712ad380faa931c18f1c313c769ebba->m_type_description == NULL);
    frame_f712ad380faa931c18f1c313c769ebba = cache_frame_f712ad380faa931c18f1c313c769ebba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f712ad380faa931c18f1c313c769ebba);
    assert(Py_REFCNT(frame_f712ad380faa931c18f1c313c769ebba) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f712ad380faa931c18f1c313c769ebba->m_frame.f_lineno = 142;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[14],
            PyTuple_GET_ITEM(mod_consts[21], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
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
        exception_tb = MAKE_TRACEBACK(frame_f712ad380faa931c18f1c313c769ebba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f712ad380faa931c18f1c313c769ebba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f712ad380faa931c18f1c313c769ebba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f712ad380faa931c18f1c313c769ebba,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f712ad380faa931c18f1c313c769ebba == cache_frame_f712ad380faa931c18f1c313c769ebba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f712ad380faa931c18f1c313c769ebba);
        cache_frame_f712ad380faa931c18f1c313c769ebba = NULL;
    }

    assertFrameObject(frame_f712ad380faa931c18f1c313c769ebba);

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


static PyObject *impl_flet_core$snack_bar$$$function__13_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_b4a9ea99f3a9fa76a86463106b4fefa2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b4a9ea99f3a9fa76a86463106b4fefa2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b4a9ea99f3a9fa76a86463106b4fefa2)) {
        Py_XDECREF(cache_frame_b4a9ea99f3a9fa76a86463106b4fefa2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4a9ea99f3a9fa76a86463106b4fefa2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4a9ea99f3a9fa76a86463106b4fefa2 = MAKE_FUNCTION_FRAME(codeobj_b4a9ea99f3a9fa76a86463106b4fefa2, module_flet_core$snack_bar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b4a9ea99f3a9fa76a86463106b4fefa2->m_type_description == NULL);
    frame_b4a9ea99f3a9fa76a86463106b4fefa2 = cache_frame_b4a9ea99f3a9fa76a86463106b4fefa2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b4a9ea99f3a9fa76a86463106b4fefa2);
    assert(Py_REFCNT(frame_b4a9ea99f3a9fa76a86463106b4fefa2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[22];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_b4a9ea99f3a9fa76a86463106b4fefa2->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[17],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
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
        exception_tb = MAKE_TRACEBACK(frame_b4a9ea99f3a9fa76a86463106b4fefa2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4a9ea99f3a9fa76a86463106b4fefa2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4a9ea99f3a9fa76a86463106b4fefa2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4a9ea99f3a9fa76a86463106b4fefa2,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b4a9ea99f3a9fa76a86463106b4fefa2 == cache_frame_b4a9ea99f3a9fa76a86463106b4fefa2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b4a9ea99f3a9fa76a86463106b4fefa2);
        cache_frame_b4a9ea99f3a9fa76a86463106b4fefa2 = NULL;
    }

    assertFrameObject(frame_b4a9ea99f3a9fa76a86463106b4fefa2);

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


static PyObject *impl_flet_core$snack_bar$$$function__14_duration(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8c9cf94293cc63e5e3d3ca3fd737753c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8c9cf94293cc63e5e3d3ca3fd737753c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8c9cf94293cc63e5e3d3ca3fd737753c)) {
        Py_XDECREF(cache_frame_8c9cf94293cc63e5e3d3ca3fd737753c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8c9cf94293cc63e5e3d3ca3fd737753c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8c9cf94293cc63e5e3d3ca3fd737753c = MAKE_FUNCTION_FRAME(codeobj_8c9cf94293cc63e5e3d3ca3fd737753c, module_flet_core$snack_bar, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8c9cf94293cc63e5e3d3ca3fd737753c->m_type_description == NULL);
    frame_8c9cf94293cc63e5e3d3ca3fd737753c = cache_frame_8c9cf94293cc63e5e3d3ca3fd737753c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8c9cf94293cc63e5e3d3ca3fd737753c);
    assert(Py_REFCNT(frame_8c9cf94293cc63e5e3d3ca3fd737753c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_8c9cf94293cc63e5e3d3ca3fd737753c->m_frame.f_lineno = 151;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[14],
            PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
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
        exception_tb = MAKE_TRACEBACK(frame_8c9cf94293cc63e5e3d3ca3fd737753c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8c9cf94293cc63e5e3d3ca3fd737753c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8c9cf94293cc63e5e3d3ca3fd737753c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8c9cf94293cc63e5e3d3ca3fd737753c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8c9cf94293cc63e5e3d3ca3fd737753c == cache_frame_8c9cf94293cc63e5e3d3ca3fd737753c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8c9cf94293cc63e5e3d3ca3fd737753c);
        cache_frame_8c9cf94293cc63e5e3d3ca3fd737753c = NULL;
    }

    assertFrameObject(frame_8c9cf94293cc63e5e3d3ca3fd737753c);

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


static PyObject *impl_flet_core$snack_bar$$$function__15_duration(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_057f26b93823228009bf6392665c5e49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_057f26b93823228009bf6392665c5e49 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_057f26b93823228009bf6392665c5e49)) {
        Py_XDECREF(cache_frame_057f26b93823228009bf6392665c5e49);

#if _DEBUG_REFCOUNTS
        if (cache_frame_057f26b93823228009bf6392665c5e49 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_057f26b93823228009bf6392665c5e49 = MAKE_FUNCTION_FRAME(codeobj_057f26b93823228009bf6392665c5e49, module_flet_core$snack_bar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_057f26b93823228009bf6392665c5e49->m_type_description == NULL);
    frame_057f26b93823228009bf6392665c5e49 = cache_frame_057f26b93823228009bf6392665c5e49;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_057f26b93823228009bf6392665c5e49);
    assert(Py_REFCNT(frame_057f26b93823228009bf6392665c5e49) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[8];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_057f26b93823228009bf6392665c5e49->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[17],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
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
        exception_tb = MAKE_TRACEBACK(frame_057f26b93823228009bf6392665c5e49, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_057f26b93823228009bf6392665c5e49->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_057f26b93823228009bf6392665c5e49, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_057f26b93823228009bf6392665c5e49,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_057f26b93823228009bf6392665c5e49 == cache_frame_057f26b93823228009bf6392665c5e49) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_057f26b93823228009bf6392665c5e49);
        cache_frame_057f26b93823228009bf6392665c5e49 = NULL;
    }

    assertFrameObject(frame_057f26b93823228009bf6392665c5e49);

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


static PyObject *impl_flet_core$snack_bar$$$function__16_on_action(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_00d60673c3171098b97194bed0641bdf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_00d60673c3171098b97194bed0641bdf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_00d60673c3171098b97194bed0641bdf)) {
        Py_XDECREF(cache_frame_00d60673c3171098b97194bed0641bdf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00d60673c3171098b97194bed0641bdf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00d60673c3171098b97194bed0641bdf = MAKE_FUNCTION_FRAME(codeobj_00d60673c3171098b97194bed0641bdf, module_flet_core$snack_bar, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_00d60673c3171098b97194bed0641bdf->m_type_description == NULL);
    frame_00d60673c3171098b97194bed0641bdf = cache_frame_00d60673c3171098b97194bed0641bdf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_00d60673c3171098b97194bed0641bdf);
    assert(Py_REFCNT(frame_00d60673c3171098b97194bed0641bdf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_00d60673c3171098b97194bed0641bdf->m_frame.f_lineno = 160;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
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
        exception_tb = MAKE_TRACEBACK(frame_00d60673c3171098b97194bed0641bdf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00d60673c3171098b97194bed0641bdf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00d60673c3171098b97194bed0641bdf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00d60673c3171098b97194bed0641bdf,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_00d60673c3171098b97194bed0641bdf == cache_frame_00d60673c3171098b97194bed0641bdf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_00d60673c3171098b97194bed0641bdf);
        cache_frame_00d60673c3171098b97194bed0641bdf = NULL;
    }

    assertFrameObject(frame_00d60673c3171098b97194bed0641bdf);

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


static PyObject *impl_flet_core$snack_bar$$$function__17_on_action(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_d66da215961de8476cefdf4c7d53074b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d66da215961de8476cefdf4c7d53074b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d66da215961de8476cefdf4c7d53074b)) {
        Py_XDECREF(cache_frame_d66da215961de8476cefdf4c7d53074b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d66da215961de8476cefdf4c7d53074b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d66da215961de8476cefdf4c7d53074b = MAKE_FUNCTION_FRAME(codeobj_d66da215961de8476cefdf4c7d53074b, module_flet_core$snack_bar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d66da215961de8476cefdf4c7d53074b->m_type_description == NULL);
    frame_d66da215961de8476cefdf4c7d53074b = cache_frame_d66da215961de8476cefdf4c7d53074b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d66da215961de8476cefdf4c7d53074b);
    assert(Py_REFCNT(frame_d66da215961de8476cefdf4c7d53074b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[5];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_d66da215961de8476cefdf4c7d53074b->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_d66da215961de8476cefdf4c7d53074b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d66da215961de8476cefdf4c7d53074b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d66da215961de8476cefdf4c7d53074b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d66da215961de8476cefdf4c7d53074b,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_d66da215961de8476cefdf4c7d53074b == cache_frame_d66da215961de8476cefdf4c7d53074b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d66da215961de8476cefdf4c7d53074b);
        cache_frame_d66da215961de8476cefdf4c7d53074b = NULL;
    }

    assertFrameObject(frame_d66da215961de8476cefdf4c7d53074b);

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



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__10_action_color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__10_action_color,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_9ee8ac9f63c611e8cb83df34695e5ac8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__11_action_color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__11_action_color,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_d181a1fdbe1e611242db486ae907aea5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__12_bgcolor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__12_bgcolor,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_f712ad380faa931c18f1c313c769ebba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__13_bgcolor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__13_bgcolor,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_b4a9ea99f3a9fa76a86463106b4fefa2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__14_duration(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__14_duration,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_8c9cf94293cc63e5e3d3ca3fd737753c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__15_duration(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__15_duration,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_057f26b93823228009bf6392665c5e49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__16_on_action() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__16_on_action,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_00d60673c3171098b97194bed0641bdf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__17_on_action() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__17_on_action,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_d66da215961de8476cefdf4c7d53074b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        codeobj_fae998c37bd2d682682af1293e668928,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_0476f5d318108a104a7ab1f29d909451,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[60]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__3__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__3__get_children,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_5a5ef92280b7d1ed99e3e3c0ca44f681,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__4_open(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__4_open,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_9184c973cf0191b15ec80bf51101684a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__5_open(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__5_open,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_30411857a9de0a41ee822db62395e227,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__6_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__6_content,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_1dbf78b563715c7a6769280f194fd797,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__7_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__7_content,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_152a6d6ed753afe62752c22bcfb2e563,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__8_action() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__8_action,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_70e2c0d0fcc395d9153f81a98f8452b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$snack_bar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$snack_bar$$$function__9_action() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$snack_bar$$$function__9_action,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_72c77099d0206b8210b5b7016b147720,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$snack_bar,
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

function_impl_code functable_flet_core$snack_bar[] = {
    impl_flet_core$snack_bar$$$function__1___init__,
    NULL,
    impl_flet_core$snack_bar$$$function__3__get_children,
    impl_flet_core$snack_bar$$$function__4_open,
    impl_flet_core$snack_bar$$$function__5_open,
    impl_flet_core$snack_bar$$$function__6_content,
    impl_flet_core$snack_bar$$$function__7_content,
    impl_flet_core$snack_bar$$$function__8_action,
    impl_flet_core$snack_bar$$$function__9_action,
    impl_flet_core$snack_bar$$$function__10_action_color,
    impl_flet_core$snack_bar$$$function__11_action_color,
    impl_flet_core$snack_bar$$$function__12_bgcolor,
    impl_flet_core$snack_bar$$$function__13_bgcolor,
    impl_flet_core$snack_bar$$$function__14_duration,
    impl_flet_core$snack_bar$$$function__15_duration,
    impl_flet_core$snack_bar$$$function__16_on_action,
    impl_flet_core$snack_bar$$$function__17_on_action,
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

    function_impl_code *current = functable_flet_core$snack_bar;
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

    if (offset > sizeof(functable_flet_core$snack_bar) || offset < 0) {
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
        functable_flet_core$snack_bar[offset],
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
        module_flet_core$snack_bar,
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
PyObject *modulecode_flet_core$snack_bar(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.snack_bar");

    // Store the module for future use.
    module_flet_core$snack_bar = module;

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
        PRINT_STRING("flet_core.snack_bar: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.snack_bar: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.snack_bar: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$snack_bar\n");

    moduledict_flet_core$snack_bar = MODULE_DICT(module_flet_core$snack_bar);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$snack_bar,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$snack_bar,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[84]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$snack_bar,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$snack_bar,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$snack_bar,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$snack_bar);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$snack_bar);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_b738b3b7e6280b5f7ee2c9708cb6203a;
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
    int tmp_res;
    PyObject *locals_flet_core$snack_bar$$$class__1_SnackBar_7 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c630e70bcf02aa774b3d3948a95a411d_2;
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
        UPDATE_STRING_DICT0(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_2);
    }
    frame_b738b3b7e6280b5f7ee2c9708cb6203a = MAKE_MODULE_FRAME(codeobj_b738b3b7e6280b5f7ee2c9708cb6203a, module_flet_core$snack_bar);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b738b3b7e6280b5f7ee2c9708cb6203a);
    assert(Py_REFCNT(frame_b738b3b7e6280b5f7ee2c9708cb6203a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[27];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[31], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_3);
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
                (PyObject *)moduledict_flet_core$snack_bar,
                mod_consts[33],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[33]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$snack_bar,
                mod_consts[35],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[35]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_6);
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[36];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$snack_bar;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[37];
        tmp_level_value_1 = mod_consts[34];
        frame_b738b3b7e6280b5f7ee2c9708cb6203a->m_frame.f_lineno = 3;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$snack_bar,
                mod_consts[0],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[38];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$snack_bar;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[39];
        tmp_level_value_2 = mod_consts[34];
        frame_b738b3b7e6280b5f7ee2c9708cb6203a->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$snack_bar,
                mod_consts[40],
                mod_consts[34]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        tmp_assign_source_9 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_9, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_10 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
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


            exception_lineno = 7;

            goto try_except_handler_2;
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
        tmp_subscript_value_1 = mod_consts[34];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_12 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[41]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[42];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_b738b3b7e6280b5f7ee2c9708cb6203a->m_frame.f_lineno = 7;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[43]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
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
        tmp_mod_expr_left_1 = mod_consts[44];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[45];
        tmp_getattr_default_1 = mod_consts[46];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[45]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 7;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$snack_bar$$$class__1_SnackBar_7 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[47];
        tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[48], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[26], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        frame_c630e70bcf02aa774b3d3948a95a411d_2 = MAKE_CLASS_FRAME(codeobj_c630e70bcf02aa774b3d3948a95a411d, module_flet_core$snack_bar, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c630e70bcf02aa774b3d3948a95a411d_2);
        assert(Py_REFCNT(frame_c630e70bcf02aa774b3d3948a95a411d_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_defaults_1 = mod_consts[51];
            tmp_dict_key_1 = mod_consts[4];
            tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[0]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_dict_value_1 == NULL)) {
                        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_dict_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 10 );
            {
                PyObject *tmp_expression_value_6;
                PyObject *tmp_subscript_value_2;
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_8;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[52];
                tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

                if (tmp_expression_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_expression_value_6 == NULL)) {
                            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                        }

                        if (tmp_expression_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 48;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_6);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_2 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[40]);

                if (tmp_subscript_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[40]);

                        if (unlikely(tmp_subscript_value_2 == NULL)) {
                            tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                        }

                        if (tmp_subscript_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_6);

                            exception_lineno = 48;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_2);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
                Py_DECREF(tmp_expression_value_6);
                Py_DECREF(tmp_subscript_value_2);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[53];
                tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

                if (tmp_expression_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_expression_value_7 == NULL)) {
                            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                        }

                        if (tmp_expression_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 49;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_3 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[54]);

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


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[55];
                tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 50;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[54]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_4 = (PyObject *)&PyBool_Type;
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


                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[56];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[33]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[33]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 51;
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
                tmp_dict_key_1 = mod_consts[3];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[54]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[5];
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 57;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[57]);

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


                    exception_lineno = 57;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[6];
                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 58;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[57]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 58;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 59;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[57]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_11);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[8];
                tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 60;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[58]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
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


            tmp_dictset_value = MAKE_FUNCTION_flet_core$snack_bar$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$snack_bar$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$snack_bar$$$function__3__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[63], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
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
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_10;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
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
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[65]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[66];
            tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

            if (tmp_expression_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);

                        exception_lineno = 93;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[54]);

            if (tmp_subscript_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_9 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_13);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$snack_bar$$$function__4_open(tmp_annotations_2);

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[66];
            tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

            if (tmp_expression_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_expression_value_14 == NULL)) {
                        tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_expression_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 93;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[54]);

            if (tmp_subscript_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_10 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_14);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$snack_bar$$$function__4_open(tmp_annotations_3);

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_11;
            tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[3]);

            if (unlikely(tmp_expression_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[68]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[69];
            tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

            if (tmp_expression_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_expression_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);

                        exception_lineno = 97;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[54]);

            if (tmp_subscript_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_11 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_16);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$snack_bar$$$function__5_open(tmp_annotations_4);

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 96;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
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
            tmp_called_value_5 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[65]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[66];
            tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[0]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_5);

                        exception_lineno = 114;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$snack_bar$$$function__6_content(tmp_annotations_5);

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 113;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[66];
            tmp_dict_value_6 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[0]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 114;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$snack_bar$$$function__6_content(tmp_annotations_6);

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 113;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[4]);

            if (unlikely(tmp_expression_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[68]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_7 = mod_consts[69];
            tmp_dict_value_7 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[0]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 118;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$snack_bar$$$function__7_content(tmp_annotations_7);

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 117;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_8;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
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
            tmp_called_value_8 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[65]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$snack_bar$$$function__8_action();

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$snack_bar$$$function__8_action();

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_9;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[5]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$snack_bar$$$function__9_action();

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[68], tmp_args_element_value_9);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_11;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
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
            tmp_called_value_10 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[65]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$snack_bar$$$function__10_action_color();

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 131;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$snack_bar$$$function__10_action_color();

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 131;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_12;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[6]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$snack_bar$$$function__11_action_color();

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 135;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[68], tmp_args_element_value_12);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_14;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
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
            tmp_called_value_12 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[65]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$snack_bar$$$function__12_bgcolor();

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 140;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$snack_bar$$$function__12_bgcolor();

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 140;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_15;
            tmp_called_instance_3 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[7]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$snack_bar$$$function__13_bgcolor();

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 144;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[68], tmp_args_element_value_15);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_13;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_14 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[65]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[66];
            tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

            if (tmp_expression_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_expression_value_18 == NULL)) {
                        tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_expression_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 150;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[58]);

            if (tmp_subscript_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_12 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_18);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$snack_bar$$$function__14_duration(tmp_annotations_8);

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 149;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[66];
            tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

            if (tmp_expression_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_expression_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 150;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[58]);

            if (tmp_subscript_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_13 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_19);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$snack_bar$$$function__14_duration(tmp_annotations_9);

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 149;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[8], tmp_dictset_value);
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
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_14;
            tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[8]);

            if (unlikely(tmp_expression_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[68]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[69];
            tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[35]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[58]);

            if (tmp_subscript_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_14 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$snack_bar$$$function__15_duration(tmp_annotations_10);

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 153;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_20;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_17 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[65]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[65]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$snack_bar$$$function__16_on_action();

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 158;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$snack_bar$$$function__16_on_action();

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 158;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_21;
            tmp_called_instance_4 = PyObject_GetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[9]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$snack_bar$$$function__17_on_action();

            frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[68], tmp_args_element_value_21);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c630e70bcf02aa774b3d3948a95a411d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c630e70bcf02aa774b3d3948a95a411d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c630e70bcf02aa774b3d3948a95a411d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c630e70bcf02aa774b3d3948a95a411d_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_c630e70bcf02aa774b3d3948a95a411d_2);

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
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$snack_bar$$$class__1_SnackBar_7, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_19 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[42];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flet_core$snack_bar$$$class__1_SnackBar_7;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_b738b3b7e6280b5f7ee2c9708cb6203a->m_frame.f_lineno = 7;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_flet_core$snack_bar$$$class__1_SnackBar_7);
        locals_flet_core$snack_bar$$$class__1_SnackBar_7 = NULL;
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

        Py_DECREF(locals_flet_core$snack_bar$$$class__1_SnackBar_7);
        locals_flet_core$snack_bar$$$class__1_SnackBar_7 = NULL;
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
        UPDATE_STRING_DICT1(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_15);
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
        exception_tb = MAKE_TRACEBACK(frame_b738b3b7e6280b5f7ee2c9708cb6203a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b738b3b7e6280b5f7ee2c9708cb6203a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b738b3b7e6280b5f7ee2c9708cb6203a, exception_lineno);
    }



    assertFrameObject(frame_b738b3b7e6280b5f7ee2c9708cb6203a);

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
    PGO_onModuleExit("flet_core.snack_bar", false);

    Py_INCREF(module_flet_core$snack_bar);
    return module_flet_core$snack_bar;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$snack_bar, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$snack_bar", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
