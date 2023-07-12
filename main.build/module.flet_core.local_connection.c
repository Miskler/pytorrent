/* Generated code for Python module 'flet_core.local_connection'
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

/* The "module_flet_core$local_connection" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$local_connection;
PyDictObject *moduledict_flet_core$local_connection;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[190];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[190];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.local_connection"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 190; i++) {
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
void checkModuleConstants_flet_core$local_connection(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 190; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_daa44c836f999478c533283f83b810da;
static PyCodeObject *codeobj_ff9b83fa39a4bf0b47d6af432891db2e;
static PyCodeObject *codeobj_38e0286af053d562771601bb08a2158f;
static PyCodeObject *codeobj_046498801fee058455a4605b33fd65ce;
static PyCodeObject *codeobj_15c51cf676ac5b9adb361188c3786b82;
static PyCodeObject *codeobj_616841ae027eebad8f95bee30e86b162;
static PyCodeObject *codeobj_496a16ec8c85ba2249e2d83dcb919b37;
static PyCodeObject *codeobj_e90eec2471776fcdda57cd41398027a2;
static PyCodeObject *codeobj_04742db61370988af3512ca201541074;
static PyCodeObject *codeobj_669d57d963de6cbe414fea8693c2adf1;
static PyCodeObject *codeobj_7487b4388e8dfe873322b21975b839b4;
static PyCodeObject *codeobj_e6cfa14fbe1ad1a07edc30dc753385f2;
static PyCodeObject *codeobj_31b1a5775848d86d8ff8b3e9ebd6a9b7;
static PyCodeObject *codeobj_01c9ac6de373cfebbb66869a02842232;
static PyCodeObject *codeobj_958285c3d75383de1e6cfd9c5c0442c8;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[132]; CHECK_OBJECT(module_filename_obj);
    codeobj_daa44c836f999478c533283f83b810da = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[178], mod_consts[178], NULL, NULL, 0, 0, 0);
    codeobj_ff9b83fa39a4bf0b47d6af432891db2e = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[179], NULL, 0, 0, 0);
    codeobj_38e0286af053d562771601bb08a2158f = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[180], mod_consts[179], 1, 0, 0);
    codeobj_046498801fee058455a4605b33fd65ce = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[181], NULL, 2, 0, 0);
    codeobj_15c51cf676ac5b9adb361188c3786b82 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[182], NULL, 1, 0, 0);
    codeobj_616841ae027eebad8f95bee30e86b162 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[182], NULL, 1, 0, 0);
    codeobj_496a16ec8c85ba2249e2d83dcb919b37 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[183], NULL, 2, 0, 0);
    codeobj_e90eec2471776fcdda57cd41398027a2 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[184], NULL, 2, 0, 0);
    codeobj_04742db61370988af3512ca201541074 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[185], NULL, 2, 0, 0);
    codeobj_669d57d963de6cbe414fea8693c2adf1 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[168], mod_consts[168], mod_consts[186], NULL, 2, 0, 0);
    codeobj_7487b4388e8dfe873322b21975b839b4 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[185], NULL, 2, 0, 0);
    codeobj_e6cfa14fbe1ad1a07edc30dc753385f2 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[187], NULL, 2, 0, 0);
    codeobj_31b1a5775848d86d8ff8b3e9ebd6a9b7 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[188], NULL, 3, 0, 0);
    codeobj_01c9ac6de373cfebbb66869a02842232 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[185], NULL, 2, 0, 0);
    codeobj_958285c3d75383de1e6cfd9c5c0442c8 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[189], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__10__process_clean_command();


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__11__process_error_command();


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__12__process_invoke_method_command();


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__13__process_get_command(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__1___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__2__create_register_web_client_response();


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__3__create_session_handler_arg();


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__4__create_page_event_handler_arg(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__5__create_update_control_props_handler_arg(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__6__process_command(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__7__process_add_command(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__8__process_set_command();


static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__9__process_remove_command();


// The module function definitions.
static PyObject *impl_flet_core$local_connection$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_38e0286af053d562771601bb08a2158f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_38e0286af053d562771601bb08a2158f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_38e0286af053d562771601bb08a2158f)) {
        Py_XDECREF(cache_frame_38e0286af053d562771601bb08a2158f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_38e0286af053d562771601bb08a2158f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_38e0286af053d562771601bb08a2158f = MAKE_FUNCTION_FRAME(codeobj_38e0286af053d562771601bb08a2158f, module_flet_core$local_connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_38e0286af053d562771601bb08a2158f->m_type_description == NULL);
    frame_38e0286af053d562771601bb08a2158f = cache_frame_38e0286af053d562771601bb08a2158f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_38e0286af053d562771601bb08a2158f);
    assert(Py_REFCNT(frame_38e0286af053d562771601bb08a2158f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 13;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$local_connection, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_38e0286af053d562771601bb08a2158f->m_frame.f_lineno = 13;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[2];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_38e0286af053d562771601bb08a2158f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38e0286af053d562771601bb08a2158f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38e0286af053d562771601bb08a2158f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_38e0286af053d562771601bb08a2158f,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_38e0286af053d562771601bb08a2158f == cache_frame_38e0286af053d562771601bb08a2158f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_38e0286af053d562771601bb08a2158f);
        cache_frame_38e0286af053d562771601bb08a2158f = NULL;
    }

    assertFrameObject(frame_38e0286af053d562771601bb08a2158f);

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


static PyObject *impl_flet_core$local_connection$$$function__2__create_register_web_client_response(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_15c51cf676ac5b9adb361188c3786b82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_15c51cf676ac5b9adb361188c3786b82 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_15c51cf676ac5b9adb361188c3786b82)) {
        Py_XDECREF(cache_frame_15c51cf676ac5b9adb361188c3786b82);

#if _DEBUG_REFCOUNTS
        if (cache_frame_15c51cf676ac5b9adb361188c3786b82 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_15c51cf676ac5b9adb361188c3786b82 = MAKE_FUNCTION_FRAME(codeobj_15c51cf676ac5b9adb361188c3786b82, module_flet_core$local_connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_15c51cf676ac5b9adb361188c3786b82->m_type_description == NULL);
    frame_15c51cf676ac5b9adb361188c3786b82 = cache_frame_15c51cf676ac5b9adb361188c3786b82;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_15c51cf676ac5b9adb361188c3786b82);
    assert(Py_REFCNT(frame_15c51cf676ac5b9adb361188c3786b82) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
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
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 18;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[4]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[11];
        tmp_dict_key_2 = mod_consts[12];
        tmp_dict_value_2 = mod_consts[11];
        tmp_dict_value_1 = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[13];
            tmp_dict_value_2 = mod_consts[11];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[14];
            tmp_dict_value_2 = mod_consts[15];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[16];
            tmp_dict_value_2 = MAKE_LIST_EMPTY(0);
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[17];
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[4]);
            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[18]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[19];
            CHECK_OBJECT(par_self);
            tmp_expression_value_8 = par_self;
            tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[4]);
            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[20]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[21];
            CHECK_OBJECT(par_self);
            tmp_expression_value_10 = par_self;
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[4]);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[22]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[23];
            CHECK_OBJECT(par_self);
            tmp_expression_value_12 = par_self;
            tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[4]);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[24]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[25];
            CHECK_OBJECT(par_self);
            tmp_expression_value_14 = par_self;
            tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[4]);
            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[26]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[27];
            CHECK_OBJECT(par_self);
            tmp_expression_value_16 = par_self;
            tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[4]);
            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[28]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[29];
            CHECK_OBJECT(par_self);
            tmp_expression_value_18 = par_self;
            tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[4]);
            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[30]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[31];
            CHECK_OBJECT(par_self);
            tmp_expression_value_20 = par_self;
            tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[4]);
            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[32]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[33];
            CHECK_OBJECT(par_self);
            tmp_expression_value_22 = par_self;
            tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[4]);
            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[34]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[35];
            CHECK_OBJECT(par_self);
            tmp_expression_value_24 = par_self;
            tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[4]);
            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[35]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_dict_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_kw_call_value_1_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_call_value_1_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_15c51cf676ac5b9adb361188c3786b82->m_frame.f_lineno = 22;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[36]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = Py_False;
        tmp_kw_call_value_2_1 = mod_consts[15];
        frame_15c51cf676ac5b9adb361188c3786b82->m_frame.f_lineno = 21;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1};

            tmp_args_element_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_15c51cf676ac5b9adb361188c3786b82->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
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
        exception_tb = MAKE_TRACEBACK(frame_15c51cf676ac5b9adb361188c3786b82, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15c51cf676ac5b9adb361188c3786b82->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15c51cf676ac5b9adb361188c3786b82, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_15c51cf676ac5b9adb361188c3786b82,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_15c51cf676ac5b9adb361188c3786b82 == cache_frame_15c51cf676ac5b9adb361188c3786b82) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_15c51cf676ac5b9adb361188c3786b82);
        cache_frame_15c51cf676ac5b9adb361188c3786b82 = NULL;
    }

    assertFrameObject(frame_15c51cf676ac5b9adb361188c3786b82);

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


static PyObject *impl_flet_core$local_connection$$$function__3__create_session_handler_arg(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_616841ae027eebad8f95bee30e86b162;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_616841ae027eebad8f95bee30e86b162 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_616841ae027eebad8f95bee30e86b162)) {
        Py_XDECREF(cache_frame_616841ae027eebad8f95bee30e86b162);

#if _DEBUG_REFCOUNTS
        if (cache_frame_616841ae027eebad8f95bee30e86b162 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_616841ae027eebad8f95bee30e86b162 = MAKE_FUNCTION_FRAME(codeobj_616841ae027eebad8f95bee30e86b162, module_flet_core$local_connection, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_616841ae027eebad8f95bee30e86b162->m_type_description == NULL);
    frame_616841ae027eebad8f95bee30e86b162 = cache_frame_616841ae027eebad8f95bee30e86b162;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_616841ae027eebad8f95bee30e86b162);
    assert(Py_REFCNT(frame_616841ae027eebad8f95bee30e86b162) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
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
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 49;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[4]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_616841ae027eebad8f95bee30e86b162->m_frame.f_lineno = 50;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[40]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
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
        exception_tb = MAKE_TRACEBACK(frame_616841ae027eebad8f95bee30e86b162, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_616841ae027eebad8f95bee30e86b162->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_616841ae027eebad8f95bee30e86b162, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_616841ae027eebad8f95bee30e86b162,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_616841ae027eebad8f95bee30e86b162 == cache_frame_616841ae027eebad8f95bee30e86b162) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_616841ae027eebad8f95bee30e86b162);
        cache_frame_616841ae027eebad8f95bee30e86b162 = NULL;
    }

    assertFrameObject(frame_616841ae027eebad8f95bee30e86b162);

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


static PyObject *impl_flet_core$local_connection$$$function__4__create_page_event_handler_arg(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_msg = python_pars[1];
    PyObject *var_web_event = NULL;
    struct Nuitka_FrameObject *frame_046498801fee058455a4605b33fd65ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_046498801fee058455a4605b33fd65ce = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_046498801fee058455a4605b33fd65ce)) {
        Py_XDECREF(cache_frame_046498801fee058455a4605b33fd65ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_046498801fee058455a4605b33fd65ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_046498801fee058455a4605b33fd65ce = MAKE_FUNCTION_FRAME(codeobj_046498801fee058455a4605b33fd65ce, module_flet_core$local_connection, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_046498801fee058455a4605b33fd65ce->m_type_description == NULL);
    frame_046498801fee058455a4605b33fd65ce = cache_frame_046498801fee058455a4605b33fd65ce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_046498801fee058455a4605b33fd65ce);
    assert(Py_REFCNT(frame_046498801fee058455a4605b33fd65ce) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
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
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 56;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_2;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_msg);
        tmp_expression_value_2 = par_msg;
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_web_event == NULL);
        var_web_event = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_9;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[4]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[39]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[4]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_web_event);
        tmp_expression_value_7 = var_web_event;
        tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[44]);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_web_event);
        tmp_expression_value_8 = var_web_event;
        tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[45]);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_web_event);
        tmp_expression_value_9 = var_web_event;
        tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[46]);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 63;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_046498801fee058455a4605b33fd65ce->m_frame.f_lineno = 58;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
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
        exception_tb = MAKE_TRACEBACK(frame_046498801fee058455a4605b33fd65ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_046498801fee058455a4605b33fd65ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_046498801fee058455a4605b33fd65ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_046498801fee058455a4605b33fd65ce,
        type_description_1,
        par_self,
        par_msg,
        var_web_event
    );


    // Release cached frame if used for exception.
    if (frame_046498801fee058455a4605b33fd65ce == cache_frame_046498801fee058455a4605b33fd65ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_046498801fee058455a4605b33fd65ce);
        cache_frame_046498801fee058455a4605b33fd65ce = NULL;
    }

    assertFrameObject(frame_046498801fee058455a4605b33fd65ce);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_web_event);
    Py_DECREF(var_web_event);
    var_web_event = NULL;
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

    Py_XDECREF(var_web_event);
    var_web_event = NULL;
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
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$local_connection$$$function__5__create_update_control_props_handler_arg(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_msg = python_pars[1];
    struct Nuitka_FrameObject *frame_496a16ec8c85ba2249e2d83dcb919b37;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_496a16ec8c85ba2249e2d83dcb919b37 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_496a16ec8c85ba2249e2d83dcb919b37)) {
        Py_XDECREF(cache_frame_496a16ec8c85ba2249e2d83dcb919b37);

#if _DEBUG_REFCOUNTS
        if (cache_frame_496a16ec8c85ba2249e2d83dcb919b37 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_496a16ec8c85ba2249e2d83dcb919b37 = MAKE_FUNCTION_FRAME(codeobj_496a16ec8c85ba2249e2d83dcb919b37, module_flet_core$local_connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_496a16ec8c85ba2249e2d83dcb919b37->m_type_description == NULL);
    frame_496a16ec8c85ba2249e2d83dcb919b37 = cache_frame_496a16ec8c85ba2249e2d83dcb919b37;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_496a16ec8c85ba2249e2d83dcb919b37);
    assert(Py_REFCNT(frame_496a16ec8c85ba2249e2d83dcb919b37) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 67;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[4]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = mod_consts[11];
        tmp_kw_call_value_3_1 = mod_consts[48];
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[50]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_msg);
        tmp_expression_value_8 = par_msg;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[42]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[51];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[52]);
        frame_496a16ec8c85ba2249e2d83dcb919b37->m_frame.f_lineno = 73;
        tmp_kw_call_value_4_1 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_496a16ec8c85ba2249e2d83dcb919b37->m_frame.f_lineno = 68;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
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
        exception_tb = MAKE_TRACEBACK(frame_496a16ec8c85ba2249e2d83dcb919b37, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_496a16ec8c85ba2249e2d83dcb919b37->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_496a16ec8c85ba2249e2d83dcb919b37, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_496a16ec8c85ba2249e2d83dcb919b37,
        type_description_1,
        par_self,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_496a16ec8c85ba2249e2d83dcb919b37 == cache_frame_496a16ec8c85ba2249e2d83dcb919b37) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_496a16ec8c85ba2249e2d83dcb919b37);
        cache_frame_496a16ec8c85ba2249e2d83dcb919b37 = NULL;
    }

    assertFrameObject(frame_496a16ec8c85ba2249e2d83dcb919b37);

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
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$local_connection$$$function__6__process_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_command = python_pars[1];
    struct Nuitka_FrameObject *frame_669d57d963de6cbe414fea8693c2adf1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_669d57d963de6cbe414fea8693c2adf1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_669d57d963de6cbe414fea8693c2adf1)) {
        Py_XDECREF(cache_frame_669d57d963de6cbe414fea8693c2adf1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_669d57d963de6cbe414fea8693c2adf1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_669d57d963de6cbe414fea8693c2adf1 = MAKE_FUNCTION_FRAME(codeobj_669d57d963de6cbe414fea8693c2adf1, module_flet_core$local_connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_669d57d963de6cbe414fea8693c2adf1->m_type_description == NULL);
    frame_669d57d963de6cbe414fea8693c2adf1 = cache_frame_669d57d963de6cbe414fea8693c2adf1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_669d57d963de6cbe414fea8693c2adf1);
    assert(Py_REFCNT(frame_669d57d963de6cbe414fea8693c2adf1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[55];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_command);
            tmp_format_value_1 = par_command;
            tmp_format_spec_1 = mod_consts[15];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_669d57d963de6cbe414fea8693c2adf1->m_frame.f_lineno = 77;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_command);
        tmp_expression_value_2 = par_command;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[56]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[57];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[58]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_command);
        tmp_expression_value_4 = par_command;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[59]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_669d57d963de6cbe414fea8693c2adf1->m_frame.f_lineno = 79;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_command);
        tmp_expression_value_5 = par_command;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[56]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[60];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_command);
        tmp_args_element_value_3 = par_command;
        frame_669d57d963de6cbe414fea8693c2adf1->m_frame.f_lineno = 81;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[61], tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
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
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_command);
        tmp_expression_value_6 = par_command;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[56]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[62];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[63]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_command);
        tmp_expression_value_8 = par_command;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[59]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_command);
        tmp_expression_value_9 = par_command;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[64]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_669d57d963de6cbe414fea8693c2adf1->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_command);
        tmp_expression_value_10 = par_command;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[56]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[65];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
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
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[66]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_command);
        tmp_expression_value_12 = par_command;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[59]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_669d57d963de6cbe414fea8693c2adf1->m_frame.f_lineno = 85;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(par_command);
        tmp_expression_value_13 = par_command;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[56]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[67];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
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
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[68]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_command);
        tmp_expression_value_15 = par_command;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[59]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_669d57d963de6cbe414fea8693c2adf1->m_frame.f_lineno = 87;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_command);
        tmp_expression_value_16 = par_command;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[56]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = mod_consts[69];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[70]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_command);
        tmp_expression_value_18 = par_command;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[59]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_command);
        tmp_expression_value_19 = par_command;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[64]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_669d57d963de6cbe414fea8693c2adf1->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(par_command);
        tmp_expression_value_20 = par_command;
        tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[56]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = mod_consts[71];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[72]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_command);
        tmp_expression_value_22 = par_command;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[59]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_669d57d963de6cbe414fea8693c2adf1->m_frame.f_lineno = 91;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[74];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_command);
            tmp_expression_value_23 = par_command;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[56]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "oo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[15];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "oo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_11 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_669d57d963de6cbe414fea8693c2adf1->m_frame.f_lineno = 92;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 92;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_669d57d963de6cbe414fea8693c2adf1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_669d57d963de6cbe414fea8693c2adf1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_669d57d963de6cbe414fea8693c2adf1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_669d57d963de6cbe414fea8693c2adf1,
        type_description_1,
        par_self,
        par_command
    );


    // Release cached frame if used for exception.
    if (frame_669d57d963de6cbe414fea8693c2adf1 == cache_frame_669d57d963de6cbe414fea8693c2adf1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_669d57d963de6cbe414fea8693c2adf1);
        cache_frame_669d57d963de6cbe414fea8693c2adf1 = NULL;
    }

    assertFrameObject(frame_669d57d963de6cbe414fea8693c2adf1);

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
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$local_connection$$$function__7__process_add_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_command = python_pars[1];
    PyObject *var_batch = NULL;
    PyObject *var_top_parent_id = NULL;
    PyObject *var_top_parent_at = NULL;
    PyObject *var_sub_cmd = NULL;
    PyObject *var_ids = NULL;
    PyObject *var_controls = NULL;
    PyObject *var_controls_idx = NULL;
    PyObject *var_i = NULL;
    PyObject *var_cmd = NULL;
    PyObject *var_control_type = NULL;
    PyObject *var_parent_id = NULL;
    PyObject *var_parent_at = NULL;
    PyObject *var_pi = NULL;
    PyObject *var_id = NULL;
    PyObject *var_control = NULL;
    PyObject *var_parent_control = NULL;
    PyObject *var_system_attrs = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e90eec2471776fcdda57cd41398027a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e90eec2471776fcdda57cd41398027a2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e90eec2471776fcdda57cd41398027a2)) {
        Py_XDECREF(cache_frame_e90eec2471776fcdda57cd41398027a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e90eec2471776fcdda57cd41398027a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e90eec2471776fcdda57cd41398027a2 = MAKE_FUNCTION_FRAME(codeobj_e90eec2471776fcdda57cd41398027a2, module_flet_core$local_connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e90eec2471776fcdda57cd41398027a2->m_type_description == NULL);
    frame_e90eec2471776fcdda57cd41398027a2 = cache_frame_e90eec2471776fcdda57cd41398027a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e90eec2471776fcdda57cd41398027a2);
    assert(Py_REFCNT(frame_e90eec2471776fcdda57cd41398027a2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_command);
        tmp_expression_value_2 = par_command;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[57]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 96;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[75]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_top_parent_id == NULL);
        var_top_parent_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_command);
        tmp_expression_value_4 = par_command;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[64]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[57]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 97;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[77]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 97;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_top_parent_at == NULL);
        var_top_parent_at = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        assert(var_batch == NULL);
        var_batch = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_command);
        tmp_expression_value_5 = par_command;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[59]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 100;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[79];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooo";
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
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        CHECK_OBJECT(var_batch);
        tmp_list_arg_value_1 = var_batch;
        CHECK_OBJECT(par_command);
        tmp_item_value_1 = par_command;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_command);
        tmp_expression_value_6 = par_command;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[80]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 103;
                goto try_except_handler_2;
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
            PyObject *old = var_sub_cmd;
            var_sub_cmd = tmp_assign_source_6;
            Py_INCREF(var_sub_cmd);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[60];
        CHECK_OBJECT(var_sub_cmd);
        tmp_assattr_target_1 = var_sub_cmd;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[56], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        if (var_batch == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = var_batch;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[82]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_sub_cmd);
        tmp_args_element_value_3 = var_sub_cmd;
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 105;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 103;
        type_description_1 = "ooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_LIST_EMPTY(0);
        assert(var_ids == NULL);
        var_ids = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
        assert(var_controls == NULL);
        var_controls = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(var_controls_idx == NULL);
        var_controls_idx = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[79];
        assert(var_i == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_i = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        if (var_batch == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_2 = var_batch;
        tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_12 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 112;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_13 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_cmd;
            var_cmd = tmp_assign_source_13;
            Py_INCREF(var_cmd);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_cmd);
        tmp_expression_value_8 = var_cmd;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[59]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 113;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_2 = mod_consts[79];
        tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooo";
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[83];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 113;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_cmd);
        tmp_expression_value_11 = var_cmd;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[59]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_1 = mod_consts[79];
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[84]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 114;
        tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_control_type;
            var_control_type = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[15];
        {
            PyObject *old = var_parent_id;
            var_parent_id = tmp_assign_source_15;
            Py_INCREF(var_parent_id);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[85];
        {
            PyObject *old = var_parent_at;
            var_parent_at = tmp_assign_source_16;
            Py_INCREF(var_parent_at);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_sub_expr_left_1 = var_i;
        tmp_sub_expr_right_1 = mod_consts[2];
        tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_pi;
            var_pi = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    loop_start_3:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (var_pi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_3 = var_pi;
        tmp_cmp_expr_right_3 = mod_consts[79];
        tmp_operand_value_2 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_14;
        if (var_batch == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_13 = var_batch;
        if (var_pi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_2 = var_pi;
        tmp_expression_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_2);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[87]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_cmd == NULL) {
            Py_DECREF(tmp_cmp_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_14 = var_cmd;
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[87]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_3;
        if (var_batch == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_17 = var_batch;
        if (var_pi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_subscript_value_3 = var_pi;
        tmp_expression_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_3);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[64]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[57]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 123;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_8, mod_consts[89]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_parent_id;
            assert(old != NULL);
            var_parent_id = tmp_assign_source_18;
            Py_DECREF(old);
        }

    }
    goto loop_end_3;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        if (var_pi == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_isub_expr_left_1 = var_pi;
        tmp_isub_expr_right_1 = mod_consts[2];
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_19 = tmp_isub_expr_left_1;
        var_pi = tmp_assign_source_19;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 121;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_3;
    loop_end_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_parent_id);
        tmp_cmp_expr_left_5 = var_parent_id;
        tmp_cmp_expr_right_5 = mod_consts[15];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_20;
        if (var_top_parent_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_assign_source_20 = var_top_parent_id;
        {
            PyObject *old = var_parent_id;
            assert(old != NULL);
            var_parent_id = tmp_assign_source_20;
            Py_INCREF(var_parent_id);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        if (var_top_parent_at == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_assign_source_21 = var_top_parent_at;
        {
            PyObject *old = var_parent_at;
            assert(old != NULL);
            var_parent_at = tmp_assign_source_21;
            Py_INCREF(var_parent_at);
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        if (var_cmd == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_19 = var_cmd;
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[64]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[57]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 132;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[89]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_id;
            var_id = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(var_id);
        tmp_operand_value_3 = var_id;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[92];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 134;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_20 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[3]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[15];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_23 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_id;
            assert(old != NULL);
            var_id = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_21;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_21 = par_self;
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[3]);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_inplace_assign_1__value;
            tmp_inplace_assign_1__value = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[2];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_25 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_25;

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_2 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_id);
        tmp_ass_subvalue_1 = var_id;
        if (var_cmd == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_22 = var_cmd;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[64]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_ass_subscript_1 = mod_consts[94];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
    }
    branch_no_6:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        if (var_ids == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_23 = var_ids;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[82]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_id == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_5 = var_id;
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 138;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(var_control_type);
        tmp_dict_value_1 = var_control_type;
        tmp_assign_source_26 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        if (var_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_id;
        tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[14];
        CHECK_OBJECT(var_parent_id);
        tmp_dict_value_1 = var_parent_id;
        tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[16];
        tmp_dict_value_1 = MAKE_LIST_EMPTY(0);
        tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_26);
        goto try_except_handler_3;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        {
            PyObject *old = var_control;
            var_control = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_6;
        if (var_controls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_24 = var_controls;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[82]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_control);
        tmp_args_element_value_6 = var_control;
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 141;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_control);
        tmp_ass_subvalue_2 = var_control;
        if (var_controls_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_2 = var_controls_idx;
        if (var_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscript_2 = var_id;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_parent_at);
        tmp_cmp_expr_left_6 = var_parent_at;
        tmp_cmp_expr_right_6 = mod_consts[85];
        tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_parent_at);
        tmp_args_element_value_7 = var_parent_at;
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 145;
        tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_7);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_control);
        tmp_dictset_dict = var_control;
        tmp_dictset_key = mod_consts[99];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_top_parent_at == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_iadd_expr_left_2 = var_top_parent_at;
        tmp_iadd_expr_right_2 = mod_consts[2];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_27 = tmp_iadd_expr_left_2;
        var_top_parent_at = tmp_assign_source_27;

    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_8;
        if (var_controls_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_25 = var_controls_idx;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[57]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_parent_id);
        tmp_args_element_value_8 = var_parent_id;
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 148;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_13);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_parent_control;
            var_parent_control = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_parent_control);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_parent_control);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        if (var_parent_at == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_left_7 = var_parent_at;
        tmp_cmp_expr_right_7 = mod_consts[85];
        tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_parent_control);
        tmp_expression_value_27 = var_parent_control;
        tmp_subscript_value_4 = mod_consts[16];
        tmp_expression_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_4);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[101]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_parent_at == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_9 = var_parent_at;
        if (var_id == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_10 = var_id;
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(var_parent_control);
        tmp_expression_value_29 = var_parent_control;
        tmp_subscript_value_5 = mod_consts[16];
        tmp_expression_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_5);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[82]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_id == NULL) {
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_11 = var_id;
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 153;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_9:;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_LIST8(mod_consts[102]);
        {
            PyObject *old = var_system_attrs;
            var_system_attrs = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        if (var_cmd == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_31 = var_cmd;
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[64]);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[103]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 156;
        tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        Py_DECREF(tmp_called_value_16);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_30 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_31 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 156;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_3__iter_value;
        tmp_assign_source_32 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_33 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 156;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_34 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 156;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_34;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooooooooooooooooo";
                    exception_lineno = 156;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[104];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 156;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_35 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_35;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_36 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_36;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_10;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_k);
        tmp_cmp_expr_left_8 = var_k;
        CHECK_OBJECT(var_system_attrs);
        tmp_cmp_expr_right_8 = var_system_attrs;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_v);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_v);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_10 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_v);
        tmp_ass_subvalue_3 = var_v;
        if (var_control == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_3 = var_control;
        CHECK_OBJECT(var_k);
        tmp_ass_subscript_3 = var_k;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    branch_no_10:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 156;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_5;
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

    goto try_except_handler_3;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_iadd_expr_left_3 = var_i;
        tmp_iadd_expr_right_3 = mod_consts[2];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_37 = tmp_iadd_expr_left_3;
        var_i = tmp_assign_source_37;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 112;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[106];
        if (var_ids == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = var_ids;
        tmp_tuple_element_2 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_18;
            PyObject *tmp_kw_call_value_0_1;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[107]);
            if (tmp_args_element_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_12);

                exception_lineno = 163;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            if (var_controls == NULL) {
                Py_DECREF(tmp_args_element_value_12);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 163;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_kw_call_value_0_1 = var_controls;
            frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 163;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

                tmp_args_element_value_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_18, kw_values, mod_consts[109]);
            }

            if (tmp_args_element_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_12);

                exception_lineno = 163;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            frame_e90eec2471776fcdda57cd41398027a2->m_frame.f_lineno = 162;
            {
                PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
                tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_17, call_args);
            }

            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
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
        exception_tb = MAKE_TRACEBACK(frame_e90eec2471776fcdda57cd41398027a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e90eec2471776fcdda57cd41398027a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e90eec2471776fcdda57cd41398027a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e90eec2471776fcdda57cd41398027a2,
        type_description_1,
        par_self,
        par_command,
        var_batch,
        var_top_parent_id,
        var_top_parent_at,
        var_sub_cmd,
        var_ids,
        var_controls,
        var_controls_idx,
        var_i,
        var_cmd,
        var_control_type,
        var_parent_id,
        var_parent_at,
        var_pi,
        var_id,
        var_control,
        var_parent_control,
        var_system_attrs,
        var_k,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_e90eec2471776fcdda57cd41398027a2 == cache_frame_e90eec2471776fcdda57cd41398027a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e90eec2471776fcdda57cd41398027a2);
        cache_frame_e90eec2471776fcdda57cd41398027a2 = NULL;
    }

    assertFrameObject(frame_e90eec2471776fcdda57cd41398027a2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_batch);
    var_batch = NULL;
    Py_XDECREF(var_top_parent_id);
    var_top_parent_id = NULL;
    Py_XDECREF(var_top_parent_at);
    var_top_parent_at = NULL;
    Py_XDECREF(var_sub_cmd);
    var_sub_cmd = NULL;
    Py_XDECREF(var_ids);
    var_ids = NULL;
    Py_XDECREF(var_controls);
    var_controls = NULL;
    Py_XDECREF(var_controls_idx);
    var_controls_idx = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_cmd);
    var_cmd = NULL;
    Py_XDECREF(var_control_type);
    var_control_type = NULL;
    Py_XDECREF(var_parent_id);
    var_parent_id = NULL;
    Py_XDECREF(var_parent_at);
    var_parent_at = NULL;
    Py_XDECREF(var_pi);
    var_pi = NULL;
    Py_XDECREF(var_id);
    var_id = NULL;
    Py_XDECREF(var_control);
    var_control = NULL;
    Py_XDECREF(var_parent_control);
    var_parent_control = NULL;
    Py_XDECREF(var_system_attrs);
    var_system_attrs = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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

    Py_XDECREF(var_batch);
    var_batch = NULL;
    Py_XDECREF(var_top_parent_id);
    var_top_parent_id = NULL;
    Py_XDECREF(var_top_parent_at);
    var_top_parent_at = NULL;
    Py_XDECREF(var_sub_cmd);
    var_sub_cmd = NULL;
    Py_XDECREF(var_ids);
    var_ids = NULL;
    Py_XDECREF(var_controls);
    var_controls = NULL;
    Py_XDECREF(var_controls_idx);
    var_controls_idx = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_cmd);
    var_cmd = NULL;
    Py_XDECREF(var_control_type);
    var_control_type = NULL;
    Py_XDECREF(var_parent_id);
    var_parent_id = NULL;
    Py_XDECREF(var_parent_at);
    var_parent_at = NULL;
    Py_XDECREF(var_pi);
    var_pi = NULL;
    Py_XDECREF(var_id);
    var_id = NULL;
    Py_XDECREF(var_control);
    var_control = NULL;
    Py_XDECREF(var_parent_control);
    var_parent_control = NULL;
    Py_XDECREF(var_system_attrs);
    var_system_attrs = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$local_connection$$$function__8__process_set_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    PyObject *par_attrs = python_pars[2];
    PyObject *var_props = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_958285c3d75383de1e6cfd9c5c0442c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_958285c3d75383de1e6cfd9c5c0442c8 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_958285c3d75383de1e6cfd9c5c0442c8)) {
        Py_XDECREF(cache_frame_958285c3d75383de1e6cfd9c5c0442c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_958285c3d75383de1e6cfd9c5c0442c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_958285c3d75383de1e6cfd9c5c0442c8 = MAKE_FUNCTION_FRAME(codeobj_958285c3d75383de1e6cfd9c5c0442c8, module_flet_core$local_connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_958285c3d75383de1e6cfd9c5c0442c8->m_type_description == NULL);
    frame_958285c3d75383de1e6cfd9c5c0442c8 = cache_frame_958285c3d75383de1e6cfd9c5c0442c8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_958285c3d75383de1e6cfd9c5c0442c8);
    assert(Py_REFCNT(frame_958285c3d75383de1e6cfd9c5c0442c8) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_value_1 = par_values;
        frame_958285c3d75383de1e6cfd9c5c0442c8->m_frame.f_lineno = 167;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
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
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[110];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 167;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_dict_key_1 = mod_consts[12];
        CHECK_OBJECT(par_values);
        tmp_expression_value_1 = par_values;
        tmp_subscript_value_1 = mod_consts[79];
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_props == NULL);
        var_props = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_attrs);
        tmp_expression_value_2 = par_attrs;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[103]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_958285c3d75383de1e6cfd9c5c0442c8->m_frame.f_lineno = 169;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 169;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 169;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 169;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "oooooo";
                    exception_lineno = 169;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[104];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 169;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_7;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_8;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_v);
        tmp_ass_subvalue_1 = var_v;
        if (var_props == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_props;
        CHECK_OBJECT(var_k);
        tmp_ass_subscript_1 = var_k;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 169;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[15];
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_list_element_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[111]);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            if (var_props == NULL) {
                Py_DECREF(tmp_args_element_value_2);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_list_element_1 = var_props;
            tmp_kw_call_value_0_1 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_kw_call_value_0_1, 0, tmp_list_element_1);
            frame_958285c3d75383de1e6cfd9c5c0442c8->m_frame.f_lineno = 173;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

                tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[113]);
            }

            Py_DECREF(tmp_kw_call_value_0_1);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            frame_958285c3d75383de1e6cfd9c5c0442c8->m_frame.f_lineno = 172;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_958285c3d75383de1e6cfd9c5c0442c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_958285c3d75383de1e6cfd9c5c0442c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_958285c3d75383de1e6cfd9c5c0442c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_958285c3d75383de1e6cfd9c5c0442c8,
        type_description_1,
        par_self,
        par_values,
        par_attrs,
        var_props,
        var_k,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_958285c3d75383de1e6cfd9c5c0442c8 == cache_frame_958285c3d75383de1e6cfd9c5c0442c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_958285c3d75383de1e6cfd9c5c0442c8);
        cache_frame_958285c3d75383de1e6cfd9c5c0442c8 = NULL;
    }

    assertFrameObject(frame_958285c3d75383de1e6cfd9c5c0442c8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_props);
    var_props = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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

    Py_XDECREF(var_props);
    var_props = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$local_connection$$$function__9__process_remove_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    struct Nuitka_FrameObject *frame_01c9ac6de373cfebbb66869a02842232;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_01c9ac6de373cfebbb66869a02842232 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_01c9ac6de373cfebbb66869a02842232)) {
        Py_XDECREF(cache_frame_01c9ac6de373cfebbb66869a02842232);

#if _DEBUG_REFCOUNTS
        if (cache_frame_01c9ac6de373cfebbb66869a02842232 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_01c9ac6de373cfebbb66869a02842232 = MAKE_FUNCTION_FRAME(codeobj_01c9ac6de373cfebbb66869a02842232, module_flet_core$local_connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_01c9ac6de373cfebbb66869a02842232->m_type_description == NULL);
    frame_01c9ac6de373cfebbb66869a02842232 = cache_frame_01c9ac6de373cfebbb66869a02842232;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_01c9ac6de373cfebbb66869a02842232);
    assert(Py_REFCNT(frame_01c9ac6de373cfebbb66869a02842232) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_value_1 = par_values;
        frame_01c9ac6de373cfebbb66869a02842232->m_frame.f_lineno = 177;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[79];
        tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
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
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[114];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 177;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[15];
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_3;
            PyObject *tmp_kw_call_value_0_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[115]);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 179;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_values);
            tmp_kw_call_value_0_1 = par_values;
            frame_01c9ac6de373cfebbb66869a02842232->m_frame.f_lineno = 179;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

                tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[117]);
            }

            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 179;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            frame_01c9ac6de373cfebbb66869a02842232->m_frame.f_lineno = 178;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_01c9ac6de373cfebbb66869a02842232, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01c9ac6de373cfebbb66869a02842232->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01c9ac6de373cfebbb66869a02842232, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_01c9ac6de373cfebbb66869a02842232,
        type_description_1,
        par_self,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_01c9ac6de373cfebbb66869a02842232 == cache_frame_01c9ac6de373cfebbb66869a02842232) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_01c9ac6de373cfebbb66869a02842232);
        cache_frame_01c9ac6de373cfebbb66869a02842232 = NULL;
    }

    assertFrameObject(frame_01c9ac6de373cfebbb66869a02842232);

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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$local_connection$$$function__10__process_clean_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    struct Nuitka_FrameObject *frame_04742db61370988af3512ca201541074;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_04742db61370988af3512ca201541074 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_04742db61370988af3512ca201541074)) {
        Py_XDECREF(cache_frame_04742db61370988af3512ca201541074);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04742db61370988af3512ca201541074 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04742db61370988af3512ca201541074 = MAKE_FUNCTION_FRAME(codeobj_04742db61370988af3512ca201541074, module_flet_core$local_connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04742db61370988af3512ca201541074->m_type_description == NULL);
    frame_04742db61370988af3512ca201541074 = cache_frame_04742db61370988af3512ca201541074;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_04742db61370988af3512ca201541074);
    assert(Py_REFCNT(frame_04742db61370988af3512ca201541074) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_value_1 = par_values;
        frame_04742db61370988af3512ca201541074->m_frame.f_lineno = 183;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[79];
        tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
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
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[118];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 183;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[15];
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_3;
            PyObject *tmp_kw_call_value_0_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[119]);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 185;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_values);
            tmp_kw_call_value_0_1 = par_values;
            frame_04742db61370988af3512ca201541074->m_frame.f_lineno = 185;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

                tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[117]);
            }

            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 185;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            frame_04742db61370988af3512ca201541074->m_frame.f_lineno = 184;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_04742db61370988af3512ca201541074, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04742db61370988af3512ca201541074->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04742db61370988af3512ca201541074, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04742db61370988af3512ca201541074,
        type_description_1,
        par_self,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_04742db61370988af3512ca201541074 == cache_frame_04742db61370988af3512ca201541074) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04742db61370988af3512ca201541074);
        cache_frame_04742db61370988af3512ca201541074 = NULL;
    }

    assertFrameObject(frame_04742db61370988af3512ca201541074);

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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$local_connection$$$function__11__process_error_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    struct Nuitka_FrameObject *frame_7487b4388e8dfe873322b21975b839b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7487b4388e8dfe873322b21975b839b4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7487b4388e8dfe873322b21975b839b4)) {
        Py_XDECREF(cache_frame_7487b4388e8dfe873322b21975b839b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7487b4388e8dfe873322b21975b839b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7487b4388e8dfe873322b21975b839b4 = MAKE_FUNCTION_FRAME(codeobj_7487b4388e8dfe873322b21975b839b4, module_flet_core$local_connection, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7487b4388e8dfe873322b21975b839b4->m_type_description == NULL);
    frame_7487b4388e8dfe873322b21975b839b4 = cache_frame_7487b4388e8dfe873322b21975b839b4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7487b4388e8dfe873322b21975b839b4);
    assert(Py_REFCNT(frame_7487b4388e8dfe873322b21975b839b4) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_value_1 = par_values;
        frame_7487b4388e8dfe873322b21975b839b4->m_frame.f_lineno = 189;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
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
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[121];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 189;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[15];
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_3;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[122]);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 191;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_values);
            tmp_expression_value_2 = par_values;
            tmp_subscript_value_1 = mod_consts[79];
            tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
            if (tmp_kw_call_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 191;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            frame_7487b4388e8dfe873322b21975b839b4->m_frame.f_lineno = 191;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

                tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[124]);
            }

            Py_DECREF(tmp_kw_call_value_0_1);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 191;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            frame_7487b4388e8dfe873322b21975b839b4->m_frame.f_lineno = 190;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7487b4388e8dfe873322b21975b839b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7487b4388e8dfe873322b21975b839b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7487b4388e8dfe873322b21975b839b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7487b4388e8dfe873322b21975b839b4,
        type_description_1,
        par_self,
        par_values
    );


    // Release cached frame if used for exception.
    if (frame_7487b4388e8dfe873322b21975b839b4 == cache_frame_7487b4388e8dfe873322b21975b839b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7487b4388e8dfe873322b21975b839b4);
        cache_frame_7487b4388e8dfe873322b21975b839b4 = NULL;
    }

    assertFrameObject(frame_7487b4388e8dfe873322b21975b839b4);

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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$local_connection$$$function__12__process_invoke_method_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    PyObject *par_attrs = python_pars[2];
    struct Nuitka_FrameObject *frame_31b1a5775848d86d8ff8b3e9ebd6a9b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_31b1a5775848d86d8ff8b3e9ebd6a9b7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_31b1a5775848d86d8ff8b3e9ebd6a9b7)) {
        Py_XDECREF(cache_frame_31b1a5775848d86d8ff8b3e9ebd6a9b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31b1a5775848d86d8ff8b3e9ebd6a9b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31b1a5775848d86d8ff8b3e9ebd6a9b7 = MAKE_FUNCTION_FRAME(codeobj_31b1a5775848d86d8ff8b3e9ebd6a9b7, module_flet_core$local_connection, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_31b1a5775848d86d8ff8b3e9ebd6a9b7->m_type_description == NULL);
    frame_31b1a5775848d86d8ff8b3e9ebd6a9b7 = cache_frame_31b1a5775848d86d8ff8b3e9ebd6a9b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_31b1a5775848d86d8ff8b3e9ebd6a9b7);
    assert(Py_REFCNT(frame_31b1a5775848d86d8ff8b3e9ebd6a9b7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_value_1 = par_values;
        frame_31b1a5775848d86d8ff8b3e9ebd6a9b7->m_frame.f_lineno = 196;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[125];
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[126];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 196;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[15];
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_3;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_kw_call_value_1_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_kw_call_value_2_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[127]);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 199;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_values);
            tmp_expression_value_2 = par_values;
            tmp_subscript_value_1 = mod_consts[79];
            tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
            if (tmp_kw_call_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 200;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_values);
            tmp_expression_value_3 = par_values;
            tmp_subscript_value_2 = mod_consts[2];
            tmp_kw_call_value_1_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 1);
            if (tmp_kw_call_value_1_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);
                Py_DECREF(tmp_kw_call_value_0_1);

                exception_lineno = 200;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_attrs);
            tmp_kw_call_value_2_1 = par_attrs;
            frame_31b1a5775848d86d8ff8b3e9ebd6a9b7->m_frame.f_lineno = 199;
            {
                PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

                tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[129]);
            }

            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 199;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            frame_31b1a5775848d86d8ff8b3e9ebd6a9b7->m_frame.f_lineno = 197;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_31b1a5775848d86d8ff8b3e9ebd6a9b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31b1a5775848d86d8ff8b3e9ebd6a9b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31b1a5775848d86d8ff8b3e9ebd6a9b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31b1a5775848d86d8ff8b3e9ebd6a9b7,
        type_description_1,
        par_self,
        par_values,
        par_attrs
    );


    // Release cached frame if used for exception.
    if (frame_31b1a5775848d86d8ff8b3e9ebd6a9b7 == cache_frame_31b1a5775848d86d8ff8b3e9ebd6a9b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_31b1a5775848d86d8ff8b3e9ebd6a9b7);
        cache_frame_31b1a5775848d86d8ff8b3e9ebd6a9b7 = NULL;
    }

    assertFrameObject(frame_31b1a5775848d86d8ff8b3e9ebd6a9b7);

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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$local_connection$$$function__13__process_get_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_values = python_pars[1];
    PyObject *var_ctrl_id = NULL;
    PyObject *var_prop_name = NULL;
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_e6cfa14fbe1ad1a07edc30dc753385f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e6cfa14fbe1ad1a07edc30dc753385f2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e6cfa14fbe1ad1a07edc30dc753385f2)) {
        Py_XDECREF(cache_frame_e6cfa14fbe1ad1a07edc30dc753385f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6cfa14fbe1ad1a07edc30dc753385f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6cfa14fbe1ad1a07edc30dc753385f2 = MAKE_FUNCTION_FRAME(codeobj_e6cfa14fbe1ad1a07edc30dc753385f2, module_flet_core$local_connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e6cfa14fbe1ad1a07edc30dc753385f2->m_type_description == NULL);
    frame_e6cfa14fbe1ad1a07edc30dc753385f2 = cache_frame_e6cfa14fbe1ad1a07edc30dc753385f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e6cfa14fbe1ad1a07edc30dc753385f2);
    assert(Py_REFCNT(frame_e6cfa14fbe1ad1a07edc30dc753385f2) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_value_1 = par_values;
        frame_e6cfa14fbe1ad1a07edc30dc753385f2->m_frame.f_lineno = 205;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[125];
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[130];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 205;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooo";
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
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 206;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_values);
        tmp_expression_value_2 = par_values;
        tmp_subscript_value_1 = mod_consts[79];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctrl_id == NULL);
        var_ctrl_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_values);
        tmp_expression_value_3 = par_values;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prop_name == NULL);
        var_prop_name = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[15];
        assert(var_r == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_r = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_ctrl_id);
        tmp_cmp_expr_left_2 = var_ctrl_id;
        tmp_cmp_expr_right_2 = mod_consts[11];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooo";
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
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_prop_name);
        tmp_cmp_expr_left_3 = var_prop_name;
        tmp_cmp_expr_right_3 = mod_consts[17];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooo";
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
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[4]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert(old != NULL);
            var_r = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_prop_name);
        tmp_cmp_expr_left_4 = var_prop_name;
        tmp_cmp_expr_right_4 = mod_consts[31];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooo";
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
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[4]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[32]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert(old != NULL);
            var_r = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_prop_name);
        tmp_cmp_expr_left_5 = var_prop_name;
        tmp_cmp_expr_right_5 = mod_consts[33];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[4]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[34]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert(old != NULL);
            var_r = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_prop_name);
        tmp_cmp_expr_left_6 = var_prop_name;
        tmp_cmp_expr_right_6 = mod_consts[35];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[4]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[35]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert(old != NULL);
            var_r = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_prop_name);
        tmp_cmp_expr_left_7 = var_prop_name;
        tmp_cmp_expr_right_7 = mod_consts[19];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[4]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[20]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert(old != NULL);
            var_r = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_prop_name);
        tmp_cmp_expr_left_8 = var_prop_name;
        tmp_cmp_expr_right_8 = mod_consts[21];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[4]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[22]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert(old != NULL);
            var_r = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_prop_name);
        tmp_cmp_expr_left_9 = var_prop_name;
        tmp_cmp_expr_right_9 = mod_consts[24];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[4]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[24]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert(old != NULL);
            var_r = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_prop_name);
        tmp_cmp_expr_left_10 = var_prop_name;
        tmp_cmp_expr_right_10 = mod_consts[26];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[4]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[26]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert(old != NULL);
            var_r = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(var_prop_name);
        tmp_cmp_expr_left_11 = var_prop_name;
        tmp_cmp_expr_right_11 = mod_consts[28];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[4]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[28]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert(old != NULL);
            var_r = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(var_prop_name);
        tmp_cmp_expr_left_12 = var_prop_name;
        tmp_cmp_expr_right_12 = mod_consts[30];
        tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[4]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[30]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert(old != NULL);
            var_r = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    branch_no_13:;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    branch_no_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6cfa14fbe1ad1a07edc30dc753385f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6cfa14fbe1ad1a07edc30dc753385f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6cfa14fbe1ad1a07edc30dc753385f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6cfa14fbe1ad1a07edc30dc753385f2,
        type_description_1,
        par_self,
        par_values,
        var_ctrl_id,
        var_prop_name,
        var_r
    );


    // Release cached frame if used for exception.
    if (frame_e6cfa14fbe1ad1a07edc30dc753385f2 == cache_frame_e6cfa14fbe1ad1a07edc30dc753385f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e6cfa14fbe1ad1a07edc30dc753385f2);
        cache_frame_e6cfa14fbe1ad1a07edc30dc753385f2 = NULL;
    }

    assertFrameObject(frame_e6cfa14fbe1ad1a07edc30dc753385f2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_r);
        tmp_tuple_element_1 = var_r;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_None;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ctrl_id);
    Py_DECREF(var_ctrl_id);
    var_ctrl_id = NULL;
    CHECK_OBJECT(var_prop_name);
    Py_DECREF(var_prop_name);
    var_prop_name = NULL;
    CHECK_OBJECT(var_r);
    Py_DECREF(var_r);
    var_r = NULL;
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

    Py_XDECREF(var_ctrl_id);
    var_ctrl_id = NULL;
    Py_XDECREF(var_prop_name);
    var_prop_name = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__10__process_clean_command() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__10__process_clean_command,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_04742db61370988af3512ca201541074,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$local_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__11__process_error_command() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__11__process_error_command,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_7487b4388e8dfe873322b21975b839b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$local_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__12__process_invoke_method_command() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__12__process_invoke_method_command,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_31b1a5775848d86d8ff8b3e9ebd6a9b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$local_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__13__process_get_command(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__13__process_get_command,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_e6cfa14fbe1ad1a07edc30dc753385f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$local_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__1___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_38e0286af053d562771601bb08a2158f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$local_connection,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__2__create_register_web_client_response() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__2__create_register_web_client_response,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_15c51cf676ac5b9adb361188c3786b82,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$local_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__3__create_session_handler_arg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__3__create_session_handler_arg,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_616841ae027eebad8f95bee30e86b162,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$local_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__4__create_page_event_handler_arg(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__4__create_page_event_handler_arg,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_046498801fee058455a4605b33fd65ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$local_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__5__create_update_control_props_handler_arg(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__5__create_update_control_props_handler_arg,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_496a16ec8c85ba2249e2d83dcb919b37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$local_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__6__process_command(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__6__process_command,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_669d57d963de6cbe414fea8693c2adf1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$local_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__7__process_add_command(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__7__process_add_command,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_e90eec2471776fcdda57cd41398027a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$local_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__8__process_set_command() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__8__process_set_command,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_958285c3d75383de1e6cfd9c5c0442c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$local_connection,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$local_connection$$$function__9__process_remove_command() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$local_connection$$$function__9__process_remove_command,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_01c9ac6de373cfebbb66869a02842232,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$local_connection,
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

function_impl_code functable_flet_core$local_connection[] = {
    impl_flet_core$local_connection$$$function__1___init__,
    impl_flet_core$local_connection$$$function__2__create_register_web_client_response,
    impl_flet_core$local_connection$$$function__3__create_session_handler_arg,
    impl_flet_core$local_connection$$$function__4__create_page_event_handler_arg,
    impl_flet_core$local_connection$$$function__5__create_update_control_props_handler_arg,
    impl_flet_core$local_connection$$$function__6__process_command,
    impl_flet_core$local_connection$$$function__7__process_add_command,
    impl_flet_core$local_connection$$$function__8__process_set_command,
    impl_flet_core$local_connection$$$function__9__process_remove_command,
    impl_flet_core$local_connection$$$function__10__process_clean_command,
    impl_flet_core$local_connection$$$function__11__process_error_command,
    impl_flet_core$local_connection$$$function__12__process_invoke_method_command,
    impl_flet_core$local_connection$$$function__13__process_get_command,
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

    function_impl_code *current = functable_flet_core$local_connection;
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

    if (offset > sizeof(functable_flet_core$local_connection) || offset < 0) {
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
        functable_flet_core$local_connection[offset],
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
        module_flet_core$local_connection,
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
PyObject *modulecode_flet_core$local_connection(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.local_connection");

    // Store the module for future use.
    module_flet_core$local_connection = module;

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
        PRINT_STRING("flet_core.local_connection: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.local_connection: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.local_connection: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$local_connection\n");

    moduledict_flet_core$local_connection = MODULE_DICT(module_flet_core$local_connection);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$local_connection,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$local_connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[15]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$local_connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$local_connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$local_connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$local_connection);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$local_connection, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$local_connection, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$local_connection, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$local_connection);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$local_connection, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_daa44c836f999478c533283f83b810da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_flet_core$local_connection$$$class__1_LocalConnection_11 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_ff9b83fa39a4bf0b47d6af432891db2e_2;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_2);
    }
    frame_daa44c836f999478c533283f83b810da = MAKE_MODULE_FRAME(codeobj_daa44c836f999478c533283f83b810da, module_flet_core$local_connection);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_daa44c836f999478c533283f83b810da);
    assert(Py_REFCNT(frame_daa44c836f999478c533283f83b810da) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[132];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[135], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[136], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[138];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$local_connection;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[79];
        frame_daa44c836f999478c533283f83b810da->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet_core$local_connection,
                mod_consts[139],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[139]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[140];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$local_connection;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[79];
        frame_daa44c836f999478c533283f83b810da->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[141];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$local_connection;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[142];
        tmp_level_value_3 = mod_consts[79];
        frame_daa44c836f999478c533283f83b810da->m_frame.f_lineno = 5;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$local_connection,
                mod_consts[143],
                mod_consts[79]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[143]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_7);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[144];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$local_connection;
        tmp_locals_arg_value_4 = (PyObject *)moduledict_flet_core$local_connection;
        tmp_fromlist_value_4 = mod_consts[145];
        tmp_level_value_4 = mod_consts[79];
        frame_daa44c836f999478c533283f83b810da->m_frame.f_lineno = 6;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_flet_core$local_connection, true, tmp_star_imported_1);
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[146]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[147]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        frame_daa44c836f999478c533283f83b810da->m_frame.f_lineno = 8;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
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


            exception_lineno = 11;

            goto try_except_handler_1;
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
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

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
        tmp_expression_value_3 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[79];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
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


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[148]);
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[148]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[149];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_daa44c836f999478c533283f83b810da->m_frame.f_lineno = 11;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_6 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[150]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

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
        tmp_mod_expr_left_1 = mod_consts[151];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[147];
        tmp_getattr_default_1 = mod_consts[152];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[147]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

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


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 11;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
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
            locals_flet_core$local_connection$$$class__1_LocalConnection_11 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[153];
        tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[154], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[155], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        frame_ff9b83fa39a4bf0b47d6af432891db2e_2 = MAKE_CLASS_FRAME(codeobj_ff9b83fa39a4bf0b47d6af432891db2e, module_flet_core$local_connection, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ff9b83fa39a4bf0b47d6af432891db2e_2);
        assert(Py_REFCNT(frame_ff9b83fa39a4bf0b47d6af432891db2e_2) == 2);

        // Framed code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__1___init__(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__2__create_register_web_client_response();

        tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[157], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__3__create_session_handler_arg();

        tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[159], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_key_1 = mod_consts[161];
            tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[5]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_dict_value_1 == NULL)) {
                        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_dict_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 55;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__4__create_page_event_handler_arg(tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[162], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_key_2 = mod_consts[161];
            tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[5]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_dict_value_2 == NULL)) {
                        tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_dict_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__5__create_update_control_props_handler_arg(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[164], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = mod_consts[166];
            tmp_dict_value_3 = PyObject_GetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[167]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[167]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 76;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__6__process_command(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[168], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[166];
            tmp_dict_value_4 = PyObject_GetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[167]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[167]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 94;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__7__process_add_command(tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__8__process_set_command();

        tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[63], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__9__process_remove_command();

        tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__10__process_clean_command();

        tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[68], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__11__process_error_command();

        tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__12__process_invoke_method_command();

        tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[70], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_2;
            tmp_dict_key_5 = mod_consts[59];
            tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[139]);

            if (tmp_expression_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[139]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 204;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = PyObject_GetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[98]);

            if (tmp_subscript_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_subscript_value_2 == NULL)) {
                        tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_subscript_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_8);

                        exception_lineno = 204;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_8);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$local_connection$$$function__13__process_get_command(tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[58], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ff9b83fa39a4bf0b47d6af432891db2e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ff9b83fa39a4bf0b47d6af432891db2e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ff9b83fa39a4bf0b47d6af432891db2e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ff9b83fa39a4bf0b47d6af432891db2e_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_ff9b83fa39a4bf0b47d6af432891db2e_2);

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


                exception_lineno = 11;

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
        tmp_res = PyObject_SetItem(locals_flet_core$local_connection$$$class__1_LocalConnection_11, mod_consts[177], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[149];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flet_core$local_connection$$$class__1_LocalConnection_11;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_daa44c836f999478c533283f83b810da->m_frame.f_lineno = 11;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto try_except_handler_3;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_16);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_15 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_flet_core$local_connection$$$class__1_LocalConnection_11);
        locals_flet_core$local_connection$$$class__1_LocalConnection_11 = NULL;
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

        Py_DECREF(locals_flet_core$local_connection$$$class__1_LocalConnection_11);
        locals_flet_core$local_connection$$$class__1_LocalConnection_11 = NULL;
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
        exception_lineno = 11;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$local_connection, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_15);
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
        exception_tb = MAKE_TRACEBACK(frame_daa44c836f999478c533283f83b810da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_daa44c836f999478c533283f83b810da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_daa44c836f999478c533283f83b810da, exception_lineno);
    }



    assertFrameObject(frame_daa44c836f999478c533283f83b810da);

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
    PGO_onModuleExit("flet_core.local_connection", false);

    Py_INCREF(module_flet_core$local_connection);
    return module_flet_core$local_connection;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$local_connection, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$local_connection", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
