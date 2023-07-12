/* Generated code for Python module 'flet_core.canvas.path'
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

/* The "module_flet_core$canvas$path" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$canvas$path;
PyDictObject *moduledict_flet_core$canvas$path;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[124];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[124];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.canvas.path"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 124; i++) {
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
void checkModuleConstants_flet_core$canvas$path(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 124; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_963281a45ab324351aaaf469845e4cba;
static PyCodeObject *codeobj_7552caa157812b09ada8ac76ed6f6ebb;
static PyCodeObject *codeobj_d4aa0fafe4acbdf27c07092788ef7d84;
static PyCodeObject *codeobj_58f917dac0dcb27d77746dfa86f5fc8f;
static PyCodeObject *codeobj_adfdc6314ca71ecd413fa30a2799f294;
static PyCodeObject *codeobj_59de3c51341450afccc1ee40ca51d869;
static PyCodeObject *codeobj_ba4cc44fb8216b8f83f4843dbb4f08c9;
static PyCodeObject *codeobj_caf85a45699b2982582fc53e79f3e87e;
static PyCodeObject *codeobj_d37430be4b5d82b0c1788c0782ed5d80;
static PyCodeObject *codeobj_3e6a78c2c73e3ebd6209b387b7f5ac9e;
static PyCodeObject *codeobj_4aec26ba781d7d73ce9a909a346b0daf;
static PyCodeObject *codeobj_dd0d0c04cacb50ef35ecf2f435982afe;
static PyCodeObject *codeobj_5b13969a21e099d8b0fc405bf315c33a;
static PyCodeObject *codeobj_210daa1e96a906d09ba16bec4e973fe9;
static PyCodeObject *codeobj_793f8ca730c3a6f7029f015d14c9e5da;
static PyCodeObject *codeobj_e76bf84c295a5abe130b3b9ff640056d;
static PyCodeObject *codeobj_953bccd07facf5aa9bd981a984ba27f7;
static PyCodeObject *codeobj_1379f4b08c578fdc92cb4a4f354370f8;
static PyCodeObject *codeobj_9dee0e45594e2822463b789c9d2d1bd0;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[11]; CHECK_OBJECT(module_filename_obj);
    codeobj_963281a45ab324351aaaf469845e4cba = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[117], mod_consts[117], NULL, NULL, 0, 0, 0);
    codeobj_7552caa157812b09ada8ac76ed6f6ebb = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[118], NULL, 0, 0, 0);
    codeobj_d4aa0fafe4acbdf27c07092788ef7d84 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[118], NULL, 0, 0, 0);
    codeobj_58f917dac0dcb27d77746dfa86f5fc8f = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[118], NULL, 0, 0, 0);
    codeobj_adfdc6314ca71ecd413fa30a2799f294 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[118], NULL, 0, 0, 0);
    codeobj_59de3c51341450afccc1ee40ca51d869 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[118], NULL, 0, 0, 0);
    codeobj_ba4cc44fb8216b8f83f4843dbb4f08c9 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[118], NULL, 0, 0, 0);
    codeobj_caf85a45699b2982582fc53e79f3e87e = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[118], NULL, 0, 0, 0);
    codeobj_d37430be4b5d82b0c1788c0782ed5d80 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[118], NULL, 0, 0, 0);
    codeobj_3e6a78c2c73e3ebd6209b387b7f5ac9e = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[118], NULL, 0, 0, 0);
    codeobj_4aec26ba781d7d73ce9a909a346b0daf = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[118], NULL, 0, 0, 0);
    codeobj_dd0d0c04cacb50ef35ecf2f435982afe = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[118], NULL, 0, 0, 0);
    codeobj_5b13969a21e099d8b0fc405bf315c33a = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[119], NULL, 7, 0, 0);
    codeobj_210daa1e96a906d09ba16bec4e973fe9 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[6], mod_consts[6], mod_consts[120], mod_consts[118], 1, 0, 0);
    codeobj_793f8ca730c3a6f7029f015d14c9e5da = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[121], NULL, 1, 0, 0);
    codeobj_e76bf84c295a5abe130b3b9ff640056d = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[121], NULL, 1, 0, 0);
    codeobj_953bccd07facf5aa9bd981a984ba27f7 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[122], NULL, 2, 0, 0);
    codeobj_1379f4b08c578fdc92cb4a4f354370f8 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[121], NULL, 1, 0, 0);
    codeobj_9dee0e45594e2822463b789c9d2d1bd0 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[122], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__3__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__4_elements();


static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__5_elements(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__6_paint(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__7_paint(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$canvas$path$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_elements = python_pars[1];
    PyObject *par_paint = python_pars[2];
    PyObject *par_ref = python_pars[3];
    PyObject *par_visible = python_pars[4];
    PyObject *par_disabled = python_pars[5];
    PyObject *par_data = python_pars[6];
    struct Nuitka_FrameObject *frame_5b13969a21e099d8b0fc405bf315c33a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5b13969a21e099d8b0fc405bf315c33a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5b13969a21e099d8b0fc405bf315c33a)) {
        Py_XDECREF(cache_frame_5b13969a21e099d8b0fc405bf315c33a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b13969a21e099d8b0fc405bf315c33a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b13969a21e099d8b0fc405bf315c33a = MAKE_FUNCTION_FRAME(codeobj_5b13969a21e099d8b0fc405bf315c33a, module_flet_core$canvas$path, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b13969a21e099d8b0fc405bf315c33a->m_type_description == NULL);
    frame_5b13969a21e099d8b0fc405bf315c33a = cache_frame_5b13969a21e099d8b0fc405bf315c33a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5b13969a21e099d8b0fc405bf315c33a);
    assert(Py_REFCNT(frame_5b13969a21e099d8b0fc405bf315c33a) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        CHECK_OBJECT(par_visible);
        tmp_kw_call_dict_value_1_1 = par_visible;
        CHECK_OBJECT(par_disabled);
        tmp_kw_call_dict_value_2_1 = par_disabled;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_3_1 = par_data;
        frame_5b13969a21e099d8b0fc405bf315c33a->m_frame.f_lineno = 103;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_elements);
        tmp_assattr_value_1 = par_elements;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_paint);
        tmp_assattr_value_2 = par_paint;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b13969a21e099d8b0fc405bf315c33a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b13969a21e099d8b0fc405bf315c33a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b13969a21e099d8b0fc405bf315c33a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b13969a21e099d8b0fc405bf315c33a,
        type_description_1,
        par_self,
        par_elements,
        par_paint,
        par_ref,
        par_visible,
        par_disabled,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_5b13969a21e099d8b0fc405bf315c33a == cache_frame_5b13969a21e099d8b0fc405bf315c33a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b13969a21e099d8b0fc405bf315c33a);
        cache_frame_5b13969a21e099d8b0fc405bf315c33a = NULL;
    }

    assertFrameObject(frame_5b13969a21e099d8b0fc405bf315c33a);

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
    CHECK_OBJECT(par_elements);
    Py_DECREF(par_elements);
    CHECK_OBJECT(par_paint);
    Py_DECREF(par_paint);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_elements);
    Py_DECREF(par_elements);
    CHECK_OBJECT(par_paint);
    Py_DECREF(par_paint);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$canvas$path$$$function__3__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_210daa1e96a906d09ba16bec4e973fe9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_210daa1e96a906d09ba16bec4e973fe9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_210daa1e96a906d09ba16bec4e973fe9)) {
        Py_XDECREF(cache_frame_210daa1e96a906d09ba16bec4e973fe9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_210daa1e96a906d09ba16bec4e973fe9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_210daa1e96a906d09ba16bec4e973fe9 = MAKE_FUNCTION_FRAME(codeobj_210daa1e96a906d09ba16bec4e973fe9, module_flet_core$canvas$path, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_210daa1e96a906d09ba16bec4e973fe9->m_type_description == NULL);
    frame_210daa1e96a906d09ba16bec4e973fe9 = cache_frame_210daa1e96a906d09ba16bec4e973fe9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_210daa1e96a906d09ba16bec4e973fe9);
    assert(Py_REFCNT(frame_210daa1e96a906d09ba16bec4e973fe9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$canvas$path, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_210daa1e96a906d09ba16bec4e973fe9->m_frame.f_lineno = 112;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[6]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[3];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 113;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_210daa1e96a906d09ba16bec4e973fe9->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[4];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[9]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 114;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_210daa1e96a906d09ba16bec4e973fe9->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_210daa1e96a906d09ba16bec4e973fe9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_210daa1e96a906d09ba16bec4e973fe9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_210daa1e96a906d09ba16bec4e973fe9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_210daa1e96a906d09ba16bec4e973fe9,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_210daa1e96a906d09ba16bec4e973fe9 == cache_frame_210daa1e96a906d09ba16bec4e973fe9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_210daa1e96a906d09ba16bec4e973fe9);
        cache_frame_210daa1e96a906d09ba16bec4e973fe9 = NULL;
    }

    assertFrameObject(frame_210daa1e96a906d09ba16bec4e973fe9);

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


static PyObject *impl_flet_core$canvas$path$$$function__4_elements(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e76bf84c295a5abe130b3b9ff640056d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e76bf84c295a5abe130b3b9ff640056d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e76bf84c295a5abe130b3b9ff640056d)) {
        Py_XDECREF(cache_frame_e76bf84c295a5abe130b3b9ff640056d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e76bf84c295a5abe130b3b9ff640056d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e76bf84c295a5abe130b3b9ff640056d = MAKE_FUNCTION_FRAME(codeobj_e76bf84c295a5abe130b3b9ff640056d, module_flet_core$canvas$path, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e76bf84c295a5abe130b3b9ff640056d->m_type_description == NULL);
    frame_e76bf84c295a5abe130b3b9ff640056d = cache_frame_e76bf84c295a5abe130b3b9ff640056d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e76bf84c295a5abe130b3b9ff640056d);
    assert(Py_REFCNT(frame_e76bf84c295a5abe130b3b9ff640056d) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
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
        exception_tb = MAKE_TRACEBACK(frame_e76bf84c295a5abe130b3b9ff640056d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e76bf84c295a5abe130b3b9ff640056d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e76bf84c295a5abe130b3b9ff640056d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e76bf84c295a5abe130b3b9ff640056d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e76bf84c295a5abe130b3b9ff640056d == cache_frame_e76bf84c295a5abe130b3b9ff640056d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e76bf84c295a5abe130b3b9ff640056d);
        cache_frame_e76bf84c295a5abe130b3b9ff640056d = NULL;
    }

    assertFrameObject(frame_e76bf84c295a5abe130b3b9ff640056d);

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


static PyObject *impl_flet_core$canvas$path$$$function__5_elements(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_953bccd07facf5aa9bd981a984ba27f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_953bccd07facf5aa9bd981a984ba27f7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_953bccd07facf5aa9bd981a984ba27f7)) {
        Py_XDECREF(cache_frame_953bccd07facf5aa9bd981a984ba27f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_953bccd07facf5aa9bd981a984ba27f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_953bccd07facf5aa9bd981a984ba27f7 = MAKE_FUNCTION_FRAME(codeobj_953bccd07facf5aa9bd981a984ba27f7, module_flet_core$canvas$path, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_953bccd07facf5aa9bd981a984ba27f7->m_type_description == NULL);
    frame_953bccd07facf5aa9bd981a984ba27f7 = cache_frame_953bccd07facf5aa9bd981a984ba27f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_953bccd07facf5aa9bd981a984ba27f7);
    assert(Py_REFCNT(frame_953bccd07facf5aa9bd981a984ba27f7) == 2);

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
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_953bccd07facf5aa9bd981a984ba27f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_953bccd07facf5aa9bd981a984ba27f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_953bccd07facf5aa9bd981a984ba27f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_953bccd07facf5aa9bd981a984ba27f7,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_953bccd07facf5aa9bd981a984ba27f7 == cache_frame_953bccd07facf5aa9bd981a984ba27f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_953bccd07facf5aa9bd981a984ba27f7);
        cache_frame_953bccd07facf5aa9bd981a984ba27f7 = NULL;
    }

    assertFrameObject(frame_953bccd07facf5aa9bd981a984ba27f7);

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


static PyObject *impl_flet_core$canvas$path$$$function__6_paint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1379f4b08c578fdc92cb4a4f354370f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1379f4b08c578fdc92cb4a4f354370f8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1379f4b08c578fdc92cb4a4f354370f8)) {
        Py_XDECREF(cache_frame_1379f4b08c578fdc92cb4a4f354370f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1379f4b08c578fdc92cb4a4f354370f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1379f4b08c578fdc92cb4a4f354370f8 = MAKE_FUNCTION_FRAME(codeobj_1379f4b08c578fdc92cb4a4f354370f8, module_flet_core$canvas$path, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1379f4b08c578fdc92cb4a4f354370f8->m_type_description == NULL);
    frame_1379f4b08c578fdc92cb4a4f354370f8 = cache_frame_1379f4b08c578fdc92cb4a4f354370f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1379f4b08c578fdc92cb4a4f354370f8);
    assert(Py_REFCNT(frame_1379f4b08c578fdc92cb4a4f354370f8) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
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
        exception_tb = MAKE_TRACEBACK(frame_1379f4b08c578fdc92cb4a4f354370f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1379f4b08c578fdc92cb4a4f354370f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1379f4b08c578fdc92cb4a4f354370f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1379f4b08c578fdc92cb4a4f354370f8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1379f4b08c578fdc92cb4a4f354370f8 == cache_frame_1379f4b08c578fdc92cb4a4f354370f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1379f4b08c578fdc92cb4a4f354370f8);
        cache_frame_1379f4b08c578fdc92cb4a4f354370f8 = NULL;
    }

    assertFrameObject(frame_1379f4b08c578fdc92cb4a4f354370f8);

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


static PyObject *impl_flet_core$canvas$path$$$function__7_paint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_9dee0e45594e2822463b789c9d2d1bd0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9dee0e45594e2822463b789c9d2d1bd0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9dee0e45594e2822463b789c9d2d1bd0)) {
        Py_XDECREF(cache_frame_9dee0e45594e2822463b789c9d2d1bd0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9dee0e45594e2822463b789c9d2d1bd0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9dee0e45594e2822463b789c9d2d1bd0 = MAKE_FUNCTION_FRAME(codeobj_9dee0e45594e2822463b789c9d2d1bd0, module_flet_core$canvas$path, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9dee0e45594e2822463b789c9d2d1bd0->m_type_description == NULL);
    frame_9dee0e45594e2822463b789c9d2d1bd0 = cache_frame_9dee0e45594e2822463b789c9d2d1bd0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9dee0e45594e2822463b789c9d2d1bd0);
    assert(Py_REFCNT(frame_9dee0e45594e2822463b789c9d2d1bd0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9dee0e45594e2822463b789c9d2d1bd0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9dee0e45594e2822463b789c9d2d1bd0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9dee0e45594e2822463b789c9d2d1bd0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9dee0e45594e2822463b789c9d2d1bd0,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_9dee0e45594e2822463b789c9d2d1bd0 == cache_frame_9dee0e45594e2822463b789c9d2d1bd0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9dee0e45594e2822463b789c9d2d1bd0);
        cache_frame_9dee0e45594e2822463b789c9d2d1bd0 = NULL;
    }

    assertFrameObject(frame_9dee0e45594e2822463b789c9d2d1bd0);

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



static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$canvas$path$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_5b13969a21e099d8b0fc405bf315c33a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$canvas$path,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_793f8ca730c3a6f7029f015d14c9e5da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$canvas$path,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[107]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__3__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$canvas$path$$$function__3__before_build_command,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_210daa1e96a906d09ba16bec4e973fe9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$canvas$path,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__4_elements() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$canvas$path$$$function__4_elements,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_e76bf84c295a5abe130b3b9ff640056d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$canvas$path,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__5_elements(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$canvas$path$$$function__5_elements,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_953bccd07facf5aa9bd981a984ba27f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$canvas$path,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__6_paint(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$canvas$path$$$function__6_paint,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_1379f4b08c578fdc92cb4a4f354370f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$canvas$path,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$canvas$path$$$function__7_paint(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$canvas$path$$$function__7_paint,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_9dee0e45594e2822463b789c9d2d1bd0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$canvas$path,
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

function_impl_code functable_flet_core$canvas$path[] = {
    impl_flet_core$canvas$path$$$function__1___init__,
    NULL,
    impl_flet_core$canvas$path$$$function__3__before_build_command,
    impl_flet_core$canvas$path$$$function__4_elements,
    impl_flet_core$canvas$path$$$function__5_elements,
    impl_flet_core$canvas$path$$$function__6_paint,
    impl_flet_core$canvas$path$$$function__7_paint,
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

    function_impl_code *current = functable_flet_core$canvas$path;
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

    if (offset > sizeof(functable_flet_core$canvas$path) || offset < 0) {
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
        functable_flet_core$canvas$path[offset],
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
        module_flet_core$canvas$path,
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
PyObject *modulecode_flet_core$canvas$path(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.canvas.path");

    // Store the module for future use.
    module_flet_core$canvas$path = module;

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
        PRINT_STRING("flet_core.canvas.path: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.canvas.path: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.canvas.path: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$canvas$path\n");

    moduledict_flet_core$canvas$path = MODULE_DICT(module_flet_core$canvas$path);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$canvas$path,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$canvas$path,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[123]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$canvas$path,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$canvas$path,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$canvas$path,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$canvas$path);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$canvas$path);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *tmp_Path$class_creation_10__bases = NULL;
    PyObject *tmp_Path$class_creation_10__bases_orig = NULL;
    PyObject *tmp_Path$class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_Path$class_creation_10__metaclass = NULL;
    PyObject *tmp_Path$class_creation_10__prepared = NULL;
    PyObject *tmp_Path$class_creation_11__bases = NULL;
    PyObject *tmp_Path$class_creation_11__bases_orig = NULL;
    PyObject *tmp_Path$class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_Path$class_creation_11__metaclass = NULL;
    PyObject *tmp_Path$class_creation_11__prepared = NULL;
    PyObject *tmp_Path$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_Path$class_creation_1__prepared = NULL;
    PyObject *tmp_Path$class_creation_2__bases = NULL;
    PyObject *tmp_Path$class_creation_2__bases_orig = NULL;
    PyObject *tmp_Path$class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_Path$class_creation_2__metaclass = NULL;
    PyObject *tmp_Path$class_creation_2__prepared = NULL;
    PyObject *tmp_Path$class_creation_3__bases = NULL;
    PyObject *tmp_Path$class_creation_3__bases_orig = NULL;
    PyObject *tmp_Path$class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_Path$class_creation_3__metaclass = NULL;
    PyObject *tmp_Path$class_creation_3__prepared = NULL;
    PyObject *tmp_Path$class_creation_4__bases = NULL;
    PyObject *tmp_Path$class_creation_4__bases_orig = NULL;
    PyObject *tmp_Path$class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_Path$class_creation_4__metaclass = NULL;
    PyObject *tmp_Path$class_creation_4__prepared = NULL;
    PyObject *tmp_Path$class_creation_5__bases = NULL;
    PyObject *tmp_Path$class_creation_5__bases_orig = NULL;
    PyObject *tmp_Path$class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_Path$class_creation_5__metaclass = NULL;
    PyObject *tmp_Path$class_creation_5__prepared = NULL;
    PyObject *tmp_Path$class_creation_6__bases = NULL;
    PyObject *tmp_Path$class_creation_6__bases_orig = NULL;
    PyObject *tmp_Path$class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_Path$class_creation_6__metaclass = NULL;
    PyObject *tmp_Path$class_creation_6__prepared = NULL;
    PyObject *tmp_Path$class_creation_7__bases = NULL;
    PyObject *tmp_Path$class_creation_7__bases_orig = NULL;
    PyObject *tmp_Path$class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_Path$class_creation_7__metaclass = NULL;
    PyObject *tmp_Path$class_creation_7__prepared = NULL;
    PyObject *tmp_Path$class_creation_8__bases = NULL;
    PyObject *tmp_Path$class_creation_8__bases_orig = NULL;
    PyObject *tmp_Path$class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_Path$class_creation_8__metaclass = NULL;
    PyObject *tmp_Path$class_creation_8__prepared = NULL;
    PyObject *tmp_Path$class_creation_9__bases = NULL;
    PyObject *tmp_Path$class_creation_9__bases_orig = NULL;
    PyObject *tmp_Path$class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_Path$class_creation_9__metaclass = NULL;
    PyObject *tmp_Path$class_creation_9__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_963281a45ab324351aaaf469845e4cba;
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
    PyObject *locals_flet_core$canvas$path$$$class__1_Path_9 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_d37430be4b5d82b0c1788c0782ed5d80_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *locals_flet_core$canvas$path$$$class__2_PathElement_11 = NULL;
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
    PyObject *locals_flet_core$canvas$path$$$class__3_MoveTo_15 = NULL;
    struct Nuitka_FrameObject *frame_ba4cc44fb8216b8f83f4843dbb4f08c9_3;
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
    PyObject *locals_flet_core$canvas$path$$$class__4_LineTo_21 = NULL;
    struct Nuitka_FrameObject *frame_59de3c51341450afccc1ee40ca51d869_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_flet_core$canvas$path$$$class__5_QuadraticTo_27 = NULL;
    struct Nuitka_FrameObject *frame_3e6a78c2c73e3ebd6209b387b7f5ac9e_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_flet_core$canvas$path$$$class__6_CubicTo_36 = NULL;
    struct Nuitka_FrameObject *frame_adfdc6314ca71ecd413fa30a2799f294_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_flet_core$canvas$path$$$class__7_SubPath_46 = NULL;
    struct Nuitka_FrameObject *frame_dd0d0c04cacb50ef35ecf2f435982afe_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_flet_core$canvas$path$$$class__8_Arc_53 = NULL;
    struct Nuitka_FrameObject *frame_7552caa157812b09ada8ac76ed6f6ebb_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *locals_flet_core$canvas$path$$$class__9_ArcTo_63 = NULL;
    struct Nuitka_FrameObject *frame_d4aa0fafe4acbdf27c07092788ef7d84_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_flet_core$canvas$path$$$class__10_Oval_73 = NULL;
    struct Nuitka_FrameObject *frame_caf85a45699b2982582fc53e79f3e87e_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *locals_flet_core$canvas$path$$$class__11_Rect_81 = NULL;
    struct Nuitka_FrameObject *frame_4aec26ba781d7d73ce9a909a346b0daf_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *locals_flet_core$canvas$path$$$class__12_Close_90 = NULL;
    struct Nuitka_FrameObject *frame_58f917dac0dcb27d77746dfa86f5fc8f_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_2);
    }
    frame_963281a45ab324351aaaf469845e4cba = MAKE_MODULE_FRAME(codeobj_963281a45ab324351aaaf469845e4cba, module_flet_core$canvas$path);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_963281a45ab324351aaaf469845e4cba);
    assert(Py_REFCNT(frame_963281a45ab324351aaaf469845e4cba) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[11];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[15], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[17];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$canvas$path;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[18];
        frame_963281a45ab324351aaaf469845e4cba->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet_core$canvas$path,
                mod_consts[19],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[19]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$canvas$path,
                mod_consts[20],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[20]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$canvas$path,
                mod_consts[21],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[21]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_8);
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[22];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$canvas$path;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[23];
        tmp_level_value_2 = mod_consts[18];
        frame_963281a45ab324351aaaf469845e4cba->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$canvas$path,
                mod_consts[0],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[24];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$canvas$path;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[25];
        tmp_level_value_3 = mod_consts[18];
        frame_963281a45ab324351aaaf469845e4cba->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$canvas$path,
                mod_consts[26],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[26]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[27];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$canvas$path;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[28];
        tmp_level_value_4 = mod_consts[18];
        frame_963281a45ab324351aaaf469845e4cba->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$canvas$path,
                mod_consts[29],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_11);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        tmp_assign_source_12 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_12, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
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


            exception_lineno = 9;

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
        tmp_subscript_value_1 = mod_consts[18];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_15 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[30]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[31];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_963281a45ab324351aaaf469845e4cba->m_frame.f_lineno = 9;
        tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[32]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

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
        tmp_mod_expr_left_1 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[34];
        tmp_getattr_default_1 = mod_consts[35];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[34]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

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


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 9;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$canvas$path$$$class__1_Path_9 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_1__class_decl_dict == NULL);
            tmp_Path$class_creation_1__class_decl_dict = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_1__prepared == NULL);
            tmp_Path$class_creation_1__prepared = tmp_assign_source_20;
        }
        frame_d37430be4b5d82b0c1788c0782ed5d80_2 = MAKE_CLASS_FRAME(codeobj_d37430be4b5d82b0c1788c0782ed5d80, module_flet_core$canvas$path, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d37430be4b5d82b0c1788c0782ed5d80_2);
        assert(Py_REFCNT(frame_d37430be4b5d82b0c1788c0782ed5d80_2) == 2);

        // Framed code:
        // Tried code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[17]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 10;
                        type_description_2 = "c";
                        goto try_except_handler_5;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *tmp_set_locals_2;
                CHECK_OBJECT(tmp_Path$class_creation_1__prepared);
                tmp_set_locals_2 = tmp_Path$class_creation_1__prepared;
                locals_flet_core$canvas$path$$$class__2_PathElement_11 = tmp_set_locals_2;
                Py_INCREF(tmp_set_locals_2);
            }
            tmp_dictset_value = mod_consts[36];
            tmp_res = PyDict_SetItem(locals_flet_core$canvas$path$$$class__2_PathElement_11, mod_consts[37], tmp_dictset_value);
            assert(!(tmp_res != 0));
            tmp_dictset_value = mod_consts[40];
            tmp_res = PyDict_SetItem(locals_flet_core$canvas$path$$$class__2_PathElement_11, mod_consts[38], tmp_dictset_value);
            assert(!(tmp_res != 0));
            // Tried code:
            // Tried code:
            {
                PyObject *tmp_assign_source_21;
                PyObject *tmp_called_value_2;
                PyObject *tmp_args_value_2;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_kwargs_value_2;
                tmp_called_value_2 = (PyObject *)&PyType_Type;
                tmp_tuple_element_4 = mod_consts[41];
                tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = mod_consts[42];
                PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = locals_flet_core$canvas$path$$$class__2_PathElement_11;
                PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
                CHECK_OBJECT(tmp_Path$class_creation_1__class_decl_dict);
                tmp_kwargs_value_2 = tmp_Path$class_creation_1__class_decl_dict;
                frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 11;
                tmp_assign_source_21 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
                Py_DECREF(tmp_args_value_2);
                if (tmp_assign_source_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 11;
                    type_description_2 = "c";
                    goto try_except_handler_7;
                }
                assert(outline_1_var___class__ == NULL);
                outline_1_var___class__ = tmp_assign_source_21;
            }
            CHECK_OBJECT(outline_1_var___class__);
            tmp_args_element_value_1 = outline_1_var___class__;
            Py_INCREF(tmp_args_element_value_1);
            goto try_return_handler_7;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_7:;
            Py_DECREF(locals_flet_core$canvas$path$$$class__2_PathElement_11);
            locals_flet_core$canvas$path$$$class__2_PathElement_11 = NULL;
            goto try_return_handler_6;
            // Exception handler code:
            try_except_handler_7:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF(locals_flet_core$canvas$path$$$class__2_PathElement_11);
            locals_flet_core$canvas$path$$$class__2_PathElement_11 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_6;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_6:;
            CHECK_OBJECT(outline_1_var___class__);
            Py_DECREF(outline_1_var___class__);
            outline_1_var___class__ = NULL;
            goto outline_result_2;
            // Exception handler code:
            try_except_handler_6:;
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

            goto outline_exception_2;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_2:;
            exception_lineno = 11;
            goto try_except_handler_5;
            outline_result_2:;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 10;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[39], tmp_args_element_value_1);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_2 = "c";
                goto try_except_handler_5;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "c";
                goto try_except_handler_5;
            }
        }
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

        CHECK_OBJECT(tmp_Path$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_Path$class_creation_1__class_decl_dict);
        tmp_Path$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_1__prepared);
        Py_DECREF(tmp_Path$class_creation_1__prepared);
        tmp_Path$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_Path$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_Path$class_creation_1__class_decl_dict);
        tmp_Path$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_1__prepared);
        Py_DECREF(tmp_Path$class_creation_1__prepared);
        tmp_Path$class_creation_1__prepared = NULL;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_tuple_element_5;
            tmp_tuple_element_5 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41]);

            if (unlikely(tmp_tuple_element_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 15;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_assign_source_22 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_22, 0, tmp_tuple_element_5);
            assert(tmp_Path$class_creation_2__bases_orig == NULL);
            tmp_Path$class_creation_2__bases_orig = tmp_assign_source_22;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_dircall_arg1_2;
            CHECK_OBJECT(tmp_Path$class_creation_2__bases_orig);
            tmp_dircall_arg1_2 = tmp_Path$class_creation_2__bases_orig;
            Py_INCREF(tmp_dircall_arg1_2);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
                tmp_assign_source_23 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_8;
            }
            assert(tmp_Path$class_creation_2__bases == NULL);
            tmp_Path$class_creation_2__bases = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_2__class_decl_dict == NULL);
            tmp_Path$class_creation_2__class_decl_dict = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_metaclass_value_2;
            nuitka_bool tmp_condition_result_4;
            int tmp_truth_name_2;
            PyObject *tmp_type_arg_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_bases_value_2;
            CHECK_OBJECT(tmp_Path$class_creation_2__bases);
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_Path$class_creation_2__bases);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_8;
            }
            tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            CHECK_OBJECT(tmp_Path$class_creation_2__bases);
            tmp_expression_value_6 = tmp_Path$class_creation_2__bases;
            tmp_subscript_value_2 = mod_consts[18];
            tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
            if (tmp_type_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_8;
            }
            tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
            Py_DECREF(tmp_type_arg_3);
            if (tmp_metaclass_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_8;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_2);
            condexpr_end_2:;
            CHECK_OBJECT(tmp_Path$class_creation_2__bases);
            tmp_bases_value_2 = tmp_Path$class_creation_2__bases;
            tmp_assign_source_25 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
            Py_DECREF(tmp_metaclass_value_2);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_8;
            }
            assert(tmp_Path$class_creation_2__metaclass == NULL);
            tmp_Path$class_creation_2__metaclass = tmp_assign_source_25;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_expression_value_7;
            CHECK_OBJECT(tmp_Path$class_creation_2__metaclass);
            tmp_expression_value_7 = tmp_Path$class_creation_2__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[30]);
            tmp_condition_result_5 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_Path$class_creation_2__metaclass);
            tmp_expression_value_8 = tmp_Path$class_creation_2__metaclass;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[30]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_8;
            }
            tmp_tuple_element_6 = mod_consts[43];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_Path$class_creation_2__bases);
            tmp_tuple_element_6 = tmp_Path$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_Path$class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_Path$class_creation_2__class_decl_dict;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 15;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_8;
            }
            assert(tmp_Path$class_creation_2__prepared == NULL);
            tmp_Path$class_creation_2__prepared = tmp_assign_source_26;
        }
        {
            bool tmp_condition_result_6;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_expression_value_9;
            CHECK_OBJECT(tmp_Path$class_creation_2__prepared);
            tmp_expression_value_9 = tmp_Path$class_creation_2__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[32]);
            tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_8;
            }
            tmp_condition_result_6 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_6 != false) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
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
            tmp_mod_expr_left_2 = mod_consts[33];
            CHECK_OBJECT(tmp_Path$class_creation_2__metaclass);
            tmp_getattr_target_2 = tmp_Path$class_creation_2__metaclass;
            tmp_getattr_attr_2 = mod_consts[34];
            tmp_getattr_default_2 = mod_consts[35];
            tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_8;
            }
            tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_10;
                PyObject *tmp_type_arg_4;
                PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
                CHECK_OBJECT(tmp_Path$class_creation_2__prepared);
                tmp_type_arg_4 = tmp_Path$class_creation_2__prepared;
                tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
                assert(!(tmp_expression_value_10 == NULL));
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[34]);
                Py_DECREF(tmp_expression_value_10);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 15;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_mod_expr_right_2);
            goto try_except_handler_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
            Py_DECREF(tmp_mod_expr_right_2);
            if (tmp_raise_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_8;
            }
            exception_type = tmp_raise_type_2;
            Py_INCREF(tmp_raise_type_2);
            exception_value = tmp_raise_value_2;
            exception_lineno = 15;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "c";
            goto try_except_handler_8;
        }
        branch_no_4:;
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_2__prepared == NULL);
            tmp_Path$class_creation_2__prepared = tmp_assign_source_27;
        }
        branch_end_3:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_2;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[17]);

            if (tmp_called_instance_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 14;
                        type_description_2 = "c";
                        goto try_except_handler_8;
                    }
                    Py_INCREF(tmp_called_instance_2);
                } else {
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *tmp_set_locals_3;
                CHECK_OBJECT(tmp_Path$class_creation_2__prepared);
                tmp_set_locals_3 = tmp_Path$class_creation_2__prepared;
                locals_flet_core$canvas$path$$$class__3_MoveTo_15 = tmp_set_locals_3;
                Py_INCREF(tmp_set_locals_3);
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = mod_consts[36];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__3_MoveTo_15, mod_consts[37], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            tmp_dictset_value = mod_consts[44];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__3_MoveTo_15, mod_consts[38], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            tmp_dictset_value = MAKE_DICT_EMPTY();
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__3_MoveTo_15, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            frame_ba4cc44fb8216b8f83f4843dbb4f08c9_3 = MAKE_CLASS_FRAME(codeobj_ba4cc44fb8216b8f83f4843dbb4f08c9, module_flet_core$canvas$path, NULL, sizeof(void *));

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_ba4cc44fb8216b8f83f4843dbb4f08c9_3);
            assert(Py_REFCNT(frame_ba4cc44fb8216b8f83f4843dbb4f08c9_3) == 2);

            // Framed code:
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                tmp_ass_subvalue_1 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__3_MoveTo_15, mod_consts[46]);

                if (tmp_ass_subvalue_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_1 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_1);
                    } else {
                        goto frame_exception_exit_3;
                    }
                }

                tmp_ass_subscribed_1 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__3_MoveTo_15, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_1);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 16;
                    type_description_3 = "o";
                    goto frame_exception_exit_3;
                }

                if (tmp_ass_subscribed_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_1);

                    exception_lineno = 16;
                    type_description_3 = "o";
                    goto frame_exception_exit_3;
                }
                tmp_ass_subscript_1 = mod_consts[47];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
                Py_DECREF(tmp_ass_subscribed_1);
                Py_DECREF(tmp_ass_subvalue_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 16;
                    type_description_3 = "o";
                    goto frame_exception_exit_3;
                }
            }
            {
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                tmp_ass_subvalue_2 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__3_MoveTo_15, mod_consts[46]);

                if (tmp_ass_subvalue_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_2 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_2);
                    } else {
                        goto frame_exception_exit_3;
                    }
                }

                tmp_ass_subscribed_2 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__3_MoveTo_15, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_2);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 17;
                    type_description_3 = "o";
                    goto frame_exception_exit_3;
                }

                if (tmp_ass_subscribed_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_2);

                    exception_lineno = 17;
                    type_description_3 = "o";
                    goto frame_exception_exit_3;
                }
                tmp_ass_subscript_2 = mod_consts[48];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
                Py_DECREF(tmp_ass_subscribed_2);
                Py_DECREF(tmp_ass_subvalue_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 17;
                    type_description_3 = "o";
                    goto frame_exception_exit_3;
                }
            }
            {
                PyObject *tmp_called_value_4;
                PyObject *tmp_expression_value_11;
                tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__3_MoveTo_15, mod_consts[17]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 18;
                            type_description_3 = "o";
                            goto frame_exception_exit_3;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto frame_exception_exit_3;
                    }
                }

                tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[49]);
                Py_DECREF(tmp_expression_value_11);
                if (tmp_called_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_3 = "o";
                    goto frame_exception_exit_3;
                }
                frame_ba4cc44fb8216b8f83f4843dbb4f08c9_3->m_frame.f_lineno = 18;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[50], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_4);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_3 = "o";
                    goto frame_exception_exit_3;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__3_MoveTo_15, mod_consts[52], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_3 = "o";
                    goto frame_exception_exit_3;
                }
            }
            {
                PyObject *tmp_ass_subvalue_3;
                PyObject *tmp_ass_subscribed_3;
                PyObject *tmp_ass_subscript_3;
                tmp_ass_subvalue_3 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__3_MoveTo_15, mod_consts[53]);

                if (tmp_ass_subvalue_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_3 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_ass_subvalue_3);
                    } else {
                        goto frame_exception_exit_3;
                    }
                }

                tmp_ass_subscribed_3 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__3_MoveTo_15, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_3);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 18;
                    type_description_3 = "o";
                    goto frame_exception_exit_3;
                }

                if (tmp_ass_subscribed_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_3);

                    exception_lineno = 18;
                    type_description_3 = "o";
                    goto frame_exception_exit_3;
                }
                tmp_ass_subscript_3 = mod_consts[52];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
                Py_DECREF(tmp_ass_subscribed_3);
                Py_DECREF(tmp_ass_subvalue_3);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_3 = "o";
                    goto frame_exception_exit_3;
                }
            }


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;
            frame_exception_exit_3:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_ba4cc44fb8216b8f83f4843dbb4f08c9_3, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_ba4cc44fb8216b8f83f4843dbb4f08c9_3->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_ba4cc44fb8216b8f83f4843dbb4f08c9_3, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_ba4cc44fb8216b8f83f4843dbb4f08c9_3,
                type_description_3,
                outline_2_var___class__
            );



            assertFrameObject(frame_ba4cc44fb8216b8f83f4843dbb4f08c9_3);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_2;
            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_2:;
            type_description_2 = "c";
            goto try_except_handler_10;
            skip_nested_handling_1:;
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_cmp_expr_left_1;
                PyObject *tmp_cmp_expr_right_1;
                CHECK_OBJECT(tmp_Path$class_creation_2__bases);
                tmp_cmp_expr_left_1 = tmp_Path$class_creation_2__bases;
                CHECK_OBJECT(tmp_Path$class_creation_2__bases_orig);
                tmp_cmp_expr_right_1 = tmp_Path$class_creation_2__bases_orig;
                tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
                if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 15;
                    type_description_2 = "c";
                    goto try_except_handler_10;
                }
                if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_5;
                } else {
                    goto branch_no_5;
                }
            }
            branch_yes_5:;
            CHECK_OBJECT(tmp_Path$class_creation_2__bases_orig);
            tmp_dictset_value = tmp_Path$class_creation_2__bases_orig;
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__3_MoveTo_15, mod_consts[54], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_10;
            }
            branch_no_5:;
            {
                PyObject *tmp_assign_source_28;
                PyObject *tmp_called_value_5;
                PyObject *tmp_args_value_4;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_kwargs_value_4;
                CHECK_OBJECT(tmp_Path$class_creation_2__metaclass);
                tmp_called_value_5 = tmp_Path$class_creation_2__metaclass;
                tmp_tuple_element_8 = mod_consts[43];
                tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
                CHECK_OBJECT(tmp_Path$class_creation_2__bases);
                tmp_tuple_element_8 = tmp_Path$class_creation_2__bases;
                PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
                tmp_tuple_element_8 = locals_flet_core$canvas$path$$$class__3_MoveTo_15;
                PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
                CHECK_OBJECT(tmp_Path$class_creation_2__class_decl_dict);
                tmp_kwargs_value_4 = tmp_Path$class_creation_2__class_decl_dict;
                frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 15;
                tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
                Py_DECREF(tmp_args_value_4);
                if (tmp_assign_source_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 15;
                    type_description_2 = "c";
                    goto try_except_handler_10;
                }
                assert(outline_2_var___class__ == NULL);
                outline_2_var___class__ = tmp_assign_source_28;
            }
            CHECK_OBJECT(outline_2_var___class__);
            tmp_args_element_value_2 = outline_2_var___class__;
            Py_INCREF(tmp_args_element_value_2);
            goto try_return_handler_10;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_10:;
            Py_DECREF(locals_flet_core$canvas$path$$$class__3_MoveTo_15);
            locals_flet_core$canvas$path$$$class__3_MoveTo_15 = NULL;
            goto try_return_handler_9;
            // Exception handler code:
            try_except_handler_10:;
            exception_keeper_type_5 = exception_type;
            exception_keeper_value_5 = exception_value;
            exception_keeper_tb_5 = exception_tb;
            exception_keeper_lineno_5 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF(locals_flet_core$canvas$path$$$class__3_MoveTo_15);
            locals_flet_core$canvas$path$$$class__3_MoveTo_15 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_5;
            exception_value = exception_keeper_value_5;
            exception_tb = exception_keeper_tb_5;
            exception_lineno = exception_keeper_lineno_5;

            goto try_except_handler_9;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_9:;
            CHECK_OBJECT(outline_2_var___class__);
            Py_DECREF(outline_2_var___class__);
            outline_2_var___class__ = NULL;
            goto outline_result_3;
            // Exception handler code:
            try_except_handler_9:;
            exception_keeper_type_6 = exception_type;
            exception_keeper_value_6 = exception_value;
            exception_keeper_tb_6 = exception_tb;
            exception_keeper_lineno_6 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto outline_exception_3;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_3:;
            exception_lineno = 15;
            goto try_except_handler_8;
            outline_result_3:;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 14;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[39], tmp_args_element_value_2);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "c";
                goto try_except_handler_8;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto try_except_handler_8;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Path$class_creation_2__bases_orig);
        Py_DECREF(tmp_Path$class_creation_2__bases_orig);
        tmp_Path$class_creation_2__bases_orig = NULL;
        Py_XDECREF(tmp_Path$class_creation_2__bases);
        tmp_Path$class_creation_2__bases = NULL;
        Py_XDECREF(tmp_Path$class_creation_2__class_decl_dict);
        tmp_Path$class_creation_2__class_decl_dict = NULL;
        Py_XDECREF(tmp_Path$class_creation_2__metaclass);
        tmp_Path$class_creation_2__metaclass = NULL;
        Py_XDECREF(tmp_Path$class_creation_2__prepared);
        tmp_Path$class_creation_2__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_2;
        // End of try:
        try_end_3:;
        CHECK_OBJECT(tmp_Path$class_creation_2__bases_orig);
        Py_DECREF(tmp_Path$class_creation_2__bases_orig);
        tmp_Path$class_creation_2__bases_orig = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_2__bases);
        Py_DECREF(tmp_Path$class_creation_2__bases);
        tmp_Path$class_creation_2__bases = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_2__class_decl_dict);
        Py_DECREF(tmp_Path$class_creation_2__class_decl_dict);
        tmp_Path$class_creation_2__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_2__metaclass);
        Py_DECREF(tmp_Path$class_creation_2__metaclass);
        tmp_Path$class_creation_2__metaclass = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_2__prepared);
        Py_DECREF(tmp_Path$class_creation_2__prepared);
        tmp_Path$class_creation_2__prepared = NULL;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_tuple_element_9;
            tmp_tuple_element_9 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41]);

            if (unlikely(tmp_tuple_element_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 21;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_assign_source_29 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_29, 0, tmp_tuple_element_9);
            assert(tmp_Path$class_creation_3__bases_orig == NULL);
            tmp_Path$class_creation_3__bases_orig = tmp_assign_source_29;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_dircall_arg1_3;
            CHECK_OBJECT(tmp_Path$class_creation_3__bases_orig);
            tmp_dircall_arg1_3 = tmp_Path$class_creation_3__bases_orig;
            Py_INCREF(tmp_dircall_arg1_3);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
                tmp_assign_source_30 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_11;
            }
            assert(tmp_Path$class_creation_3__bases == NULL);
            tmp_Path$class_creation_3__bases = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_3__class_decl_dict == NULL);
            tmp_Path$class_creation_3__class_decl_dict = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_metaclass_value_3;
            nuitka_bool tmp_condition_result_8;
            int tmp_truth_name_3;
            PyObject *tmp_type_arg_5;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_bases_value_3;
            CHECK_OBJECT(tmp_Path$class_creation_3__bases);
            tmp_truth_name_3 = CHECK_IF_TRUE(tmp_Path$class_creation_3__bases);
            if (tmp_truth_name_3 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_11;
            }
            tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            CHECK_OBJECT(tmp_Path$class_creation_3__bases);
            tmp_expression_value_12 = tmp_Path$class_creation_3__bases;
            tmp_subscript_value_3 = mod_consts[18];
            tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_3, 0);
            if (tmp_type_arg_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_11;
            }
            tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
            Py_DECREF(tmp_type_arg_5);
            if (tmp_metaclass_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_11;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_3);
            condexpr_end_3:;
            CHECK_OBJECT(tmp_Path$class_creation_3__bases);
            tmp_bases_value_3 = tmp_Path$class_creation_3__bases;
            tmp_assign_source_32 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
            Py_DECREF(tmp_metaclass_value_3);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_11;
            }
            assert(tmp_Path$class_creation_3__metaclass == NULL);
            tmp_Path$class_creation_3__metaclass = tmp_assign_source_32;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_expression_value_13;
            CHECK_OBJECT(tmp_Path$class_creation_3__metaclass);
            tmp_expression_value_13 = tmp_Path$class_creation_3__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_13, mod_consts[30]);
            tmp_condition_result_9 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_Path$class_creation_3__metaclass);
            tmp_expression_value_14 = tmp_Path$class_creation_3__metaclass;
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[30]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_11;
            }
            tmp_tuple_element_10 = mod_consts[55];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_Path$class_creation_3__bases);
            tmp_tuple_element_10 = tmp_Path$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_Path$class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_Path$class_creation_3__class_decl_dict;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 21;
            tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_11;
            }
            assert(tmp_Path$class_creation_3__prepared == NULL);
            tmp_Path$class_creation_3__prepared = tmp_assign_source_33;
        }
        {
            bool tmp_condition_result_10;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_expression_value_15;
            CHECK_OBJECT(tmp_Path$class_creation_3__prepared);
            tmp_expression_value_15 = tmp_Path$class_creation_3__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_15, mod_consts[32]);
            tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_11;
            }
            tmp_condition_result_10 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_10 != false) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_raise_value_3;
            PyObject *tmp_mod_expr_left_3;
            PyObject *tmp_mod_expr_right_3;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_getattr_target_3;
            PyObject *tmp_getattr_attr_3;
            PyObject *tmp_getattr_default_3;
            tmp_raise_type_3 = PyExc_TypeError;
            tmp_mod_expr_left_3 = mod_consts[33];
            CHECK_OBJECT(tmp_Path$class_creation_3__metaclass);
            tmp_getattr_target_3 = tmp_Path$class_creation_3__metaclass;
            tmp_getattr_attr_3 = mod_consts[34];
            tmp_getattr_default_3 = mod_consts[35];
            tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_11;
            }
            tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_16;
                PyObject *tmp_type_arg_6;
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
                CHECK_OBJECT(tmp_Path$class_creation_3__prepared);
                tmp_type_arg_6 = tmp_Path$class_creation_3__prepared;
                tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_6);
                assert(!(tmp_expression_value_16 == NULL));
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[34]);
                Py_DECREF(tmp_expression_value_16);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 21;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_mod_expr_right_3);
            goto try_except_handler_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
            Py_DECREF(tmp_mod_expr_right_3);
            if (tmp_raise_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_11;
            }
            exception_type = tmp_raise_type_3;
            Py_INCREF(tmp_raise_type_3);
            exception_value = tmp_raise_value_3;
            exception_lineno = 21;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "c";
            goto try_except_handler_11;
        }
        branch_no_7:;
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_3__prepared == NULL);
            tmp_Path$class_creation_3__prepared = tmp_assign_source_34;
        }
        branch_end_6:;
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_3 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[17]);

            if (tmp_called_instance_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_instance_3 == NULL)) {
                        tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_instance_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 20;
                        type_description_2 = "c";
                        goto try_except_handler_11;
                    }
                    Py_INCREF(tmp_called_instance_3);
                } else {
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *tmp_set_locals_4;
                CHECK_OBJECT(tmp_Path$class_creation_3__prepared);
                tmp_set_locals_4 = tmp_Path$class_creation_3__prepared;
                locals_flet_core$canvas$path$$$class__4_LineTo_21 = tmp_set_locals_4;
                Py_INCREF(tmp_set_locals_4);
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = mod_consts[36];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__4_LineTo_21, mod_consts[37], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_13;
            }
            tmp_dictset_value = mod_consts[56];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__4_LineTo_21, mod_consts[38], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_13;
            }
            tmp_dictset_value = MAKE_DICT_EMPTY();
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__4_LineTo_21, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_13;
            }
            frame_59de3c51341450afccc1ee40ca51d869_4 = MAKE_CLASS_FRAME(codeobj_59de3c51341450afccc1ee40ca51d869, module_flet_core$canvas$path, NULL, sizeof(void *));

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_59de3c51341450afccc1ee40ca51d869_4);
            assert(Py_REFCNT(frame_59de3c51341450afccc1ee40ca51d869_4) == 2);

            // Framed code:
            {
                PyObject *tmp_ass_subvalue_4;
                PyObject *tmp_ass_subscribed_4;
                PyObject *tmp_ass_subscript_4;
                tmp_ass_subvalue_4 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__4_LineTo_21, mod_consts[46]);

                if (tmp_ass_subvalue_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_4 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_4);
                    } else {
                        goto frame_exception_exit_4;
                    }
                }

                tmp_ass_subscribed_4 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__4_LineTo_21, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_4);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 22;
                    type_description_3 = "o";
                    goto frame_exception_exit_4;
                }

                if (tmp_ass_subscribed_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_4);

                    exception_lineno = 22;
                    type_description_3 = "o";
                    goto frame_exception_exit_4;
                }
                tmp_ass_subscript_4 = mod_consts[47];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
                Py_DECREF(tmp_ass_subscribed_4);
                Py_DECREF(tmp_ass_subvalue_4);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;
                    type_description_3 = "o";
                    goto frame_exception_exit_4;
                }
            }
            {
                PyObject *tmp_ass_subvalue_5;
                PyObject *tmp_ass_subscribed_5;
                PyObject *tmp_ass_subscript_5;
                tmp_ass_subvalue_5 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__4_LineTo_21, mod_consts[46]);

                if (tmp_ass_subvalue_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_5 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_5);
                    } else {
                        goto frame_exception_exit_4;
                    }
                }

                tmp_ass_subscribed_5 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__4_LineTo_21, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_5);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 23;
                    type_description_3 = "o";
                    goto frame_exception_exit_4;
                }

                if (tmp_ass_subscribed_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_5);

                    exception_lineno = 23;
                    type_description_3 = "o";
                    goto frame_exception_exit_4;
                }
                tmp_ass_subscript_5 = mod_consts[48];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
                Py_DECREF(tmp_ass_subscribed_5);
                Py_DECREF(tmp_ass_subvalue_5);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 23;
                    type_description_3 = "o";
                    goto frame_exception_exit_4;
                }
            }
            {
                PyObject *tmp_called_value_7;
                PyObject *tmp_expression_value_17;
                tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__4_LineTo_21, mod_consts[17]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 24;
                            type_description_3 = "o";
                            goto frame_exception_exit_4;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto frame_exception_exit_4;
                    }
                }

                tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[49]);
                Py_DECREF(tmp_expression_value_17);
                if (tmp_called_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_3 = "o";
                    goto frame_exception_exit_4;
                }
                frame_59de3c51341450afccc1ee40ca51d869_4->m_frame.f_lineno = 24;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[57], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_7);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_3 = "o";
                    goto frame_exception_exit_4;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__4_LineTo_21, mod_consts[52], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_3 = "o";
                    goto frame_exception_exit_4;
                }
            }
            {
                PyObject *tmp_ass_subvalue_6;
                PyObject *tmp_ass_subscribed_6;
                PyObject *tmp_ass_subscript_6;
                tmp_ass_subvalue_6 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__4_LineTo_21, mod_consts[53]);

                if (tmp_ass_subvalue_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_6 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_ass_subvalue_6);
                    } else {
                        goto frame_exception_exit_4;
                    }
                }

                tmp_ass_subscribed_6 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__4_LineTo_21, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_6);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 24;
                    type_description_3 = "o";
                    goto frame_exception_exit_4;
                }

                if (tmp_ass_subscribed_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_6);

                    exception_lineno = 24;
                    type_description_3 = "o";
                    goto frame_exception_exit_4;
                }
                tmp_ass_subscript_6 = mod_consts[52];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
                Py_DECREF(tmp_ass_subscribed_6);
                Py_DECREF(tmp_ass_subvalue_6);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_3 = "o";
                    goto frame_exception_exit_4;
                }
            }


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_2;
            frame_exception_exit_4:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_59de3c51341450afccc1ee40ca51d869_4, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_59de3c51341450afccc1ee40ca51d869_4->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_59de3c51341450afccc1ee40ca51d869_4, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_59de3c51341450afccc1ee40ca51d869_4,
                type_description_3,
                outline_3_var___class__
            );



            assertFrameObject(frame_59de3c51341450afccc1ee40ca51d869_4);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_3;
            frame_no_exception_2:;
            goto skip_nested_handling_2;
            nested_frame_exit_3:;
            type_description_2 = "c";
            goto try_except_handler_13;
            skip_nested_handling_2:;
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_cmp_expr_left_2;
                PyObject *tmp_cmp_expr_right_2;
                CHECK_OBJECT(tmp_Path$class_creation_3__bases);
                tmp_cmp_expr_left_2 = tmp_Path$class_creation_3__bases;
                CHECK_OBJECT(tmp_Path$class_creation_3__bases_orig);
                tmp_cmp_expr_right_2 = tmp_Path$class_creation_3__bases_orig;
                tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
                if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 21;
                    type_description_2 = "c";
                    goto try_except_handler_13;
                }
                if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_8;
                } else {
                    goto branch_no_8;
                }
            }
            branch_yes_8:;
            CHECK_OBJECT(tmp_Path$class_creation_3__bases_orig);
            tmp_dictset_value = tmp_Path$class_creation_3__bases_orig;
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__4_LineTo_21, mod_consts[54], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_13;
            }
            branch_no_8:;
            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_called_value_8;
                PyObject *tmp_args_value_6;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_kwargs_value_6;
                CHECK_OBJECT(tmp_Path$class_creation_3__metaclass);
                tmp_called_value_8 = tmp_Path$class_creation_3__metaclass;
                tmp_tuple_element_12 = mod_consts[55];
                tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
                CHECK_OBJECT(tmp_Path$class_creation_3__bases);
                tmp_tuple_element_12 = tmp_Path$class_creation_3__bases;
                PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
                tmp_tuple_element_12 = locals_flet_core$canvas$path$$$class__4_LineTo_21;
                PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
                CHECK_OBJECT(tmp_Path$class_creation_3__class_decl_dict);
                tmp_kwargs_value_6 = tmp_Path$class_creation_3__class_decl_dict;
                frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 21;
                tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
                Py_DECREF(tmp_args_value_6);
                if (tmp_assign_source_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 21;
                    type_description_2 = "c";
                    goto try_except_handler_13;
                }
                assert(outline_3_var___class__ == NULL);
                outline_3_var___class__ = tmp_assign_source_35;
            }
            CHECK_OBJECT(outline_3_var___class__);
            tmp_args_element_value_3 = outline_3_var___class__;
            Py_INCREF(tmp_args_element_value_3);
            goto try_return_handler_13;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_13:;
            Py_DECREF(locals_flet_core$canvas$path$$$class__4_LineTo_21);
            locals_flet_core$canvas$path$$$class__4_LineTo_21 = NULL;
            goto try_return_handler_12;
            // Exception handler code:
            try_except_handler_13:;
            exception_keeper_type_8 = exception_type;
            exception_keeper_value_8 = exception_value;
            exception_keeper_tb_8 = exception_tb;
            exception_keeper_lineno_8 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF(locals_flet_core$canvas$path$$$class__4_LineTo_21);
            locals_flet_core$canvas$path$$$class__4_LineTo_21 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto try_except_handler_12;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_12:;
            CHECK_OBJECT(outline_3_var___class__);
            Py_DECREF(outline_3_var___class__);
            outline_3_var___class__ = NULL;
            goto outline_result_4;
            // Exception handler code:
            try_except_handler_12:;
            exception_keeper_type_9 = exception_type;
            exception_keeper_value_9 = exception_value;
            exception_keeper_tb_9 = exception_tb;
            exception_keeper_lineno_9 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_9;
            exception_value = exception_keeper_value_9;
            exception_tb = exception_keeper_tb_9;
            exception_lineno = exception_keeper_lineno_9;

            goto outline_exception_4;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_4:;
            exception_lineno = 21;
            goto try_except_handler_11;
            outline_result_4:;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 20;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[39], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "c";
                goto try_except_handler_11;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[55], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "c";
                goto try_except_handler_11;
            }
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Path$class_creation_3__bases_orig);
        Py_DECREF(tmp_Path$class_creation_3__bases_orig);
        tmp_Path$class_creation_3__bases_orig = NULL;
        Py_XDECREF(tmp_Path$class_creation_3__bases);
        tmp_Path$class_creation_3__bases = NULL;
        Py_XDECREF(tmp_Path$class_creation_3__class_decl_dict);
        tmp_Path$class_creation_3__class_decl_dict = NULL;
        Py_XDECREF(tmp_Path$class_creation_3__metaclass);
        tmp_Path$class_creation_3__metaclass = NULL;
        Py_XDECREF(tmp_Path$class_creation_3__prepared);
        tmp_Path$class_creation_3__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_Path$class_creation_3__bases_orig);
        Py_DECREF(tmp_Path$class_creation_3__bases_orig);
        tmp_Path$class_creation_3__bases_orig = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_3__bases);
        Py_DECREF(tmp_Path$class_creation_3__bases);
        tmp_Path$class_creation_3__bases = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_3__class_decl_dict);
        Py_DECREF(tmp_Path$class_creation_3__class_decl_dict);
        tmp_Path$class_creation_3__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_3__metaclass);
        Py_DECREF(tmp_Path$class_creation_3__metaclass);
        tmp_Path$class_creation_3__metaclass = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_3__prepared);
        Py_DECREF(tmp_Path$class_creation_3__prepared);
        tmp_Path$class_creation_3__prepared = NULL;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_tuple_element_13;
            tmp_tuple_element_13 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41]);

            if (unlikely(tmp_tuple_element_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 27;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_assign_source_36 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_36, 0, tmp_tuple_element_13);
            assert(tmp_Path$class_creation_4__bases_orig == NULL);
            tmp_Path$class_creation_4__bases_orig = tmp_assign_source_36;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_dircall_arg1_4;
            CHECK_OBJECT(tmp_Path$class_creation_4__bases_orig);
            tmp_dircall_arg1_4 = tmp_Path$class_creation_4__bases_orig;
            Py_INCREF(tmp_dircall_arg1_4);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
                tmp_assign_source_37 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_14;
            }
            assert(tmp_Path$class_creation_4__bases == NULL);
            tmp_Path$class_creation_4__bases = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;
            tmp_assign_source_38 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_4__class_decl_dict == NULL);
            tmp_Path$class_creation_4__class_decl_dict = tmp_assign_source_38;
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_metaclass_value_4;
            nuitka_bool tmp_condition_result_12;
            int tmp_truth_name_4;
            PyObject *tmp_type_arg_7;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_bases_value_4;
            CHECK_OBJECT(tmp_Path$class_creation_4__bases);
            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_Path$class_creation_4__bases);
            if (tmp_truth_name_4 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_14;
            }
            tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            CHECK_OBJECT(tmp_Path$class_creation_4__bases);
            tmp_expression_value_18 = tmp_Path$class_creation_4__bases;
            tmp_subscript_value_4 = mod_consts[18];
            tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_4, 0);
            if (tmp_type_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_14;
            }
            tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
            Py_DECREF(tmp_type_arg_7);
            if (tmp_metaclass_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_14;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_4);
            condexpr_end_4:;
            CHECK_OBJECT(tmp_Path$class_creation_4__bases);
            tmp_bases_value_4 = tmp_Path$class_creation_4__bases;
            tmp_assign_source_39 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
            Py_DECREF(tmp_metaclass_value_4);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_14;
            }
            assert(tmp_Path$class_creation_4__metaclass == NULL);
            tmp_Path$class_creation_4__metaclass = tmp_assign_source_39;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_expression_value_19;
            CHECK_OBJECT(tmp_Path$class_creation_4__metaclass);
            tmp_expression_value_19 = tmp_Path$class_creation_4__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[30]);
            tmp_condition_result_13 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_7;
            CHECK_OBJECT(tmp_Path$class_creation_4__metaclass);
            tmp_expression_value_20 = tmp_Path$class_creation_4__metaclass;
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[30]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_14;
            }
            tmp_tuple_element_14 = mod_consts[58];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_Path$class_creation_4__bases);
            tmp_tuple_element_14 = tmp_Path$class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_Path$class_creation_4__class_decl_dict);
            tmp_kwargs_value_7 = tmp_Path$class_creation_4__class_decl_dict;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 27;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_14;
            }
            assert(tmp_Path$class_creation_4__prepared == NULL);
            tmp_Path$class_creation_4__prepared = tmp_assign_source_40;
        }
        {
            bool tmp_condition_result_14;
            PyObject *tmp_operand_value_4;
            PyObject *tmp_expression_value_21;
            CHECK_OBJECT(tmp_Path$class_creation_4__prepared);
            tmp_expression_value_21 = tmp_Path$class_creation_4__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_21, mod_consts[32]);
            tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_14;
            }
            tmp_condition_result_14 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_14 != false) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        {
            PyObject *tmp_raise_type_4;
            PyObject *tmp_raise_value_4;
            PyObject *tmp_mod_expr_left_4;
            PyObject *tmp_mod_expr_right_4;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_getattr_target_4;
            PyObject *tmp_getattr_attr_4;
            PyObject *tmp_getattr_default_4;
            tmp_raise_type_4 = PyExc_TypeError;
            tmp_mod_expr_left_4 = mod_consts[33];
            CHECK_OBJECT(tmp_Path$class_creation_4__metaclass);
            tmp_getattr_target_4 = tmp_Path$class_creation_4__metaclass;
            tmp_getattr_attr_4 = mod_consts[34];
            tmp_getattr_default_4 = mod_consts[35];
            tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_14;
            }
            tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_22;
                PyObject *tmp_type_arg_8;
                PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
                CHECK_OBJECT(tmp_Path$class_creation_4__prepared);
                tmp_type_arg_8 = tmp_Path$class_creation_4__prepared;
                tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_8);
                assert(!(tmp_expression_value_22 == NULL));
                tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[34]);
                Py_DECREF(tmp_expression_value_22);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_mod_expr_right_4);
            goto try_except_handler_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
            Py_DECREF(tmp_mod_expr_right_4);
            if (tmp_raise_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_14;
            }
            exception_type = tmp_raise_type_4;
            Py_INCREF(tmp_raise_type_4);
            exception_value = tmp_raise_value_4;
            exception_lineno = 27;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "c";
            goto try_except_handler_14;
        }
        branch_no_10:;
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_4__prepared == NULL);
            tmp_Path$class_creation_4__prepared = tmp_assign_source_41;
        }
        branch_end_9:;
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_4;
            tmp_called_instance_4 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[17]);

            if (tmp_called_instance_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_instance_4 == NULL)) {
                        tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_instance_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 26;
                        type_description_2 = "c";
                        goto try_except_handler_14;
                    }
                    Py_INCREF(tmp_called_instance_4);
                } else {
                    goto try_except_handler_14;
                }
            }

            {
                PyObject *tmp_set_locals_5;
                CHECK_OBJECT(tmp_Path$class_creation_4__prepared);
                tmp_set_locals_5 = tmp_Path$class_creation_4__prepared;
                locals_flet_core$canvas$path$$$class__5_QuadraticTo_27 = tmp_set_locals_5;
                Py_INCREF(tmp_set_locals_5);
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = mod_consts[36];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[37], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_16;
            }
            tmp_dictset_value = mod_consts[59];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[38], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_16;
            }
            tmp_dictset_value = MAKE_DICT_EMPTY();
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_16;
            }
            frame_3e6a78c2c73e3ebd6209b387b7f5ac9e_5 = MAKE_CLASS_FRAME(codeobj_3e6a78c2c73e3ebd6209b387b7f5ac9e, module_flet_core$canvas$path, NULL, sizeof(void *));

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_3e6a78c2c73e3ebd6209b387b7f5ac9e_5);
            assert(Py_REFCNT(frame_3e6a78c2c73e3ebd6209b387b7f5ac9e_5) == 2);

            // Framed code:
            {
                PyObject *tmp_ass_subvalue_7;
                PyObject *tmp_ass_subscribed_7;
                PyObject *tmp_ass_subscript_7;
                tmp_ass_subvalue_7 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[46]);

                if (tmp_ass_subvalue_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_7 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_7);
                    } else {
                        goto frame_exception_exit_5;
                    }
                }

                tmp_ass_subscribed_7 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_7);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 28;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }

                if (tmp_ass_subscribed_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_7);

                    exception_lineno = 28;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
                tmp_ass_subscript_7 = mod_consts[60];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
                Py_DECREF(tmp_ass_subscribed_7);
                Py_DECREF(tmp_ass_subvalue_7);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
            }
            {
                PyObject *tmp_ass_subvalue_8;
                PyObject *tmp_ass_subscribed_8;
                PyObject *tmp_ass_subscript_8;
                tmp_ass_subvalue_8 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[46]);

                if (tmp_ass_subvalue_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_8 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_8);
                    } else {
                        goto frame_exception_exit_5;
                    }
                }

                tmp_ass_subscribed_8 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_8);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 29;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }

                if (tmp_ass_subscribed_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_8);

                    exception_lineno = 29;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
                tmp_ass_subscript_8 = mod_consts[61];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
                Py_DECREF(tmp_ass_subscribed_8);
                Py_DECREF(tmp_ass_subvalue_8);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 29;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
            }
            {
                PyObject *tmp_ass_subvalue_9;
                PyObject *tmp_ass_subscribed_9;
                PyObject *tmp_ass_subscript_9;
                tmp_ass_subvalue_9 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[46]);

                if (tmp_ass_subvalue_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_9 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_9);
                    } else {
                        goto frame_exception_exit_5;
                    }
                }

                tmp_ass_subscribed_9 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_9);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 30;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }

                if (tmp_ass_subscribed_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_9);

                    exception_lineno = 30;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
                tmp_ass_subscript_9 = mod_consts[47];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
                Py_DECREF(tmp_ass_subscribed_9);
                Py_DECREF(tmp_ass_subvalue_9);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
            }
            {
                PyObject *tmp_ass_subvalue_10;
                PyObject *tmp_ass_subscribed_10;
                PyObject *tmp_ass_subscript_10;
                tmp_ass_subvalue_10 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[46]);

                if (tmp_ass_subvalue_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_10 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_10);
                    } else {
                        goto frame_exception_exit_5;
                    }
                }

                tmp_ass_subscribed_10 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_10);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 31;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }

                if (tmp_ass_subscribed_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_10);

                    exception_lineno = 31;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
                tmp_ass_subscript_10 = mod_consts[48];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
                Py_DECREF(tmp_ass_subscribed_10);
                Py_DECREF(tmp_ass_subvalue_10);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 31;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
            }
            {
                PyObject *tmp_called_value_10;
                PyObject *tmp_expression_value_23;
                tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[17]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 32;
                            type_description_3 = "o";
                            goto frame_exception_exit_5;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto frame_exception_exit_5;
                    }
                }

                tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[49]);
                Py_DECREF(tmp_expression_value_23);
                if (tmp_called_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
                frame_3e6a78c2c73e3ebd6209b387b7f5ac9e_5->m_frame.f_lineno = 32;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[62], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_10);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[63], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
            }
            {
                PyObject *tmp_ass_subvalue_11;
                PyObject *tmp_ass_subscribed_11;
                PyObject *tmp_ass_subscript_11;
                tmp_ass_subvalue_11 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[46]);

                if (tmp_ass_subvalue_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_11 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_11);
                    } else {
                        goto frame_exception_exit_5;
                    }
                }

                tmp_ass_subscribed_11 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_11);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 32;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }

                if (tmp_ass_subscribed_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_11);

                    exception_lineno = 32;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
                tmp_ass_subscript_11 = mod_consts[63];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
                Py_DECREF(tmp_ass_subscribed_11);
                Py_DECREF(tmp_ass_subvalue_11);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
            }
            {
                PyObject *tmp_called_value_11;
                PyObject *tmp_expression_value_24;
                tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[17]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 33;
                            type_description_3 = "o";
                            goto frame_exception_exit_5;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto frame_exception_exit_5;
                    }
                }

                tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[49]);
                Py_DECREF(tmp_expression_value_24);
                if (tmp_called_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
                frame_3e6a78c2c73e3ebd6209b387b7f5ac9e_5->m_frame.f_lineno = 33;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[64], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_11);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[52], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
            }
            {
                PyObject *tmp_ass_subvalue_12;
                PyObject *tmp_ass_subscribed_12;
                PyObject *tmp_ass_subscript_12;
                tmp_ass_subvalue_12 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[53]);

                if (tmp_ass_subvalue_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_12 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_ass_subvalue_12);
                    } else {
                        goto frame_exception_exit_5;
                    }
                }

                tmp_ass_subscribed_12 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_12);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 33;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }

                if (tmp_ass_subscribed_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_12);

                    exception_lineno = 33;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
                tmp_ass_subscript_12 = mod_consts[52];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
                Py_DECREF(tmp_ass_subscribed_12);
                Py_DECREF(tmp_ass_subvalue_12);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_3 = "o";
                    goto frame_exception_exit_5;
                }
            }


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_3;
            frame_exception_exit_5:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_3e6a78c2c73e3ebd6209b387b7f5ac9e_5, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_3e6a78c2c73e3ebd6209b387b7f5ac9e_5->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_3e6a78c2c73e3ebd6209b387b7f5ac9e_5, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_3e6a78c2c73e3ebd6209b387b7f5ac9e_5,
                type_description_3,
                outline_4_var___class__
            );



            assertFrameObject(frame_3e6a78c2c73e3ebd6209b387b7f5ac9e_5);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_4;
            frame_no_exception_3:;
            goto skip_nested_handling_3;
            nested_frame_exit_4:;
            type_description_2 = "c";
            goto try_except_handler_16;
            skip_nested_handling_3:;
            {
                nuitka_bool tmp_condition_result_15;
                PyObject *tmp_cmp_expr_left_3;
                PyObject *tmp_cmp_expr_right_3;
                CHECK_OBJECT(tmp_Path$class_creation_4__bases);
                tmp_cmp_expr_left_3 = tmp_Path$class_creation_4__bases;
                CHECK_OBJECT(tmp_Path$class_creation_4__bases_orig);
                tmp_cmp_expr_right_3 = tmp_Path$class_creation_4__bases_orig;
                tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
                if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "c";
                    goto try_except_handler_16;
                }
                if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_11;
                } else {
                    goto branch_no_11;
                }
            }
            branch_yes_11:;
            CHECK_OBJECT(tmp_Path$class_creation_4__bases_orig);
            tmp_dictset_value = tmp_Path$class_creation_4__bases_orig;
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27, mod_consts[54], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_16;
            }
            branch_no_11:;
            {
                PyObject *tmp_assign_source_42;
                PyObject *tmp_called_value_12;
                PyObject *tmp_args_value_8;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_kwargs_value_8;
                CHECK_OBJECT(tmp_Path$class_creation_4__metaclass);
                tmp_called_value_12 = tmp_Path$class_creation_4__metaclass;
                tmp_tuple_element_16 = mod_consts[58];
                tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
                CHECK_OBJECT(tmp_Path$class_creation_4__bases);
                tmp_tuple_element_16 = tmp_Path$class_creation_4__bases;
                PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
                tmp_tuple_element_16 = locals_flet_core$canvas$path$$$class__5_QuadraticTo_27;
                PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
                CHECK_OBJECT(tmp_Path$class_creation_4__class_decl_dict);
                tmp_kwargs_value_8 = tmp_Path$class_creation_4__class_decl_dict;
                frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 27;
                tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_8, tmp_kwargs_value_8);
                Py_DECREF(tmp_args_value_8);
                if (tmp_assign_source_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "c";
                    goto try_except_handler_16;
                }
                assert(outline_4_var___class__ == NULL);
                outline_4_var___class__ = tmp_assign_source_42;
            }
            CHECK_OBJECT(outline_4_var___class__);
            tmp_args_element_value_4 = outline_4_var___class__;
            Py_INCREF(tmp_args_element_value_4);
            goto try_return_handler_16;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_16:;
            Py_DECREF(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27);
            locals_flet_core$canvas$path$$$class__5_QuadraticTo_27 = NULL;
            goto try_return_handler_15;
            // Exception handler code:
            try_except_handler_16:;
            exception_keeper_type_11 = exception_type;
            exception_keeper_value_11 = exception_value;
            exception_keeper_tb_11 = exception_tb;
            exception_keeper_lineno_11 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF(locals_flet_core$canvas$path$$$class__5_QuadraticTo_27);
            locals_flet_core$canvas$path$$$class__5_QuadraticTo_27 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_11;
            exception_value = exception_keeper_value_11;
            exception_tb = exception_keeper_tb_11;
            exception_lineno = exception_keeper_lineno_11;

            goto try_except_handler_15;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_15:;
            CHECK_OBJECT(outline_4_var___class__);
            Py_DECREF(outline_4_var___class__);
            outline_4_var___class__ = NULL;
            goto outline_result_5;
            // Exception handler code:
            try_except_handler_15:;
            exception_keeper_type_12 = exception_type;
            exception_keeper_value_12 = exception_value;
            exception_keeper_tb_12 = exception_tb;
            exception_keeper_lineno_12 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_12;
            exception_value = exception_keeper_value_12;
            exception_tb = exception_keeper_tb_12;
            exception_lineno = exception_keeper_lineno_12;

            goto outline_exception_5;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_5:;
            exception_lineno = 27;
            goto try_except_handler_14;
            outline_result_5:;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 26;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[39], tmp_args_element_value_4);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "c";
                goto try_except_handler_14;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[58], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "c";
                goto try_except_handler_14;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Path$class_creation_4__bases_orig);
        Py_DECREF(tmp_Path$class_creation_4__bases_orig);
        tmp_Path$class_creation_4__bases_orig = NULL;
        Py_XDECREF(tmp_Path$class_creation_4__bases);
        tmp_Path$class_creation_4__bases = NULL;
        Py_XDECREF(tmp_Path$class_creation_4__class_decl_dict);
        tmp_Path$class_creation_4__class_decl_dict = NULL;
        Py_XDECREF(tmp_Path$class_creation_4__metaclass);
        tmp_Path$class_creation_4__metaclass = NULL;
        Py_XDECREF(tmp_Path$class_creation_4__prepared);
        tmp_Path$class_creation_4__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto frame_exception_exit_2;
        // End of try:
        try_end_5:;
        CHECK_OBJECT(tmp_Path$class_creation_4__bases_orig);
        Py_DECREF(tmp_Path$class_creation_4__bases_orig);
        tmp_Path$class_creation_4__bases_orig = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_4__bases);
        Py_DECREF(tmp_Path$class_creation_4__bases);
        tmp_Path$class_creation_4__bases = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_4__class_decl_dict);
        Py_DECREF(tmp_Path$class_creation_4__class_decl_dict);
        tmp_Path$class_creation_4__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_4__metaclass);
        Py_DECREF(tmp_Path$class_creation_4__metaclass);
        tmp_Path$class_creation_4__metaclass = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_4__prepared);
        Py_DECREF(tmp_Path$class_creation_4__prepared);
        tmp_Path$class_creation_4__prepared = NULL;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_tuple_element_17;
            tmp_tuple_element_17 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41]);

            if (unlikely(tmp_tuple_element_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 36;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_assign_source_43 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_43, 0, tmp_tuple_element_17);
            assert(tmp_Path$class_creation_5__bases_orig == NULL);
            tmp_Path$class_creation_5__bases_orig = tmp_assign_source_43;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_dircall_arg1_5;
            CHECK_OBJECT(tmp_Path$class_creation_5__bases_orig);
            tmp_dircall_arg1_5 = tmp_Path$class_creation_5__bases_orig;
            Py_INCREF(tmp_dircall_arg1_5);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
                tmp_assign_source_44 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_17;
            }
            assert(tmp_Path$class_creation_5__bases == NULL);
            tmp_Path$class_creation_5__bases = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;
            tmp_assign_source_45 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_5__class_decl_dict == NULL);
            tmp_Path$class_creation_5__class_decl_dict = tmp_assign_source_45;
        }
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_metaclass_value_5;
            nuitka_bool tmp_condition_result_16;
            int tmp_truth_name_5;
            PyObject *tmp_type_arg_9;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_bases_value_5;
            CHECK_OBJECT(tmp_Path$class_creation_5__bases);
            tmp_truth_name_5 = CHECK_IF_TRUE(tmp_Path$class_creation_5__bases);
            if (tmp_truth_name_5 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_17;
            }
            tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            CHECK_OBJECT(tmp_Path$class_creation_5__bases);
            tmp_expression_value_25 = tmp_Path$class_creation_5__bases;
            tmp_subscript_value_5 = mod_consts[18];
            tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_25, tmp_subscript_value_5, 0);
            if (tmp_type_arg_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_17;
            }
            tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
            Py_DECREF(tmp_type_arg_9);
            if (tmp_metaclass_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_17;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_5);
            condexpr_end_5:;
            CHECK_OBJECT(tmp_Path$class_creation_5__bases);
            tmp_bases_value_5 = tmp_Path$class_creation_5__bases;
            tmp_assign_source_46 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
            Py_DECREF(tmp_metaclass_value_5);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_17;
            }
            assert(tmp_Path$class_creation_5__metaclass == NULL);
            tmp_Path$class_creation_5__metaclass = tmp_assign_source_46;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_expression_value_26;
            CHECK_OBJECT(tmp_Path$class_creation_5__metaclass);
            tmp_expression_value_26 = tmp_Path$class_creation_5__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_26, mod_consts[30]);
            tmp_condition_result_17 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_Path$class_creation_5__metaclass);
            tmp_expression_value_27 = tmp_Path$class_creation_5__metaclass;
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[30]);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_17;
            }
            tmp_tuple_element_18 = mod_consts[65];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_Path$class_creation_5__bases);
            tmp_tuple_element_18 = tmp_Path$class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_Path$class_creation_5__class_decl_dict);
            tmp_kwargs_value_9 = tmp_Path$class_creation_5__class_decl_dict;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 36;
            tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_17;
            }
            assert(tmp_Path$class_creation_5__prepared == NULL);
            tmp_Path$class_creation_5__prepared = tmp_assign_source_47;
        }
        {
            bool tmp_condition_result_18;
            PyObject *tmp_operand_value_5;
            PyObject *tmp_expression_value_28;
            CHECK_OBJECT(tmp_Path$class_creation_5__prepared);
            tmp_expression_value_28 = tmp_Path$class_creation_5__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_28, mod_consts[32]);
            tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_17;
            }
            tmp_condition_result_18 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_18 != false) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        {
            PyObject *tmp_raise_type_5;
            PyObject *tmp_raise_value_5;
            PyObject *tmp_mod_expr_left_5;
            PyObject *tmp_mod_expr_right_5;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_getattr_target_5;
            PyObject *tmp_getattr_attr_5;
            PyObject *tmp_getattr_default_5;
            tmp_raise_type_5 = PyExc_TypeError;
            tmp_mod_expr_left_5 = mod_consts[33];
            CHECK_OBJECT(tmp_Path$class_creation_5__metaclass);
            tmp_getattr_target_5 = tmp_Path$class_creation_5__metaclass;
            tmp_getattr_attr_5 = mod_consts[34];
            tmp_getattr_default_5 = mod_consts[35];
            tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_17;
            }
            tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_29;
                PyObject *tmp_type_arg_10;
                PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
                CHECK_OBJECT(tmp_Path$class_creation_5__prepared);
                tmp_type_arg_10 = tmp_Path$class_creation_5__prepared;
                tmp_expression_value_29 = BUILTIN_TYPE1(tmp_type_arg_10);
                assert(!(tmp_expression_value_29 == NULL));
                tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[34]);
                Py_DECREF(tmp_expression_value_29);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_mod_expr_right_5);
            goto try_except_handler_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
            Py_DECREF(tmp_mod_expr_right_5);
            if (tmp_raise_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_17;
            }
            exception_type = tmp_raise_type_5;
            Py_INCREF(tmp_raise_type_5);
            exception_value = tmp_raise_value_5;
            exception_lineno = 36;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "c";
            goto try_except_handler_17;
        }
        branch_no_13:;
        goto branch_end_12;
        branch_no_12:;
        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_5__prepared == NULL);
            tmp_Path$class_creation_5__prepared = tmp_assign_source_48;
        }
        branch_end_12:;
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_5;
            tmp_called_instance_5 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[17]);

            if (tmp_called_instance_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_instance_5 == NULL)) {
                        tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_instance_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;
                        type_description_2 = "c";
                        goto try_except_handler_17;
                    }
                    Py_INCREF(tmp_called_instance_5);
                } else {
                    goto try_except_handler_17;
                }
            }

            {
                PyObject *tmp_set_locals_6;
                CHECK_OBJECT(tmp_Path$class_creation_5__prepared);
                tmp_set_locals_6 = tmp_Path$class_creation_5__prepared;
                locals_flet_core$canvas$path$$$class__6_CubicTo_36 = tmp_set_locals_6;
                Py_INCREF(tmp_set_locals_6);
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = mod_consts[36];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[37], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_19;
            }
            tmp_dictset_value = mod_consts[66];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[38], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_19;
            }
            tmp_dictset_value = MAKE_DICT_EMPTY();
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_19;
            }
            frame_adfdc6314ca71ecd413fa30a2799f294_6 = MAKE_CLASS_FRAME(codeobj_adfdc6314ca71ecd413fa30a2799f294, module_flet_core$canvas$path, NULL, sizeof(void *));

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_adfdc6314ca71ecd413fa30a2799f294_6);
            assert(Py_REFCNT(frame_adfdc6314ca71ecd413fa30a2799f294_6) == 2);

            // Framed code:
            {
                PyObject *tmp_ass_subvalue_13;
                PyObject *tmp_ass_subscribed_13;
                PyObject *tmp_ass_subscript_13;
                tmp_ass_subvalue_13 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[46]);

                if (tmp_ass_subvalue_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_13 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_13);
                    } else {
                        goto frame_exception_exit_6;
                    }
                }

                tmp_ass_subscribed_13 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_13);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 37;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }

                if (tmp_ass_subscribed_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_13);

                    exception_lineno = 37;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
                tmp_ass_subscript_13 = mod_consts[60];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
                Py_DECREF(tmp_ass_subscribed_13);
                Py_DECREF(tmp_ass_subvalue_13);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
            }
            {
                PyObject *tmp_ass_subvalue_14;
                PyObject *tmp_ass_subscribed_14;
                PyObject *tmp_ass_subscript_14;
                tmp_ass_subvalue_14 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[46]);

                if (tmp_ass_subvalue_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_14 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_14);
                    } else {
                        goto frame_exception_exit_6;
                    }
                }

                tmp_ass_subscribed_14 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_14);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 38;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }

                if (tmp_ass_subscribed_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_14);

                    exception_lineno = 38;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
                tmp_ass_subscript_14 = mod_consts[61];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
                Py_DECREF(tmp_ass_subscribed_14);
                Py_DECREF(tmp_ass_subvalue_14);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
            }
            {
                PyObject *tmp_ass_subvalue_15;
                PyObject *tmp_ass_subscribed_15;
                PyObject *tmp_ass_subscript_15;
                tmp_ass_subvalue_15 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[46]);

                if (tmp_ass_subvalue_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_15 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_15);
                    } else {
                        goto frame_exception_exit_6;
                    }
                }

                tmp_ass_subscribed_15 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_15);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 39;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }

                if (tmp_ass_subscribed_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_15);

                    exception_lineno = 39;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
                tmp_ass_subscript_15 = mod_consts[67];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
                Py_DECREF(tmp_ass_subscribed_15);
                Py_DECREF(tmp_ass_subvalue_15);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
            }
            {
                PyObject *tmp_ass_subvalue_16;
                PyObject *tmp_ass_subscribed_16;
                PyObject *tmp_ass_subscript_16;
                tmp_ass_subvalue_16 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[46]);

                if (tmp_ass_subvalue_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_16 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_16);
                    } else {
                        goto frame_exception_exit_6;
                    }
                }

                tmp_ass_subscribed_16 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_16);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 40;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }

                if (tmp_ass_subscribed_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_16);

                    exception_lineno = 40;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
                tmp_ass_subscript_16 = mod_consts[68];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
                Py_DECREF(tmp_ass_subscribed_16);
                Py_DECREF(tmp_ass_subvalue_16);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
            }
            {
                PyObject *tmp_ass_subvalue_17;
                PyObject *tmp_ass_subscribed_17;
                PyObject *tmp_ass_subscript_17;
                tmp_ass_subvalue_17 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[46]);

                if (tmp_ass_subvalue_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_17 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_17);
                    } else {
                        goto frame_exception_exit_6;
                    }
                }

                tmp_ass_subscribed_17 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_17);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 41;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }

                if (tmp_ass_subscribed_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_17);

                    exception_lineno = 41;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
                tmp_ass_subscript_17 = mod_consts[47];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
                Py_DECREF(tmp_ass_subscribed_17);
                Py_DECREF(tmp_ass_subvalue_17);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 41;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
            }
            {
                PyObject *tmp_ass_subvalue_18;
                PyObject *tmp_ass_subscribed_18;
                PyObject *tmp_ass_subscript_18;
                tmp_ass_subvalue_18 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[46]);

                if (tmp_ass_subvalue_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_18 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_18);
                    } else {
                        goto frame_exception_exit_6;
                    }
                }

                tmp_ass_subscribed_18 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_18);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 42;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }

                if (tmp_ass_subscribed_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_18);

                    exception_lineno = 42;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
                tmp_ass_subscript_18 = mod_consts[48];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
                Py_DECREF(tmp_ass_subscribed_18);
                Py_DECREF(tmp_ass_subvalue_18);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
            }
            {
                PyObject *tmp_called_value_14;
                PyObject *tmp_expression_value_30;
                tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[17]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 43;
                            type_description_3 = "o";
                            goto frame_exception_exit_6;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto frame_exception_exit_6;
                    }
                }

                tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[49]);
                Py_DECREF(tmp_expression_value_30);
                if (tmp_called_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
                frame_adfdc6314ca71ecd413fa30a2799f294_6->m_frame.f_lineno = 43;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[69], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_14);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[52], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
            }
            {
                PyObject *tmp_ass_subvalue_19;
                PyObject *tmp_ass_subscribed_19;
                PyObject *tmp_ass_subscript_19;
                tmp_ass_subvalue_19 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[53]);

                if (tmp_ass_subvalue_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_19 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_ass_subvalue_19);
                    } else {
                        goto frame_exception_exit_6;
                    }
                }

                tmp_ass_subscribed_19 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_19);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 43;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }

                if (tmp_ass_subscribed_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_19);

                    exception_lineno = 43;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
                tmp_ass_subscript_19 = mod_consts[52];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
                Py_DECREF(tmp_ass_subscribed_19);
                Py_DECREF(tmp_ass_subvalue_19);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_3 = "o";
                    goto frame_exception_exit_6;
                }
            }


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_4;
            frame_exception_exit_6:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_adfdc6314ca71ecd413fa30a2799f294_6, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_adfdc6314ca71ecd413fa30a2799f294_6->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_adfdc6314ca71ecd413fa30a2799f294_6, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_adfdc6314ca71ecd413fa30a2799f294_6,
                type_description_3,
                outline_5_var___class__
            );



            assertFrameObject(frame_adfdc6314ca71ecd413fa30a2799f294_6);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_5;
            frame_no_exception_4:;
            goto skip_nested_handling_4;
            nested_frame_exit_5:;
            type_description_2 = "c";
            goto try_except_handler_19;
            skip_nested_handling_4:;
            {
                nuitka_bool tmp_condition_result_19;
                PyObject *tmp_cmp_expr_left_4;
                PyObject *tmp_cmp_expr_right_4;
                CHECK_OBJECT(tmp_Path$class_creation_5__bases);
                tmp_cmp_expr_left_4 = tmp_Path$class_creation_5__bases;
                CHECK_OBJECT(tmp_Path$class_creation_5__bases_orig);
                tmp_cmp_expr_right_4 = tmp_Path$class_creation_5__bases_orig;
                tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
                if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "c";
                    goto try_except_handler_19;
                }
                if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_14;
                } else {
                    goto branch_no_14;
                }
            }
            branch_yes_14:;
            CHECK_OBJECT(tmp_Path$class_creation_5__bases_orig);
            tmp_dictset_value = tmp_Path$class_creation_5__bases_orig;
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__6_CubicTo_36, mod_consts[54], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_19;
            }
            branch_no_14:;
            {
                PyObject *tmp_assign_source_49;
                PyObject *tmp_called_value_15;
                PyObject *tmp_args_value_10;
                PyObject *tmp_tuple_element_20;
                PyObject *tmp_kwargs_value_10;
                CHECK_OBJECT(tmp_Path$class_creation_5__metaclass);
                tmp_called_value_15 = tmp_Path$class_creation_5__metaclass;
                tmp_tuple_element_20 = mod_consts[65];
                tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
                CHECK_OBJECT(tmp_Path$class_creation_5__bases);
                tmp_tuple_element_20 = tmp_Path$class_creation_5__bases;
                PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
                tmp_tuple_element_20 = locals_flet_core$canvas$path$$$class__6_CubicTo_36;
                PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
                CHECK_OBJECT(tmp_Path$class_creation_5__class_decl_dict);
                tmp_kwargs_value_10 = tmp_Path$class_creation_5__class_decl_dict;
                frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 36;
                tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_10, tmp_kwargs_value_10);
                Py_DECREF(tmp_args_value_10);
                if (tmp_assign_source_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "c";
                    goto try_except_handler_19;
                }
                assert(outline_5_var___class__ == NULL);
                outline_5_var___class__ = tmp_assign_source_49;
            }
            CHECK_OBJECT(outline_5_var___class__);
            tmp_args_element_value_5 = outline_5_var___class__;
            Py_INCREF(tmp_args_element_value_5);
            goto try_return_handler_19;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_19:;
            Py_DECREF(locals_flet_core$canvas$path$$$class__6_CubicTo_36);
            locals_flet_core$canvas$path$$$class__6_CubicTo_36 = NULL;
            goto try_return_handler_18;
            // Exception handler code:
            try_except_handler_19:;
            exception_keeper_type_14 = exception_type;
            exception_keeper_value_14 = exception_value;
            exception_keeper_tb_14 = exception_tb;
            exception_keeper_lineno_14 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF(locals_flet_core$canvas$path$$$class__6_CubicTo_36);
            locals_flet_core$canvas$path$$$class__6_CubicTo_36 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_14;
            exception_value = exception_keeper_value_14;
            exception_tb = exception_keeper_tb_14;
            exception_lineno = exception_keeper_lineno_14;

            goto try_except_handler_18;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_18:;
            CHECK_OBJECT(outline_5_var___class__);
            Py_DECREF(outline_5_var___class__);
            outline_5_var___class__ = NULL;
            goto outline_result_6;
            // Exception handler code:
            try_except_handler_18:;
            exception_keeper_type_15 = exception_type;
            exception_keeper_value_15 = exception_value;
            exception_keeper_tb_15 = exception_tb;
            exception_keeper_lineno_15 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_15;
            exception_value = exception_keeper_value_15;
            exception_tb = exception_keeper_tb_15;
            exception_lineno = exception_keeper_lineno_15;

            goto outline_exception_6;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_6:;
            exception_lineno = 36;
            goto try_except_handler_17;
            outline_result_6:;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 35;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[39], tmp_args_element_value_5);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "c";
                goto try_except_handler_17;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "c";
                goto try_except_handler_17;
            }
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Path$class_creation_5__bases_orig);
        Py_DECREF(tmp_Path$class_creation_5__bases_orig);
        tmp_Path$class_creation_5__bases_orig = NULL;
        Py_XDECREF(tmp_Path$class_creation_5__bases);
        tmp_Path$class_creation_5__bases = NULL;
        Py_XDECREF(tmp_Path$class_creation_5__class_decl_dict);
        tmp_Path$class_creation_5__class_decl_dict = NULL;
        Py_XDECREF(tmp_Path$class_creation_5__metaclass);
        tmp_Path$class_creation_5__metaclass = NULL;
        Py_XDECREF(tmp_Path$class_creation_5__prepared);
        tmp_Path$class_creation_5__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto frame_exception_exit_2;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(tmp_Path$class_creation_5__bases_orig);
        Py_DECREF(tmp_Path$class_creation_5__bases_orig);
        tmp_Path$class_creation_5__bases_orig = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_5__bases);
        Py_DECREF(tmp_Path$class_creation_5__bases);
        tmp_Path$class_creation_5__bases = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_5__class_decl_dict);
        Py_DECREF(tmp_Path$class_creation_5__class_decl_dict);
        tmp_Path$class_creation_5__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_5__metaclass);
        Py_DECREF(tmp_Path$class_creation_5__metaclass);
        tmp_Path$class_creation_5__metaclass = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_5__prepared);
        Py_DECREF(tmp_Path$class_creation_5__prepared);
        tmp_Path$class_creation_5__prepared = NULL;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_tuple_element_21;
            tmp_tuple_element_21 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41]);

            if (unlikely(tmp_tuple_element_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_assign_source_50 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_50, 0, tmp_tuple_element_21);
            assert(tmp_Path$class_creation_6__bases_orig == NULL);
            tmp_Path$class_creation_6__bases_orig = tmp_assign_source_50;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_dircall_arg1_6;
            CHECK_OBJECT(tmp_Path$class_creation_6__bases_orig);
            tmp_dircall_arg1_6 = tmp_Path$class_creation_6__bases_orig;
            Py_INCREF(tmp_dircall_arg1_6);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
                tmp_assign_source_51 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_20;
            }
            assert(tmp_Path$class_creation_6__bases == NULL);
            tmp_Path$class_creation_6__bases = tmp_assign_source_51;
        }
        {
            PyObject *tmp_assign_source_52;
            tmp_assign_source_52 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_6__class_decl_dict == NULL);
            tmp_Path$class_creation_6__class_decl_dict = tmp_assign_source_52;
        }
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_metaclass_value_6;
            nuitka_bool tmp_condition_result_20;
            int tmp_truth_name_6;
            PyObject *tmp_type_arg_11;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_bases_value_6;
            CHECK_OBJECT(tmp_Path$class_creation_6__bases);
            tmp_truth_name_6 = CHECK_IF_TRUE(tmp_Path$class_creation_6__bases);
            if (tmp_truth_name_6 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_20;
            }
            tmp_condition_result_20 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            CHECK_OBJECT(tmp_Path$class_creation_6__bases);
            tmp_expression_value_31 = tmp_Path$class_creation_6__bases;
            tmp_subscript_value_6 = mod_consts[18];
            tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_31, tmp_subscript_value_6, 0);
            if (tmp_type_arg_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_20;
            }
            tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
            Py_DECREF(tmp_type_arg_11);
            if (tmp_metaclass_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_20;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_6);
            condexpr_end_6:;
            CHECK_OBJECT(tmp_Path$class_creation_6__bases);
            tmp_bases_value_6 = tmp_Path$class_creation_6__bases;
            tmp_assign_source_53 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
            Py_DECREF(tmp_metaclass_value_6);
            if (tmp_assign_source_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_20;
            }
            assert(tmp_Path$class_creation_6__metaclass == NULL);
            tmp_Path$class_creation_6__metaclass = tmp_assign_source_53;
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_expression_value_32;
            CHECK_OBJECT(tmp_Path$class_creation_6__metaclass);
            tmp_expression_value_32 = tmp_Path$class_creation_6__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_32, mod_consts[30]);
            tmp_condition_result_21 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_Path$class_creation_6__metaclass);
            tmp_expression_value_33 = tmp_Path$class_creation_6__metaclass;
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[30]);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_20;
            }
            tmp_tuple_element_22 = mod_consts[70];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_Path$class_creation_6__bases);
            tmp_tuple_element_22 = tmp_Path$class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_Path$class_creation_6__class_decl_dict);
            tmp_kwargs_value_11 = tmp_Path$class_creation_6__class_decl_dict;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 46;
            tmp_assign_source_54 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_20;
            }
            assert(tmp_Path$class_creation_6__prepared == NULL);
            tmp_Path$class_creation_6__prepared = tmp_assign_source_54;
        }
        {
            bool tmp_condition_result_22;
            PyObject *tmp_operand_value_6;
            PyObject *tmp_expression_value_34;
            CHECK_OBJECT(tmp_Path$class_creation_6__prepared);
            tmp_expression_value_34 = tmp_Path$class_creation_6__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_34, mod_consts[32]);
            tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_20;
            }
            tmp_condition_result_22 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_22 != false) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        {
            PyObject *tmp_raise_type_6;
            PyObject *tmp_raise_value_6;
            PyObject *tmp_mod_expr_left_6;
            PyObject *tmp_mod_expr_right_6;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_getattr_target_6;
            PyObject *tmp_getattr_attr_6;
            PyObject *tmp_getattr_default_6;
            tmp_raise_type_6 = PyExc_TypeError;
            tmp_mod_expr_left_6 = mod_consts[33];
            CHECK_OBJECT(tmp_Path$class_creation_6__metaclass);
            tmp_getattr_target_6 = tmp_Path$class_creation_6__metaclass;
            tmp_getattr_attr_6 = mod_consts[34];
            tmp_getattr_default_6 = mod_consts[35];
            tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_20;
            }
            tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_35;
                PyObject *tmp_type_arg_12;
                PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_23);
                CHECK_OBJECT(tmp_Path$class_creation_6__prepared);
                tmp_type_arg_12 = tmp_Path$class_creation_6__prepared;
                tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_12);
                assert(!(tmp_expression_value_35 == NULL));
                tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[34]);
                Py_DECREF(tmp_expression_value_35);
                if (tmp_tuple_element_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_23);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_mod_expr_right_6);
            goto try_except_handler_20;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
            Py_DECREF(tmp_mod_expr_right_6);
            if (tmp_raise_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_20;
            }
            exception_type = tmp_raise_type_6;
            Py_INCREF(tmp_raise_type_6);
            exception_value = tmp_raise_value_6;
            exception_lineno = 46;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "c";
            goto try_except_handler_20;
        }
        branch_no_16:;
        goto branch_end_15;
        branch_no_15:;
        {
            PyObject *tmp_assign_source_55;
            tmp_assign_source_55 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_6__prepared == NULL);
            tmp_Path$class_creation_6__prepared = tmp_assign_source_55;
        }
        branch_end_15:;
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_6;
            tmp_called_instance_6 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[17]);

            if (tmp_called_instance_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_instance_6 == NULL)) {
                        tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_instance_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 45;
                        type_description_2 = "c";
                        goto try_except_handler_20;
                    }
                    Py_INCREF(tmp_called_instance_6);
                } else {
                    goto try_except_handler_20;
                }
            }

            {
                PyObject *tmp_set_locals_7;
                CHECK_OBJECT(tmp_Path$class_creation_6__prepared);
                tmp_set_locals_7 = tmp_Path$class_creation_6__prepared;
                locals_flet_core$canvas$path$$$class__7_SubPath_46 = tmp_set_locals_7;
                Py_INCREF(tmp_set_locals_7);
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = mod_consts[36];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[37], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_22;
            }
            tmp_dictset_value = mod_consts[71];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[38], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_22;
            }
            tmp_dictset_value = MAKE_DICT_EMPTY();
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_22;
            }
            frame_dd0d0c04cacb50ef35ecf2f435982afe_7 = MAKE_CLASS_FRAME(codeobj_dd0d0c04cacb50ef35ecf2f435982afe, module_flet_core$canvas$path, NULL, sizeof(void *));

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_dd0d0c04cacb50ef35ecf2f435982afe_7);
            assert(Py_REFCNT(frame_dd0d0c04cacb50ef35ecf2f435982afe_7) == 2);

            // Framed code:
            {
                PyObject *tmp_ass_subvalue_20;
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_ass_subscribed_20;
                PyObject *tmp_ass_subscript_20;
                tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[20]);

                if (tmp_expression_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_expression_value_36 == NULL)) {
                            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                        }

                        if (tmp_expression_value_36 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 47;
                            type_description_3 = "o";
                            goto frame_exception_exit_7;
                        }
                        Py_INCREF(tmp_expression_value_36);
                    } else {
                        goto frame_exception_exit_7;
                    }
                }

                tmp_subscript_value_7 = mod_consts[40];
                tmp_ass_subvalue_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_36);
                if (tmp_ass_subvalue_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 47;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }
                tmp_ass_subscribed_20 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_20);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 47;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }

                if (tmp_ass_subscribed_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_20);

                    exception_lineno = 47;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }
                tmp_ass_subscript_20 = mod_consts[3];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
                Py_DECREF(tmp_ass_subscribed_20);
                Py_DECREF(tmp_ass_subvalue_20);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 47;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }
            }
            {
                PyObject *tmp_ass_subvalue_21;
                PyObject *tmp_ass_subscribed_21;
                PyObject *tmp_ass_subscript_21;
                tmp_ass_subvalue_21 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[46]);

                if (tmp_ass_subvalue_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_21 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_21);
                    } else {
                        goto frame_exception_exit_7;
                    }
                }

                tmp_ass_subscribed_21 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_21);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 48;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }

                if (tmp_ass_subscribed_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_21);

                    exception_lineno = 48;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }
                tmp_ass_subscript_21 = mod_consts[47];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
                Py_DECREF(tmp_ass_subscribed_21);
                Py_DECREF(tmp_ass_subvalue_21);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }
            }
            {
                PyObject *tmp_ass_subvalue_22;
                PyObject *tmp_ass_subscribed_22;
                PyObject *tmp_ass_subscript_22;
                tmp_ass_subvalue_22 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[46]);

                if (tmp_ass_subvalue_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_22 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_22);
                    } else {
                        goto frame_exception_exit_7;
                    }
                }

                tmp_ass_subscribed_22 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_22);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 49;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }

                if (tmp_ass_subscribed_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_22);

                    exception_lineno = 49;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }
                tmp_ass_subscript_22 = mod_consts[48];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
                Py_DECREF(tmp_ass_subscribed_22);
                Py_DECREF(tmp_ass_subvalue_22);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }
            }
            {
                PyObject *tmp_called_value_17;
                PyObject *tmp_expression_value_37;
                tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[17]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 50;
                            type_description_3 = "o";
                            goto frame_exception_exit_7;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto frame_exception_exit_7;
                    }
                }

                tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[49]);
                Py_DECREF(tmp_expression_value_37);
                if (tmp_called_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }
                frame_dd0d0c04cacb50ef35ecf2f435982afe_7->m_frame.f_lineno = 50;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[72], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_17);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[52], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }
            }
            {
                PyObject *tmp_ass_subvalue_23;
                PyObject *tmp_ass_subscribed_23;
                PyObject *tmp_ass_subscript_23;
                tmp_ass_subvalue_23 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[53]);

                if (tmp_ass_subvalue_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_23 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_ass_subvalue_23);
                    } else {
                        goto frame_exception_exit_7;
                    }
                }

                tmp_ass_subscribed_23 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_23);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 50;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }

                if (tmp_ass_subscribed_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_23);

                    exception_lineno = 50;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }
                tmp_ass_subscript_23 = mod_consts[52];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
                Py_DECREF(tmp_ass_subscribed_23);
                Py_DECREF(tmp_ass_subvalue_23);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_3 = "o";
                    goto frame_exception_exit_7;
                }
            }


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_5;
            frame_exception_exit_7:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_dd0d0c04cacb50ef35ecf2f435982afe_7, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_dd0d0c04cacb50ef35ecf2f435982afe_7->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_dd0d0c04cacb50ef35ecf2f435982afe_7, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_dd0d0c04cacb50ef35ecf2f435982afe_7,
                type_description_3,
                outline_6_var___class__
            );



            assertFrameObject(frame_dd0d0c04cacb50ef35ecf2f435982afe_7);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_6;
            frame_no_exception_5:;
            goto skip_nested_handling_5;
            nested_frame_exit_6:;
            type_description_2 = "c";
            goto try_except_handler_22;
            skip_nested_handling_5:;
            {
                nuitka_bool tmp_condition_result_23;
                PyObject *tmp_cmp_expr_left_5;
                PyObject *tmp_cmp_expr_right_5;
                CHECK_OBJECT(tmp_Path$class_creation_6__bases);
                tmp_cmp_expr_left_5 = tmp_Path$class_creation_6__bases;
                CHECK_OBJECT(tmp_Path$class_creation_6__bases_orig);
                tmp_cmp_expr_right_5 = tmp_Path$class_creation_6__bases_orig;
                tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
                if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "c";
                    goto try_except_handler_22;
                }
                if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_17;
                } else {
                    goto branch_no_17;
                }
            }
            branch_yes_17:;
            CHECK_OBJECT(tmp_Path$class_creation_6__bases_orig);
            tmp_dictset_value = tmp_Path$class_creation_6__bases_orig;
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__7_SubPath_46, mod_consts[54], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_22;
            }
            branch_no_17:;
            {
                PyObject *tmp_assign_source_56;
                PyObject *tmp_called_value_18;
                PyObject *tmp_args_value_12;
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_kwargs_value_12;
                CHECK_OBJECT(tmp_Path$class_creation_6__metaclass);
                tmp_called_value_18 = tmp_Path$class_creation_6__metaclass;
                tmp_tuple_element_24 = mod_consts[70];
                tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
                CHECK_OBJECT(tmp_Path$class_creation_6__bases);
                tmp_tuple_element_24 = tmp_Path$class_creation_6__bases;
                PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
                tmp_tuple_element_24 = locals_flet_core$canvas$path$$$class__7_SubPath_46;
                PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
                CHECK_OBJECT(tmp_Path$class_creation_6__class_decl_dict);
                tmp_kwargs_value_12 = tmp_Path$class_creation_6__class_decl_dict;
                frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 46;
                tmp_assign_source_56 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_12, tmp_kwargs_value_12);
                Py_DECREF(tmp_args_value_12);
                if (tmp_assign_source_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "c";
                    goto try_except_handler_22;
                }
                assert(outline_6_var___class__ == NULL);
                outline_6_var___class__ = tmp_assign_source_56;
            }
            CHECK_OBJECT(outline_6_var___class__);
            tmp_args_element_value_6 = outline_6_var___class__;
            Py_INCREF(tmp_args_element_value_6);
            goto try_return_handler_22;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_22:;
            Py_DECREF(locals_flet_core$canvas$path$$$class__7_SubPath_46);
            locals_flet_core$canvas$path$$$class__7_SubPath_46 = NULL;
            goto try_return_handler_21;
            // Exception handler code:
            try_except_handler_22:;
            exception_keeper_type_17 = exception_type;
            exception_keeper_value_17 = exception_value;
            exception_keeper_tb_17 = exception_tb;
            exception_keeper_lineno_17 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF(locals_flet_core$canvas$path$$$class__7_SubPath_46);
            locals_flet_core$canvas$path$$$class__7_SubPath_46 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_17;
            exception_value = exception_keeper_value_17;
            exception_tb = exception_keeper_tb_17;
            exception_lineno = exception_keeper_lineno_17;

            goto try_except_handler_21;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_21:;
            CHECK_OBJECT(outline_6_var___class__);
            Py_DECREF(outline_6_var___class__);
            outline_6_var___class__ = NULL;
            goto outline_result_7;
            // Exception handler code:
            try_except_handler_21:;
            exception_keeper_type_18 = exception_type;
            exception_keeper_value_18 = exception_value;
            exception_keeper_tb_18 = exception_tb;
            exception_keeper_lineno_18 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_18;
            exception_value = exception_keeper_value_18;
            exception_tb = exception_keeper_tb_18;
            exception_lineno = exception_keeper_lineno_18;

            goto outline_exception_7;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_7:;
            exception_lineno = 46;
            goto try_except_handler_20;
            outline_result_7:;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 45;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[39], tmp_args_element_value_6);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "c";
                goto try_except_handler_20;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[70], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto try_except_handler_20;
            }
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Path$class_creation_6__bases_orig);
        Py_DECREF(tmp_Path$class_creation_6__bases_orig);
        tmp_Path$class_creation_6__bases_orig = NULL;
        Py_XDECREF(tmp_Path$class_creation_6__bases);
        tmp_Path$class_creation_6__bases = NULL;
        Py_XDECREF(tmp_Path$class_creation_6__class_decl_dict);
        tmp_Path$class_creation_6__class_decl_dict = NULL;
        Py_XDECREF(tmp_Path$class_creation_6__metaclass);
        tmp_Path$class_creation_6__metaclass = NULL;
        Py_XDECREF(tmp_Path$class_creation_6__prepared);
        tmp_Path$class_creation_6__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto frame_exception_exit_2;
        // End of try:
        try_end_7:;
        CHECK_OBJECT(tmp_Path$class_creation_6__bases_orig);
        Py_DECREF(tmp_Path$class_creation_6__bases_orig);
        tmp_Path$class_creation_6__bases_orig = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_6__bases);
        Py_DECREF(tmp_Path$class_creation_6__bases);
        tmp_Path$class_creation_6__bases = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_6__class_decl_dict);
        Py_DECREF(tmp_Path$class_creation_6__class_decl_dict);
        tmp_Path$class_creation_6__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_6__metaclass);
        Py_DECREF(tmp_Path$class_creation_6__metaclass);
        tmp_Path$class_creation_6__metaclass = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_6__prepared);
        Py_DECREF(tmp_Path$class_creation_6__prepared);
        tmp_Path$class_creation_6__prepared = NULL;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_tuple_element_25;
            tmp_tuple_element_25 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41]);

            if (unlikely(tmp_tuple_element_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 53;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_assign_source_57 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_57, 0, tmp_tuple_element_25);
            assert(tmp_Path$class_creation_7__bases_orig == NULL);
            tmp_Path$class_creation_7__bases_orig = tmp_assign_source_57;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_dircall_arg1_7;
            CHECK_OBJECT(tmp_Path$class_creation_7__bases_orig);
            tmp_dircall_arg1_7 = tmp_Path$class_creation_7__bases_orig;
            Py_INCREF(tmp_dircall_arg1_7);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
                tmp_assign_source_58 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_23;
            }
            assert(tmp_Path$class_creation_7__bases == NULL);
            tmp_Path$class_creation_7__bases = tmp_assign_source_58;
        }
        {
            PyObject *tmp_assign_source_59;
            tmp_assign_source_59 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_7__class_decl_dict == NULL);
            tmp_Path$class_creation_7__class_decl_dict = tmp_assign_source_59;
        }
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_metaclass_value_7;
            nuitka_bool tmp_condition_result_24;
            int tmp_truth_name_7;
            PyObject *tmp_type_arg_13;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_bases_value_7;
            CHECK_OBJECT(tmp_Path$class_creation_7__bases);
            tmp_truth_name_7 = CHECK_IF_TRUE(tmp_Path$class_creation_7__bases);
            if (tmp_truth_name_7 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_23;
            }
            tmp_condition_result_24 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            CHECK_OBJECT(tmp_Path$class_creation_7__bases);
            tmp_expression_value_38 = tmp_Path$class_creation_7__bases;
            tmp_subscript_value_8 = mod_consts[18];
            tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_38, tmp_subscript_value_8, 0);
            if (tmp_type_arg_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_23;
            }
            tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
            Py_DECREF(tmp_type_arg_13);
            if (tmp_metaclass_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_23;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_7);
            condexpr_end_7:;
            CHECK_OBJECT(tmp_Path$class_creation_7__bases);
            tmp_bases_value_7 = tmp_Path$class_creation_7__bases;
            tmp_assign_source_60 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
            Py_DECREF(tmp_metaclass_value_7);
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_23;
            }
            assert(tmp_Path$class_creation_7__metaclass == NULL);
            tmp_Path$class_creation_7__metaclass = tmp_assign_source_60;
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_expression_value_39;
            CHECK_OBJECT(tmp_Path$class_creation_7__metaclass);
            tmp_expression_value_39 = tmp_Path$class_creation_7__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_39, mod_consts[30]);
            tmp_condition_result_25 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_value_13;
            CHECK_OBJECT(tmp_Path$class_creation_7__metaclass);
            tmp_expression_value_40 = tmp_Path$class_creation_7__metaclass;
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[30]);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_23;
            }
            tmp_tuple_element_26 = mod_consts[73];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_Path$class_creation_7__bases);
            tmp_tuple_element_26 = tmp_Path$class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_Path$class_creation_7__class_decl_dict);
            tmp_kwargs_value_13 = tmp_Path$class_creation_7__class_decl_dict;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 53;
            tmp_assign_source_61 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_23;
            }
            assert(tmp_Path$class_creation_7__prepared == NULL);
            tmp_Path$class_creation_7__prepared = tmp_assign_source_61;
        }
        {
            bool tmp_condition_result_26;
            PyObject *tmp_operand_value_7;
            PyObject *tmp_expression_value_41;
            CHECK_OBJECT(tmp_Path$class_creation_7__prepared);
            tmp_expression_value_41 = tmp_Path$class_creation_7__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_41, mod_consts[32]);
            tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_23;
            }
            tmp_condition_result_26 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_26 != false) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
        }
        branch_yes_19:;
        {
            PyObject *tmp_raise_type_7;
            PyObject *tmp_raise_value_7;
            PyObject *tmp_mod_expr_left_7;
            PyObject *tmp_mod_expr_right_7;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_getattr_target_7;
            PyObject *tmp_getattr_attr_7;
            PyObject *tmp_getattr_default_7;
            tmp_raise_type_7 = PyExc_TypeError;
            tmp_mod_expr_left_7 = mod_consts[33];
            CHECK_OBJECT(tmp_Path$class_creation_7__metaclass);
            tmp_getattr_target_7 = tmp_Path$class_creation_7__metaclass;
            tmp_getattr_attr_7 = mod_consts[34];
            tmp_getattr_default_7 = mod_consts[35];
            tmp_tuple_element_27 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_23;
            }
            tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_42;
                PyObject *tmp_type_arg_14;
                PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_27);
                CHECK_OBJECT(tmp_Path$class_creation_7__prepared);
                tmp_type_arg_14 = tmp_Path$class_creation_7__prepared;
                tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_14);
                assert(!(tmp_expression_value_42 == NULL));
                tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[34]);
                Py_DECREF(tmp_expression_value_42);
                if (tmp_tuple_element_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_27);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_mod_expr_right_7);
            goto try_except_handler_23;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
            Py_DECREF(tmp_mod_expr_right_7);
            if (tmp_raise_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_23;
            }
            exception_type = tmp_raise_type_7;
            Py_INCREF(tmp_raise_type_7);
            exception_value = tmp_raise_value_7;
            exception_lineno = 53;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "c";
            goto try_except_handler_23;
        }
        branch_no_19:;
        goto branch_end_18;
        branch_no_18:;
        {
            PyObject *tmp_assign_source_62;
            tmp_assign_source_62 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_7__prepared == NULL);
            tmp_Path$class_creation_7__prepared = tmp_assign_source_62;
        }
        branch_end_18:;
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_7;
            tmp_called_instance_7 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[17]);

            if (tmp_called_instance_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_instance_7 == NULL)) {
                        tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_instance_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_2 = "c";
                        goto try_except_handler_23;
                    }
                    Py_INCREF(tmp_called_instance_7);
                } else {
                    goto try_except_handler_23;
                }
            }

            {
                PyObject *tmp_set_locals_8;
                CHECK_OBJECT(tmp_Path$class_creation_7__prepared);
                tmp_set_locals_8 = tmp_Path$class_creation_7__prepared;
                locals_flet_core$canvas$path$$$class__8_Arc_53 = tmp_set_locals_8;
                Py_INCREF(tmp_set_locals_8);
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = mod_consts[36];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[37], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_25;
            }
            tmp_dictset_value = mod_consts[74];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[38], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_25;
            }
            tmp_dictset_value = MAKE_DICT_EMPTY();
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_25;
            }
            frame_7552caa157812b09ada8ac76ed6f6ebb_8 = MAKE_CLASS_FRAME(codeobj_7552caa157812b09ada8ac76ed6f6ebb, module_flet_core$canvas$path, NULL, sizeof(void *));

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_7552caa157812b09ada8ac76ed6f6ebb_8);
            assert(Py_REFCNT(frame_7552caa157812b09ada8ac76ed6f6ebb_8) == 2);

            // Framed code:
            {
                PyObject *tmp_ass_subvalue_24;
                PyObject *tmp_ass_subscribed_24;
                PyObject *tmp_ass_subscript_24;
                tmp_ass_subvalue_24 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[46]);

                if (tmp_ass_subvalue_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_24 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_24);
                    } else {
                        goto frame_exception_exit_8;
                    }
                }

                tmp_ass_subscribed_24 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_24);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 54;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }

                if (tmp_ass_subscribed_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_24);

                    exception_lineno = 54;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
                tmp_ass_subscript_24 = mod_consts[47];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
                Py_DECREF(tmp_ass_subscribed_24);
                Py_DECREF(tmp_ass_subvalue_24);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
            }
            {
                PyObject *tmp_ass_subvalue_25;
                PyObject *tmp_ass_subscribed_25;
                PyObject *tmp_ass_subscript_25;
                tmp_ass_subvalue_25 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[46]);

                if (tmp_ass_subvalue_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_25 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_25);
                    } else {
                        goto frame_exception_exit_8;
                    }
                }

                tmp_ass_subscribed_25 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_25);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 55;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }

                if (tmp_ass_subscribed_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_25);

                    exception_lineno = 55;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
                tmp_ass_subscript_25 = mod_consts[48];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
                Py_DECREF(tmp_ass_subscribed_25);
                Py_DECREF(tmp_ass_subvalue_25);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
            }
            {
                PyObject *tmp_ass_subvalue_26;
                PyObject *tmp_ass_subscribed_26;
                PyObject *tmp_ass_subscript_26;
                tmp_ass_subvalue_26 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[46]);

                if (tmp_ass_subvalue_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_26 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_26);
                    } else {
                        goto frame_exception_exit_8;
                    }
                }

                tmp_ass_subscribed_26 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_26);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 56;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }

                if (tmp_ass_subscribed_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_26);

                    exception_lineno = 56;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
                tmp_ass_subscript_26 = mod_consts[75];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
                Py_DECREF(tmp_ass_subscribed_26);
                Py_DECREF(tmp_ass_subvalue_26);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 56;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
            }
            {
                PyObject *tmp_ass_subvalue_27;
                PyObject *tmp_ass_subscribed_27;
                PyObject *tmp_ass_subscript_27;
                tmp_ass_subvalue_27 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[46]);

                if (tmp_ass_subvalue_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_27 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_27);
                    } else {
                        goto frame_exception_exit_8;
                    }
                }

                tmp_ass_subscribed_27 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_27);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 57;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }

                if (tmp_ass_subscribed_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_27);

                    exception_lineno = 57;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
                tmp_ass_subscript_27 = mod_consts[76];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
                Py_DECREF(tmp_ass_subscribed_27);
                Py_DECREF(tmp_ass_subvalue_27);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
            }
            {
                PyObject *tmp_ass_subvalue_28;
                PyObject *tmp_ass_subscribed_28;
                PyObject *tmp_ass_subscript_28;
                tmp_ass_subvalue_28 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[46]);

                if (tmp_ass_subvalue_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_28 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_28);
                    } else {
                        goto frame_exception_exit_8;
                    }
                }

                tmp_ass_subscribed_28 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_28);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 58;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }

                if (tmp_ass_subscribed_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_28);

                    exception_lineno = 58;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
                tmp_ass_subscript_28 = mod_consts[77];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
                Py_DECREF(tmp_ass_subscribed_28);
                Py_DECREF(tmp_ass_subvalue_28);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
            }
            {
                PyObject *tmp_ass_subvalue_29;
                PyObject *tmp_ass_subscribed_29;
                PyObject *tmp_ass_subscript_29;
                tmp_ass_subvalue_29 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[46]);

                if (tmp_ass_subvalue_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_29 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_29);
                    } else {
                        goto frame_exception_exit_8;
                    }
                }

                tmp_ass_subscribed_29 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_29);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 59;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }

                if (tmp_ass_subscribed_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_29);

                    exception_lineno = 59;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
                tmp_ass_subscript_29 = mod_consts[78];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
                Py_DECREF(tmp_ass_subscribed_29);
                Py_DECREF(tmp_ass_subvalue_29);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
            }
            {
                PyObject *tmp_called_value_20;
                PyObject *tmp_expression_value_43;
                tmp_expression_value_43 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[17]);

                if (tmp_expression_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_43 == NULL)) {
                            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 60;
                            type_description_3 = "o";
                            goto frame_exception_exit_8;
                        }
                        Py_INCREF(tmp_expression_value_43);
                    } else {
                        goto frame_exception_exit_8;
                    }
                }

                tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[49]);
                Py_DECREF(tmp_expression_value_43);
                if (tmp_called_value_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
                frame_7552caa157812b09ada8ac76ed6f6ebb_8->m_frame.f_lineno = 60;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[79], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_20);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[52], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
            }
            {
                PyObject *tmp_ass_subvalue_30;
                PyObject *tmp_ass_subscribed_30;
                PyObject *tmp_ass_subscript_30;
                tmp_ass_subvalue_30 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[53]);

                if (tmp_ass_subvalue_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_30 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_ass_subvalue_30);
                    } else {
                        goto frame_exception_exit_8;
                    }
                }

                tmp_ass_subscribed_30 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_30);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 60;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }

                if (tmp_ass_subscribed_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_30);

                    exception_lineno = 60;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
                tmp_ass_subscript_30 = mod_consts[52];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
                Py_DECREF(tmp_ass_subscribed_30);
                Py_DECREF(tmp_ass_subvalue_30);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_3 = "o";
                    goto frame_exception_exit_8;
                }
            }


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_6;
            frame_exception_exit_8:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_7552caa157812b09ada8ac76ed6f6ebb_8, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_7552caa157812b09ada8ac76ed6f6ebb_8->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_7552caa157812b09ada8ac76ed6f6ebb_8, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_7552caa157812b09ada8ac76ed6f6ebb_8,
                type_description_3,
                outline_7_var___class__
            );



            assertFrameObject(frame_7552caa157812b09ada8ac76ed6f6ebb_8);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_7;
            frame_no_exception_6:;
            goto skip_nested_handling_6;
            nested_frame_exit_7:;
            type_description_2 = "c";
            goto try_except_handler_25;
            skip_nested_handling_6:;
            {
                nuitka_bool tmp_condition_result_27;
                PyObject *tmp_cmp_expr_left_6;
                PyObject *tmp_cmp_expr_right_6;
                CHECK_OBJECT(tmp_Path$class_creation_7__bases);
                tmp_cmp_expr_left_6 = tmp_Path$class_creation_7__bases;
                CHECK_OBJECT(tmp_Path$class_creation_7__bases_orig);
                tmp_cmp_expr_right_6 = tmp_Path$class_creation_7__bases_orig;
                tmp_condition_result_27 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
                if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;
                    type_description_2 = "c";
                    goto try_except_handler_25;
                }
                if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_20;
                } else {
                    goto branch_no_20;
                }
            }
            branch_yes_20:;
            CHECK_OBJECT(tmp_Path$class_creation_7__bases_orig);
            tmp_dictset_value = tmp_Path$class_creation_7__bases_orig;
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__8_Arc_53, mod_consts[54], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_25;
            }
            branch_no_20:;
            {
                PyObject *tmp_assign_source_63;
                PyObject *tmp_called_value_21;
                PyObject *tmp_args_value_14;
                PyObject *tmp_tuple_element_28;
                PyObject *tmp_kwargs_value_14;
                CHECK_OBJECT(tmp_Path$class_creation_7__metaclass);
                tmp_called_value_21 = tmp_Path$class_creation_7__metaclass;
                tmp_tuple_element_28 = mod_consts[73];
                tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_28);
                CHECK_OBJECT(tmp_Path$class_creation_7__bases);
                tmp_tuple_element_28 = tmp_Path$class_creation_7__bases;
                PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_28);
                tmp_tuple_element_28 = locals_flet_core$canvas$path$$$class__8_Arc_53;
                PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_28);
                CHECK_OBJECT(tmp_Path$class_creation_7__class_decl_dict);
                tmp_kwargs_value_14 = tmp_Path$class_creation_7__class_decl_dict;
                frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 53;
                tmp_assign_source_63 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_14, tmp_kwargs_value_14);
                Py_DECREF(tmp_args_value_14);
                if (tmp_assign_source_63 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;
                    type_description_2 = "c";
                    goto try_except_handler_25;
                }
                assert(outline_7_var___class__ == NULL);
                outline_7_var___class__ = tmp_assign_source_63;
            }
            CHECK_OBJECT(outline_7_var___class__);
            tmp_args_element_value_7 = outline_7_var___class__;
            Py_INCREF(tmp_args_element_value_7);
            goto try_return_handler_25;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_25:;
            Py_DECREF(locals_flet_core$canvas$path$$$class__8_Arc_53);
            locals_flet_core$canvas$path$$$class__8_Arc_53 = NULL;
            goto try_return_handler_24;
            // Exception handler code:
            try_except_handler_25:;
            exception_keeper_type_20 = exception_type;
            exception_keeper_value_20 = exception_value;
            exception_keeper_tb_20 = exception_tb;
            exception_keeper_lineno_20 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF(locals_flet_core$canvas$path$$$class__8_Arc_53);
            locals_flet_core$canvas$path$$$class__8_Arc_53 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_20;
            exception_value = exception_keeper_value_20;
            exception_tb = exception_keeper_tb_20;
            exception_lineno = exception_keeper_lineno_20;

            goto try_except_handler_24;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_24:;
            CHECK_OBJECT(outline_7_var___class__);
            Py_DECREF(outline_7_var___class__);
            outline_7_var___class__ = NULL;
            goto outline_result_8;
            // Exception handler code:
            try_except_handler_24:;
            exception_keeper_type_21 = exception_type;
            exception_keeper_value_21 = exception_value;
            exception_keeper_tb_21 = exception_tb;
            exception_keeper_lineno_21 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_21;
            exception_value = exception_keeper_value_21;
            exception_tb = exception_keeper_tb_21;
            exception_lineno = exception_keeper_lineno_21;

            goto outline_exception_8;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_8:;
            exception_lineno = 53;
            goto try_except_handler_23;
            outline_result_8:;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 52;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[39], tmp_args_element_value_7);
            Py_DECREF(tmp_called_instance_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "c";
                goto try_except_handler_23;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[73], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto try_except_handler_23;
            }
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Path$class_creation_7__bases_orig);
        Py_DECREF(tmp_Path$class_creation_7__bases_orig);
        tmp_Path$class_creation_7__bases_orig = NULL;
        Py_XDECREF(tmp_Path$class_creation_7__bases);
        tmp_Path$class_creation_7__bases = NULL;
        Py_XDECREF(tmp_Path$class_creation_7__class_decl_dict);
        tmp_Path$class_creation_7__class_decl_dict = NULL;
        Py_XDECREF(tmp_Path$class_creation_7__metaclass);
        tmp_Path$class_creation_7__metaclass = NULL;
        Py_XDECREF(tmp_Path$class_creation_7__prepared);
        tmp_Path$class_creation_7__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto frame_exception_exit_2;
        // End of try:
        try_end_8:;
        CHECK_OBJECT(tmp_Path$class_creation_7__bases_orig);
        Py_DECREF(tmp_Path$class_creation_7__bases_orig);
        tmp_Path$class_creation_7__bases_orig = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_7__bases);
        Py_DECREF(tmp_Path$class_creation_7__bases);
        tmp_Path$class_creation_7__bases = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_7__class_decl_dict);
        Py_DECREF(tmp_Path$class_creation_7__class_decl_dict);
        tmp_Path$class_creation_7__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_7__metaclass);
        Py_DECREF(tmp_Path$class_creation_7__metaclass);
        tmp_Path$class_creation_7__metaclass = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_7__prepared);
        Py_DECREF(tmp_Path$class_creation_7__prepared);
        tmp_Path$class_creation_7__prepared = NULL;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_tuple_element_29;
            tmp_tuple_element_29 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41]);

            if (unlikely(tmp_tuple_element_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_assign_source_64 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_64, 0, tmp_tuple_element_29);
            assert(tmp_Path$class_creation_8__bases_orig == NULL);
            tmp_Path$class_creation_8__bases_orig = tmp_assign_source_64;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_dircall_arg1_8;
            CHECK_OBJECT(tmp_Path$class_creation_8__bases_orig);
            tmp_dircall_arg1_8 = tmp_Path$class_creation_8__bases_orig;
            Py_INCREF(tmp_dircall_arg1_8);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
                tmp_assign_source_65 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_26;
            }
            assert(tmp_Path$class_creation_8__bases == NULL);
            tmp_Path$class_creation_8__bases = tmp_assign_source_65;
        }
        {
            PyObject *tmp_assign_source_66;
            tmp_assign_source_66 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_8__class_decl_dict == NULL);
            tmp_Path$class_creation_8__class_decl_dict = tmp_assign_source_66;
        }
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_metaclass_value_8;
            nuitka_bool tmp_condition_result_28;
            int tmp_truth_name_8;
            PyObject *tmp_type_arg_15;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_bases_value_8;
            CHECK_OBJECT(tmp_Path$class_creation_8__bases);
            tmp_truth_name_8 = CHECK_IF_TRUE(tmp_Path$class_creation_8__bases);
            if (tmp_truth_name_8 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_26;
            }
            tmp_condition_result_28 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            CHECK_OBJECT(tmp_Path$class_creation_8__bases);
            tmp_expression_value_44 = tmp_Path$class_creation_8__bases;
            tmp_subscript_value_9 = mod_consts[18];
            tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_44, tmp_subscript_value_9, 0);
            if (tmp_type_arg_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_26;
            }
            tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
            Py_DECREF(tmp_type_arg_15);
            if (tmp_metaclass_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_26;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_8);
            condexpr_end_8:;
            CHECK_OBJECT(tmp_Path$class_creation_8__bases);
            tmp_bases_value_8 = tmp_Path$class_creation_8__bases;
            tmp_assign_source_67 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
            Py_DECREF(tmp_metaclass_value_8);
            if (tmp_assign_source_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_26;
            }
            assert(tmp_Path$class_creation_8__metaclass == NULL);
            tmp_Path$class_creation_8__metaclass = tmp_assign_source_67;
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_expression_value_45;
            CHECK_OBJECT(tmp_Path$class_creation_8__metaclass);
            tmp_expression_value_45 = tmp_Path$class_creation_8__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_45, mod_consts[30]);
            tmp_condition_result_29 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_value_15;
            CHECK_OBJECT(tmp_Path$class_creation_8__metaclass);
            tmp_expression_value_46 = tmp_Path$class_creation_8__metaclass;
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[30]);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_26;
            }
            tmp_tuple_element_30 = mod_consts[80];
            tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_Path$class_creation_8__bases);
            tmp_tuple_element_30 = tmp_Path$class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_Path$class_creation_8__class_decl_dict);
            tmp_kwargs_value_15 = tmp_Path$class_creation_8__class_decl_dict;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 63;
            tmp_assign_source_68 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_15, tmp_kwargs_value_15);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_value_15);
            if (tmp_assign_source_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_26;
            }
            assert(tmp_Path$class_creation_8__prepared == NULL);
            tmp_Path$class_creation_8__prepared = tmp_assign_source_68;
        }
        {
            bool tmp_condition_result_30;
            PyObject *tmp_operand_value_8;
            PyObject *tmp_expression_value_47;
            CHECK_OBJECT(tmp_Path$class_creation_8__prepared);
            tmp_expression_value_47 = tmp_Path$class_creation_8__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_47, mod_consts[32]);
            tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_26;
            }
            tmp_condition_result_30 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_30 != false) {
                goto branch_yes_22;
            } else {
                goto branch_no_22;
            }
        }
        branch_yes_22:;
        {
            PyObject *tmp_raise_type_8;
            PyObject *tmp_raise_value_8;
            PyObject *tmp_mod_expr_left_8;
            PyObject *tmp_mod_expr_right_8;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_getattr_target_8;
            PyObject *tmp_getattr_attr_8;
            PyObject *tmp_getattr_default_8;
            tmp_raise_type_8 = PyExc_TypeError;
            tmp_mod_expr_left_8 = mod_consts[33];
            CHECK_OBJECT(tmp_Path$class_creation_8__metaclass);
            tmp_getattr_target_8 = tmp_Path$class_creation_8__metaclass;
            tmp_getattr_attr_8 = mod_consts[34];
            tmp_getattr_default_8 = mod_consts[35];
            tmp_tuple_element_31 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_26;
            }
            tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_48;
                PyObject *tmp_type_arg_16;
                PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_31);
                CHECK_OBJECT(tmp_Path$class_creation_8__prepared);
                tmp_type_arg_16 = tmp_Path$class_creation_8__prepared;
                tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_16);
                assert(!(tmp_expression_value_48 == NULL));
                tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[34]);
                Py_DECREF(tmp_expression_value_48);
                if (tmp_tuple_element_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_31);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_mod_expr_right_8);
            goto try_except_handler_26;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
            Py_DECREF(tmp_mod_expr_right_8);
            if (tmp_raise_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_26;
            }
            exception_type = tmp_raise_type_8;
            Py_INCREF(tmp_raise_type_8);
            exception_value = tmp_raise_value_8;
            exception_lineno = 63;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "c";
            goto try_except_handler_26;
        }
        branch_no_22:;
        goto branch_end_21;
        branch_no_21:;
        {
            PyObject *tmp_assign_source_69;
            tmp_assign_source_69 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_8__prepared == NULL);
            tmp_Path$class_creation_8__prepared = tmp_assign_source_69;
        }
        branch_end_21:;
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_value_8;
            tmp_called_instance_8 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[17]);

            if (tmp_called_instance_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_instance_8 == NULL)) {
                        tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_instance_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 62;
                        type_description_2 = "c";
                        goto try_except_handler_26;
                    }
                    Py_INCREF(tmp_called_instance_8);
                } else {
                    goto try_except_handler_26;
                }
            }

            {
                PyObject *tmp_set_locals_9;
                CHECK_OBJECT(tmp_Path$class_creation_8__prepared);
                tmp_set_locals_9 = tmp_Path$class_creation_8__prepared;
                locals_flet_core$canvas$path$$$class__9_ArcTo_63 = tmp_set_locals_9;
                Py_INCREF(tmp_set_locals_9);
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = mod_consts[36];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[37], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_28;
            }
            tmp_dictset_value = mod_consts[81];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[38], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_28;
            }
            tmp_dictset_value = MAKE_DICT_EMPTY();
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_28;
            }
            frame_d4aa0fafe4acbdf27c07092788ef7d84_9 = MAKE_CLASS_FRAME(codeobj_d4aa0fafe4acbdf27c07092788ef7d84, module_flet_core$canvas$path, NULL, sizeof(void *));

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_d4aa0fafe4acbdf27c07092788ef7d84_9);
            assert(Py_REFCNT(frame_d4aa0fafe4acbdf27c07092788ef7d84_9) == 2);

            // Framed code:
            {
                PyObject *tmp_ass_subvalue_31;
                PyObject *tmp_ass_subscribed_31;
                PyObject *tmp_ass_subscript_31;
                tmp_ass_subvalue_31 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[46]);

                if (tmp_ass_subvalue_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_31 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_31);
                    } else {
                        goto frame_exception_exit_9;
                    }
                }

                tmp_ass_subscribed_31 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_31);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 64;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }

                if (tmp_ass_subscribed_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_31);

                    exception_lineno = 64;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                tmp_ass_subscript_31 = mod_consts[47];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
                Py_DECREF(tmp_ass_subscribed_31);
                Py_DECREF(tmp_ass_subvalue_31);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
            }
            {
                PyObject *tmp_ass_subvalue_32;
                PyObject *tmp_ass_subscribed_32;
                PyObject *tmp_ass_subscript_32;
                tmp_ass_subvalue_32 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[46]);

                if (tmp_ass_subvalue_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_32 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_32);
                    } else {
                        goto frame_exception_exit_9;
                    }
                }

                tmp_ass_subscribed_32 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_32);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 65;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }

                if (tmp_ass_subscribed_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_32);

                    exception_lineno = 65;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                tmp_ass_subscript_32 = mod_consts[48];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
                Py_DECREF(tmp_ass_subscribed_32);
                Py_DECREF(tmp_ass_subvalue_32);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
            }
            {
                PyObject *tmp_called_value_23;
                PyObject *tmp_expression_value_49;
                tmp_expression_value_49 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[17]);

                if (tmp_expression_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_49 == NULL)) {
                            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 66;
                            type_description_3 = "o";
                            goto frame_exception_exit_9;
                        }
                        Py_INCREF(tmp_expression_value_49);
                    } else {
                        goto frame_exception_exit_9;
                    }
                }

                tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[49]);
                Py_DECREF(tmp_expression_value_49);
                if (tmp_called_value_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                frame_d4aa0fafe4acbdf27c07092788ef7d84_9->m_frame.f_lineno = 66;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[82], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_23);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[83], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
            }
            {
                PyObject *tmp_ass_subvalue_33;
                PyObject *tmp_ass_subscribed_33;
                PyObject *tmp_ass_subscript_33;
                tmp_ass_subvalue_33 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[46]);

                if (tmp_ass_subvalue_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_33 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_33);
                    } else {
                        goto frame_exception_exit_9;
                    }
                }

                tmp_ass_subscribed_33 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_33);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 66;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }

                if (tmp_ass_subscribed_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_33);

                    exception_lineno = 66;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                tmp_ass_subscript_33 = mod_consts[83];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
                Py_DECREF(tmp_ass_subscribed_33);
                Py_DECREF(tmp_ass_subvalue_33);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
            }
            {
                PyObject *tmp_called_value_24;
                PyObject *tmp_expression_value_50;
                tmp_expression_value_50 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[17]);

                if (tmp_expression_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_50 == NULL)) {
                            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_50 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 67;
                            type_description_3 = "o";
                            goto frame_exception_exit_9;
                        }
                        Py_INCREF(tmp_expression_value_50);
                    } else {
                        goto frame_exception_exit_9;
                    }
                }

                tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[49]);
                Py_DECREF(tmp_expression_value_50);
                if (tmp_called_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                frame_d4aa0fafe4acbdf27c07092788ef7d84_9->m_frame.f_lineno = 67;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[82], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_24);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[84], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
            }
            {
                PyObject *tmp_ass_subvalue_34;
                PyObject *tmp_ass_subscribed_34;
                PyObject *tmp_ass_subscript_34;
                tmp_ass_subvalue_34 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[46]);

                if (tmp_ass_subvalue_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_34 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_34);
                    } else {
                        goto frame_exception_exit_9;
                    }
                }

                tmp_ass_subscribed_34 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_34);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 67;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }

                if (tmp_ass_subscribed_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_34);

                    exception_lineno = 67;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                tmp_ass_subscript_34 = mod_consts[84];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
                Py_DECREF(tmp_ass_subscribed_34);
                Py_DECREF(tmp_ass_subvalue_34);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
            }
            {
                PyObject *tmp_called_value_25;
                PyObject *tmp_expression_value_51;
                tmp_expression_value_51 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[17]);

                if (tmp_expression_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_51 == NULL)) {
                            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 68;
                            type_description_3 = "o";
                            goto frame_exception_exit_9;
                        }
                        Py_INCREF(tmp_expression_value_51);
                    } else {
                        goto frame_exception_exit_9;
                    }
                }

                tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[49]);
                Py_DECREF(tmp_expression_value_51);
                if (tmp_called_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                frame_d4aa0fafe4acbdf27c07092788ef7d84_9->m_frame.f_lineno = 68;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[85], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_25);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[86], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
            }
            {
                PyObject *tmp_ass_subvalue_35;
                PyObject *tmp_ass_subscribed_35;
                PyObject *tmp_ass_subscript_35;
                tmp_ass_subvalue_35 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[87]);

                if (tmp_ass_subvalue_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_35 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_ass_subvalue_35);
                    } else {
                        goto frame_exception_exit_9;
                    }
                }

                tmp_ass_subscribed_35 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_35);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 68;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }

                if (tmp_ass_subscribed_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_35);

                    exception_lineno = 68;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                tmp_ass_subscript_35 = mod_consts[86];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
                Py_DECREF(tmp_ass_subscribed_35);
                Py_DECREF(tmp_ass_subvalue_35);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
            }
            {
                PyObject *tmp_called_value_26;
                PyObject *tmp_expression_value_52;
                tmp_expression_value_52 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[17]);

                if (tmp_expression_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_52 == NULL)) {
                            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_52 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 69;
                            type_description_3 = "o";
                            goto frame_exception_exit_9;
                        }
                        Py_INCREF(tmp_expression_value_52);
                    } else {
                        goto frame_exception_exit_9;
                    }
                }

                tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[49]);
                Py_DECREF(tmp_expression_value_52);
                if (tmp_called_value_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                frame_d4aa0fafe4acbdf27c07092788ef7d84_9->m_frame.f_lineno = 69;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[88], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_26);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[89], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
            }
            {
                PyObject *tmp_ass_subvalue_36;
                PyObject *tmp_ass_subscribed_36;
                PyObject *tmp_ass_subscript_36;
                tmp_ass_subvalue_36 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[87]);

                if (tmp_ass_subvalue_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_36 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_ass_subvalue_36);
                    } else {
                        goto frame_exception_exit_9;
                    }
                }

                tmp_ass_subscribed_36 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_36);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 69;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }

                if (tmp_ass_subscribed_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_36);

                    exception_lineno = 69;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                tmp_ass_subscript_36 = mod_consts[89];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
                Py_DECREF(tmp_ass_subscribed_36);
                Py_DECREF(tmp_ass_subvalue_36);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 69;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
            }
            {
                PyObject *tmp_called_value_27;
                PyObject *tmp_expression_value_53;
                tmp_expression_value_53 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[17]);

                if (tmp_expression_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_53 == NULL)) {
                            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_53 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 70;
                            type_description_3 = "o";
                            goto frame_exception_exit_9;
                        }
                        Py_INCREF(tmp_expression_value_53);
                    } else {
                        goto frame_exception_exit_9;
                    }
                }

                tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[49]);
                Py_DECREF(tmp_expression_value_53);
                if (tmp_called_value_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                frame_d4aa0fafe4acbdf27c07092788ef7d84_9->m_frame.f_lineno = 70;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_27, &PyTuple_GET_ITEM(mod_consts[90], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_27);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[52], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
            }
            {
                PyObject *tmp_ass_subvalue_37;
                PyObject *tmp_ass_subscribed_37;
                PyObject *tmp_ass_subscript_37;
                tmp_ass_subvalue_37 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[53]);

                if (tmp_ass_subvalue_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_37 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_ass_subvalue_37);
                    } else {
                        goto frame_exception_exit_9;
                    }
                }

                tmp_ass_subscribed_37 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_37);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 70;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }

                if (tmp_ass_subscribed_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_37);

                    exception_lineno = 70;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
                tmp_ass_subscript_37 = mod_consts[52];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
                Py_DECREF(tmp_ass_subscribed_37);
                Py_DECREF(tmp_ass_subvalue_37);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_3 = "o";
                    goto frame_exception_exit_9;
                }
            }


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_7;
            frame_exception_exit_9:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_d4aa0fafe4acbdf27c07092788ef7d84_9, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_d4aa0fafe4acbdf27c07092788ef7d84_9->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_d4aa0fafe4acbdf27c07092788ef7d84_9, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_d4aa0fafe4acbdf27c07092788ef7d84_9,
                type_description_3,
                outline_8_var___class__
            );



            assertFrameObject(frame_d4aa0fafe4acbdf27c07092788ef7d84_9);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_8;
            frame_no_exception_7:;
            goto skip_nested_handling_7;
            nested_frame_exit_8:;
            type_description_2 = "c";
            goto try_except_handler_28;
            skip_nested_handling_7:;
            {
                nuitka_bool tmp_condition_result_31;
                PyObject *tmp_cmp_expr_left_7;
                PyObject *tmp_cmp_expr_right_7;
                CHECK_OBJECT(tmp_Path$class_creation_8__bases);
                tmp_cmp_expr_left_7 = tmp_Path$class_creation_8__bases;
                CHECK_OBJECT(tmp_Path$class_creation_8__bases_orig);
                tmp_cmp_expr_right_7 = tmp_Path$class_creation_8__bases_orig;
                tmp_condition_result_31 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
                if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;
                    type_description_2 = "c";
                    goto try_except_handler_28;
                }
                if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_23;
                } else {
                    goto branch_no_23;
                }
            }
            branch_yes_23:;
            CHECK_OBJECT(tmp_Path$class_creation_8__bases_orig);
            tmp_dictset_value = tmp_Path$class_creation_8__bases_orig;
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__9_ArcTo_63, mod_consts[54], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_28;
            }
            branch_no_23:;
            {
                PyObject *tmp_assign_source_70;
                PyObject *tmp_called_value_28;
                PyObject *tmp_args_value_16;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_kwargs_value_16;
                CHECK_OBJECT(tmp_Path$class_creation_8__metaclass);
                tmp_called_value_28 = tmp_Path$class_creation_8__metaclass;
                tmp_tuple_element_32 = mod_consts[80];
                tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_32);
                CHECK_OBJECT(tmp_Path$class_creation_8__bases);
                tmp_tuple_element_32 = tmp_Path$class_creation_8__bases;
                PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_32);
                tmp_tuple_element_32 = locals_flet_core$canvas$path$$$class__9_ArcTo_63;
                PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_32);
                CHECK_OBJECT(tmp_Path$class_creation_8__class_decl_dict);
                tmp_kwargs_value_16 = tmp_Path$class_creation_8__class_decl_dict;
                frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 63;
                tmp_assign_source_70 = CALL_FUNCTION(tmp_called_value_28, tmp_args_value_16, tmp_kwargs_value_16);
                Py_DECREF(tmp_args_value_16);
                if (tmp_assign_source_70 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;
                    type_description_2 = "c";
                    goto try_except_handler_28;
                }
                assert(outline_8_var___class__ == NULL);
                outline_8_var___class__ = tmp_assign_source_70;
            }
            CHECK_OBJECT(outline_8_var___class__);
            tmp_args_element_value_8 = outline_8_var___class__;
            Py_INCREF(tmp_args_element_value_8);
            goto try_return_handler_28;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_28:;
            Py_DECREF(locals_flet_core$canvas$path$$$class__9_ArcTo_63);
            locals_flet_core$canvas$path$$$class__9_ArcTo_63 = NULL;
            goto try_return_handler_27;
            // Exception handler code:
            try_except_handler_28:;
            exception_keeper_type_23 = exception_type;
            exception_keeper_value_23 = exception_value;
            exception_keeper_tb_23 = exception_tb;
            exception_keeper_lineno_23 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF(locals_flet_core$canvas$path$$$class__9_ArcTo_63);
            locals_flet_core$canvas$path$$$class__9_ArcTo_63 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_23;
            exception_value = exception_keeper_value_23;
            exception_tb = exception_keeper_tb_23;
            exception_lineno = exception_keeper_lineno_23;

            goto try_except_handler_27;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_27:;
            CHECK_OBJECT(outline_8_var___class__);
            Py_DECREF(outline_8_var___class__);
            outline_8_var___class__ = NULL;
            goto outline_result_9;
            // Exception handler code:
            try_except_handler_27:;
            exception_keeper_type_24 = exception_type;
            exception_keeper_value_24 = exception_value;
            exception_keeper_tb_24 = exception_tb;
            exception_keeper_lineno_24 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_24;
            exception_value = exception_keeper_value_24;
            exception_tb = exception_keeper_tb_24;
            exception_lineno = exception_keeper_lineno_24;

            goto outline_exception_9;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_9:;
            exception_lineno = 63;
            goto try_except_handler_26;
            outline_result_9:;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 62;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[39], tmp_args_element_value_8);
            Py_DECREF(tmp_called_instance_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "c";
                goto try_except_handler_26;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto try_except_handler_26;
            }
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Path$class_creation_8__bases_orig);
        Py_DECREF(tmp_Path$class_creation_8__bases_orig);
        tmp_Path$class_creation_8__bases_orig = NULL;
        Py_XDECREF(tmp_Path$class_creation_8__bases);
        tmp_Path$class_creation_8__bases = NULL;
        Py_XDECREF(tmp_Path$class_creation_8__class_decl_dict);
        tmp_Path$class_creation_8__class_decl_dict = NULL;
        Py_XDECREF(tmp_Path$class_creation_8__metaclass);
        tmp_Path$class_creation_8__metaclass = NULL;
        Py_XDECREF(tmp_Path$class_creation_8__prepared);
        tmp_Path$class_creation_8__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto frame_exception_exit_2;
        // End of try:
        try_end_9:;
        CHECK_OBJECT(tmp_Path$class_creation_8__bases_orig);
        Py_DECREF(tmp_Path$class_creation_8__bases_orig);
        tmp_Path$class_creation_8__bases_orig = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_8__bases);
        Py_DECREF(tmp_Path$class_creation_8__bases);
        tmp_Path$class_creation_8__bases = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_8__class_decl_dict);
        Py_DECREF(tmp_Path$class_creation_8__class_decl_dict);
        tmp_Path$class_creation_8__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_8__metaclass);
        Py_DECREF(tmp_Path$class_creation_8__metaclass);
        tmp_Path$class_creation_8__metaclass = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_8__prepared);
        Py_DECREF(tmp_Path$class_creation_8__prepared);
        tmp_Path$class_creation_8__prepared = NULL;
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_tuple_element_33;
            tmp_tuple_element_33 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41]);

            if (unlikely(tmp_tuple_element_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 73;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_assign_source_71 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_71, 0, tmp_tuple_element_33);
            assert(tmp_Path$class_creation_9__bases_orig == NULL);
            tmp_Path$class_creation_9__bases_orig = tmp_assign_source_71;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_dircall_arg1_9;
            CHECK_OBJECT(tmp_Path$class_creation_9__bases_orig);
            tmp_dircall_arg1_9 = tmp_Path$class_creation_9__bases_orig;
            Py_INCREF(tmp_dircall_arg1_9);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
                tmp_assign_source_72 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_29;
            }
            assert(tmp_Path$class_creation_9__bases == NULL);
            tmp_Path$class_creation_9__bases = tmp_assign_source_72;
        }
        {
            PyObject *tmp_assign_source_73;
            tmp_assign_source_73 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_9__class_decl_dict == NULL);
            tmp_Path$class_creation_9__class_decl_dict = tmp_assign_source_73;
        }
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_metaclass_value_9;
            nuitka_bool tmp_condition_result_32;
            int tmp_truth_name_9;
            PyObject *tmp_type_arg_17;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_bases_value_9;
            CHECK_OBJECT(tmp_Path$class_creation_9__bases);
            tmp_truth_name_9 = CHECK_IF_TRUE(tmp_Path$class_creation_9__bases);
            if (tmp_truth_name_9 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_29;
            }
            tmp_condition_result_32 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            CHECK_OBJECT(tmp_Path$class_creation_9__bases);
            tmp_expression_value_54 = tmp_Path$class_creation_9__bases;
            tmp_subscript_value_10 = mod_consts[18];
            tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_54, tmp_subscript_value_10, 0);
            if (tmp_type_arg_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_29;
            }
            tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
            Py_DECREF(tmp_type_arg_17);
            if (tmp_metaclass_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_29;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_9);
            condexpr_end_9:;
            CHECK_OBJECT(tmp_Path$class_creation_9__bases);
            tmp_bases_value_9 = tmp_Path$class_creation_9__bases;
            tmp_assign_source_74 = SELECT_METACLASS(tmp_metaclass_value_9, tmp_bases_value_9);
            Py_DECREF(tmp_metaclass_value_9);
            if (tmp_assign_source_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_29;
            }
            assert(tmp_Path$class_creation_9__metaclass == NULL);
            tmp_Path$class_creation_9__metaclass = tmp_assign_source_74;
        }
        {
            nuitka_bool tmp_condition_result_33;
            PyObject *tmp_expression_value_55;
            CHECK_OBJECT(tmp_Path$class_creation_9__metaclass);
            tmp_expression_value_55 = tmp_Path$class_creation_9__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_55, mod_consts[30]);
            tmp_condition_result_33 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        {
            PyObject *tmp_assign_source_75;
            PyObject *tmp_called_value_29;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_kwargs_value_17;
            CHECK_OBJECT(tmp_Path$class_creation_9__metaclass);
            tmp_expression_value_56 = tmp_Path$class_creation_9__metaclass;
            tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[30]);
            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_29;
            }
            tmp_tuple_element_34 = mod_consts[91];
            tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_Path$class_creation_9__bases);
            tmp_tuple_element_34 = tmp_Path$class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_Path$class_creation_9__class_decl_dict);
            tmp_kwargs_value_17 = tmp_Path$class_creation_9__class_decl_dict;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 73;
            tmp_assign_source_75 = CALL_FUNCTION(tmp_called_value_29, tmp_args_value_17, tmp_kwargs_value_17);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_value_17);
            if (tmp_assign_source_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_29;
            }
            assert(tmp_Path$class_creation_9__prepared == NULL);
            tmp_Path$class_creation_9__prepared = tmp_assign_source_75;
        }
        {
            bool tmp_condition_result_34;
            PyObject *tmp_operand_value_9;
            PyObject *tmp_expression_value_57;
            CHECK_OBJECT(tmp_Path$class_creation_9__prepared);
            tmp_expression_value_57 = tmp_Path$class_creation_9__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_57, mod_consts[32]);
            tmp_operand_value_9 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_29;
            }
            tmp_condition_result_34 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_34 != false) {
                goto branch_yes_25;
            } else {
                goto branch_no_25;
            }
        }
        branch_yes_25:;
        {
            PyObject *tmp_raise_type_9;
            PyObject *tmp_raise_value_9;
            PyObject *tmp_mod_expr_left_9;
            PyObject *tmp_mod_expr_right_9;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_getattr_target_9;
            PyObject *tmp_getattr_attr_9;
            PyObject *tmp_getattr_default_9;
            tmp_raise_type_9 = PyExc_TypeError;
            tmp_mod_expr_left_9 = mod_consts[33];
            CHECK_OBJECT(tmp_Path$class_creation_9__metaclass);
            tmp_getattr_target_9 = tmp_Path$class_creation_9__metaclass;
            tmp_getattr_attr_9 = mod_consts[34];
            tmp_getattr_default_9 = mod_consts[35];
            tmp_tuple_element_35 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_29;
            }
            tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_58;
                PyObject *tmp_type_arg_18;
                PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_35);
                CHECK_OBJECT(tmp_Path$class_creation_9__prepared);
                tmp_type_arg_18 = tmp_Path$class_creation_9__prepared;
                tmp_expression_value_58 = BUILTIN_TYPE1(tmp_type_arg_18);
                assert(!(tmp_expression_value_58 == NULL));
                tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[34]);
                Py_DECREF(tmp_expression_value_58);
                if (tmp_tuple_element_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_35);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_mod_expr_right_9);
            goto try_except_handler_29;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
            Py_DECREF(tmp_mod_expr_right_9);
            if (tmp_raise_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_29;
            }
            exception_type = tmp_raise_type_9;
            Py_INCREF(tmp_raise_type_9);
            exception_value = tmp_raise_value_9;
            exception_lineno = 73;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "c";
            goto try_except_handler_29;
        }
        branch_no_25:;
        goto branch_end_24;
        branch_no_24:;
        {
            PyObject *tmp_assign_source_76;
            tmp_assign_source_76 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_9__prepared == NULL);
            tmp_Path$class_creation_9__prepared = tmp_assign_source_76;
        }
        branch_end_24:;
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_value_9;
            tmp_called_instance_9 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[17]);

            if (tmp_called_instance_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_instance_9 == NULL)) {
                        tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_instance_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
                        type_description_2 = "c";
                        goto try_except_handler_29;
                    }
                    Py_INCREF(tmp_called_instance_9);
                } else {
                    goto try_except_handler_29;
                }
            }

            {
                PyObject *tmp_set_locals_10;
                CHECK_OBJECT(tmp_Path$class_creation_9__prepared);
                tmp_set_locals_10 = tmp_Path$class_creation_9__prepared;
                locals_flet_core$canvas$path$$$class__10_Oval_73 = tmp_set_locals_10;
                Py_INCREF(tmp_set_locals_10);
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = mod_consts[36];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[37], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_31;
            }
            tmp_dictset_value = mod_consts[92];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[38], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_31;
            }
            tmp_dictset_value = MAKE_DICT_EMPTY();
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_31;
            }
            frame_caf85a45699b2982582fc53e79f3e87e_10 = MAKE_CLASS_FRAME(codeobj_caf85a45699b2982582fc53e79f3e87e, module_flet_core$canvas$path, NULL, sizeof(void *));

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_caf85a45699b2982582fc53e79f3e87e_10);
            assert(Py_REFCNT(frame_caf85a45699b2982582fc53e79f3e87e_10) == 2);

            // Framed code:
            {
                PyObject *tmp_ass_subvalue_38;
                PyObject *tmp_ass_subscribed_38;
                PyObject *tmp_ass_subscript_38;
                tmp_ass_subvalue_38 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[46]);

                if (tmp_ass_subvalue_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_38 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_38);
                    } else {
                        goto frame_exception_exit_10;
                    }
                }

                tmp_ass_subscribed_38 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_38);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 74;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }

                if (tmp_ass_subscribed_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_38);

                    exception_lineno = 74;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
                tmp_ass_subscript_38 = mod_consts[47];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
                Py_DECREF(tmp_ass_subscribed_38);
                Py_DECREF(tmp_ass_subvalue_38);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
            }
            {
                PyObject *tmp_ass_subvalue_39;
                PyObject *tmp_ass_subscribed_39;
                PyObject *tmp_ass_subscript_39;
                tmp_ass_subvalue_39 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[46]);

                if (tmp_ass_subvalue_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_39 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_39);
                    } else {
                        goto frame_exception_exit_10;
                    }
                }

                tmp_ass_subscribed_39 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_39);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 75;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }

                if (tmp_ass_subscribed_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_39);

                    exception_lineno = 75;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
                tmp_ass_subscript_39 = mod_consts[48];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
                Py_DECREF(tmp_ass_subscribed_39);
                Py_DECREF(tmp_ass_subvalue_39);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
            }
            {
                PyObject *tmp_ass_subvalue_40;
                PyObject *tmp_ass_subscribed_40;
                PyObject *tmp_ass_subscript_40;
                tmp_ass_subvalue_40 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[46]);

                if (tmp_ass_subvalue_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_40 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_40);
                    } else {
                        goto frame_exception_exit_10;
                    }
                }

                tmp_ass_subscribed_40 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_40);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 76;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }

                if (tmp_ass_subscribed_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_40);

                    exception_lineno = 76;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
                tmp_ass_subscript_40 = mod_consts[75];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
                Py_DECREF(tmp_ass_subscribed_40);
                Py_DECREF(tmp_ass_subvalue_40);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
            }
            {
                PyObject *tmp_ass_subvalue_41;
                PyObject *tmp_ass_subscribed_41;
                PyObject *tmp_ass_subscript_41;
                tmp_ass_subvalue_41 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[46]);

                if (tmp_ass_subvalue_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_41 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_41);
                    } else {
                        goto frame_exception_exit_10;
                    }
                }

                tmp_ass_subscribed_41 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_41);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 77;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }

                if (tmp_ass_subscribed_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_41);

                    exception_lineno = 77;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
                tmp_ass_subscript_41 = mod_consts[76];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
                Py_DECREF(tmp_ass_subscribed_41);
                Py_DECREF(tmp_ass_subvalue_41);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
            }
            {
                PyObject *tmp_called_value_30;
                PyObject *tmp_expression_value_59;
                tmp_expression_value_59 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[17]);

                if (tmp_expression_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_59 == NULL)) {
                            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_59 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
                            type_description_3 = "o";
                            goto frame_exception_exit_10;
                        }
                        Py_INCREF(tmp_expression_value_59);
                    } else {
                        goto frame_exception_exit_10;
                    }
                }

                tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[49]);
                Py_DECREF(tmp_expression_value_59);
                if (tmp_called_value_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
                frame_caf85a45699b2982582fc53e79f3e87e_10->m_frame.f_lineno = 78;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts[93], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_30);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[52], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
            }
            {
                PyObject *tmp_ass_subvalue_42;
                PyObject *tmp_ass_subscribed_42;
                PyObject *tmp_ass_subscript_42;
                tmp_ass_subvalue_42 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[53]);

                if (tmp_ass_subvalue_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_42 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_ass_subvalue_42);
                    } else {
                        goto frame_exception_exit_10;
                    }
                }

                tmp_ass_subscribed_42 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_42);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 78;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }

                if (tmp_ass_subscribed_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_42);

                    exception_lineno = 78;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
                tmp_ass_subscript_42 = mod_consts[52];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
                Py_DECREF(tmp_ass_subscribed_42);
                Py_DECREF(tmp_ass_subvalue_42);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;
                    type_description_3 = "o";
                    goto frame_exception_exit_10;
                }
            }


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_8;
            frame_exception_exit_10:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_caf85a45699b2982582fc53e79f3e87e_10, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_caf85a45699b2982582fc53e79f3e87e_10->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_caf85a45699b2982582fc53e79f3e87e_10, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_caf85a45699b2982582fc53e79f3e87e_10,
                type_description_3,
                outline_9_var___class__
            );



            assertFrameObject(frame_caf85a45699b2982582fc53e79f3e87e_10);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_9;
            frame_no_exception_8:;
            goto skip_nested_handling_8;
            nested_frame_exit_9:;
            type_description_2 = "c";
            goto try_except_handler_31;
            skip_nested_handling_8:;
            {
                nuitka_bool tmp_condition_result_35;
                PyObject *tmp_cmp_expr_left_8;
                PyObject *tmp_cmp_expr_right_8;
                CHECK_OBJECT(tmp_Path$class_creation_9__bases);
                tmp_cmp_expr_left_8 = tmp_Path$class_creation_9__bases;
                CHECK_OBJECT(tmp_Path$class_creation_9__bases_orig);
                tmp_cmp_expr_right_8 = tmp_Path$class_creation_9__bases_orig;
                tmp_condition_result_35 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
                if (tmp_condition_result_35 == NUITKA_BOOL_EXCEPTION) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_2 = "c";
                    goto try_except_handler_31;
                }
                if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_26;
                } else {
                    goto branch_no_26;
                }
            }
            branch_yes_26:;
            CHECK_OBJECT(tmp_Path$class_creation_9__bases_orig);
            tmp_dictset_value = tmp_Path$class_creation_9__bases_orig;
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__10_Oval_73, mod_consts[54], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_31;
            }
            branch_no_26:;
            {
                PyObject *tmp_assign_source_77;
                PyObject *tmp_called_value_31;
                PyObject *tmp_args_value_18;
                PyObject *tmp_tuple_element_36;
                PyObject *tmp_kwargs_value_18;
                CHECK_OBJECT(tmp_Path$class_creation_9__metaclass);
                tmp_called_value_31 = tmp_Path$class_creation_9__metaclass;
                tmp_tuple_element_36 = mod_consts[91];
                tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_36);
                CHECK_OBJECT(tmp_Path$class_creation_9__bases);
                tmp_tuple_element_36 = tmp_Path$class_creation_9__bases;
                PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_36);
                tmp_tuple_element_36 = locals_flet_core$canvas$path$$$class__10_Oval_73;
                PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_36);
                CHECK_OBJECT(tmp_Path$class_creation_9__class_decl_dict);
                tmp_kwargs_value_18 = tmp_Path$class_creation_9__class_decl_dict;
                frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 73;
                tmp_assign_source_77 = CALL_FUNCTION(tmp_called_value_31, tmp_args_value_18, tmp_kwargs_value_18);
                Py_DECREF(tmp_args_value_18);
                if (tmp_assign_source_77 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_2 = "c";
                    goto try_except_handler_31;
                }
                assert(outline_9_var___class__ == NULL);
                outline_9_var___class__ = tmp_assign_source_77;
            }
            CHECK_OBJECT(outline_9_var___class__);
            tmp_args_element_value_9 = outline_9_var___class__;
            Py_INCREF(tmp_args_element_value_9);
            goto try_return_handler_31;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_31:;
            Py_DECREF(locals_flet_core$canvas$path$$$class__10_Oval_73);
            locals_flet_core$canvas$path$$$class__10_Oval_73 = NULL;
            goto try_return_handler_30;
            // Exception handler code:
            try_except_handler_31:;
            exception_keeper_type_26 = exception_type;
            exception_keeper_value_26 = exception_value;
            exception_keeper_tb_26 = exception_tb;
            exception_keeper_lineno_26 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF(locals_flet_core$canvas$path$$$class__10_Oval_73);
            locals_flet_core$canvas$path$$$class__10_Oval_73 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_26;
            exception_value = exception_keeper_value_26;
            exception_tb = exception_keeper_tb_26;
            exception_lineno = exception_keeper_lineno_26;

            goto try_except_handler_30;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_30:;
            CHECK_OBJECT(outline_9_var___class__);
            Py_DECREF(outline_9_var___class__);
            outline_9_var___class__ = NULL;
            goto outline_result_10;
            // Exception handler code:
            try_except_handler_30:;
            exception_keeper_type_27 = exception_type;
            exception_keeper_value_27 = exception_value;
            exception_keeper_tb_27 = exception_tb;
            exception_keeper_lineno_27 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_27;
            exception_value = exception_keeper_value_27;
            exception_tb = exception_keeper_tb_27;
            exception_lineno = exception_keeper_lineno_27;

            goto outline_exception_10;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_10:;
            exception_lineno = 73;
            goto try_except_handler_29;
            outline_result_10:;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[39], tmp_args_element_value_9);
            Py_DECREF(tmp_called_instance_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "c";
                goto try_except_handler_29;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[91], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto try_except_handler_29;
            }
        }
        goto try_end_10;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Path$class_creation_9__bases_orig);
        Py_DECREF(tmp_Path$class_creation_9__bases_orig);
        tmp_Path$class_creation_9__bases_orig = NULL;
        Py_XDECREF(tmp_Path$class_creation_9__bases);
        tmp_Path$class_creation_9__bases = NULL;
        Py_XDECREF(tmp_Path$class_creation_9__class_decl_dict);
        tmp_Path$class_creation_9__class_decl_dict = NULL;
        Py_XDECREF(tmp_Path$class_creation_9__metaclass);
        tmp_Path$class_creation_9__metaclass = NULL;
        Py_XDECREF(tmp_Path$class_creation_9__prepared);
        tmp_Path$class_creation_9__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto frame_exception_exit_2;
        // End of try:
        try_end_10:;
        CHECK_OBJECT(tmp_Path$class_creation_9__bases_orig);
        Py_DECREF(tmp_Path$class_creation_9__bases_orig);
        tmp_Path$class_creation_9__bases_orig = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_9__bases);
        Py_DECREF(tmp_Path$class_creation_9__bases);
        tmp_Path$class_creation_9__bases = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_9__class_decl_dict);
        Py_DECREF(tmp_Path$class_creation_9__class_decl_dict);
        tmp_Path$class_creation_9__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_9__metaclass);
        Py_DECREF(tmp_Path$class_creation_9__metaclass);
        tmp_Path$class_creation_9__metaclass = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_9__prepared);
        Py_DECREF(tmp_Path$class_creation_9__prepared);
        tmp_Path$class_creation_9__prepared = NULL;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_tuple_element_37;
            tmp_tuple_element_37 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41]);

            if (unlikely(tmp_tuple_element_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_assign_source_78 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_78, 0, tmp_tuple_element_37);
            assert(tmp_Path$class_creation_10__bases_orig == NULL);
            tmp_Path$class_creation_10__bases_orig = tmp_assign_source_78;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_dircall_arg1_10;
            CHECK_OBJECT(tmp_Path$class_creation_10__bases_orig);
            tmp_dircall_arg1_10 = tmp_Path$class_creation_10__bases_orig;
            Py_INCREF(tmp_dircall_arg1_10);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
                tmp_assign_source_79 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_32;
            }
            assert(tmp_Path$class_creation_10__bases == NULL);
            tmp_Path$class_creation_10__bases = tmp_assign_source_79;
        }
        {
            PyObject *tmp_assign_source_80;
            tmp_assign_source_80 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_10__class_decl_dict == NULL);
            tmp_Path$class_creation_10__class_decl_dict = tmp_assign_source_80;
        }
        {
            PyObject *tmp_assign_source_81;
            PyObject *tmp_metaclass_value_10;
            nuitka_bool tmp_condition_result_36;
            int tmp_truth_name_10;
            PyObject *tmp_type_arg_19;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_bases_value_10;
            CHECK_OBJECT(tmp_Path$class_creation_10__bases);
            tmp_truth_name_10 = CHECK_IF_TRUE(tmp_Path$class_creation_10__bases);
            if (tmp_truth_name_10 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_32;
            }
            tmp_condition_result_36 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            CHECK_OBJECT(tmp_Path$class_creation_10__bases);
            tmp_expression_value_60 = tmp_Path$class_creation_10__bases;
            tmp_subscript_value_11 = mod_consts[18];
            tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_60, tmp_subscript_value_11, 0);
            if (tmp_type_arg_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_32;
            }
            tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
            Py_DECREF(tmp_type_arg_19);
            if (tmp_metaclass_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_32;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_10);
            condexpr_end_10:;
            CHECK_OBJECT(tmp_Path$class_creation_10__bases);
            tmp_bases_value_10 = tmp_Path$class_creation_10__bases;
            tmp_assign_source_81 = SELECT_METACLASS(tmp_metaclass_value_10, tmp_bases_value_10);
            Py_DECREF(tmp_metaclass_value_10);
            if (tmp_assign_source_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_32;
            }
            assert(tmp_Path$class_creation_10__metaclass == NULL);
            tmp_Path$class_creation_10__metaclass = tmp_assign_source_81;
        }
        {
            nuitka_bool tmp_condition_result_37;
            PyObject *tmp_expression_value_61;
            CHECK_OBJECT(tmp_Path$class_creation_10__metaclass);
            tmp_expression_value_61 = tmp_Path$class_creation_10__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_61, mod_consts[30]);
            tmp_condition_result_37 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_called_value_32;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_args_value_19;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_kwargs_value_19;
            CHECK_OBJECT(tmp_Path$class_creation_10__metaclass);
            tmp_expression_value_62 = tmp_Path$class_creation_10__metaclass;
            tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[30]);
            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_32;
            }
            tmp_tuple_element_38 = mod_consts[94];
            tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_Path$class_creation_10__bases);
            tmp_tuple_element_38 = tmp_Path$class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_Path$class_creation_10__class_decl_dict);
            tmp_kwargs_value_19 = tmp_Path$class_creation_10__class_decl_dict;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 81;
            tmp_assign_source_82 = CALL_FUNCTION(tmp_called_value_32, tmp_args_value_19, tmp_kwargs_value_19);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_value_19);
            if (tmp_assign_source_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_32;
            }
            assert(tmp_Path$class_creation_10__prepared == NULL);
            tmp_Path$class_creation_10__prepared = tmp_assign_source_82;
        }
        {
            bool tmp_condition_result_38;
            PyObject *tmp_operand_value_10;
            PyObject *tmp_expression_value_63;
            CHECK_OBJECT(tmp_Path$class_creation_10__prepared);
            tmp_expression_value_63 = tmp_Path$class_creation_10__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_63, mod_consts[32]);
            tmp_operand_value_10 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_32;
            }
            tmp_condition_result_38 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_38 != false) {
                goto branch_yes_28;
            } else {
                goto branch_no_28;
            }
        }
        branch_yes_28:;
        {
            PyObject *tmp_raise_type_10;
            PyObject *tmp_raise_value_10;
            PyObject *tmp_mod_expr_left_10;
            PyObject *tmp_mod_expr_right_10;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_getattr_target_10;
            PyObject *tmp_getattr_attr_10;
            PyObject *tmp_getattr_default_10;
            tmp_raise_type_10 = PyExc_TypeError;
            tmp_mod_expr_left_10 = mod_consts[33];
            CHECK_OBJECT(tmp_Path$class_creation_10__metaclass);
            tmp_getattr_target_10 = tmp_Path$class_creation_10__metaclass;
            tmp_getattr_attr_10 = mod_consts[34];
            tmp_getattr_default_10 = mod_consts[35];
            tmp_tuple_element_39 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10);
            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_32;
            }
            tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_64;
                PyObject *tmp_type_arg_20;
                PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_39);
                CHECK_OBJECT(tmp_Path$class_creation_10__prepared);
                tmp_type_arg_20 = tmp_Path$class_creation_10__prepared;
                tmp_expression_value_64 = BUILTIN_TYPE1(tmp_type_arg_20);
                assert(!(tmp_expression_value_64 == NULL));
                tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[34]);
                Py_DECREF(tmp_expression_value_64);
                if (tmp_tuple_element_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 81;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_39);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_mod_expr_right_10);
            goto try_except_handler_32;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
            Py_DECREF(tmp_mod_expr_right_10);
            if (tmp_raise_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_32;
            }
            exception_type = tmp_raise_type_10;
            Py_INCREF(tmp_raise_type_10);
            exception_value = tmp_raise_value_10;
            exception_lineno = 81;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "c";
            goto try_except_handler_32;
        }
        branch_no_28:;
        goto branch_end_27;
        branch_no_27:;
        {
            PyObject *tmp_assign_source_83;
            tmp_assign_source_83 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_10__prepared == NULL);
            tmp_Path$class_creation_10__prepared = tmp_assign_source_83;
        }
        branch_end_27:;
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_value_10;
            tmp_called_instance_10 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[17]);

            if (tmp_called_instance_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_instance_10 == NULL)) {
                        tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_instance_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 80;
                        type_description_2 = "c";
                        goto try_except_handler_32;
                    }
                    Py_INCREF(tmp_called_instance_10);
                } else {
                    goto try_except_handler_32;
                }
            }

            {
                PyObject *tmp_set_locals_11;
                CHECK_OBJECT(tmp_Path$class_creation_10__prepared);
                tmp_set_locals_11 = tmp_Path$class_creation_10__prepared;
                locals_flet_core$canvas$path$$$class__11_Rect_81 = tmp_set_locals_11;
                Py_INCREF(tmp_set_locals_11);
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = mod_consts[36];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[37], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_34;
            }
            tmp_dictset_value = mod_consts[95];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[38], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_34;
            }
            tmp_dictset_value = MAKE_DICT_EMPTY();
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_34;
            }
            frame_4aec26ba781d7d73ce9a909a346b0daf_11 = MAKE_CLASS_FRAME(codeobj_4aec26ba781d7d73ce9a909a346b0daf, module_flet_core$canvas$path, NULL, sizeof(void *));

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_4aec26ba781d7d73ce9a909a346b0daf_11);
            assert(Py_REFCNT(frame_4aec26ba781d7d73ce9a909a346b0daf_11) == 2);

            // Framed code:
            {
                PyObject *tmp_ass_subvalue_43;
                PyObject *tmp_ass_subscribed_43;
                PyObject *tmp_ass_subscript_43;
                tmp_ass_subvalue_43 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[46]);

                if (tmp_ass_subvalue_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_43 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_43);
                    } else {
                        goto frame_exception_exit_11;
                    }
                }

                tmp_ass_subscribed_43 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_43);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 82;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }

                if (tmp_ass_subscribed_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_43);

                    exception_lineno = 82;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
                tmp_ass_subscript_43 = mod_consts[47];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
                Py_DECREF(tmp_ass_subscribed_43);
                Py_DECREF(tmp_ass_subvalue_43);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 82;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
            }
            {
                PyObject *tmp_ass_subvalue_44;
                PyObject *tmp_ass_subscribed_44;
                PyObject *tmp_ass_subscript_44;
                tmp_ass_subvalue_44 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[46]);

                if (tmp_ass_subvalue_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_44 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_44);
                    } else {
                        goto frame_exception_exit_11;
                    }
                }

                tmp_ass_subscribed_44 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_44);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 83;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }

                if (tmp_ass_subscribed_44 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_44);

                    exception_lineno = 83;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
                tmp_ass_subscript_44 = mod_consts[48];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
                Py_DECREF(tmp_ass_subscribed_44);
                Py_DECREF(tmp_ass_subvalue_44);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
            }
            {
                PyObject *tmp_ass_subvalue_45;
                PyObject *tmp_ass_subscribed_45;
                PyObject *tmp_ass_subscript_45;
                tmp_ass_subvalue_45 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[46]);

                if (tmp_ass_subvalue_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_45 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_45);
                    } else {
                        goto frame_exception_exit_11;
                    }
                }

                tmp_ass_subscribed_45 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_45 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_45);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 84;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }

                if (tmp_ass_subscribed_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_45);

                    exception_lineno = 84;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
                tmp_ass_subscript_45 = mod_consts[75];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
                Py_DECREF(tmp_ass_subscribed_45);
                Py_DECREF(tmp_ass_subvalue_45);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
            }
            {
                PyObject *tmp_ass_subvalue_46;
                PyObject *tmp_ass_subscribed_46;
                PyObject *tmp_ass_subscript_46;
                tmp_ass_subvalue_46 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[46]);

                if (tmp_ass_subvalue_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_46 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_ass_subvalue_46);
                    } else {
                        goto frame_exception_exit_11;
                    }
                }

                tmp_ass_subscribed_46 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_46);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 85;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }

                if (tmp_ass_subscribed_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_46);

                    exception_lineno = 85;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
                tmp_ass_subscript_46 = mod_consts[76];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
                Py_DECREF(tmp_ass_subscribed_46);
                Py_DECREF(tmp_ass_subvalue_46);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 85;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
            }
            {
                PyObject *tmp_called_value_33;
                PyObject *tmp_expression_value_65;
                tmp_expression_value_65 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[17]);

                if (tmp_expression_value_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_65 == NULL)) {
                            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_65 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 86;
                            type_description_3 = "o";
                            goto frame_exception_exit_11;
                        }
                        Py_INCREF(tmp_expression_value_65);
                    } else {
                        goto frame_exception_exit_11;
                    }
                }

                tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[49]);
                Py_DECREF(tmp_expression_value_65);
                if (tmp_called_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
                frame_4aec26ba781d7d73ce9a909a346b0daf_11->m_frame.f_lineno = 86;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[96], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_33);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[97], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
            }
            {
                PyObject *tmp_ass_subvalue_47;
                PyObject *tmp_ass_subscribed_47;
                PyObject *tmp_ass_subscript_47;
                tmp_ass_subvalue_47 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[29]);

                if (tmp_ass_subvalue_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_ass_subvalue_47 == NULL)) {
                            tmp_ass_subvalue_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_ass_subvalue_47 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 86;
                            type_description_3 = "o";
                            goto frame_exception_exit_11;
                        }
                        Py_INCREF(tmp_ass_subvalue_47);
                    } else {
                        goto frame_exception_exit_11;
                    }
                }

                tmp_ass_subscribed_47 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_47);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 86;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }

                if (tmp_ass_subscribed_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_47);

                    exception_lineno = 86;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
                tmp_ass_subscript_47 = mod_consts[97];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
                Py_DECREF(tmp_ass_subscribed_47);
                Py_DECREF(tmp_ass_subvalue_47);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
            }
            {
                PyObject *tmp_called_value_34;
                PyObject *tmp_expression_value_66;
                tmp_expression_value_66 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[17]);

                if (tmp_expression_value_66 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_66 == NULL)) {
                            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_66 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 87;
                            type_description_3 = "o";
                            goto frame_exception_exit_11;
                        }
                        Py_INCREF(tmp_expression_value_66);
                    } else {
                        goto frame_exception_exit_11;
                    }
                }

                tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[49]);
                Py_DECREF(tmp_expression_value_66);
                if (tmp_called_value_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
                frame_4aec26ba781d7d73ce9a909a346b0daf_11->m_frame.f_lineno = 87;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_34, &PyTuple_GET_ITEM(mod_consts[98], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_34);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[52], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
            }
            {
                PyObject *tmp_ass_subvalue_48;
                PyObject *tmp_ass_subscribed_48;
                PyObject *tmp_ass_subscript_48;
                tmp_ass_subvalue_48 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[53]);

                if (tmp_ass_subvalue_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_48 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_ass_subvalue_48);
                    } else {
                        goto frame_exception_exit_11;
                    }
                }

                tmp_ass_subscribed_48 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_48 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_48);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 87;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }

                if (tmp_ass_subscribed_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_48);

                    exception_lineno = 87;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
                tmp_ass_subscript_48 = mod_consts[52];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
                Py_DECREF(tmp_ass_subscribed_48);
                Py_DECREF(tmp_ass_subvalue_48);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;
                    type_description_3 = "o";
                    goto frame_exception_exit_11;
                }
            }


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_9;
            frame_exception_exit_11:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_4aec26ba781d7d73ce9a909a346b0daf_11, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_4aec26ba781d7d73ce9a909a346b0daf_11->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_4aec26ba781d7d73ce9a909a346b0daf_11, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_4aec26ba781d7d73ce9a909a346b0daf_11,
                type_description_3,
                outline_10_var___class__
            );



            assertFrameObject(frame_4aec26ba781d7d73ce9a909a346b0daf_11);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_10;
            frame_no_exception_9:;
            goto skip_nested_handling_9;
            nested_frame_exit_10:;
            type_description_2 = "c";
            goto try_except_handler_34;
            skip_nested_handling_9:;
            {
                nuitka_bool tmp_condition_result_39;
                PyObject *tmp_cmp_expr_left_9;
                PyObject *tmp_cmp_expr_right_9;
                CHECK_OBJECT(tmp_Path$class_creation_10__bases);
                tmp_cmp_expr_left_9 = tmp_Path$class_creation_10__bases;
                CHECK_OBJECT(tmp_Path$class_creation_10__bases_orig);
                tmp_cmp_expr_right_9 = tmp_Path$class_creation_10__bases_orig;
                tmp_condition_result_39 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
                if (tmp_condition_result_39 == NUITKA_BOOL_EXCEPTION) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 81;
                    type_description_2 = "c";
                    goto try_except_handler_34;
                }
                if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_29;
                } else {
                    goto branch_no_29;
                }
            }
            branch_yes_29:;
            CHECK_OBJECT(tmp_Path$class_creation_10__bases_orig);
            tmp_dictset_value = tmp_Path$class_creation_10__bases_orig;
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__11_Rect_81, mod_consts[54], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_34;
            }
            branch_no_29:;
            {
                PyObject *tmp_assign_source_84;
                PyObject *tmp_called_value_35;
                PyObject *tmp_args_value_20;
                PyObject *tmp_tuple_element_40;
                PyObject *tmp_kwargs_value_20;
                CHECK_OBJECT(tmp_Path$class_creation_10__metaclass);
                tmp_called_value_35 = tmp_Path$class_creation_10__metaclass;
                tmp_tuple_element_40 = mod_consts[94];
                tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_40);
                CHECK_OBJECT(tmp_Path$class_creation_10__bases);
                tmp_tuple_element_40 = tmp_Path$class_creation_10__bases;
                PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_40);
                tmp_tuple_element_40 = locals_flet_core$canvas$path$$$class__11_Rect_81;
                PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_40);
                CHECK_OBJECT(tmp_Path$class_creation_10__class_decl_dict);
                tmp_kwargs_value_20 = tmp_Path$class_creation_10__class_decl_dict;
                frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 81;
                tmp_assign_source_84 = CALL_FUNCTION(tmp_called_value_35, tmp_args_value_20, tmp_kwargs_value_20);
                Py_DECREF(tmp_args_value_20);
                if (tmp_assign_source_84 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 81;
                    type_description_2 = "c";
                    goto try_except_handler_34;
                }
                assert(outline_10_var___class__ == NULL);
                outline_10_var___class__ = tmp_assign_source_84;
            }
            CHECK_OBJECT(outline_10_var___class__);
            tmp_args_element_value_10 = outline_10_var___class__;
            Py_INCREF(tmp_args_element_value_10);
            goto try_return_handler_34;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_34:;
            Py_DECREF(locals_flet_core$canvas$path$$$class__11_Rect_81);
            locals_flet_core$canvas$path$$$class__11_Rect_81 = NULL;
            goto try_return_handler_33;
            // Exception handler code:
            try_except_handler_34:;
            exception_keeper_type_29 = exception_type;
            exception_keeper_value_29 = exception_value;
            exception_keeper_tb_29 = exception_tb;
            exception_keeper_lineno_29 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF(locals_flet_core$canvas$path$$$class__11_Rect_81);
            locals_flet_core$canvas$path$$$class__11_Rect_81 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_29;
            exception_value = exception_keeper_value_29;
            exception_tb = exception_keeper_tb_29;
            exception_lineno = exception_keeper_lineno_29;

            goto try_except_handler_33;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_33:;
            CHECK_OBJECT(outline_10_var___class__);
            Py_DECREF(outline_10_var___class__);
            outline_10_var___class__ = NULL;
            goto outline_result_11;
            // Exception handler code:
            try_except_handler_33:;
            exception_keeper_type_30 = exception_type;
            exception_keeper_value_30 = exception_value;
            exception_keeper_tb_30 = exception_tb;
            exception_keeper_lineno_30 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_30;
            exception_value = exception_keeper_value_30;
            exception_tb = exception_keeper_tb_30;
            exception_lineno = exception_keeper_lineno_30;

            goto outline_exception_11;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_11:;
            exception_lineno = 81;
            goto try_except_handler_32;
            outline_result_11:;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[39], tmp_args_element_value_10);
            Py_DECREF(tmp_called_instance_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "c";
                goto try_except_handler_32;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto try_except_handler_32;
            }
        }
        goto try_end_11;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Path$class_creation_10__bases_orig);
        Py_DECREF(tmp_Path$class_creation_10__bases_orig);
        tmp_Path$class_creation_10__bases_orig = NULL;
        Py_XDECREF(tmp_Path$class_creation_10__bases);
        tmp_Path$class_creation_10__bases = NULL;
        Py_XDECREF(tmp_Path$class_creation_10__class_decl_dict);
        tmp_Path$class_creation_10__class_decl_dict = NULL;
        Py_XDECREF(tmp_Path$class_creation_10__metaclass);
        tmp_Path$class_creation_10__metaclass = NULL;
        Py_XDECREF(tmp_Path$class_creation_10__prepared);
        tmp_Path$class_creation_10__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto frame_exception_exit_2;
        // End of try:
        try_end_11:;
        CHECK_OBJECT(tmp_Path$class_creation_10__bases_orig);
        Py_DECREF(tmp_Path$class_creation_10__bases_orig);
        tmp_Path$class_creation_10__bases_orig = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_10__bases);
        Py_DECREF(tmp_Path$class_creation_10__bases);
        tmp_Path$class_creation_10__bases = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_10__class_decl_dict);
        Py_DECREF(tmp_Path$class_creation_10__class_decl_dict);
        tmp_Path$class_creation_10__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_10__metaclass);
        Py_DECREF(tmp_Path$class_creation_10__metaclass);
        tmp_Path$class_creation_10__metaclass = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_10__prepared);
        Py_DECREF(tmp_Path$class_creation_10__prepared);
        tmp_Path$class_creation_10__prepared = NULL;
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_tuple_element_41;
            tmp_tuple_element_41 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41]);

            if (unlikely(tmp_tuple_element_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_assign_source_85 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_85, 0, tmp_tuple_element_41);
            assert(tmp_Path$class_creation_11__bases_orig == NULL);
            tmp_Path$class_creation_11__bases_orig = tmp_assign_source_85;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_86;
            PyObject *tmp_dircall_arg1_11;
            CHECK_OBJECT(tmp_Path$class_creation_11__bases_orig);
            tmp_dircall_arg1_11 = tmp_Path$class_creation_11__bases_orig;
            Py_INCREF(tmp_dircall_arg1_11);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
                tmp_assign_source_86 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_35;
            }
            assert(tmp_Path$class_creation_11__bases == NULL);
            tmp_Path$class_creation_11__bases = tmp_assign_source_86;
        }
        {
            PyObject *tmp_assign_source_87;
            tmp_assign_source_87 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_11__class_decl_dict == NULL);
            tmp_Path$class_creation_11__class_decl_dict = tmp_assign_source_87;
        }
        {
            PyObject *tmp_assign_source_88;
            PyObject *tmp_metaclass_value_11;
            nuitka_bool tmp_condition_result_40;
            int tmp_truth_name_11;
            PyObject *tmp_type_arg_21;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_bases_value_11;
            CHECK_OBJECT(tmp_Path$class_creation_11__bases);
            tmp_truth_name_11 = CHECK_IF_TRUE(tmp_Path$class_creation_11__bases);
            if (tmp_truth_name_11 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_35;
            }
            tmp_condition_result_40 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            CHECK_OBJECT(tmp_Path$class_creation_11__bases);
            tmp_expression_value_67 = tmp_Path$class_creation_11__bases;
            tmp_subscript_value_12 = mod_consts[18];
            tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_67, tmp_subscript_value_12, 0);
            if (tmp_type_arg_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_35;
            }
            tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
            Py_DECREF(tmp_type_arg_21);
            if (tmp_metaclass_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_35;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_11);
            condexpr_end_11:;
            CHECK_OBJECT(tmp_Path$class_creation_11__bases);
            tmp_bases_value_11 = tmp_Path$class_creation_11__bases;
            tmp_assign_source_88 = SELECT_METACLASS(tmp_metaclass_value_11, tmp_bases_value_11);
            Py_DECREF(tmp_metaclass_value_11);
            if (tmp_assign_source_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_35;
            }
            assert(tmp_Path$class_creation_11__metaclass == NULL);
            tmp_Path$class_creation_11__metaclass = tmp_assign_source_88;
        }
        {
            nuitka_bool tmp_condition_result_41;
            PyObject *tmp_expression_value_68;
            CHECK_OBJECT(tmp_Path$class_creation_11__metaclass);
            tmp_expression_value_68 = tmp_Path$class_creation_11__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_68, mod_consts[30]);
            tmp_condition_result_41 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        {
            PyObject *tmp_assign_source_89;
            PyObject *tmp_called_value_36;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_args_value_21;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_kwargs_value_21;
            CHECK_OBJECT(tmp_Path$class_creation_11__metaclass);
            tmp_expression_value_69 = tmp_Path$class_creation_11__metaclass;
            tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[30]);
            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_35;
            }
            tmp_tuple_element_42 = mod_consts[99];
            tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_Path$class_creation_11__bases);
            tmp_tuple_element_42 = tmp_Path$class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_Path$class_creation_11__class_decl_dict);
            tmp_kwargs_value_21 = tmp_Path$class_creation_11__class_decl_dict;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 90;
            tmp_assign_source_89 = CALL_FUNCTION(tmp_called_value_36, tmp_args_value_21, tmp_kwargs_value_21);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_value_21);
            if (tmp_assign_source_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_35;
            }
            assert(tmp_Path$class_creation_11__prepared == NULL);
            tmp_Path$class_creation_11__prepared = tmp_assign_source_89;
        }
        {
            bool tmp_condition_result_42;
            PyObject *tmp_operand_value_11;
            PyObject *tmp_expression_value_70;
            CHECK_OBJECT(tmp_Path$class_creation_11__prepared);
            tmp_expression_value_70 = tmp_Path$class_creation_11__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_70, mod_consts[32]);
            tmp_operand_value_11 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_35;
            }
            tmp_condition_result_42 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_42 != false) {
                goto branch_yes_31;
            } else {
                goto branch_no_31;
            }
        }
        branch_yes_31:;
        {
            PyObject *tmp_raise_type_11;
            PyObject *tmp_raise_value_11;
            PyObject *tmp_mod_expr_left_11;
            PyObject *tmp_mod_expr_right_11;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_getattr_target_11;
            PyObject *tmp_getattr_attr_11;
            PyObject *tmp_getattr_default_11;
            tmp_raise_type_11 = PyExc_TypeError;
            tmp_mod_expr_left_11 = mod_consts[33];
            CHECK_OBJECT(tmp_Path$class_creation_11__metaclass);
            tmp_getattr_target_11 = tmp_Path$class_creation_11__metaclass;
            tmp_getattr_attr_11 = mod_consts[34];
            tmp_getattr_default_11 = mod_consts[35];
            tmp_tuple_element_43 = BUILTIN_GETATTR(tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_11);
            if (tmp_tuple_element_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_35;
            }
            tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_71;
                PyObject *tmp_type_arg_22;
                PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_43);
                CHECK_OBJECT(tmp_Path$class_creation_11__prepared);
                tmp_type_arg_22 = tmp_Path$class_creation_11__prepared;
                tmp_expression_value_71 = BUILTIN_TYPE1(tmp_type_arg_22);
                assert(!(tmp_expression_value_71 == NULL));
                tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[34]);
                Py_DECREF(tmp_expression_value_71);
                if (tmp_tuple_element_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_43);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_mod_expr_right_11);
            goto try_except_handler_35;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
            Py_DECREF(tmp_mod_expr_right_11);
            if (tmp_raise_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_35;
            }
            exception_type = tmp_raise_type_11;
            Py_INCREF(tmp_raise_type_11);
            exception_value = tmp_raise_value_11;
            exception_lineno = 90;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "c";
            goto try_except_handler_35;
        }
        branch_no_31:;
        goto branch_end_30;
        branch_no_30:;
        {
            PyObject *tmp_assign_source_90;
            tmp_assign_source_90 = MAKE_DICT_EMPTY();
            assert(tmp_Path$class_creation_11__prepared == NULL);
            tmp_Path$class_creation_11__prepared = tmp_assign_source_90;
        }
        branch_end_30:;
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_11;
            tmp_called_instance_11 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[17]);

            if (tmp_called_instance_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_instance_11 == NULL)) {
                        tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_instance_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 89;
                        type_description_2 = "c";
                        goto try_except_handler_35;
                    }
                    Py_INCREF(tmp_called_instance_11);
                } else {
                    goto try_except_handler_35;
                }
            }

            {
                PyObject *tmp_set_locals_12;
                CHECK_OBJECT(tmp_Path$class_creation_11__prepared);
                tmp_set_locals_12 = tmp_Path$class_creation_11__prepared;
                locals_flet_core$canvas$path$$$class__12_Close_90 = tmp_set_locals_12;
                Py_INCREF(tmp_set_locals_12);
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = mod_consts[36];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__12_Close_90, mod_consts[37], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_37;
            }
            tmp_dictset_value = mod_consts[100];
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__12_Close_90, mod_consts[38], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_37;
            }
            tmp_dictset_value = MAKE_DICT_EMPTY();
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__12_Close_90, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_37;
            }
            frame_58f917dac0dcb27d77746dfa86f5fc8f_12 = MAKE_CLASS_FRAME(codeobj_58f917dac0dcb27d77746dfa86f5fc8f, module_flet_core$canvas$path, NULL, sizeof(void *));

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_58f917dac0dcb27d77746dfa86f5fc8f_12);
            assert(Py_REFCNT(frame_58f917dac0dcb27d77746dfa86f5fc8f_12) == 2);

            // Framed code:
            {
                PyObject *tmp_called_value_37;
                PyObject *tmp_expression_value_72;
                tmp_expression_value_72 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__12_Close_90, mod_consts[17]);

                if (tmp_expression_value_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[17]);

                        if (unlikely(tmp_expression_value_72 == NULL)) {
                            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                        }

                        if (tmp_expression_value_72 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 91;
                            type_description_3 = "o";
                            goto frame_exception_exit_12;
                        }
                        Py_INCREF(tmp_expression_value_72);
                    } else {
                        goto frame_exception_exit_12;
                    }
                }

                tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[49]);
                Py_DECREF(tmp_expression_value_72);
                if (tmp_called_value_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_3 = "o";
                    goto frame_exception_exit_12;
                }
                frame_58f917dac0dcb27d77746dfa86f5fc8f_12->m_frame.f_lineno = 91;
                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_37, &PyTuple_GET_ITEM(mod_consts[101], 0), mod_consts[51]);
                Py_DECREF(tmp_called_value_37);
                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_3 = "o";
                    goto frame_exception_exit_12;
                }
                tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__12_Close_90, mod_consts[52], tmp_dictset_value);
                Py_DECREF(tmp_dictset_value);
                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_3 = "o";
                    goto frame_exception_exit_12;
                }
            }
            {
                PyObject *tmp_ass_subvalue_49;
                PyObject *tmp_ass_subscribed_49;
                PyObject *tmp_ass_subscript_49;
                tmp_ass_subvalue_49 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__12_Close_90, mod_consts[53]);

                if (tmp_ass_subvalue_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_ass_subvalue_49 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_ass_subvalue_49);
                    } else {
                        goto frame_exception_exit_12;
                    }
                }

                tmp_ass_subscribed_49 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__12_Close_90, mod_consts[45]);

                if (unlikely(tmp_ass_subscribed_49 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                    Py_DECREF(tmp_ass_subvalue_49);
                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 91;
                    type_description_3 = "o";
                    goto frame_exception_exit_12;
                }

                if (tmp_ass_subscribed_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_ass_subvalue_49);

                    exception_lineno = 91;
                    type_description_3 = "o";
                    goto frame_exception_exit_12;
                }
                tmp_ass_subscript_49 = mod_consts[52];
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
                Py_DECREF(tmp_ass_subscribed_49);
                Py_DECREF(tmp_ass_subvalue_49);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_3 = "o";
                    goto frame_exception_exit_12;
                }
            }


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_10;
            frame_exception_exit_12:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_58f917dac0dcb27d77746dfa86f5fc8f_12, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_58f917dac0dcb27d77746dfa86f5fc8f_12->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_58f917dac0dcb27d77746dfa86f5fc8f_12, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_58f917dac0dcb27d77746dfa86f5fc8f_12,
                type_description_3,
                outline_11_var___class__
            );



            assertFrameObject(frame_58f917dac0dcb27d77746dfa86f5fc8f_12);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_11;
            frame_no_exception_10:;
            goto skip_nested_handling_10;
            nested_frame_exit_11:;
            type_description_2 = "c";
            goto try_except_handler_37;
            skip_nested_handling_10:;
            {
                nuitka_bool tmp_condition_result_43;
                PyObject *tmp_cmp_expr_left_10;
                PyObject *tmp_cmp_expr_right_10;
                CHECK_OBJECT(tmp_Path$class_creation_11__bases);
                tmp_cmp_expr_left_10 = tmp_Path$class_creation_11__bases;
                CHECK_OBJECT(tmp_Path$class_creation_11__bases_orig);
                tmp_cmp_expr_right_10 = tmp_Path$class_creation_11__bases_orig;
                tmp_condition_result_43 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
                if (tmp_condition_result_43 == NUITKA_BOOL_EXCEPTION) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;
                    type_description_2 = "c";
                    goto try_except_handler_37;
                }
                if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_32;
                } else {
                    goto branch_no_32;
                }
            }
            branch_yes_32:;
            CHECK_OBJECT(tmp_Path$class_creation_11__bases_orig);
            tmp_dictset_value = tmp_Path$class_creation_11__bases_orig;
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__12_Close_90, mod_consts[54], tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_37;
            }
            branch_no_32:;
            {
                PyObject *tmp_assign_source_91;
                PyObject *tmp_called_value_38;
                PyObject *tmp_args_value_22;
                PyObject *tmp_tuple_element_44;
                PyObject *tmp_kwargs_value_22;
                CHECK_OBJECT(tmp_Path$class_creation_11__metaclass);
                tmp_called_value_38 = tmp_Path$class_creation_11__metaclass;
                tmp_tuple_element_44 = mod_consts[99];
                tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_44);
                CHECK_OBJECT(tmp_Path$class_creation_11__bases);
                tmp_tuple_element_44 = tmp_Path$class_creation_11__bases;
                PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_44);
                tmp_tuple_element_44 = locals_flet_core$canvas$path$$$class__12_Close_90;
                PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_44);
                CHECK_OBJECT(tmp_Path$class_creation_11__class_decl_dict);
                tmp_kwargs_value_22 = tmp_Path$class_creation_11__class_decl_dict;
                frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 90;
                tmp_assign_source_91 = CALL_FUNCTION(tmp_called_value_38, tmp_args_value_22, tmp_kwargs_value_22);
                Py_DECREF(tmp_args_value_22);
                if (tmp_assign_source_91 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;
                    type_description_2 = "c";
                    goto try_except_handler_37;
                }
                assert(outline_11_var___class__ == NULL);
                outline_11_var___class__ = tmp_assign_source_91;
            }
            CHECK_OBJECT(outline_11_var___class__);
            tmp_args_element_value_11 = outline_11_var___class__;
            Py_INCREF(tmp_args_element_value_11);
            goto try_return_handler_37;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_37:;
            Py_DECREF(locals_flet_core$canvas$path$$$class__12_Close_90);
            locals_flet_core$canvas$path$$$class__12_Close_90 = NULL;
            goto try_return_handler_36;
            // Exception handler code:
            try_except_handler_37:;
            exception_keeper_type_32 = exception_type;
            exception_keeper_value_32 = exception_value;
            exception_keeper_tb_32 = exception_tb;
            exception_keeper_lineno_32 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF(locals_flet_core$canvas$path$$$class__12_Close_90);
            locals_flet_core$canvas$path$$$class__12_Close_90 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_32;
            exception_value = exception_keeper_value_32;
            exception_tb = exception_keeper_tb_32;
            exception_lineno = exception_keeper_lineno_32;

            goto try_except_handler_36;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_36:;
            CHECK_OBJECT(outline_11_var___class__);
            Py_DECREF(outline_11_var___class__);
            outline_11_var___class__ = NULL;
            goto outline_result_12;
            // Exception handler code:
            try_except_handler_36:;
            exception_keeper_type_33 = exception_type;
            exception_keeper_value_33 = exception_value;
            exception_keeper_tb_33 = exception_tb;
            exception_keeper_lineno_33 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_33;
            exception_value = exception_keeper_value_33;
            exception_tb = exception_keeper_tb_33;
            exception_lineno = exception_keeper_lineno_33;

            goto outline_exception_12;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_12:;
            exception_lineno = 90;
            goto try_except_handler_35;
            outline_result_12:;
            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 89;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[39], tmp_args_element_value_11);
            Py_DECREF(tmp_called_instance_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "c";
                goto try_except_handler_35;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto try_except_handler_35;
            }
        }
        goto try_end_12;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Path$class_creation_11__bases_orig);
        Py_DECREF(tmp_Path$class_creation_11__bases_orig);
        tmp_Path$class_creation_11__bases_orig = NULL;
        Py_XDECREF(tmp_Path$class_creation_11__bases);
        tmp_Path$class_creation_11__bases = NULL;
        Py_XDECREF(tmp_Path$class_creation_11__class_decl_dict);
        tmp_Path$class_creation_11__class_decl_dict = NULL;
        Py_XDECREF(tmp_Path$class_creation_11__metaclass);
        tmp_Path$class_creation_11__metaclass = NULL;
        Py_XDECREF(tmp_Path$class_creation_11__prepared);
        tmp_Path$class_creation_11__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto frame_exception_exit_2;
        // End of try:
        try_end_12:;
        CHECK_OBJECT(tmp_Path$class_creation_11__bases_orig);
        Py_DECREF(tmp_Path$class_creation_11__bases_orig);
        tmp_Path$class_creation_11__bases_orig = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_11__bases);
        Py_DECREF(tmp_Path$class_creation_11__bases);
        tmp_Path$class_creation_11__bases = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_11__class_decl_dict);
        Py_DECREF(tmp_Path$class_creation_11__class_decl_dict);
        tmp_Path$class_creation_11__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_11__metaclass);
        Py_DECREF(tmp_Path$class_creation_11__metaclass);
        tmp_Path$class_creation_11__metaclass = NULL;
        CHECK_OBJECT(tmp_Path$class_creation_11__prepared);
        Py_DECREF(tmp_Path$class_creation_11__prepared);
        tmp_Path$class_creation_11__prepared = NULL;
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_14;
            tmp_defaults_1 = mod_consts[102];
            tmp_dict_key_1 = mod_consts[3];
            tmp_expression_value_73 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[21]);

            if (tmp_expression_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_73 == NULL)) {
                        tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_73);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_74 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[20]);

            if (tmp_expression_value_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_74 == NULL)) {
                        tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    if (tmp_expression_value_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_73);

                        exception_lineno = 95;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_74);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41]);

            if (unlikely(tmp_subscript_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_expression_value_73);
                Py_DECREF(tmp_expression_value_74);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_subscript_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_73);
                Py_DECREF(tmp_expression_value_74);

                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_74);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_subscript_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_73);

                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_73);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_75;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_76;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_expression_value_77;
                PyObject *tmp_subscript_value_17;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[4];
                tmp_expression_value_75 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[21]);

                if (tmp_expression_value_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_expression_value_75 == NULL)) {
                            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                        }

                        if (tmp_expression_value_75 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 96;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_75);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[26]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_subscript_value_15 == NULL)) {
                            tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_subscript_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_75);

                            exception_lineno = 96;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_75);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[103];
                tmp_expression_value_76 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[21]);

                if (tmp_expression_value_76 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_expression_value_76 == NULL)) {
                            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                        }

                        if (tmp_expression_value_76 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 99;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_76);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[87]);

                if (tmp_subscript_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_16 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_76);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 99;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[104];
                tmp_expression_value_77 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[21]);

                if (tmp_expression_value_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_expression_value_77 == NULL)) {
                            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                        }

                        if (tmp_expression_value_77 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 100;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_77);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[87]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_77, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_77);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 100;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[105];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[19]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[19]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 101;
                            type_description_2 = "c";
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


            tmp_dictset_value = MAKE_FUNCTION_flet_core$canvas$path$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$canvas$path$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[108], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$canvas$path$$$function__3__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_44;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_13;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[111]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_44 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_39 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[111]);

            if (unlikely(tmp_called_value_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[111]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$canvas$path$$$function__4_elements();

            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 117;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_40 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$canvas$path$$$function__4_elements();

            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 117;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_41;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_19;
            tmp_expression_value_78 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[3]);

            if (unlikely(tmp_expression_value_78 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[113]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[114];
            tmp_expression_value_79 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[21]);

            if (tmp_expression_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_79 == NULL)) {
                        tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);

                        exception_lineno = 122;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_79);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_80 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[20]);

            if (tmp_expression_value_80 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_expression_value_80 == NULL)) {
                        tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
                    }

                    if (tmp_expression_value_80 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);
                        Py_DECREF(tmp_expression_value_79);

                        exception_lineno = 122;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_80);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[41]);

            if (unlikely(tmp_subscript_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_expression_value_79);
                Py_DECREF(tmp_expression_value_80);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_subscript_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_expression_value_79);
                Py_DECREF(tmp_expression_value_80);

                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_80, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_80);
            Py_DECREF(tmp_subscript_value_19);
            if (tmp_subscript_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);
                Py_DECREF(tmp_expression_value_79);

                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_79);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);

                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$canvas$path$$$function__5_elements(tmp_annotations_2);

            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 121;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_45;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_21;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[111]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_45 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_42 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[111]);

            if (unlikely(tmp_called_value_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[111]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_3 = mod_consts[115];
            tmp_expression_value_81 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[21]);

            if (tmp_expression_value_81 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_81 == NULL)) {
                        tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_81 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);

                        exception_lineno = 127;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_81);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[26]);

            if (tmp_subscript_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_subscript_value_20 == NULL)) {
                        tmp_subscript_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_subscript_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);
                        Py_DECREF(tmp_expression_value_81);

                        exception_lineno = 127;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_81);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_42);

                exception_lineno = 127;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$canvas$path$$$function__6_paint(tmp_annotations_3);

            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_43 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_4 = mod_consts[115];
            tmp_expression_value_82 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[21]);

            if (tmp_expression_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_82 == NULL)) {
                        tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_82 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 127;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_82);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[26]);

            if (tmp_subscript_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_subscript_value_21 == NULL)) {
                        tmp_subscript_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_subscript_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_82);

                        exception_lineno = 127;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_82);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$canvas$path$$$function__6_paint(tmp_annotations_4);

            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_44;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_subscript_value_22;
            tmp_expression_value_83 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[4]);

            if (unlikely(tmp_expression_value_83 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[113]);
            Py_DECREF(tmp_expression_value_83);
            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[114];
            tmp_expression_value_84 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[21]);

            if (tmp_expression_value_84 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[21]);

                    if (unlikely(tmp_expression_value_84 == NULL)) {
                        tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
                    }

                    if (tmp_expression_value_84 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);

                        exception_lineno = 131;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_84);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_22 = PyObject_GetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[26]);

            if (tmp_subscript_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_subscript_value_22 == NULL)) {
                        tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_subscript_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);
                        Py_DECREF(tmp_expression_value_84);

                        exception_lineno = 131;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_84, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_84);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_44);

                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$canvas$path$$$function__7_paint(tmp_annotations_5);

            frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame.f_lineno = 130;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d37430be4b5d82b0c1788c0782ed5d80_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d37430be4b5d82b0c1788c0782ed5d80_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d37430be4b5d82b0c1788c0782ed5d80_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d37430be4b5d82b0c1788c0782ed5d80_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_d37430be4b5d82b0c1788c0782ed5d80_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_46;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_46 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_46 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
                goto branch_yes_33;
            } else {
                goto branch_no_33;
            }
        }
        branch_yes_33:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$canvas$path$$$class__1_Path_9, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        branch_no_33:;
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_value_23;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_kwargs_value_23;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_45 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_45 = mod_consts[31];
            tmp_args_value_23 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_45 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_45);
            tmp_tuple_element_45 = locals_flet_core$canvas$path$$$class__1_Path_9;
            PyTuple_SET_ITEM0(tmp_args_value_23, 2, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_23 = tmp_class_creation_1__class_decl_dict;
            frame_963281a45ab324351aaaf469845e4cba->m_frame.f_lineno = 9;
            tmp_assign_source_92 = CALL_FUNCTION(tmp_called_value_45, tmp_args_value_23, tmp_kwargs_value_23);
            Py_DECREF(tmp_args_value_23);
            if (tmp_assign_source_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto try_except_handler_4;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_92);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_18 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_flet_core$canvas$path$$$class__1_Path_9);
        locals_flet_core$canvas$path$$$class__1_Path_9 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$canvas$path$$$class__1_Path_9);
        locals_flet_core$canvas$path$$$class__1_Path_9 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

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
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 9;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_18);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
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
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_12;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_963281a45ab324351aaaf469845e4cba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_963281a45ab324351aaaf469845e4cba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_963281a45ab324351aaaf469845e4cba, exception_lineno);
    }



    assertFrameObject(frame_963281a45ab324351aaaf469845e4cba);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_12:;
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
    PGO_onModuleExit("flet_core.canvas.path", false);

    Py_INCREF(module_flet_core$canvas$path);
    return module_flet_core$canvas$path;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$canvas$path, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$canvas$path", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
