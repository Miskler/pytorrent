/* Generated code for Python module 'flet_core.scrollable_control'
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

/* The "module_flet_core$scrollable_control" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$scrollable_control;
PyDictObject *moduledict_flet_core$scrollable_control;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[129];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[129];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.scrollable_control"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 129; i++) {
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
void checkModuleConstants_flet_core$scrollable_control(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 129; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_2ddc59fa2a3ff0da893346084edbac3c;
static PyCodeObject *codeobj_ce8ce8e175ffa2225332fd1e8bac8ab0;
static PyCodeObject *codeobj_3c2c5d9568079eb1a9005749dd1cf513;
static PyCodeObject *codeobj_53021efb3e76ab17b5778cfdb1bb95ba;
static PyCodeObject *codeobj_73cb5610d1bb82562ee8f132a0a2107f;
static PyCodeObject *codeobj_96f7bbce391f7c7b011345fb64f9a554;
static PyCodeObject *codeobj_9df3e8313e891a046309d0b7d31de753;
static PyCodeObject *codeobj_f08da42297c26c4a5bae4554b1f14fa0;
static PyCodeObject *codeobj_670c99067d9c4172280242e0a3078eb1;
static PyCodeObject *codeobj_2e0dc719358f7178beca0e0bba10be17;
static PyCodeObject *codeobj_5772584b5aab9a29136b8ec72b23950b;
static PyCodeObject *codeobj_df58265aef5f273a6c870ce43a5261f5;
static PyCodeObject *codeobj_91ecdb37ca12c671299adabdbc58579e;
static PyCodeObject *codeobj_db46a4a520c045d5bfa21923890812ba;
static PyCodeObject *codeobj_5b64936c3f4e74cfb08a4196c0fd04ca;
static PyCodeObject *codeobj_754448524f48c52f6ea382f0091582c5;
static PyCodeObject *codeobj_19ba878d754220196381a120b3f6d4f3;
static PyCodeObject *codeobj_951f04f81694e9f5b7521b9e34c291e5;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[63]; CHECK_OBJECT(module_filename_obj);
    codeobj_2ddc59fa2a3ff0da893346084edbac3c = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[119], mod_consts[119], NULL, NULL, 0, 0, 0);
    codeobj_ce8ce8e175ffa2225332fd1e8bac8ab0 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[120], NULL, 0, 0, 0);
    codeobj_3c2c5d9568079eb1a9005749dd1cf513 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[120], NULL, 0, 0, 0);
    codeobj_53021efb3e76ab17b5778cfdb1bb95ba = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[121], NULL, 5, 0, 0);
    codeobj_73cb5610d1bb82562ee8f132a0a2107f = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[122], NULL, 10, 0, 0);
    codeobj_96f7bbce391f7c7b011345fb64f9a554 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[123], NULL, 2, 0, 0);
    codeobj_9df3e8313e891a046309d0b7d31de753 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], mod_consts[117], mod_consts[124], NULL, 1, 0, 0);
    codeobj_f08da42297c26c4a5bae4554b1f14fa0 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[125], NULL, 1, 0, 0);
    codeobj_670c99067d9c4172280242e0a3078eb1 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[123], NULL, 2, 0, 0);
    codeobj_2e0dc719358f7178beca0e0bba10be17 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[126], NULL, 1, 0, 0);
    codeobj_5772584b5aab9a29136b8ec72b23950b = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[125], NULL, 1, 0, 0);
    codeobj_df58265aef5f273a6c870ce43a5261f5 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[127], NULL, 2, 0, 0);
    codeobj_91ecdb37ca12c671299adabdbc58579e = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[125], NULL, 1, 0, 0);
    codeobj_db46a4a520c045d5bfa21923890812ba = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[123], NULL, 2, 0, 0);
    codeobj_5b64936c3f4e74cfb08a4196c0fd04ca = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[125], NULL, 1, 0, 0);
    codeobj_754448524f48c52f6ea382f0091582c5 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[123], NULL, 2, 0, 0);
    codeobj_19ba878d754220196381a120b3f6d4f3 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[128], NULL, 6, 0, 0);
    codeobj_951f04f81694e9f5b7521b9e34c291e5 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[128], NULL, 6, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_flet_core$scrollable_control$$$function__3_scroll_to_async$$$coroutine__1_scroll_to_async(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__10_on_scroll_interval(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__11_on_scroll();


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__12_on_scroll();


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__13___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__14___str__();


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__1___init__$$$function__1_convert_on_scroll_event_data();


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__2_scroll_to(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__3_scroll_to_async(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__4_scroll(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__5_scroll(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__6___set_scroll(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__7_auto_scroll(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__8_auto_scroll(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__9_on_scroll_interval(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$scrollable_control$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_scroll = python_pars[1];
    PyObject *par_auto_scroll = python_pars[2];
    PyObject *par_on_scroll_interval = python_pars[3];
    PyObject *par_on_scroll = python_pars[4];
    PyObject *var_convert_on_scroll_event_data = NULL;
    struct Nuitka_FrameObject *frame_53021efb3e76ab17b5778cfdb1bb95ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_53021efb3e76ab17b5778cfdb1bb95ba = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__1___init__$$$function__1_convert_on_scroll_event_data();

        assert(var_convert_on_scroll_event_data == NULL);
        var_convert_on_scroll_event_data = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_53021efb3e76ab17b5778cfdb1bb95ba)) {
        Py_XDECREF(cache_frame_53021efb3e76ab17b5778cfdb1bb95ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53021efb3e76ab17b5778cfdb1bb95ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53021efb3e76ab17b5778cfdb1bb95ba = MAKE_FUNCTION_FRAME(codeobj_53021efb3e76ab17b5778cfdb1bb95ba, module_flet_core$scrollable_control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53021efb3e76ab17b5778cfdb1bb95ba->m_type_description == NULL);
    frame_53021efb3e76ab17b5778cfdb1bb95ba = cache_frame_53021efb3e76ab17b5778cfdb1bb95ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_53021efb3e76ab17b5778cfdb1bb95ba);
    assert(Py_REFCNT(frame_53021efb3e76ab17b5778cfdb1bb95ba) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_convert_on_scroll_event_data);
        tmp_args_element_value_1 = var_convert_on_scroll_event_data;
        frame_53021efb3e76ab17b5778cfdb1bb95ba->m_frame.f_lineno = 24;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_53021efb3e76ab17b5778cfdb1bb95ba->m_frame.f_lineno = 25;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[6]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_53021efb3e76ab17b5778cfdb1bb95ba->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_scroll);
        tmp_assattr_value_2 = par_scroll;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_auto_scroll);
        tmp_assattr_value_3 = par_auto_scroll;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[8], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_on_scroll_interval);
        tmp_assattr_value_4 = par_on_scroll_interval;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[9], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_on_scroll);
        tmp_assattr_value_5 = par_on_scroll;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[10], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53021efb3e76ab17b5778cfdb1bb95ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53021efb3e76ab17b5778cfdb1bb95ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53021efb3e76ab17b5778cfdb1bb95ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53021efb3e76ab17b5778cfdb1bb95ba,
        type_description_1,
        par_self,
        par_scroll,
        par_auto_scroll,
        par_on_scroll_interval,
        par_on_scroll,
        var_convert_on_scroll_event_data
    );


    // Release cached frame if used for exception.
    if (frame_53021efb3e76ab17b5778cfdb1bb95ba == cache_frame_53021efb3e76ab17b5778cfdb1bb95ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53021efb3e76ab17b5778cfdb1bb95ba);
        cache_frame_53021efb3e76ab17b5778cfdb1bb95ba = NULL;
    }

    assertFrameObject(frame_53021efb3e76ab17b5778cfdb1bb95ba);

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
    CHECK_OBJECT(var_convert_on_scroll_event_data);
    Py_DECREF(var_convert_on_scroll_event_data);
    var_convert_on_scroll_event_data = NULL;
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

    CHECK_OBJECT(var_convert_on_scroll_event_data);
    Py_DECREF(var_convert_on_scroll_event_data);
    var_convert_on_scroll_event_data = NULL;
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
    CHECK_OBJECT(par_scroll);
    Py_DECREF(par_scroll);
    CHECK_OBJECT(par_auto_scroll);
    Py_DECREF(par_auto_scroll);
    CHECK_OBJECT(par_on_scroll_interval);
    Py_DECREF(par_on_scroll_interval);
    CHECK_OBJECT(par_on_scroll);
    Py_DECREF(par_on_scroll);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_scroll);
    Py_DECREF(par_scroll);
    CHECK_OBJECT(par_auto_scroll);
    Py_DECREF(par_auto_scroll);
    CHECK_OBJECT(par_on_scroll_interval);
    Py_DECREF(par_on_scroll_interval);
    CHECK_OBJECT(par_on_scroll);
    Py_DECREF(par_on_scroll);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$scrollable_control$$$function__1___init__$$$function__1_convert_on_scroll_event_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_e = python_pars[0];
    PyObject *var_d = NULL;
    struct Nuitka_FrameObject *frame_2e0dc719358f7178beca0e0bba10be17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2e0dc719358f7178beca0e0bba10be17 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2e0dc719358f7178beca0e0bba10be17)) {
        Py_XDECREF(cache_frame_2e0dc719358f7178beca0e0bba10be17);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e0dc719358f7178beca0e0bba10be17 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e0dc719358f7178beca0e0bba10be17 = MAKE_FUNCTION_FRAME(codeobj_2e0dc719358f7178beca0e0bba10be17, module_flet_core$scrollable_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e0dc719358f7178beca0e0bba10be17->m_type_description == NULL);
    frame_2e0dc719358f7178beca0e0bba10be17 = cache_frame_2e0dc719358f7178beca0e0bba10be17;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2e0dc719358f7178beca0e0bba10be17);
    assert(Py_REFCNT(frame_2e0dc719358f7178beca0e0bba10be17) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_e);
        tmp_expression_value_2 = par_e;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[13]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2e0dc719358f7178beca0e0bba10be17->m_frame.f_lineno = 21;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_d);
        tmp_dircall_arg2_1 = var_d;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
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
        exception_tb = MAKE_TRACEBACK(frame_2e0dc719358f7178beca0e0bba10be17, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e0dc719358f7178beca0e0bba10be17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e0dc719358f7178beca0e0bba10be17, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e0dc719358f7178beca0e0bba10be17,
        type_description_1,
        par_e,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_2e0dc719358f7178beca0e0bba10be17 == cache_frame_2e0dc719358f7178beca0e0bba10be17) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e0dc719358f7178beca0e0bba10be17);
        cache_frame_2e0dc719358f7178beca0e0bba10be17 = NULL;
    }

    assertFrameObject(frame_2e0dc719358f7178beca0e0bba10be17);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_d);
    Py_DECREF(var_d);
    var_d = NULL;
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

    Py_XDECREF(var_d);
    var_d = NULL;
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
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$scrollable_control$$$function__2_scroll_to(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_offset = python_pars[1];
    PyObject *par_delta = python_pars[2];
    PyObject *par_key = python_pars[3];
    PyObject *par_duration = python_pars[4];
    PyObject *par_curve = python_pars[5];
    PyObject *var_m = NULL;
    struct Nuitka_FrameObject *frame_19ba878d754220196381a120b3f6d4f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_19ba878d754220196381a120b3f6d4f3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_19ba878d754220196381a120b3f6d4f3)) {
        Py_XDECREF(cache_frame_19ba878d754220196381a120b3f6d4f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19ba878d754220196381a120b3f6d4f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19ba878d754220196381a120b3f6d4f3 = MAKE_FUNCTION_FRAME(codeobj_19ba878d754220196381a120b3f6d4f3, module_flet_core$scrollable_control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_19ba878d754220196381a120b3f6d4f3->m_type_description == NULL);
    frame_19ba878d754220196381a120b3f6d4f3 = cache_frame_19ba878d754220196381a120b3f6d4f3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_19ba878d754220196381a120b3f6d4f3);
    assert(Py_REFCNT(frame_19ba878d754220196381a120b3f6d4f3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[15];
        tmp_dict_value_1 = mod_consts[16];
        tmp_assign_source_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[17];
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "ooooooo";
                goto dict_build_exception_1;
            }
            frame_19ba878d754220196381a120b3f6d4f3->m_frame.f_lineno = 42;
            tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
            if (tmp_unicode_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "ooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            Py_DECREF(tmp_unicode_arg_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "ooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            tmp_dict_key_2 = mod_consts[20];
            CHECK_OBJECT(par_offset);
            tmp_dict_value_2 = par_offset;
            tmp_dict_value_1 = _PyDict_NewPresized( 5 );
            {
                bool tmp_condition_result_1;
                PyObject *tmp_cmp_expr_left_1;
                PyObject *tmp_cmp_expr_right_1;
                PyObject *tmp_expression_value_1;
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[21];
                CHECK_OBJECT(par_delta);
                tmp_dict_value_2 = par_delta;
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[22];
                CHECK_OBJECT(par_key);
                tmp_dict_value_2 = par_key;
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[23];
                CHECK_OBJECT(par_duration);
                tmp_dict_value_2 = par_duration;
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[24];
                CHECK_OBJECT(par_curve);
                tmp_cmp_expr_left_1 = par_curve;
                tmp_cmp_expr_right_1 = Py_None;
                tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
                if (tmp_condition_result_1 != false) {
                    goto condexpr_true_1;
                } else {
                    goto condexpr_false_1;
                }
                condexpr_true_1:;
                CHECK_OBJECT(par_curve);
                tmp_expression_value_1 = par_curve;
                tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_1 = "ooooooo";
                    goto dict_build_exception_2;
                }
                goto condexpr_end_1;
                condexpr_false_1:;
                tmp_dict_value_2 = Py_None;
                Py_INCREF(tmp_dict_value_2);
                condexpr_end_1:;
                tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        assert(var_m == NULL);
        var_m = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        tmp_args_element_value_1 = mod_consts[27];
        CHECK_OBJECT(var_m);
        tmp_args_element_value_2 = var_m;
        frame_19ba878d754220196381a120b3f6d4f3->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[26],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[28]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_19ba878d754220196381a120b3f6d4f3->m_frame.f_lineno = 52;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_19ba878d754220196381a120b3f6d4f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19ba878d754220196381a120b3f6d4f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19ba878d754220196381a120b3f6d4f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19ba878d754220196381a120b3f6d4f3,
        type_description_1,
        par_self,
        par_offset,
        par_delta,
        par_key,
        par_duration,
        par_curve,
        var_m
    );


    // Release cached frame if used for exception.
    if (frame_19ba878d754220196381a120b3f6d4f3 == cache_frame_19ba878d754220196381a120b3f6d4f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_19ba878d754220196381a120b3f6d4f3);
        cache_frame_19ba878d754220196381a120b3f6d4f3 = NULL;
    }

    assertFrameObject(frame_19ba878d754220196381a120b3f6d4f3);

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
    CHECK_OBJECT(var_m);
    Py_DECREF(var_m);
    var_m = NULL;
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

    Py_XDECREF(var_m);
    var_m = NULL;
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
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    CHECK_OBJECT(par_delta);
    Py_DECREF(par_delta);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_duration);
    Py_DECREF(par_duration);
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    CHECK_OBJECT(par_delta);
    Py_DECREF(par_delta);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_duration);
    Py_DECREF(par_duration);
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$scrollable_control$$$function__3_scroll_to_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_offset = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_delta = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_key = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_duration = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_curve = Nuitka_Cell_New1(python_pars[5]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[6];

        tmp_closure_1[0] = par_curve;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_delta;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_duration;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_key;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_offset;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_self;
        Py_INCREF(tmp_closure_1[5]);

        tmp_return_value = MAKE_COROUTINE_flet_core$scrollable_control$$$function__3_scroll_to_async$$$coroutine__1_scroll_to_async(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    CHECK_OBJECT(par_delta);
    Py_DECREF(par_delta);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_duration);
    Py_DECREF(par_duration);
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct flet_core$scrollable_control$$$function__3_scroll_to_async$$$coroutine__1_scroll_to_async_locals {
    PyObject *var_m;
    char const *type_description_1;
    int tmp_res;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};
#endif

static PyObject *flet_core$scrollable_control$$$function__3_scroll_to_async$$$coroutine__1_scroll_to_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$scrollable_control$$$function__3_scroll_to_async$$$coroutine__1_scroll_to_async_locals *coroutine_heap = (struct flet_core$scrollable_control$$$function__3_scroll_to_async$$$coroutine__1_scroll_to_async_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_m = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_951f04f81694e9f5b7521b9e34c291e5, module_flet_core$scrollable_control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[15];
        tmp_dict_value_1 = mod_consts[16];
        tmp_assign_source_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[17];
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 64;
                coroutine_heap->type_description_1 = "cccccco";
                goto dict_build_exception_1;
            }
            coroutine->m_frame->m_frame.f_lineno = 64;
            tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
            if (tmp_unicode_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 64;
                coroutine_heap->type_description_1 = "cccccco";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            Py_DECREF(tmp_unicode_arg_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 64;
                coroutine_heap->type_description_1 = "cccccco";
                goto dict_build_exception_1;
            }
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            tmp_dict_key_2 = mod_consts[20];
            if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[20]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 66;
                coroutine_heap->type_description_1 = "cccccco";
                goto dict_build_exception_1;
            }

            tmp_dict_value_2 = Nuitka_Cell_GET(coroutine->m_closure[4]);
            tmp_dict_value_1 = _PyDict_NewPresized( 5 );
            {
                bool tmp_condition_result_1;
                PyObject *tmp_cmp_expr_left_1;
                PyObject *tmp_cmp_expr_right_1;
                PyObject *tmp_expression_value_1;
                coroutine_heap->tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(coroutine_heap->tmp_res != 0));
                tmp_dict_key_2 = mod_consts[21];
                if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[21]);
                    coroutine_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                    CHAIN_EXCEPTION(coroutine_heap->exception_value);

                    coroutine_heap->exception_lineno = 67;
                    coroutine_heap->type_description_1 = "cccccco";
                    goto dict_build_exception_2;
                }

                tmp_dict_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
                coroutine_heap->tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(coroutine_heap->tmp_res != 0));
                tmp_dict_key_2 = mod_consts[22];
                if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
                    coroutine_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                    CHAIN_EXCEPTION(coroutine_heap->exception_value);

                    coroutine_heap->exception_lineno = 68;
                    coroutine_heap->type_description_1 = "cccccco";
                    goto dict_build_exception_2;
                }

                tmp_dict_value_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
                coroutine_heap->tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(coroutine_heap->tmp_res != 0));
                tmp_dict_key_2 = mod_consts[23];
                if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[23]);
                    coroutine_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                    CHAIN_EXCEPTION(coroutine_heap->exception_value);

                    coroutine_heap->exception_lineno = 69;
                    coroutine_heap->type_description_1 = "cccccco";
                    goto dict_build_exception_2;
                }

                tmp_dict_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
                coroutine_heap->tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(coroutine_heap->tmp_res != 0));
                tmp_dict_key_2 = mod_consts[24];
                if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[24]);
                    coroutine_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                    CHAIN_EXCEPTION(coroutine_heap->exception_value);

                    coroutine_heap->exception_lineno = 70;
                    coroutine_heap->type_description_1 = "cccccco";
                    goto dict_build_exception_2;
                }

                tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
                tmp_cmp_expr_right_1 = Py_None;
                tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
                if (tmp_condition_result_1 != false) {
                    goto condexpr_true_1;
                } else {
                    goto condexpr_false_1;
                }
                condexpr_true_1:;
                if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[24]);
                    coroutine_heap->exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                    CHAIN_EXCEPTION(coroutine_heap->exception_value);

                    coroutine_heap->exception_lineno = 70;
                    coroutine_heap->type_description_1 = "cccccco";
                    goto dict_build_exception_2;
                }

                tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
                tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                    coroutine_heap->exception_lineno = 70;
                    coroutine_heap->type_description_1 = "cccccco";
                    goto dict_build_exception_2;
                }
                goto condexpr_end_1;
                condexpr_false_1:;
                tmp_dict_value_2 = Py_None;
                Py_INCREF(tmp_dict_value_2);
                condexpr_end_1:;
                coroutine_heap->tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(coroutine_heap->tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(coroutine_heap->tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        assert(coroutine_heap->var_m == NULL);
        coroutine_heap->var_m = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[29]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 73;
            coroutine_heap->type_description_1 = "cccccco";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        tmp_args_element_value_1 = mod_consts[27];
        CHECK_OBJECT(coroutine_heap->var_m);
        tmp_args_element_value_2 = coroutine_heap->var_m;
        coroutine->m_frame->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[26],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 73;
            coroutine_heap->type_description_1 = "cccccco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 74;
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[29]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 74;
            coroutine_heap->type_description_1 = "cccccco";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        coroutine->m_frame->m_frame.f_lineno = 74;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[30]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 74;
            coroutine_heap->type_description_1 = "cccccco";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = ASYNC_AWAIT(tmp_expression_value_3, await_normal);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 74;
            coroutine_heap->type_description_1 = "cccccco";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_2;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 74;
            coroutine_heap->type_description_1 = "cccccco";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 74;
            coroutine_heap->type_description_1 = "cccccco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_await_result_1);
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
            coroutine->m_closure[5],
            coroutine->m_closure[4],
            coroutine->m_closure[1],
            coroutine->m_closure[3],
            coroutine->m_closure[2],
            coroutine->m_closure[0],
            coroutine_heap->var_m
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
    goto try_except_handler_1;

    frame_no_exception_1:;
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(coroutine_heap->var_m);
    Py_DECREF(coroutine_heap->var_m);
    coroutine_heap->var_m = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_m);
    coroutine_heap->var_m = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_1;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_1;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_1;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_flet_core$scrollable_control$$$function__3_scroll_to_async$$$coroutine__1_scroll_to_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$scrollable_control$$$function__3_scroll_to_async$$$coroutine__1_scroll_to_async_context,
        module_flet_core$scrollable_control,
        mod_consts[31],
        mod_consts[32],
        codeobj_951f04f81694e9f5b7521b9e34c291e5,
        closure,
        6,
#if 1
        sizeof(struct flet_core$scrollable_control$$$function__3_scroll_to_async$$$coroutine__1_scroll_to_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$scrollable_control$$$function__4_scroll(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5b64936c3f4e74cfb08a4196c0fd04ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5b64936c3f4e74cfb08a4196c0fd04ca = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5b64936c3f4e74cfb08a4196c0fd04ca)) {
        Py_XDECREF(cache_frame_5b64936c3f4e74cfb08a4196c0fd04ca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b64936c3f4e74cfb08a4196c0fd04ca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b64936c3f4e74cfb08a4196c0fd04ca = MAKE_FUNCTION_FRAME(codeobj_5b64936c3f4e74cfb08a4196c0fd04ca, module_flet_core$scrollable_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b64936c3f4e74cfb08a4196c0fd04ca->m_type_description == NULL);
    frame_5b64936c3f4e74cfb08a4196c0fd04ca = cache_frame_5b64936c3f4e74cfb08a4196c0fd04ca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5b64936c3f4e74cfb08a4196c0fd04ca);
    assert(Py_REFCNT(frame_5b64936c3f4e74cfb08a4196c0fd04ca) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
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
        exception_tb = MAKE_TRACEBACK(frame_5b64936c3f4e74cfb08a4196c0fd04ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b64936c3f4e74cfb08a4196c0fd04ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b64936c3f4e74cfb08a4196c0fd04ca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b64936c3f4e74cfb08a4196c0fd04ca,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5b64936c3f4e74cfb08a4196c0fd04ca == cache_frame_5b64936c3f4e74cfb08a4196c0fd04ca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b64936c3f4e74cfb08a4196c0fd04ca);
        cache_frame_5b64936c3f4e74cfb08a4196c0fd04ca = NULL;
    }

    assertFrameObject(frame_5b64936c3f4e74cfb08a4196c0fd04ca);

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


static PyObject *impl_flet_core$scrollable_control$$$function__5_scroll(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_754448524f48c52f6ea382f0091582c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_754448524f48c52f6ea382f0091582c5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_754448524f48c52f6ea382f0091582c5)) {
        Py_XDECREF(cache_frame_754448524f48c52f6ea382f0091582c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_754448524f48c52f6ea382f0091582c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_754448524f48c52f6ea382f0091582c5 = MAKE_FUNCTION_FRAME(codeobj_754448524f48c52f6ea382f0091582c5, module_flet_core$scrollable_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_754448524f48c52f6ea382f0091582c5->m_type_description == NULL);
    frame_754448524f48c52f6ea382f0091582c5 = cache_frame_754448524f48c52f6ea382f0091582c5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_754448524f48c52f6ea382f0091582c5);
    assert(Py_REFCNT(frame_754448524f48c52f6ea382f0091582c5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[33], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[7];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[25]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_754448524f48c52f6ea382f0091582c5->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        frame_754448524f48c52f6ea382f0091582c5->m_frame.f_lineno = 87;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[36], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_754448524f48c52f6ea382f0091582c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_754448524f48c52f6ea382f0091582c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_754448524f48c52f6ea382f0091582c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_754448524f48c52f6ea382f0091582c5,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_754448524f48c52f6ea382f0091582c5 == cache_frame_754448524f48c52f6ea382f0091582c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_754448524f48c52f6ea382f0091582c5);
        cache_frame_754448524f48c52f6ea382f0091582c5 = NULL;
    }

    assertFrameObject(frame_754448524f48c52f6ea382f0091582c5);

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


static PyObject *impl_flet_core$scrollable_control$$$function__6___set_scroll(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_96f7bbce391f7c7b011345fb64f9a554;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96f7bbce391f7c7b011345fb64f9a554 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_True;
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
        tmp_assign_source_1 = mod_consts[37];
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_1;
            Py_INCREF(par_value);
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = Py_False;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_2;
            Py_INCREF(par_value);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_end_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_96f7bbce391f7c7b011345fb64f9a554)) {
        Py_XDECREF(cache_frame_96f7bbce391f7c7b011345fb64f9a554);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96f7bbce391f7c7b011345fb64f9a554 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96f7bbce391f7c7b011345fb64f9a554 = MAKE_FUNCTION_FRAME(codeobj_96f7bbce391f7c7b011345fb64f9a554, module_flet_core$scrollable_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96f7bbce391f7c7b011345fb64f9a554->m_type_description == NULL);
    frame_96f7bbce391f7c7b011345fb64f9a554 = cache_frame_96f7bbce391f7c7b011345fb64f9a554;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96f7bbce391f7c7b011345fb64f9a554);
    assert(Py_REFCNT(frame_96f7bbce391f7c7b011345fb64f9a554) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[7];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_96f7bbce391f7c7b011345fb64f9a554->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[35],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
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
        exception_tb = MAKE_TRACEBACK(frame_96f7bbce391f7c7b011345fb64f9a554, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96f7bbce391f7c7b011345fb64f9a554->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96f7bbce391f7c7b011345fb64f9a554, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96f7bbce391f7c7b011345fb64f9a554,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_96f7bbce391f7c7b011345fb64f9a554 == cache_frame_96f7bbce391f7c7b011345fb64f9a554) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96f7bbce391f7c7b011345fb64f9a554);
        cache_frame_96f7bbce391f7c7b011345fb64f9a554 = NULL;
    }

    assertFrameObject(frame_96f7bbce391f7c7b011345fb64f9a554);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
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

    Py_XDECREF(par_value);
    par_value = NULL;
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


static PyObject *impl_flet_core$scrollable_control$$$function__7_auto_scroll(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f08da42297c26c4a5bae4554b1f14fa0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f08da42297c26c4a5bae4554b1f14fa0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f08da42297c26c4a5bae4554b1f14fa0)) {
        Py_XDECREF(cache_frame_f08da42297c26c4a5bae4554b1f14fa0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f08da42297c26c4a5bae4554b1f14fa0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f08da42297c26c4a5bae4554b1f14fa0 = MAKE_FUNCTION_FRAME(codeobj_f08da42297c26c4a5bae4554b1f14fa0, module_flet_core$scrollable_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f08da42297c26c4a5bae4554b1f14fa0->m_type_description == NULL);
    frame_f08da42297c26c4a5bae4554b1f14fa0 = cache_frame_f08da42297c26c4a5bae4554b1f14fa0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f08da42297c26c4a5bae4554b1f14fa0);
    assert(Py_REFCNT(frame_f08da42297c26c4a5bae4554b1f14fa0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f08da42297c26c4a5bae4554b1f14fa0->m_frame.f_lineno = 99;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_f08da42297c26c4a5bae4554b1f14fa0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f08da42297c26c4a5bae4554b1f14fa0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f08da42297c26c4a5bae4554b1f14fa0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f08da42297c26c4a5bae4554b1f14fa0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f08da42297c26c4a5bae4554b1f14fa0 == cache_frame_f08da42297c26c4a5bae4554b1f14fa0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f08da42297c26c4a5bae4554b1f14fa0);
        cache_frame_f08da42297c26c4a5bae4554b1f14fa0 = NULL;
    }

    assertFrameObject(frame_f08da42297c26c4a5bae4554b1f14fa0);

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


static PyObject *impl_flet_core$scrollable_control$$$function__8_auto_scroll(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_670c99067d9c4172280242e0a3078eb1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_670c99067d9c4172280242e0a3078eb1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_670c99067d9c4172280242e0a3078eb1)) {
        Py_XDECREF(cache_frame_670c99067d9c4172280242e0a3078eb1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_670c99067d9c4172280242e0a3078eb1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_670c99067d9c4172280242e0a3078eb1 = MAKE_FUNCTION_FRAME(codeobj_670c99067d9c4172280242e0a3078eb1, module_flet_core$scrollable_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_670c99067d9c4172280242e0a3078eb1->m_type_description == NULL);
    frame_670c99067d9c4172280242e0a3078eb1 = cache_frame_670c99067d9c4172280242e0a3078eb1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_670c99067d9c4172280242e0a3078eb1);
    assert(Py_REFCNT(frame_670c99067d9c4172280242e0a3078eb1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[40];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_670c99067d9c4172280242e0a3078eb1->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[35],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
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
        exception_tb = MAKE_TRACEBACK(frame_670c99067d9c4172280242e0a3078eb1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_670c99067d9c4172280242e0a3078eb1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_670c99067d9c4172280242e0a3078eb1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_670c99067d9c4172280242e0a3078eb1,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_670c99067d9c4172280242e0a3078eb1 == cache_frame_670c99067d9c4172280242e0a3078eb1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_670c99067d9c4172280242e0a3078eb1);
        cache_frame_670c99067d9c4172280242e0a3078eb1 = NULL;
    }

    assertFrameObject(frame_670c99067d9c4172280242e0a3078eb1);

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


static PyObject *impl_flet_core$scrollable_control$$$function__9_on_scroll_interval(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_91ecdb37ca12c671299adabdbc58579e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_91ecdb37ca12c671299adabdbc58579e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_91ecdb37ca12c671299adabdbc58579e)) {
        Py_XDECREF(cache_frame_91ecdb37ca12c671299adabdbc58579e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91ecdb37ca12c671299adabdbc58579e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91ecdb37ca12c671299adabdbc58579e = MAKE_FUNCTION_FRAME(codeobj_91ecdb37ca12c671299adabdbc58579e, module_flet_core$scrollable_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_91ecdb37ca12c671299adabdbc58579e->m_type_description == NULL);
    frame_91ecdb37ca12c671299adabdbc58579e = cache_frame_91ecdb37ca12c671299adabdbc58579e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_91ecdb37ca12c671299adabdbc58579e);
    assert(Py_REFCNT(frame_91ecdb37ca12c671299adabdbc58579e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_91ecdb37ca12c671299adabdbc58579e->m_frame.f_lineno = 108;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
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
        exception_tb = MAKE_TRACEBACK(frame_91ecdb37ca12c671299adabdbc58579e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91ecdb37ca12c671299adabdbc58579e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91ecdb37ca12c671299adabdbc58579e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91ecdb37ca12c671299adabdbc58579e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_91ecdb37ca12c671299adabdbc58579e == cache_frame_91ecdb37ca12c671299adabdbc58579e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_91ecdb37ca12c671299adabdbc58579e);
        cache_frame_91ecdb37ca12c671299adabdbc58579e = NULL;
    }

    assertFrameObject(frame_91ecdb37ca12c671299adabdbc58579e);

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


static PyObject *impl_flet_core$scrollable_control$$$function__10_on_scroll_interval(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_db46a4a520c045d5bfa21923890812ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_db46a4a520c045d5bfa21923890812ba = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_db46a4a520c045d5bfa21923890812ba)) {
        Py_XDECREF(cache_frame_db46a4a520c045d5bfa21923890812ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db46a4a520c045d5bfa21923890812ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db46a4a520c045d5bfa21923890812ba = MAKE_FUNCTION_FRAME(codeobj_db46a4a520c045d5bfa21923890812ba, module_flet_core$scrollable_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_db46a4a520c045d5bfa21923890812ba->m_type_description == NULL);
    frame_db46a4a520c045d5bfa21923890812ba = cache_frame_db46a4a520c045d5bfa21923890812ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_db46a4a520c045d5bfa21923890812ba);
    assert(Py_REFCNT(frame_db46a4a520c045d5bfa21923890812ba) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[42];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_db46a4a520c045d5bfa21923890812ba->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[35],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
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
        exception_tb = MAKE_TRACEBACK(frame_db46a4a520c045d5bfa21923890812ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db46a4a520c045d5bfa21923890812ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db46a4a520c045d5bfa21923890812ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db46a4a520c045d5bfa21923890812ba,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_db46a4a520c045d5bfa21923890812ba == cache_frame_db46a4a520c045d5bfa21923890812ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_db46a4a520c045d5bfa21923890812ba);
        cache_frame_db46a4a520c045d5bfa21923890812ba = NULL;
    }

    assertFrameObject(frame_db46a4a520c045d5bfa21923890812ba);

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


static PyObject *impl_flet_core$scrollable_control$$$function__11_on_scroll(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5772584b5aab9a29136b8ec72b23950b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5772584b5aab9a29136b8ec72b23950b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5772584b5aab9a29136b8ec72b23950b)) {
        Py_XDECREF(cache_frame_5772584b5aab9a29136b8ec72b23950b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5772584b5aab9a29136b8ec72b23950b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5772584b5aab9a29136b8ec72b23950b = MAKE_FUNCTION_FRAME(codeobj_5772584b5aab9a29136b8ec72b23950b, module_flet_core$scrollable_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5772584b5aab9a29136b8ec72b23950b->m_type_description == NULL);
    frame_5772584b5aab9a29136b8ec72b23950b = cache_frame_5772584b5aab9a29136b8ec72b23950b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5772584b5aab9a29136b8ec72b23950b);
    assert(Py_REFCNT(frame_5772584b5aab9a29136b8ec72b23950b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
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
        exception_tb = MAKE_TRACEBACK(frame_5772584b5aab9a29136b8ec72b23950b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5772584b5aab9a29136b8ec72b23950b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5772584b5aab9a29136b8ec72b23950b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5772584b5aab9a29136b8ec72b23950b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5772584b5aab9a29136b8ec72b23950b == cache_frame_5772584b5aab9a29136b8ec72b23950b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5772584b5aab9a29136b8ec72b23950b);
        cache_frame_5772584b5aab9a29136b8ec72b23950b = NULL;
    }

    assertFrameObject(frame_5772584b5aab9a29136b8ec72b23950b);

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


static PyObject *impl_flet_core$scrollable_control$$$function__12_on_scroll(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_df58265aef5f273a6c870ce43a5261f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_df58265aef5f273a6c870ce43a5261f5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_df58265aef5f273a6c870ce43a5261f5)) {
        Py_XDECREF(cache_frame_df58265aef5f273a6c870ce43a5261f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df58265aef5f273a6c870ce43a5261f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df58265aef5f273a6c870ce43a5261f5 = MAKE_FUNCTION_FRAME(codeobj_df58265aef5f273a6c870ce43a5261f5, module_flet_core$scrollable_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_df58265aef5f273a6c870ce43a5261f5->m_type_description == NULL);
    frame_df58265aef5f273a6c870ce43a5261f5 = cache_frame_df58265aef5f273a6c870ce43a5261f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_df58265aef5f273a6c870ce43a5261f5);
    assert(Py_REFCNT(frame_df58265aef5f273a6c870ce43a5261f5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_1 = par_handler;
        frame_df58265aef5f273a6c870ce43a5261f5->m_frame.f_lineno = 121;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[43], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[5];
        CHECK_OBJECT(par_handler);
        tmp_cmp_expr_left_1 = par_handler;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_args_element_value_3 = Py_True;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_value_3 = Py_None;
        condexpr_end_1:;
        frame_df58265aef5f273a6c870ce43a5261f5->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_df58265aef5f273a6c870ce43a5261f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df58265aef5f273a6c870ce43a5261f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df58265aef5f273a6c870ce43a5261f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df58265aef5f273a6c870ce43a5261f5,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_df58265aef5f273a6c870ce43a5261f5 == cache_frame_df58265aef5f273a6c870ce43a5261f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_df58265aef5f273a6c870ce43a5261f5);
        cache_frame_df58265aef5f273a6c870ce43a5261f5 = NULL;
    }

    assertFrameObject(frame_df58265aef5f273a6c870ce43a5261f5);

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


static PyObject *impl_flet_core$scrollable_control$$$function__13___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_t = python_pars[1];
    PyObject *par_p = python_pars[2];
    PyObject *par_minse = python_pars[3];
    PyObject *par_maxse = python_pars[4];
    PyObject *par_vd = python_pars[5];
    PyObject *par_sd = python_pars[6];
    PyObject *par_dir = python_pars[7];
    PyObject *par_os = python_pars[8];
    PyObject *par_v = python_pars[9];
    struct Nuitka_FrameObject *frame_73cb5610d1bb82562ee8f132a0a2107f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_73cb5610d1bb82562ee8f132a0a2107f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_73cb5610d1bb82562ee8f132a0a2107f)) {
        Py_XDECREF(cache_frame_73cb5610d1bb82562ee8f132a0a2107f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_73cb5610d1bb82562ee8f132a0a2107f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_73cb5610d1bb82562ee8f132a0a2107f = MAKE_FUNCTION_FRAME(codeobj_73cb5610d1bb82562ee8f132a0a2107f, module_flet_core$scrollable_control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_73cb5610d1bb82562ee8f132a0a2107f->m_type_description == NULL);
    frame_73cb5610d1bb82562ee8f132a0a2107f = cache_frame_73cb5610d1bb82562ee8f132a0a2107f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_73cb5610d1bb82562ee8f132a0a2107f);
    assert(Py_REFCNT(frame_73cb5610d1bb82562ee8f132a0a2107f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_t);
        tmp_assattr_value_1 = par_t;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[44], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_p);
        tmp_assattr_value_2 = par_p;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[45], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_minse);
        tmp_assattr_value_3 = par_minse;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[46], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_maxse);
        tmp_assattr_value_4 = par_maxse;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[47], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_vd);
        tmp_assattr_value_5 = par_vd;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[48], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_sd);
        tmp_assattr_value_6 = par_sd;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[49], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_dir);
        tmp_assattr_value_7 = par_dir;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[50], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_os);
        tmp_assattr_value_8 = par_os;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[51], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_v);
        tmp_assattr_value_9 = par_v;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[52], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73cb5610d1bb82562ee8f132a0a2107f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_73cb5610d1bb82562ee8f132a0a2107f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73cb5610d1bb82562ee8f132a0a2107f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_73cb5610d1bb82562ee8f132a0a2107f,
        type_description_1,
        par_self,
        par_t,
        par_p,
        par_minse,
        par_maxse,
        par_vd,
        par_sd,
        par_dir,
        par_os,
        par_v
    );


    // Release cached frame if used for exception.
    if (frame_73cb5610d1bb82562ee8f132a0a2107f == cache_frame_73cb5610d1bb82562ee8f132a0a2107f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_73cb5610d1bb82562ee8f132a0a2107f);
        cache_frame_73cb5610d1bb82562ee8f132a0a2107f = NULL;
    }

    assertFrameObject(frame_73cb5610d1bb82562ee8f132a0a2107f);

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
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_minse);
    Py_DECREF(par_minse);
    CHECK_OBJECT(par_maxse);
    Py_DECREF(par_maxse);
    CHECK_OBJECT(par_vd);
    Py_DECREF(par_vd);
    CHECK_OBJECT(par_sd);
    Py_DECREF(par_sd);
    CHECK_OBJECT(par_dir);
    Py_DECREF(par_dir);
    CHECK_OBJECT(par_os);
    Py_DECREF(par_os);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_minse);
    Py_DECREF(par_minse);
    CHECK_OBJECT(par_maxse);
    Py_DECREF(par_maxse);
    CHECK_OBJECT(par_vd);
    Py_DECREF(par_vd);
    CHECK_OBJECT(par_sd);
    Py_DECREF(par_sd);
    CHECK_OBJECT(par_dir);
    Py_DECREF(par_dir);
    CHECK_OBJECT(par_os);
    Py_DECREF(par_os);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$scrollable_control$$$function__14___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9df3e8313e891a046309d0b7d31de753;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9df3e8313e891a046309d0b7d31de753 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9df3e8313e891a046309d0b7d31de753)) {
        Py_XDECREF(cache_frame_9df3e8313e891a046309d0b7d31de753);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9df3e8313e891a046309d0b7d31de753 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9df3e8313e891a046309d0b7d31de753 = MAKE_FUNCTION_FRAME(codeobj_9df3e8313e891a046309d0b7d31de753, module_flet_core$scrollable_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9df3e8313e891a046309d0b7d31de753->m_type_description == NULL);
    frame_9df3e8313e891a046309d0b7d31de753 = cache_frame_9df3e8313e891a046309d0b7d31de753;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9df3e8313e891a046309d0b7d31de753);
    assert(Py_REFCNT(frame_9df3e8313e891a046309d0b7d31de753) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[53];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(17);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_6;
            PyObject *tmp_format_value_7;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_format_spec_8;
            PyObject *tmp_format_value_9;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_format_spec_9;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[54];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[45]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[53];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[55];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[46]);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[53];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[47]);
            if (tmp_format_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_4 = mod_consts[53];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_format_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[48]);
            if (tmp_format_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_5 = mod_consts[53];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[58];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 9, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_format_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[49]);
            if (tmp_format_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_6 = mod_consts[53];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 10, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[59];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 11, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_7 = par_self;
            tmp_format_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[50]);
            if (tmp_format_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_7 = mod_consts[53];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 12, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[60];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 13, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_8 = par_self;
            tmp_format_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[51]);
            if (tmp_format_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_8 = mod_consts[53];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_8, tmp_format_spec_8);
            Py_DECREF(tmp_format_value_8);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 14, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[61];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 15, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_9 = par_self;
            tmp_format_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[52]);
            if (tmp_format_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_9 = mod_consts[53];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_9, tmp_format_spec_9);
            Py_DECREF(tmp_format_value_9);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 16, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[53], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_9df3e8313e891a046309d0b7d31de753, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9df3e8313e891a046309d0b7d31de753->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9df3e8313e891a046309d0b7d31de753, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9df3e8313e891a046309d0b7d31de753,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_9df3e8313e891a046309d0b7d31de753 == cache_frame_9df3e8313e891a046309d0b7d31de753) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9df3e8313e891a046309d0b7d31de753);
        cache_frame_9df3e8313e891a046309d0b7d31de753 = NULL;
    }

    assertFrameObject(frame_9df3e8313e891a046309d0b7d31de753);

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



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__10_on_scroll_interval(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__10_on_scroll_interval,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_db46a4a520c045d5bfa21923890812ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__11_on_scroll() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__11_on_scroll,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_5772584b5aab9a29136b8ec72b23950b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__12_on_scroll() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__12_on_scroll,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_df58265aef5f273a6c870ce43a5261f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__13___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__13___init__,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_73cb5610d1bb82562ee8f132a0a2107f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__14___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__14___str__,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_9df3e8313e891a046309d0b7d31de753,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__1___init__,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_53021efb3e76ab17b5778cfdb1bb95ba,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__1___init__$$$function__1_convert_on_scroll_event_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__1___init__$$$function__1_convert_on_scroll_event_data,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[1],
#endif
        codeobj_2e0dc719358f7178beca0e0bba10be17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__2_scroll_to(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__2_scroll_to,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_19ba878d754220196381a120b3f6d4f3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__3_scroll_to_async(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__3_scroll_to_async,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[32],
#endif
        codeobj_951f04f81694e9f5b7521b9e34c291e5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__4_scroll(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__4_scroll,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_5b64936c3f4e74cfb08a4196c0fd04ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__5_scroll(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__5_scroll,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_754448524f48c52f6ea382f0091582c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__6___set_scroll(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__6___set_scroll,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_96f7bbce391f7c7b011345fb64f9a554,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__7_auto_scroll(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__7_auto_scroll,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_f08da42297c26c4a5bae4554b1f14fa0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__8_auto_scroll(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__8_auto_scroll,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_670c99067d9c4172280242e0a3078eb1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$scrollable_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$scrollable_control$$$function__9_on_scroll_interval(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$scrollable_control$$$function__9_on_scroll_interval,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_91ecdb37ca12c671299adabdbc58579e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$scrollable_control,
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

function_impl_code functable_flet_core$scrollable_control[] = {
    impl_flet_core$scrollable_control$$$function__1___init__$$$function__1_convert_on_scroll_event_data,
    impl_flet_core$scrollable_control$$$function__1___init__,
    impl_flet_core$scrollable_control$$$function__2_scroll_to,
    impl_flet_core$scrollable_control$$$function__3_scroll_to_async,
    impl_flet_core$scrollable_control$$$function__4_scroll,
    impl_flet_core$scrollable_control$$$function__5_scroll,
    impl_flet_core$scrollable_control$$$function__6___set_scroll,
    impl_flet_core$scrollable_control$$$function__7_auto_scroll,
    impl_flet_core$scrollable_control$$$function__8_auto_scroll,
    impl_flet_core$scrollable_control$$$function__9_on_scroll_interval,
    impl_flet_core$scrollable_control$$$function__10_on_scroll_interval,
    impl_flet_core$scrollable_control$$$function__11_on_scroll,
    impl_flet_core$scrollable_control$$$function__12_on_scroll,
    impl_flet_core$scrollable_control$$$function__13___init__,
    impl_flet_core$scrollable_control$$$function__14___str__,
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

    function_impl_code *current = functable_flet_core$scrollable_control;
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

    if (offset > sizeof(functable_flet_core$scrollable_control) || offset < 0) {
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
        functable_flet_core$scrollable_control[offset],
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
        module_flet_core$scrollable_control,
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
PyObject *modulecode_flet_core$scrollable_control(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.scrollable_control");

    // Store the module for future use.
    module_flet_core$scrollable_control = module;

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
        PRINT_STRING("flet_core.scrollable_control: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.scrollable_control: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.scrollable_control: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$scrollable_control\n");

    moduledict_flet_core$scrollable_control = MODULE_DICT(module_flet_core$scrollable_control);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$scrollable_control,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$scrollable_control,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[53]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$scrollable_control,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$scrollable_control,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$scrollable_control,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$scrollable_control);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$scrollable_control);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_2ddc59fa2a3ff0da893346084edbac3c;
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
    PyObject *locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_3c2c5d9568079eb1a9005749dd1cf513_2;
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
    PyObject *locals_flet_core$scrollable_control$$$class__2_OnScrollEvent_125 = NULL;
    struct Nuitka_FrameObject *frame_ce8ce8e175ffa2225332fd1e8bac8ab0_3;
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
        UPDATE_STRING_DICT0(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_2);
    }
    frame_2ddc59fa2a3ff0da893346084edbac3c = MAKE_MODULE_FRAME(codeobj_2ddc59fa2a3ff0da893346084edbac3c, module_flet_core$scrollable_control);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2ddc59fa2a3ff0da893346084edbac3c);
    assert(Py_REFCNT(frame_2ddc59fa2a3ff0da893346084edbac3c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[63];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[66], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[67], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[11];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$scrollable_control;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[69];
        frame_2ddc59fa2a3ff0da893346084edbac3c->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[18];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$scrollable_control;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[69];
        frame_2ddc59fa2a3ff0da893346084edbac3c->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
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
                (PyObject *)moduledict_flet_core$scrollable_control,
                mod_consts[70],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[70]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$scrollable_control,
                mod_consts[71],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[71]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_8);
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
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[72];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$scrollable_control;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[73];
        tmp_level_value_3 = mod_consts[69];
        frame_2ddc59fa2a3ff0da893346084edbac3c->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$scrollable_control,
                mod_consts[74],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[74]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[75];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$scrollable_control;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[76];
        tmp_level_value_4 = mod_consts[69];
        frame_2ddc59fa2a3ff0da893346084edbac3c->m_frame.f_lineno = 6;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$scrollable_control,
                mod_consts[77],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[77]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$scrollable_control,
                mod_consts[78],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[78]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_12);
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
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[79];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$scrollable_control;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[80];
        tmp_level_value_5 = mod_consts[69];
        frame_2ddc59fa2a3ff0da893346084edbac3c->m_frame.f_lineno = 7;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$scrollable_control,
                mod_consts[81],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[81]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[82];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$scrollable_control;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[83];
        tmp_level_value_6 = mod_consts[69];
        frame_2ddc59fa2a3ff0da893346084edbac3c->m_frame.f_lineno = 8;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$scrollable_control,
                mod_consts[2],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[84];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_flet_core$scrollable_control;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[85];
        tmp_level_value_7 = mod_consts[69];
        frame_2ddc59fa2a3ff0da893346084edbac3c->m_frame.f_lineno = 9;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$scrollable_control,
                mod_consts[34],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[34]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$scrollable_control,
                mod_consts[86],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[86]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_17);
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        tmp_assign_source_18 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_19 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
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


            exception_lineno = 12;

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
        tmp_subscript_value_1 = mod_consts[69];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_21 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[87]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[87]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[88];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_2ddc59fa2a3ff0da893346084edbac3c->m_frame.f_lineno = 12;
        tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[89]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

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
        tmp_mod_expr_left_1 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[91];
        tmp_getattr_default_1 = mod_consts[92];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[91]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

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


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 12;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[88];
        tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_6;
        }
        frame_3c2c5d9568079eb1a9005749dd1cf513_2 = MAKE_CLASS_FRAME(codeobj_3c2c5d9568079eb1a9005749dd1cf513, module_flet_core$scrollable_control, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3c2c5d9568079eb1a9005749dd1cf513_2);
        assert(Py_REFCNT(frame_3c2c5d9568079eb1a9005749dd1cf513_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            tmp_defaults_1 = mod_consts[96];
            tmp_dict_key_1 = mod_consts[7];
            tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 15;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[34]);

            if (tmp_subscript_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[34]);

                    if (unlikely(tmp_subscript_value_2 == NULL)) {
                        tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                    }

                    if (tmp_subscript_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_6);

                        exception_lineno = 15;
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


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_3;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[8];
                tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

                if (tmp_expression_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_7 == NULL)) {
                            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 16;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_3 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[97]);

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


                    exception_lineno = 16;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[9];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[78]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[78]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 17;
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
                tmp_dict_key_1 = mod_consts[10];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[70]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 18;
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


            tmp_dictset_value = MAKE_FUNCTION_flet_core$scrollable_control$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_4;
            tmp_defaults_2 = mod_consts[100];
            tmp_dict_key_2 = mod_consts[20];
            tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

            if (tmp_expression_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[101]);

            if (tmp_subscript_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_4 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_subscript_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_8);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_8;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[21];
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 35;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[101]);

                if (tmp_subscript_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_5 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_9);
                Py_DECREF(tmp_subscript_value_5);
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
                tmp_dict_key_2 = mod_consts[22];
                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 36;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[102]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[23];
                tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 37;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[103]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_11);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[24];
                tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 38;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[74]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[74]);

                        if (unlikely(tmp_subscript_value_8 == NULL)) {
                            tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                        }

                        if (tmp_subscript_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_12);

                            exception_lineno = 38;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_8);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
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
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$scrollable_control$$$function__2_scroll_to(tmp_defaults_2, tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_9;
            tmp_defaults_3 = mod_consts[100];
            tmp_dict_key_3 = mod_consts[20];
            tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

            if (tmp_expression_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 56;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[101]);

            if (tmp_subscript_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_9 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_subscript_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_13);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_13;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[21];
                tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 57;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[101]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_10 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_10);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[22];
                tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 58;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[102]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[23];
                tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 59;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[103]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[24];
                tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 60;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[74]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[74]);

                        if (unlikely(tmp_subscript_value_13 == NULL)) {
                            tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                        }

                        if (tmp_subscript_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_17);

                            exception_lineno = 60;
                            type_description_2 = "o";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
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
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$scrollable_control$$$function__3_scroll_to_async(tmp_defaults_3, tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_15;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[105]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
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
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[105]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[105]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[106];
            tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

            if (tmp_expression_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_18 == NULL)) {
                        tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);

                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[34]);

            if (tmp_subscript_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[34]);

                    if (unlikely(tmp_subscript_value_14 == NULL)) {
                        tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                    }

                    if (tmp_subscript_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);
                        Py_DECREF(tmp_expression_value_18);

                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_18);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__4_scroll(tmp_annotations_4);

            frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame.f_lineno = 77;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_5 = mod_consts[106];
            tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

            if (tmp_expression_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[34]);

            if (tmp_subscript_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[34]);

                    if (unlikely(tmp_subscript_value_15 == NULL)) {
                        tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                    }

                    if (tmp_subscript_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_19);

                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_19);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__4_scroll(tmp_annotations_5);

            frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame.f_lineno = 77;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_16;
            tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[7]);

            if (unlikely(tmp_expression_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[108]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_6 = mod_consts[25];
            tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);

                        exception_lineno = 82;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[34]);

            if (tmp_subscript_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[34]);

                    if (unlikely(tmp_subscript_value_16 == NULL)) {
                        tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
                    }

                    if (tmp_subscript_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);
                        Py_DECREF(tmp_expression_value_21);

                        exception_lineno = 82;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_16);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__5_scroll(tmp_annotations_6);

            frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame.f_lineno = 81;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_17;
            tmp_dict_key_7 = mod_consts[25];
            tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 89;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[86]);

            if (tmp_subscript_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[86]);

                    if (unlikely(tmp_subscript_value_17 == NULL)) {
                        tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
                    }

                    if (tmp_subscript_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_22);

                        exception_lineno = 89;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_22);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$scrollable_control$$$function__6___set_scroll(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_19;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[105]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
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
            tmp_called_value_5 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[105]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[105]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[106];
            tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_5);

                        exception_lineno = 98;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[97]);

            if (tmp_subscript_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_18 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_23);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__7_auto_scroll(tmp_annotations_8);

            frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame.f_lineno = 97;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[106];
            tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 98;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[97]);

            if (tmp_subscript_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_19 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_24);
            Py_DECREF(tmp_subscript_value_19);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__7_auto_scroll(tmp_annotations_9);

            frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame.f_lineno = 97;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_20;
            tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[8]);

            if (unlikely(tmp_expression_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[108]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[25];
            tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[71]);

            if (tmp_expression_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_expression_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 102;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[97]);

            if (tmp_subscript_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_20 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_26);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__8_auto_scroll(tmp_annotations_10);

            frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame.f_lineno = 101;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[105]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
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
            tmp_called_value_8 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[105]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[105]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_11 = mod_consts[106];
            tmp_dict_value_11 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[78]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_dict_value_11 == NULL)) {
                        tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_dict_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);

                        exception_lineno = 107;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__9_on_scroll_interval(tmp_annotations_11);

            frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame.f_lineno = 106;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_12 = mod_consts[106];
            tmp_dict_value_12 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[78]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_dict_value_12 == NULL)) {
                        tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_dict_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 107;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__9_on_scroll_interval(tmp_annotations_12);

            frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame.f_lineno = 106;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[9]);

            if (unlikely(tmp_expression_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[108]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_13 = mod_consts[25];
            tmp_dict_value_13 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[78]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_dict_value_13 == NULL)) {
                        tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_dict_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 111;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__10_on_scroll_interval(tmp_annotations_13);

            frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame.f_lineno = 110;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_11;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[105]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
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
            tmp_called_value_11 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[105]);

            if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[105]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__11_on_scroll();

            frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame.f_lineno = 115;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__11_on_scroll();

            frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame.f_lineno = 115;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_12;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[10]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$scrollable_control$$$function__12_on_scroll();

            frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame.f_lineno = 119;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[108], tmp_args_element_value_12);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3c2c5d9568079eb1a9005749dd1cf513_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3c2c5d9568079eb1a9005749dd1cf513_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3c2c5d9568079eb1a9005749dd1cf513_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3c2c5d9568079eb1a9005749dd1cf513_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_3c2c5d9568079eb1a9005749dd1cf513_2);

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
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12, mod_consts[114], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_13 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[88];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_2ddc59fa2a3ff0da893346084edbac3c->m_frame.f_lineno = 12;
            tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_24 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12);
        locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12 = NULL;
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

        Py_DECREF(locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12);
        locals_flet_core$scrollable_control$$$class__1_ScrollableControl_12 = NULL;
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
        exception_lineno = 12;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_24);
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
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_7;
        }
        tmp_assign_source_26 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_27 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_28 = tmp_class_creation_2__bases;
        tmp_subscript_value_21 = mod_consts[69];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_28, tmp_subscript_value_21, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_7;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_29 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_29 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[87]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_30 = tmp_class_creation_2__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[87]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_7;
        }
        tmp_tuple_element_6 = mod_consts[14];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_2ddc59fa2a3ff0da893346084edbac3c->m_frame.f_lineno = 125;
        tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_31 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_31, mod_consts[89]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_7;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
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
        tmp_mod_expr_left_2 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[91];
        tmp_getattr_default_2 = mod_consts[92];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_32 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_32 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[91]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

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


            exception_lineno = 125;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 125;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_31;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$scrollable_control$$$class__2_OnScrollEvent_125 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__2_OnScrollEvent_125, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__2_OnScrollEvent_125, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_9;
        }
        frame_ce8ce8e175ffa2225332fd1e8bac8ab0_3 = MAKE_CLASS_FRAME(codeobj_ce8ce8e175ffa2225332fd1e8bac8ab0, module_flet_core$scrollable_control, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ce8ce8e175ffa2225332fd1e8bac8ab0_3);
        assert(Py_REFCNT(frame_ce8ce8e175ffa2225332fd1e8bac8ab0_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_14;
            tmp_defaults_4 = mod_consts[96];
            tmp_annotations_14 = DICT_COPY(mod_consts[115]);
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$scrollable_control$$$function__13___init__(tmp_defaults_4, tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__2_OnScrollEvent_125, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$scrollable_control$$$function__14___str__();

        tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__2_OnScrollEvent_125, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ce8ce8e175ffa2225332fd1e8bac8ab0_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ce8ce8e175ffa2225332fd1e8bac8ab0_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ce8ce8e175ffa2225332fd1e8bac8ab0_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ce8ce8e175ffa2225332fd1e8bac8ab0_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_ce8ce8e175ffa2225332fd1e8bac8ab0_3);

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
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$scrollable_control$$$class__2_OnScrollEvent_125, mod_consts[114], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_15 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[14];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_flet_core$scrollable_control$$$class__2_OnScrollEvent_125;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_2ddc59fa2a3ff0da893346084edbac3c->m_frame.f_lineno = 125;
            tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_33;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_32 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_flet_core$scrollable_control$$$class__2_OnScrollEvent_125);
        locals_flet_core$scrollable_control$$$class__2_OnScrollEvent_125 = NULL;
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

        Py_DECREF(locals_flet_core$scrollable_control$$$class__2_OnScrollEvent_125);
        locals_flet_core$scrollable_control$$$class__2_OnScrollEvent_125 = NULL;
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
        exception_lineno = 125;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_32);
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
        exception_tb = MAKE_TRACEBACK(frame_2ddc59fa2a3ff0da893346084edbac3c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ddc59fa2a3ff0da893346084edbac3c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ddc59fa2a3ff0da893346084edbac3c, exception_lineno);
    }



    assertFrameObject(frame_2ddc59fa2a3ff0da893346084edbac3c);

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
    PGO_onModuleExit("flet_core.scrollable_control", false);

    Py_INCREF(module_flet_core$scrollable_control);
    return module_flet_core$scrollable_control;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$scrollable_control, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$scrollable_control", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
