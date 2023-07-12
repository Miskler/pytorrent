/* Generated code for Python module 'flet_core.view'
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

/* The "module_flet_core$view" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$view;
PyDictObject *moduledict_flet_core$view;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[123];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[123];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.view"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 123; i++) {
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
void checkModuleConstants_flet_core$view(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 123; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e5b642adfef3c2849a83aac9115106fa;
static PyCodeObject *codeobj_37f9f2833538ace1a1195f16e1987b9e;
static PyCodeObject *codeobj_230cbb1e2189b24f770229963608bf37;
static PyCodeObject *codeobj_aca05578212f56e88b5ae63eaa29d253;
static PyCodeObject *codeobj_70e957884a23317ed18beac97934c02c;
static PyCodeObject *codeobj_8c7657265536092233dfb461af12bcb1;
static PyCodeObject *codeobj_c3c768203e9c6cee611f1b34c351df43;
static PyCodeObject *codeobj_3644e1400e23a24fdcb659d1c2fb4d48;
static PyCodeObject *codeobj_164ef2edbf657229b691117e16af4e76;
static PyCodeObject *codeobj_f79faf74f2c52d3e828651a133acb671;
static PyCodeObject *codeobj_82ab2d0a15735dd7d4b6a92a7623f996;
static PyCodeObject *codeobj_a2ddc1880d301c50f14e1cd7cee2baa9;
static PyCodeObject *codeobj_4dbe466b361431030a99b0cb1dffe122;
static PyCodeObject *codeobj_38cbfc17865869b9c54aa6108d805229;
static PyCodeObject *codeobj_723a606da8571cb928157c6ccd14ec73;
static PyCodeObject *codeobj_f583b6d720a35b0c2e93bf69a1e8a9ea;
static PyCodeObject *codeobj_5d5e2dc5f01af1df404ec9a04971d94e;
static PyCodeObject *codeobj_9d59c252cb1d850743e3be4f88822e08;
static PyCodeObject *codeobj_16cab76e4b8d9ff824415449bbbebcef;
static PyCodeObject *codeobj_d762e171e1bc983778249ff04c5d8d84;
static PyCodeObject *codeobj_e8defc0b8b7c2b2ce6e721c670bd3978;
static PyCodeObject *codeobj_a0cbbf0daab7a52fe93f8a3c52123951;
static PyCodeObject *codeobj_270a200dec7ce41eb5b8cd0236e2ccbd;
static PyCodeObject *codeobj_069753149c21538985cec347dc9a266c;
static PyCodeObject *codeobj_1426510cf5cb00902b2375180c611d00;
static PyCodeObject *codeobj_a83e584423a50f653a321643fd1095c3;
static PyCodeObject *codeobj_51cd68539b2f5f700e4ddfd7351782d2;
static PyCodeObject *codeobj_e1657392df0d73484d91ea05c47297d1;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[42]; CHECK_OBJECT(module_filename_obj);
    codeobj_e5b642adfef3c2849a83aac9115106fa = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[115], mod_consts[115], NULL, NULL, 0, 0, 0);
    codeobj_37f9f2833538ace1a1195f16e1987b9e = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[116], NULL, 0, 0, 0);
    codeobj_230cbb1e2189b24f770229963608bf37 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[117], NULL, 15, 0, 0);
    codeobj_aca05578212f56e88b5ae63eaa29d253 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[118], NULL, 2, 0, 0);
    codeobj_70e957884a23317ed18beac97934c02c = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[118], NULL, 2, 0, 0);
    codeobj_8c7657265536092233dfb461af12bcb1 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[17], mod_consts[17], mod_consts[119], mod_consts[116], 1, 0, 0);
    codeobj_c3c768203e9c6cee611f1b34c351df43 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[120], NULL, 1, 0, 0);
    codeobj_3644e1400e23a24fdcb659d1c2fb4d48 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[121], NULL, 1, 0, 0);
    codeobj_164ef2edbf657229b691117e16af4e76 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[121], NULL, 1, 0, 0);
    codeobj_f79faf74f2c52d3e828651a133acb671 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[118], NULL, 2, 0, 0);
    codeobj_82ab2d0a15735dd7d4b6a92a7623f996 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[121], NULL, 1, 0, 0);
    codeobj_a2ddc1880d301c50f14e1cd7cee2baa9 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[118], NULL, 2, 0, 0);
    codeobj_4dbe466b361431030a99b0cb1dffe122 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[121], NULL, 1, 0, 0);
    codeobj_38cbfc17865869b9c54aa6108d805229 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[118], NULL, 2, 0, 0);
    codeobj_723a606da8571cb928157c6ccd14ec73 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[121], NULL, 1, 0, 0);
    codeobj_f583b6d720a35b0c2e93bf69a1e8a9ea = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[118], NULL, 2, 0, 0);
    codeobj_5d5e2dc5f01af1df404ec9a04971d94e = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[121], NULL, 1, 0, 0);
    codeobj_9d59c252cb1d850743e3be4f88822e08 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[118], NULL, 2, 0, 0);
    codeobj_16cab76e4b8d9ff824415449bbbebcef = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[121], NULL, 1, 0, 0);
    codeobj_d762e171e1bc983778249ff04c5d8d84 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[118], NULL, 2, 0, 0);
    codeobj_e8defc0b8b7c2b2ce6e721c670bd3978 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[121], NULL, 1, 0, 0);
    codeobj_a0cbbf0daab7a52fe93f8a3c52123951 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[118], NULL, 2, 0, 0);
    codeobj_270a200dec7ce41eb5b8cd0236e2ccbd = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[121], NULL, 1, 0, 0);
    codeobj_069753149c21538985cec347dc9a266c = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[118], NULL, 2, 0, 0);
    codeobj_1426510cf5cb00902b2375180c611d00 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[121], NULL, 1, 0, 0);
    codeobj_a83e584423a50f653a321643fd1095c3 = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[118], NULL, 2, 0, 0);
    codeobj_51cd68539b2f5f700e4ddfd7351782d2 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[121], NULL, 1, 0, 0);
    codeobj_e1657392df0d73484d91ea05c47297d1 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[118], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__10_appbar(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__11_floating_action_button(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__12_floating_action_button(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__13_navigation_bar(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__14_navigation_bar(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__15_horizontal_alignment(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__16_horizontal_alignment(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__17___set_horizontal_alignment(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__18_vertical_alignment(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__19_vertical_alignment(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__20___set_vertical_alignment(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__21_spacing(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__22_spacing(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__23_padding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__24_padding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__25_bgcolor();


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__26_bgcolor();


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__3__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__4__get_children();


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__5_route();


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__6_route();


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__7_controls(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__8_controls(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$view$$$function__9_appbar(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$view$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_route = python_pars[1];
    PyObject *par_controls = python_pars[2];
    PyObject *par_appbar = python_pars[3];
    PyObject *par_floating_action_button = python_pars[4];
    PyObject *par_navigation_bar = python_pars[5];
    PyObject *par_vertical_alignment = python_pars[6];
    PyObject *par_horizontal_alignment = python_pars[7];
    PyObject *par_spacing = python_pars[8];
    PyObject *par_padding = python_pars[9];
    PyObject *par_bgcolor = python_pars[10];
    PyObject *par_scroll = python_pars[11];
    PyObject *par_auto_scroll = python_pars[12];
    PyObject *par_on_scroll_interval = python_pars[13];
    PyObject *par_on_scroll = python_pars[14];
    struct Nuitka_FrameObject *frame_230cbb1e2189b24f770229963608bf37;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_230cbb1e2189b24f770229963608bf37 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_230cbb1e2189b24f770229963608bf37)) {
        Py_XDECREF(cache_frame_230cbb1e2189b24f770229963608bf37);

#if _DEBUG_REFCOUNTS
        if (cache_frame_230cbb1e2189b24f770229963608bf37 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_230cbb1e2189b24f770229963608bf37 = MAKE_FUNCTION_FRAME(codeobj_230cbb1e2189b24f770229963608bf37, module_flet_core$view, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_230cbb1e2189b24f770229963608bf37->m_type_description == NULL);
    frame_230cbb1e2189b24f770229963608bf37 = cache_frame_230cbb1e2189b24f770229963608bf37;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_230cbb1e2189b24f770229963608bf37);
    assert(Py_REFCNT(frame_230cbb1e2189b24f770229963608bf37) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_230cbb1e2189b24f770229963608bf37->m_frame.f_lineno = 51;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_scroll);
        tmp_kw_call_dict_value_0_1 = par_scroll;
        CHECK_OBJECT(par_auto_scroll);
        tmp_kw_call_dict_value_1_1 = par_auto_scroll;
        CHECK_OBJECT(par_on_scroll_interval);
        tmp_kw_call_dict_value_2_1 = par_on_scroll_interval;
        CHECK_OBJECT(par_on_scroll);
        tmp_kw_call_dict_value_3_1 = par_on_scroll;
        frame_230cbb1e2189b24f770229963608bf37->m_frame.f_lineno = 53;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[3]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_controls);
        tmp_cmp_expr_left_1 = par_controls;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_controls);
        tmp_assattr_value_1 = par_controls;
        Py_INCREF(tmp_assattr_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(0);
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_route);
        tmp_assattr_value_2 = par_route;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_appbar);
        tmp_assattr_value_3 = par_appbar;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[6], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_navigation_bar);
        tmp_assattr_value_4 = par_navigation_bar;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[7], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_floating_action_button);
        tmp_assattr_value_5 = par_floating_action_button;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[8], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_vertical_alignment);
        tmp_assattr_value_6 = par_vertical_alignment;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[9], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_horizontal_alignment);
        tmp_assattr_value_7 = par_horizontal_alignment;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[10], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_spacing);
        tmp_assattr_value_8 = par_spacing;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[11], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_padding);
        tmp_assattr_value_9 = par_padding;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[12], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_bgcolor);
        tmp_assattr_value_10 = par_bgcolor;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[13], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_scroll);
        tmp_assattr_value_11 = par_scroll;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[14], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_auto_scroll);
        tmp_assattr_value_12 = par_auto_scroll;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[15], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_230cbb1e2189b24f770229963608bf37, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_230cbb1e2189b24f770229963608bf37->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_230cbb1e2189b24f770229963608bf37, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_230cbb1e2189b24f770229963608bf37,
        type_description_1,
        par_self,
        par_route,
        par_controls,
        par_appbar,
        par_floating_action_button,
        par_navigation_bar,
        par_vertical_alignment,
        par_horizontal_alignment,
        par_spacing,
        par_padding,
        par_bgcolor,
        par_scroll,
        par_auto_scroll,
        par_on_scroll_interval,
        par_on_scroll
    );


    // Release cached frame if used for exception.
    if (frame_230cbb1e2189b24f770229963608bf37 == cache_frame_230cbb1e2189b24f770229963608bf37) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_230cbb1e2189b24f770229963608bf37);
        cache_frame_230cbb1e2189b24f770229963608bf37 = NULL;
    }

    assertFrameObject(frame_230cbb1e2189b24f770229963608bf37);

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
    CHECK_OBJECT(par_route);
    Py_DECREF(par_route);
    CHECK_OBJECT(par_controls);
    Py_DECREF(par_controls);
    CHECK_OBJECT(par_appbar);
    Py_DECREF(par_appbar);
    CHECK_OBJECT(par_floating_action_button);
    Py_DECREF(par_floating_action_button);
    CHECK_OBJECT(par_navigation_bar);
    Py_DECREF(par_navigation_bar);
    CHECK_OBJECT(par_vertical_alignment);
    Py_DECREF(par_vertical_alignment);
    CHECK_OBJECT(par_horizontal_alignment);
    Py_DECREF(par_horizontal_alignment);
    CHECK_OBJECT(par_spacing);
    Py_DECREF(par_spacing);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
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
    CHECK_OBJECT(par_route);
    Py_DECREF(par_route);
    CHECK_OBJECT(par_controls);
    Py_DECREF(par_controls);
    CHECK_OBJECT(par_appbar);
    Py_DECREF(par_appbar);
    CHECK_OBJECT(par_floating_action_button);
    Py_DECREF(par_floating_action_button);
    CHECK_OBJECT(par_navigation_bar);
    Py_DECREF(par_navigation_bar);
    CHECK_OBJECT(par_vertical_alignment);
    Py_DECREF(par_vertical_alignment);
    CHECK_OBJECT(par_horizontal_alignment);
    Py_DECREF(par_horizontal_alignment);
    CHECK_OBJECT(par_spacing);
    Py_DECREF(par_spacing);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
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


static PyObject *impl_flet_core$view$$$function__3__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8c7657265536092233dfb461af12bcb1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8c7657265536092233dfb461af12bcb1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8c7657265536092233dfb461af12bcb1)) {
        Py_XDECREF(cache_frame_8c7657265536092233dfb461af12bcb1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8c7657265536092233dfb461af12bcb1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8c7657265536092233dfb461af12bcb1 = MAKE_FUNCTION_FRAME(codeobj_8c7657265536092233dfb461af12bcb1, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8c7657265536092233dfb461af12bcb1->m_type_description == NULL);
    frame_8c7657265536092233dfb461af12bcb1 = cache_frame_8c7657265536092233dfb461af12bcb1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8c7657265536092233dfb461af12bcb1);
    assert(Py_REFCNT(frame_8c7657265536092233dfb461af12bcb1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$view, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_8c7657265536092233dfb461af12bcb1->m_frame.f_lineno = 78;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[12];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 79;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_8c7657265536092233dfb461af12bcb1->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8c7657265536092233dfb461af12bcb1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8c7657265536092233dfb461af12bcb1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8c7657265536092233dfb461af12bcb1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8c7657265536092233dfb461af12bcb1,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8c7657265536092233dfb461af12bcb1 == cache_frame_8c7657265536092233dfb461af12bcb1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8c7657265536092233dfb461af12bcb1);
        cache_frame_8c7657265536092233dfb461af12bcb1 = NULL;
    }

    assertFrameObject(frame_8c7657265536092233dfb461af12bcb1);

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


static PyObject *impl_flet_core$view$$$function__4__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_children = NULL;
    struct Nuitka_FrameObject *frame_c3c768203e9c6cee611f1b34c351df43;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c3c768203e9c6cee611f1b34c351df43 = NULL;
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
    if (isFrameUnusable(cache_frame_c3c768203e9c6cee611f1b34c351df43)) {
        Py_XDECREF(cache_frame_c3c768203e9c6cee611f1b34c351df43);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3c768203e9c6cee611f1b34c351df43 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3c768203e9c6cee611f1b34c351df43 = MAKE_FUNCTION_FRAME(codeobj_c3c768203e9c6cee611f1b34c351df43, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c3c768203e9c6cee611f1b34c351df43->m_type_description == NULL);
    frame_c3c768203e9c6cee611f1b34c351df43 = cache_frame_c3c768203e9c6cee611f1b34c351df43;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c3c768203e9c6cee611f1b34c351df43);
    assert(Py_REFCNT(frame_c3c768203e9c6cee611f1b34c351df43) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 83;
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
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_children);
        tmp_list_arg_value_1 = var_children;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_item_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        PyObject *tmp_expression_value_4;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_2 = var_children;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_item_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
        if (tmp_item_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[23]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_7;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_children;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[23]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c3c768203e9c6cee611f1b34c351df43->m_frame.f_lineno = 88;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_9;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = var_children;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[26]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c3c768203e9c6cee611f1b34c351df43->m_frame.f_lineno = 89;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (var_children == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 90;
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
        exception_tb = MAKE_TRACEBACK(frame_c3c768203e9c6cee611f1b34c351df43, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3c768203e9c6cee611f1b34c351df43->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3c768203e9c6cee611f1b34c351df43, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3c768203e9c6cee611f1b34c351df43,
        type_description_1,
        par_self,
        var_children
    );


    // Release cached frame if used for exception.
    if (frame_c3c768203e9c6cee611f1b34c351df43 == cache_frame_c3c768203e9c6cee611f1b34c351df43) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c3c768203e9c6cee611f1b34c351df43);
        cache_frame_c3c768203e9c6cee611f1b34c351df43 = NULL;
    }

    assertFrameObject(frame_c3c768203e9c6cee611f1b34c351df43);

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


static PyObject *impl_flet_core$view$$$function__5_route(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_270a200dec7ce41eb5b8cd0236e2ccbd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_270a200dec7ce41eb5b8cd0236e2ccbd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_270a200dec7ce41eb5b8cd0236e2ccbd)) {
        Py_XDECREF(cache_frame_270a200dec7ce41eb5b8cd0236e2ccbd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_270a200dec7ce41eb5b8cd0236e2ccbd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_270a200dec7ce41eb5b8cd0236e2ccbd = MAKE_FUNCTION_FRAME(codeobj_270a200dec7ce41eb5b8cd0236e2ccbd, module_flet_core$view, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_270a200dec7ce41eb5b8cd0236e2ccbd->m_type_description == NULL);
    frame_270a200dec7ce41eb5b8cd0236e2ccbd = cache_frame_270a200dec7ce41eb5b8cd0236e2ccbd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_270a200dec7ce41eb5b8cd0236e2ccbd);
    assert(Py_REFCNT(frame_270a200dec7ce41eb5b8cd0236e2ccbd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_270a200dec7ce41eb5b8cd0236e2ccbd->m_frame.f_lineno = 95;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
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
        exception_tb = MAKE_TRACEBACK(frame_270a200dec7ce41eb5b8cd0236e2ccbd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_270a200dec7ce41eb5b8cd0236e2ccbd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_270a200dec7ce41eb5b8cd0236e2ccbd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_270a200dec7ce41eb5b8cd0236e2ccbd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_270a200dec7ce41eb5b8cd0236e2ccbd == cache_frame_270a200dec7ce41eb5b8cd0236e2ccbd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_270a200dec7ce41eb5b8cd0236e2ccbd);
        cache_frame_270a200dec7ce41eb5b8cd0236e2ccbd = NULL;
    }

    assertFrameObject(frame_270a200dec7ce41eb5b8cd0236e2ccbd);

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


static PyObject *impl_flet_core$view$$$function__6_route(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_069753149c21538985cec347dc9a266c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_069753149c21538985cec347dc9a266c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_069753149c21538985cec347dc9a266c)) {
        Py_XDECREF(cache_frame_069753149c21538985cec347dc9a266c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_069753149c21538985cec347dc9a266c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_069753149c21538985cec347dc9a266c = MAKE_FUNCTION_FRAME(codeobj_069753149c21538985cec347dc9a266c, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_069753149c21538985cec347dc9a266c->m_type_description == NULL);
    frame_069753149c21538985cec347dc9a266c = cache_frame_069753149c21538985cec347dc9a266c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_069753149c21538985cec347dc9a266c);
    assert(Py_REFCNT(frame_069753149c21538985cec347dc9a266c) == 2);

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
        frame_069753149c21538985cec347dc9a266c->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[29],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_069753149c21538985cec347dc9a266c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_069753149c21538985cec347dc9a266c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_069753149c21538985cec347dc9a266c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_069753149c21538985cec347dc9a266c,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_069753149c21538985cec347dc9a266c == cache_frame_069753149c21538985cec347dc9a266c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_069753149c21538985cec347dc9a266c);
        cache_frame_069753149c21538985cec347dc9a266c = NULL;
    }

    assertFrameObject(frame_069753149c21538985cec347dc9a266c);

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


static PyObject *impl_flet_core$view$$$function__7_controls(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4dbe466b361431030a99b0cb1dffe122;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4dbe466b361431030a99b0cb1dffe122 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4dbe466b361431030a99b0cb1dffe122)) {
        Py_XDECREF(cache_frame_4dbe466b361431030a99b0cb1dffe122);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4dbe466b361431030a99b0cb1dffe122 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4dbe466b361431030a99b0cb1dffe122 = MAKE_FUNCTION_FRAME(codeobj_4dbe466b361431030a99b0cb1dffe122, module_flet_core$view, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4dbe466b361431030a99b0cb1dffe122->m_type_description == NULL);
    frame_4dbe466b361431030a99b0cb1dffe122 = cache_frame_4dbe466b361431030a99b0cb1dffe122;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4dbe466b361431030a99b0cb1dffe122);
    assert(Py_REFCNT(frame_4dbe466b361431030a99b0cb1dffe122) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
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
        exception_tb = MAKE_TRACEBACK(frame_4dbe466b361431030a99b0cb1dffe122, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4dbe466b361431030a99b0cb1dffe122->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4dbe466b361431030a99b0cb1dffe122, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4dbe466b361431030a99b0cb1dffe122,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4dbe466b361431030a99b0cb1dffe122 == cache_frame_4dbe466b361431030a99b0cb1dffe122) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4dbe466b361431030a99b0cb1dffe122);
        cache_frame_4dbe466b361431030a99b0cb1dffe122 = NULL;
    }

    assertFrameObject(frame_4dbe466b361431030a99b0cb1dffe122);

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


static PyObject *impl_flet_core$view$$$function__8_controls(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_38cbfc17865869b9c54aa6108d805229;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_38cbfc17865869b9c54aa6108d805229 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_38cbfc17865869b9c54aa6108d805229)) {
        Py_XDECREF(cache_frame_38cbfc17865869b9c54aa6108d805229);

#if _DEBUG_REFCOUNTS
        if (cache_frame_38cbfc17865869b9c54aa6108d805229 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_38cbfc17865869b9c54aa6108d805229 = MAKE_FUNCTION_FRAME(codeobj_38cbfc17865869b9c54aa6108d805229, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_38cbfc17865869b9c54aa6108d805229->m_type_description == NULL);
    frame_38cbfc17865869b9c54aa6108d805229 = cache_frame_38cbfc17865869b9c54aa6108d805229;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_38cbfc17865869b9c54aa6108d805229);
    assert(Py_REFCNT(frame_38cbfc17865869b9c54aa6108d805229) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_38cbfc17865869b9c54aa6108d805229, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38cbfc17865869b9c54aa6108d805229->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38cbfc17865869b9c54aa6108d805229, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_38cbfc17865869b9c54aa6108d805229,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_38cbfc17865869b9c54aa6108d805229 == cache_frame_38cbfc17865869b9c54aa6108d805229) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_38cbfc17865869b9c54aa6108d805229);
        cache_frame_38cbfc17865869b9c54aa6108d805229 = NULL;
    }

    assertFrameObject(frame_38cbfc17865869b9c54aa6108d805229);

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


static PyObject *impl_flet_core$view$$$function__9_appbar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_164ef2edbf657229b691117e16af4e76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_164ef2edbf657229b691117e16af4e76 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_164ef2edbf657229b691117e16af4e76)) {
        Py_XDECREF(cache_frame_164ef2edbf657229b691117e16af4e76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_164ef2edbf657229b691117e16af4e76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_164ef2edbf657229b691117e16af4e76 = MAKE_FUNCTION_FRAME(codeobj_164ef2edbf657229b691117e16af4e76, module_flet_core$view, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_164ef2edbf657229b691117e16af4e76->m_type_description == NULL);
    frame_164ef2edbf657229b691117e16af4e76 = cache_frame_164ef2edbf657229b691117e16af4e76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_164ef2edbf657229b691117e16af4e76);
    assert(Py_REFCNT(frame_164ef2edbf657229b691117e16af4e76) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
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
        exception_tb = MAKE_TRACEBACK(frame_164ef2edbf657229b691117e16af4e76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_164ef2edbf657229b691117e16af4e76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_164ef2edbf657229b691117e16af4e76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_164ef2edbf657229b691117e16af4e76,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_164ef2edbf657229b691117e16af4e76 == cache_frame_164ef2edbf657229b691117e16af4e76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_164ef2edbf657229b691117e16af4e76);
        cache_frame_164ef2edbf657229b691117e16af4e76 = NULL;
    }

    assertFrameObject(frame_164ef2edbf657229b691117e16af4e76);

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


static PyObject *impl_flet_core$view$$$function__10_appbar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f79faf74f2c52d3e828651a133acb671;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f79faf74f2c52d3e828651a133acb671 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f79faf74f2c52d3e828651a133acb671)) {
        Py_XDECREF(cache_frame_f79faf74f2c52d3e828651a133acb671);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f79faf74f2c52d3e828651a133acb671 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f79faf74f2c52d3e828651a133acb671 = MAKE_FUNCTION_FRAME(codeobj_f79faf74f2c52d3e828651a133acb671, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f79faf74f2c52d3e828651a133acb671->m_type_description == NULL);
    frame_f79faf74f2c52d3e828651a133acb671 = cache_frame_f79faf74f2c52d3e828651a133acb671;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f79faf74f2c52d3e828651a133acb671);
    assert(Py_REFCNT(frame_f79faf74f2c52d3e828651a133acb671) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[20], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f79faf74f2c52d3e828651a133acb671, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f79faf74f2c52d3e828651a133acb671->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f79faf74f2c52d3e828651a133acb671, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f79faf74f2c52d3e828651a133acb671,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f79faf74f2c52d3e828651a133acb671 == cache_frame_f79faf74f2c52d3e828651a133acb671) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f79faf74f2c52d3e828651a133acb671);
        cache_frame_f79faf74f2c52d3e828651a133acb671 = NULL;
    }

    assertFrameObject(frame_f79faf74f2c52d3e828651a133acb671);

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


static PyObject *impl_flet_core$view$$$function__11_floating_action_button(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_723a606da8571cb928157c6ccd14ec73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_723a606da8571cb928157c6ccd14ec73 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_723a606da8571cb928157c6ccd14ec73)) {
        Py_XDECREF(cache_frame_723a606da8571cb928157c6ccd14ec73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_723a606da8571cb928157c6ccd14ec73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_723a606da8571cb928157c6ccd14ec73 = MAKE_FUNCTION_FRAME(codeobj_723a606da8571cb928157c6ccd14ec73, module_flet_core$view, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_723a606da8571cb928157c6ccd14ec73->m_type_description == NULL);
    frame_723a606da8571cb928157c6ccd14ec73 = cache_frame_723a606da8571cb928157c6ccd14ec73;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_723a606da8571cb928157c6ccd14ec73);
    assert(Py_REFCNT(frame_723a606da8571cb928157c6ccd14ec73) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
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
        exception_tb = MAKE_TRACEBACK(frame_723a606da8571cb928157c6ccd14ec73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_723a606da8571cb928157c6ccd14ec73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_723a606da8571cb928157c6ccd14ec73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_723a606da8571cb928157c6ccd14ec73,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_723a606da8571cb928157c6ccd14ec73 == cache_frame_723a606da8571cb928157c6ccd14ec73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_723a606da8571cb928157c6ccd14ec73);
        cache_frame_723a606da8571cb928157c6ccd14ec73 = NULL;
    }

    assertFrameObject(frame_723a606da8571cb928157c6ccd14ec73);

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


static PyObject *impl_flet_core$view$$$function__12_floating_action_button(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f583b6d720a35b0c2e93bf69a1e8a9ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f583b6d720a35b0c2e93bf69a1e8a9ea = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f583b6d720a35b0c2e93bf69a1e8a9ea)) {
        Py_XDECREF(cache_frame_f583b6d720a35b0c2e93bf69a1e8a9ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f583b6d720a35b0c2e93bf69a1e8a9ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f583b6d720a35b0c2e93bf69a1e8a9ea = MAKE_FUNCTION_FRAME(codeobj_f583b6d720a35b0c2e93bf69a1e8a9ea, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f583b6d720a35b0c2e93bf69a1e8a9ea->m_type_description == NULL);
    frame_f583b6d720a35b0c2e93bf69a1e8a9ea = cache_frame_f583b6d720a35b0c2e93bf69a1e8a9ea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f583b6d720a35b0c2e93bf69a1e8a9ea);
    assert(Py_REFCNT(frame_f583b6d720a35b0c2e93bf69a1e8a9ea) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f583b6d720a35b0c2e93bf69a1e8a9ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f583b6d720a35b0c2e93bf69a1e8a9ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f583b6d720a35b0c2e93bf69a1e8a9ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f583b6d720a35b0c2e93bf69a1e8a9ea,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f583b6d720a35b0c2e93bf69a1e8a9ea == cache_frame_f583b6d720a35b0c2e93bf69a1e8a9ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f583b6d720a35b0c2e93bf69a1e8a9ea);
        cache_frame_f583b6d720a35b0c2e93bf69a1e8a9ea = NULL;
    }

    assertFrameObject(frame_f583b6d720a35b0c2e93bf69a1e8a9ea);

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


static PyObject *impl_flet_core$view$$$function__13_navigation_bar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_16cab76e4b8d9ff824415449bbbebcef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_16cab76e4b8d9ff824415449bbbebcef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_16cab76e4b8d9ff824415449bbbebcef)) {
        Py_XDECREF(cache_frame_16cab76e4b8d9ff824415449bbbebcef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_16cab76e4b8d9ff824415449bbbebcef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_16cab76e4b8d9ff824415449bbbebcef = MAKE_FUNCTION_FRAME(codeobj_16cab76e4b8d9ff824415449bbbebcef, module_flet_core$view, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_16cab76e4b8d9ff824415449bbbebcef->m_type_description == NULL);
    frame_16cab76e4b8d9ff824415449bbbebcef = cache_frame_16cab76e4b8d9ff824415449bbbebcef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_16cab76e4b8d9ff824415449bbbebcef);
    assert(Py_REFCNT(frame_16cab76e4b8d9ff824415449bbbebcef) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
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
        exception_tb = MAKE_TRACEBACK(frame_16cab76e4b8d9ff824415449bbbebcef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_16cab76e4b8d9ff824415449bbbebcef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16cab76e4b8d9ff824415449bbbebcef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_16cab76e4b8d9ff824415449bbbebcef,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_16cab76e4b8d9ff824415449bbbebcef == cache_frame_16cab76e4b8d9ff824415449bbbebcef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_16cab76e4b8d9ff824415449bbbebcef);
        cache_frame_16cab76e4b8d9ff824415449bbbebcef = NULL;
    }

    assertFrameObject(frame_16cab76e4b8d9ff824415449bbbebcef);

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


static PyObject *impl_flet_core$view$$$function__14_navigation_bar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d762e171e1bc983778249ff04c5d8d84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d762e171e1bc983778249ff04c5d8d84 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d762e171e1bc983778249ff04c5d8d84)) {
        Py_XDECREF(cache_frame_d762e171e1bc983778249ff04c5d8d84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d762e171e1bc983778249ff04c5d8d84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d762e171e1bc983778249ff04c5d8d84 = MAKE_FUNCTION_FRAME(codeobj_d762e171e1bc983778249ff04c5d8d84, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d762e171e1bc983778249ff04c5d8d84->m_type_description == NULL);
    frame_d762e171e1bc983778249ff04c5d8d84 = cache_frame_d762e171e1bc983778249ff04c5d8d84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d762e171e1bc983778249ff04c5d8d84);
    assert(Py_REFCNT(frame_d762e171e1bc983778249ff04c5d8d84) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[23], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d762e171e1bc983778249ff04c5d8d84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d762e171e1bc983778249ff04c5d8d84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d762e171e1bc983778249ff04c5d8d84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d762e171e1bc983778249ff04c5d8d84,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d762e171e1bc983778249ff04c5d8d84 == cache_frame_d762e171e1bc983778249ff04c5d8d84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d762e171e1bc983778249ff04c5d8d84);
        cache_frame_d762e171e1bc983778249ff04c5d8d84 = NULL;
    }

    assertFrameObject(frame_d762e171e1bc983778249ff04c5d8d84);

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


static PyObject *impl_flet_core$view$$$function__15_horizontal_alignment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5d5e2dc5f01af1df404ec9a04971d94e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5d5e2dc5f01af1df404ec9a04971d94e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5d5e2dc5f01af1df404ec9a04971d94e)) {
        Py_XDECREF(cache_frame_5d5e2dc5f01af1df404ec9a04971d94e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d5e2dc5f01af1df404ec9a04971d94e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d5e2dc5f01af1df404ec9a04971d94e = MAKE_FUNCTION_FRAME(codeobj_5d5e2dc5f01af1df404ec9a04971d94e, module_flet_core$view, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d5e2dc5f01af1df404ec9a04971d94e->m_type_description == NULL);
    frame_5d5e2dc5f01af1df404ec9a04971d94e = cache_frame_5d5e2dc5f01af1df404ec9a04971d94e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d5e2dc5f01af1df404ec9a04971d94e);
    assert(Py_REFCNT(frame_5d5e2dc5f01af1df404ec9a04971d94e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
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
        exception_tb = MAKE_TRACEBACK(frame_5d5e2dc5f01af1df404ec9a04971d94e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d5e2dc5f01af1df404ec9a04971d94e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d5e2dc5f01af1df404ec9a04971d94e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d5e2dc5f01af1df404ec9a04971d94e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5d5e2dc5f01af1df404ec9a04971d94e == cache_frame_5d5e2dc5f01af1df404ec9a04971d94e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d5e2dc5f01af1df404ec9a04971d94e);
        cache_frame_5d5e2dc5f01af1df404ec9a04971d94e = NULL;
    }

    assertFrameObject(frame_5d5e2dc5f01af1df404ec9a04971d94e);

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


static PyObject *impl_flet_core$view$$$function__16_horizontal_alignment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_9d59c252cb1d850743e3be4f88822e08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9d59c252cb1d850743e3be4f88822e08 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9d59c252cb1d850743e3be4f88822e08)) {
        Py_XDECREF(cache_frame_9d59c252cb1d850743e3be4f88822e08);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d59c252cb1d850743e3be4f88822e08 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d59c252cb1d850743e3be4f88822e08 = MAKE_FUNCTION_FRAME(codeobj_9d59c252cb1d850743e3be4f88822e08, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9d59c252cb1d850743e3be4f88822e08->m_type_description == NULL);
    frame_9d59c252cb1d850743e3be4f88822e08 = cache_frame_9d59c252cb1d850743e3be4f88822e08;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9d59c252cb1d850743e3be4f88822e08);
    assert(Py_REFCNT(frame_9d59c252cb1d850743e3be4f88822e08) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
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
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[32];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[33]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9d59c252cb1d850743e3be4f88822e08->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
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
        frame_9d59c252cb1d850743e3be4f88822e08->m_frame.f_lineno = 148;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[34], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
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
        exception_tb = MAKE_TRACEBACK(frame_9d59c252cb1d850743e3be4f88822e08, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d59c252cb1d850743e3be4f88822e08->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d59c252cb1d850743e3be4f88822e08, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d59c252cb1d850743e3be4f88822e08,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_9d59c252cb1d850743e3be4f88822e08 == cache_frame_9d59c252cb1d850743e3be4f88822e08) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9d59c252cb1d850743e3be4f88822e08);
        cache_frame_9d59c252cb1d850743e3be4f88822e08 = NULL;
    }

    assertFrameObject(frame_9d59c252cb1d850743e3be4f88822e08);

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


static PyObject *impl_flet_core$view$$$function__17___set_horizontal_alignment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_aca05578212f56e88b5ae63eaa29d253;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aca05578212f56e88b5ae63eaa29d253 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aca05578212f56e88b5ae63eaa29d253)) {
        Py_XDECREF(cache_frame_aca05578212f56e88b5ae63eaa29d253);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aca05578212f56e88b5ae63eaa29d253 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aca05578212f56e88b5ae63eaa29d253 = MAKE_FUNCTION_FRAME(codeobj_aca05578212f56e88b5ae63eaa29d253, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aca05578212f56e88b5ae63eaa29d253->m_type_description == NULL);
    frame_aca05578212f56e88b5ae63eaa29d253 = cache_frame_aca05578212f56e88b5ae63eaa29d253;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aca05578212f56e88b5ae63eaa29d253);
    assert(Py_REFCNT(frame_aca05578212f56e88b5ae63eaa29d253) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[32];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_aca05578212f56e88b5ae63eaa29d253->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[29],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
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
        exception_tb = MAKE_TRACEBACK(frame_aca05578212f56e88b5ae63eaa29d253, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aca05578212f56e88b5ae63eaa29d253->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aca05578212f56e88b5ae63eaa29d253, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aca05578212f56e88b5ae63eaa29d253,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_aca05578212f56e88b5ae63eaa29d253 == cache_frame_aca05578212f56e88b5ae63eaa29d253) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aca05578212f56e88b5ae63eaa29d253);
        cache_frame_aca05578212f56e88b5ae63eaa29d253 = NULL;
    }

    assertFrameObject(frame_aca05578212f56e88b5ae63eaa29d253);

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


static PyObject *impl_flet_core$view$$$function__18_vertical_alignment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_51cd68539b2f5f700e4ddfd7351782d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_51cd68539b2f5f700e4ddfd7351782d2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51cd68539b2f5f700e4ddfd7351782d2)) {
        Py_XDECREF(cache_frame_51cd68539b2f5f700e4ddfd7351782d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51cd68539b2f5f700e4ddfd7351782d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51cd68539b2f5f700e4ddfd7351782d2 = MAKE_FUNCTION_FRAME(codeobj_51cd68539b2f5f700e4ddfd7351782d2, module_flet_core$view, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51cd68539b2f5f700e4ddfd7351782d2->m_type_description == NULL);
    frame_51cd68539b2f5f700e4ddfd7351782d2 = cache_frame_51cd68539b2f5f700e4ddfd7351782d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_51cd68539b2f5f700e4ddfd7351782d2);
    assert(Py_REFCNT(frame_51cd68539b2f5f700e4ddfd7351782d2) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
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
        exception_tb = MAKE_TRACEBACK(frame_51cd68539b2f5f700e4ddfd7351782d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51cd68539b2f5f700e4ddfd7351782d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51cd68539b2f5f700e4ddfd7351782d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51cd68539b2f5f700e4ddfd7351782d2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_51cd68539b2f5f700e4ddfd7351782d2 == cache_frame_51cd68539b2f5f700e4ddfd7351782d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51cd68539b2f5f700e4ddfd7351782d2);
        cache_frame_51cd68539b2f5f700e4ddfd7351782d2 = NULL;
    }

    assertFrameObject(frame_51cd68539b2f5f700e4ddfd7351782d2);

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


static PyObject *impl_flet_core$view$$$function__19_vertical_alignment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e1657392df0d73484d91ea05c47297d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e1657392df0d73484d91ea05c47297d1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e1657392df0d73484d91ea05c47297d1)) {
        Py_XDECREF(cache_frame_e1657392df0d73484d91ea05c47297d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e1657392df0d73484d91ea05c47297d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e1657392df0d73484d91ea05c47297d1 = MAKE_FUNCTION_FRAME(codeobj_e1657392df0d73484d91ea05c47297d1, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e1657392df0d73484d91ea05c47297d1->m_type_description == NULL);
    frame_e1657392df0d73484d91ea05c47297d1 = cache_frame_e1657392df0d73484d91ea05c47297d1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e1657392df0d73484d91ea05c47297d1);
    assert(Py_REFCNT(frame_e1657392df0d73484d91ea05c47297d1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
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
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[37];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[33]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 162;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e1657392df0d73484d91ea05c47297d1->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
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
        frame_e1657392df0d73484d91ea05c47297d1->m_frame.f_lineno = 164;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[38], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_e1657392df0d73484d91ea05c47297d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e1657392df0d73484d91ea05c47297d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1657392df0d73484d91ea05c47297d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e1657392df0d73484d91ea05c47297d1,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e1657392df0d73484d91ea05c47297d1 == cache_frame_e1657392df0d73484d91ea05c47297d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e1657392df0d73484d91ea05c47297d1);
        cache_frame_e1657392df0d73484d91ea05c47297d1 = NULL;
    }

    assertFrameObject(frame_e1657392df0d73484d91ea05c47297d1);

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


static PyObject *impl_flet_core$view$$$function__20___set_vertical_alignment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_70e957884a23317ed18beac97934c02c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_70e957884a23317ed18beac97934c02c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_70e957884a23317ed18beac97934c02c)) {
        Py_XDECREF(cache_frame_70e957884a23317ed18beac97934c02c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70e957884a23317ed18beac97934c02c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70e957884a23317ed18beac97934c02c = MAKE_FUNCTION_FRAME(codeobj_70e957884a23317ed18beac97934c02c, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_70e957884a23317ed18beac97934c02c->m_type_description == NULL);
    frame_70e957884a23317ed18beac97934c02c = cache_frame_70e957884a23317ed18beac97934c02c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_70e957884a23317ed18beac97934c02c);
    assert(Py_REFCNT(frame_70e957884a23317ed18beac97934c02c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[37];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_70e957884a23317ed18beac97934c02c->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[29],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
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
        exception_tb = MAKE_TRACEBACK(frame_70e957884a23317ed18beac97934c02c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70e957884a23317ed18beac97934c02c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70e957884a23317ed18beac97934c02c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70e957884a23317ed18beac97934c02c,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_70e957884a23317ed18beac97934c02c == cache_frame_70e957884a23317ed18beac97934c02c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_70e957884a23317ed18beac97934c02c);
        cache_frame_70e957884a23317ed18beac97934c02c = NULL;
    }

    assertFrameObject(frame_70e957884a23317ed18beac97934c02c);

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


static PyObject *impl_flet_core$view$$$function__21_spacing(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1426510cf5cb00902b2375180c611d00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1426510cf5cb00902b2375180c611d00 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1426510cf5cb00902b2375180c611d00)) {
        Py_XDECREF(cache_frame_1426510cf5cb00902b2375180c611d00);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1426510cf5cb00902b2375180c611d00 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1426510cf5cb00902b2375180c611d00 = MAKE_FUNCTION_FRAME(codeobj_1426510cf5cb00902b2375180c611d00, module_flet_core$view, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1426510cf5cb00902b2375180c611d00->m_type_description == NULL);
    frame_1426510cf5cb00902b2375180c611d00 = cache_frame_1426510cf5cb00902b2375180c611d00;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1426510cf5cb00902b2375180c611d00);
    assert(Py_REFCNT(frame_1426510cf5cb00902b2375180c611d00) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_1426510cf5cb00902b2375180c611d00->m_frame.f_lineno = 172;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
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
        exception_tb = MAKE_TRACEBACK(frame_1426510cf5cb00902b2375180c611d00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1426510cf5cb00902b2375180c611d00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1426510cf5cb00902b2375180c611d00, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1426510cf5cb00902b2375180c611d00,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1426510cf5cb00902b2375180c611d00 == cache_frame_1426510cf5cb00902b2375180c611d00) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1426510cf5cb00902b2375180c611d00);
        cache_frame_1426510cf5cb00902b2375180c611d00 = NULL;
    }

    assertFrameObject(frame_1426510cf5cb00902b2375180c611d00);

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


static PyObject *impl_flet_core$view$$$function__22_spacing(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a83e584423a50f653a321643fd1095c3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a83e584423a50f653a321643fd1095c3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a83e584423a50f653a321643fd1095c3)) {
        Py_XDECREF(cache_frame_a83e584423a50f653a321643fd1095c3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a83e584423a50f653a321643fd1095c3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a83e584423a50f653a321643fd1095c3 = MAKE_FUNCTION_FRAME(codeobj_a83e584423a50f653a321643fd1095c3, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a83e584423a50f653a321643fd1095c3->m_type_description == NULL);
    frame_a83e584423a50f653a321643fd1095c3 = cache_frame_a83e584423a50f653a321643fd1095c3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a83e584423a50f653a321643fd1095c3);
    assert(Py_REFCNT(frame_a83e584423a50f653a321643fd1095c3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[11];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_a83e584423a50f653a321643fd1095c3->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[29],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
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
        exception_tb = MAKE_TRACEBACK(frame_a83e584423a50f653a321643fd1095c3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a83e584423a50f653a321643fd1095c3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a83e584423a50f653a321643fd1095c3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a83e584423a50f653a321643fd1095c3,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a83e584423a50f653a321643fd1095c3 == cache_frame_a83e584423a50f653a321643fd1095c3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a83e584423a50f653a321643fd1095c3);
        cache_frame_a83e584423a50f653a321643fd1095c3 = NULL;
    }

    assertFrameObject(frame_a83e584423a50f653a321643fd1095c3);

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


static PyObject *impl_flet_core$view$$$function__23_padding(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e8defc0b8b7c2b2ce6e721c670bd3978;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e8defc0b8b7c2b2ce6e721c670bd3978 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e8defc0b8b7c2b2ce6e721c670bd3978)) {
        Py_XDECREF(cache_frame_e8defc0b8b7c2b2ce6e721c670bd3978);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e8defc0b8b7c2b2ce6e721c670bd3978 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e8defc0b8b7c2b2ce6e721c670bd3978 = MAKE_FUNCTION_FRAME(codeobj_e8defc0b8b7c2b2ce6e721c670bd3978, module_flet_core$view, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e8defc0b8b7c2b2ce6e721c670bd3978->m_type_description == NULL);
    frame_e8defc0b8b7c2b2ce6e721c670bd3978 = cache_frame_e8defc0b8b7c2b2ce6e721c670bd3978;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e8defc0b8b7c2b2ce6e721c670bd3978);
    assert(Py_REFCNT(frame_e8defc0b8b7c2b2ce6e721c670bd3978) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
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
        exception_tb = MAKE_TRACEBACK(frame_e8defc0b8b7c2b2ce6e721c670bd3978, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8defc0b8b7c2b2ce6e721c670bd3978->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8defc0b8b7c2b2ce6e721c670bd3978, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e8defc0b8b7c2b2ce6e721c670bd3978,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e8defc0b8b7c2b2ce6e721c670bd3978 == cache_frame_e8defc0b8b7c2b2ce6e721c670bd3978) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e8defc0b8b7c2b2ce6e721c670bd3978);
        cache_frame_e8defc0b8b7c2b2ce6e721c670bd3978 = NULL;
    }

    assertFrameObject(frame_e8defc0b8b7c2b2ce6e721c670bd3978);

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


static PyObject *impl_flet_core$view$$$function__24_padding(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a0cbbf0daab7a52fe93f8a3c52123951;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a0cbbf0daab7a52fe93f8a3c52123951 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a0cbbf0daab7a52fe93f8a3c52123951)) {
        Py_XDECREF(cache_frame_a0cbbf0daab7a52fe93f8a3c52123951);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0cbbf0daab7a52fe93f8a3c52123951 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0cbbf0daab7a52fe93f8a3c52123951 = MAKE_FUNCTION_FRAME(codeobj_a0cbbf0daab7a52fe93f8a3c52123951, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a0cbbf0daab7a52fe93f8a3c52123951->m_type_description == NULL);
    frame_a0cbbf0daab7a52fe93f8a3c52123951 = cache_frame_a0cbbf0daab7a52fe93f8a3c52123951;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a0cbbf0daab7a52fe93f8a3c52123951);
    assert(Py_REFCNT(frame_a0cbbf0daab7a52fe93f8a3c52123951) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a0cbbf0daab7a52fe93f8a3c52123951, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0cbbf0daab7a52fe93f8a3c52123951->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0cbbf0daab7a52fe93f8a3c52123951, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0cbbf0daab7a52fe93f8a3c52123951,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a0cbbf0daab7a52fe93f8a3c52123951 == cache_frame_a0cbbf0daab7a52fe93f8a3c52123951) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a0cbbf0daab7a52fe93f8a3c52123951);
        cache_frame_a0cbbf0daab7a52fe93f8a3c52123951 = NULL;
    }

    assertFrameObject(frame_a0cbbf0daab7a52fe93f8a3c52123951);

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


static PyObject *impl_flet_core$view$$$function__25_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_82ab2d0a15735dd7d4b6a92a7623f996;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_82ab2d0a15735dd7d4b6a92a7623f996 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_82ab2d0a15735dd7d4b6a92a7623f996)) {
        Py_XDECREF(cache_frame_82ab2d0a15735dd7d4b6a92a7623f996);

#if _DEBUG_REFCOUNTS
        if (cache_frame_82ab2d0a15735dd7d4b6a92a7623f996 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_82ab2d0a15735dd7d4b6a92a7623f996 = MAKE_FUNCTION_FRAME(codeobj_82ab2d0a15735dd7d4b6a92a7623f996, module_flet_core$view, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_82ab2d0a15735dd7d4b6a92a7623f996->m_type_description == NULL);
    frame_82ab2d0a15735dd7d4b6a92a7623f996 = cache_frame_82ab2d0a15735dd7d4b6a92a7623f996;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_82ab2d0a15735dd7d4b6a92a7623f996);
    assert(Py_REFCNT(frame_82ab2d0a15735dd7d4b6a92a7623f996) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_82ab2d0a15735dd7d4b6a92a7623f996->m_frame.f_lineno = 190;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
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
        exception_tb = MAKE_TRACEBACK(frame_82ab2d0a15735dd7d4b6a92a7623f996, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_82ab2d0a15735dd7d4b6a92a7623f996->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_82ab2d0a15735dd7d4b6a92a7623f996, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_82ab2d0a15735dd7d4b6a92a7623f996,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_82ab2d0a15735dd7d4b6a92a7623f996 == cache_frame_82ab2d0a15735dd7d4b6a92a7623f996) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_82ab2d0a15735dd7d4b6a92a7623f996);
        cache_frame_82ab2d0a15735dd7d4b6a92a7623f996 = NULL;
    }

    assertFrameObject(frame_82ab2d0a15735dd7d4b6a92a7623f996);

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


static PyObject *impl_flet_core$view$$$function__26_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a2ddc1880d301c50f14e1cd7cee2baa9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a2ddc1880d301c50f14e1cd7cee2baa9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a2ddc1880d301c50f14e1cd7cee2baa9)) {
        Py_XDECREF(cache_frame_a2ddc1880d301c50f14e1cd7cee2baa9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a2ddc1880d301c50f14e1cd7cee2baa9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a2ddc1880d301c50f14e1cd7cee2baa9 = MAKE_FUNCTION_FRAME(codeobj_a2ddc1880d301c50f14e1cd7cee2baa9, module_flet_core$view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a2ddc1880d301c50f14e1cd7cee2baa9->m_type_description == NULL);
    frame_a2ddc1880d301c50f14e1cd7cee2baa9 = cache_frame_a2ddc1880d301c50f14e1cd7cee2baa9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a2ddc1880d301c50f14e1cd7cee2baa9);
    assert(Py_REFCNT(frame_a2ddc1880d301c50f14e1cd7cee2baa9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[13];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_a2ddc1880d301c50f14e1cd7cee2baa9->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[29],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
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
        exception_tb = MAKE_TRACEBACK(frame_a2ddc1880d301c50f14e1cd7cee2baa9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a2ddc1880d301c50f14e1cd7cee2baa9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a2ddc1880d301c50f14e1cd7cee2baa9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a2ddc1880d301c50f14e1cd7cee2baa9,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a2ddc1880d301c50f14e1cd7cee2baa9 == cache_frame_a2ddc1880d301c50f14e1cd7cee2baa9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a2ddc1880d301c50f14e1cd7cee2baa9);
        cache_frame_a2ddc1880d301c50f14e1cd7cee2baa9 = NULL;
    }

    assertFrameObject(frame_a2ddc1880d301c50f14e1cd7cee2baa9);

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



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__10_appbar(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__10_appbar,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_f79faf74f2c52d3e828651a133acb671,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__11_floating_action_button(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__11_floating_action_button,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_723a606da8571cb928157c6ccd14ec73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__12_floating_action_button(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__12_floating_action_button,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_f583b6d720a35b0c2e93bf69a1e8a9ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__13_navigation_bar(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__13_navigation_bar,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_16cab76e4b8d9ff824415449bbbebcef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__14_navigation_bar(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__14_navigation_bar,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_d762e171e1bc983778249ff04c5d8d84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__15_horizontal_alignment(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__15_horizontal_alignment,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[105],
#endif
        codeobj_5d5e2dc5f01af1df404ec9a04971d94e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__16_horizontal_alignment(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__16_horizontal_alignment,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[105],
#endif
        codeobj_9d59c252cb1d850743e3be4f88822e08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__17___set_horizontal_alignment(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__17___set_horizontal_alignment,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_aca05578212f56e88b5ae63eaa29d253,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__18_vertical_alignment(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__18_vertical_alignment,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_51cd68539b2f5f700e4ddfd7351782d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__19_vertical_alignment(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__19_vertical_alignment,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_e1657392df0d73484d91ea05c47297d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_230cbb1e2189b24f770229963608bf37,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__20___set_vertical_alignment(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__20___set_vertical_alignment,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_70e957884a23317ed18beac97934c02c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__21_spacing(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__21_spacing,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_1426510cf5cb00902b2375180c611d00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__22_spacing(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__22_spacing,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_a83e584423a50f653a321643fd1095c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__23_padding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__23_padding,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_e8defc0b8b7c2b2ce6e721c670bd3978,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__24_padding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__24_padding,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_a0cbbf0daab7a52fe93f8a3c52123951,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__25_bgcolor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__25_bgcolor,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_82ab2d0a15735dd7d4b6a92a7623f996,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__26_bgcolor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__26_bgcolor,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_a2ddc1880d301c50f14e1cd7cee2baa9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_3644e1400e23a24fdcb659d1c2fb4d48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[91]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__3__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__3__before_build_command,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_8c7657265536092233dfb461af12bcb1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$view,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__4__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__4__get_children,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_c3c768203e9c6cee611f1b34c351df43,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__5_route() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__5_route,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_270a200dec7ce41eb5b8cd0236e2ccbd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__6_route() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__6_route,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_069753149c21538985cec347dc9a266c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__7_controls(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__7_controls,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_4dbe466b361431030a99b0cb1dffe122,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__8_controls(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__8_controls,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_38cbfc17865869b9c54aa6108d805229,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$view$$$function__9_appbar(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$view$$$function__9_appbar,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_164ef2edbf657229b691117e16af4e76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$view,
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

function_impl_code functable_flet_core$view[] = {
    impl_flet_core$view$$$function__1___init__,
    NULL,
    impl_flet_core$view$$$function__3__before_build_command,
    impl_flet_core$view$$$function__4__get_children,
    impl_flet_core$view$$$function__5_route,
    impl_flet_core$view$$$function__6_route,
    impl_flet_core$view$$$function__7_controls,
    impl_flet_core$view$$$function__8_controls,
    impl_flet_core$view$$$function__9_appbar,
    impl_flet_core$view$$$function__10_appbar,
    impl_flet_core$view$$$function__11_floating_action_button,
    impl_flet_core$view$$$function__12_floating_action_button,
    impl_flet_core$view$$$function__13_navigation_bar,
    impl_flet_core$view$$$function__14_navigation_bar,
    impl_flet_core$view$$$function__15_horizontal_alignment,
    impl_flet_core$view$$$function__16_horizontal_alignment,
    impl_flet_core$view$$$function__17___set_horizontal_alignment,
    impl_flet_core$view$$$function__18_vertical_alignment,
    impl_flet_core$view$$$function__19_vertical_alignment,
    impl_flet_core$view$$$function__20___set_vertical_alignment,
    impl_flet_core$view$$$function__21_spacing,
    impl_flet_core$view$$$function__22_spacing,
    impl_flet_core$view$$$function__23_padding,
    impl_flet_core$view$$$function__24_padding,
    impl_flet_core$view$$$function__25_bgcolor,
    impl_flet_core$view$$$function__26_bgcolor,
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

    function_impl_code *current = functable_flet_core$view;
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

    if (offset > sizeof(functable_flet_core$view) || offset < 0) {
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
        functable_flet_core$view[offset],
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
        module_flet_core$view,
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
PyObject *modulecode_flet_core$view(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.view");

    // Store the module for future use.
    module_flet_core$view = module;

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
        PRINT_STRING("flet_core.view: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.view: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.view: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$view\n");

    moduledict_flet_core$view = MODULE_DICT(module_flet_core$view);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$view,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$view,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[122]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$view,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$view,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$view,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$view);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$view, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$view, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$view, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$view);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_e5b642adfef3c2849a83aac9115106fa;
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
    int tmp_res;
    PyObject *locals_flet_core$view$$$class__1_View_20 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_37f9f2833538ace1a1195f16e1987b9e_2;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_2);
    }
    frame_e5b642adfef3c2849a83aac9115106fa = MAKE_MODULE_FRAME(codeobj_e5b642adfef3c2849a83aac9115106fa, module_flet_core$view);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e5b642adfef3c2849a83aac9115106fa);
    assert(Py_REFCNT(frame_e5b642adfef3c2849a83aac9115106fa) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[42];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[45], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[46], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_3);
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
                (PyObject *)moduledict_flet_core$view,
                mod_consts[48],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[48]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[50],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[50]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[51],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[51]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_7);
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
        tmp_name_value_1 = mod_consts[52];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$view;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[53];
        tmp_level_value_1 = mod_consts[49];
        frame_e5b642adfef3c2849a83aac9115106fa->m_frame.f_lineno = 3;
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
                (PyObject *)moduledict_flet_core$view,
                mod_consts[0],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[54];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$view;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[55];
        tmp_level_value_2 = mod_consts[49];
        frame_e5b642adfef3c2849a83aac9115106fa->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_flet_core$view,
                mod_consts[56],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[57];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$view;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[58];
        tmp_level_value_3 = mod_consts[49];
        frame_e5b642adfef3c2849a83aac9115106fa->m_frame.f_lineno = 5;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[59],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[60];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$view;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[61];
        tmp_level_value_4 = mod_consts[49];
        frame_e5b642adfef3c2849a83aac9115106fa->m_frame.f_lineno = 6;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[62],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[63];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$view;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[64];
        tmp_level_value_5 = mod_consts[49];
        frame_e5b642adfef3c2849a83aac9115106fa->m_frame.f_lineno = 7;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[65],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[66];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$view;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[67];
        tmp_level_value_6 = mod_consts[49];
        frame_e5b642adfef3c2849a83aac9115106fa->m_frame.f_lineno = 8;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[2],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[68];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_flet_core$view;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[69];
        tmp_level_value_7 = mod_consts[49];
        frame_e5b642adfef3c2849a83aac9115106fa->m_frame.f_lineno = 9;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[31],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[31]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[70],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[70]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[36],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[36]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[71],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[71]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[72],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[72]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[73],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[73]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_flet_core$view,
                mod_consts[74],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[74]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_21);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_3;
        }
        tmp_assign_source_22 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_22, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_23 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
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


            exception_lineno = 20;

            goto try_except_handler_3;
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
        tmp_subscript_value_1 = mod_consts[49];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[75]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[75]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[76];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_e5b642adfef3c2849a83aac9115106fa->m_frame.f_lineno = 20;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[77]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_3;
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
        tmp_mod_expr_left_1 = mod_consts[78];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[79];
        tmp_getattr_default_1 = mod_consts[80];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_3;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[79]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 20;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_27;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$view$$$class__1_View_20 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[82], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[84], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        frame_37f9f2833538ace1a1195f16e1987b9e_2 = MAKE_CLASS_FRAME(codeobj_37f9f2833538ace1a1195f16e1987b9e, module_flet_core$view, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_37f9f2833538ace1a1195f16e1987b9e_2);
        assert(Py_REFCNT(frame_37f9f2833538ace1a1195f16e1987b9e_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_2;
            tmp_tuple_element_4 = Py_None;
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(14);
            {
                PyObject *tmp_expression_value_6;
                PyObject *tmp_expression_value_7;
                PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_4);
                tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[36]);

                if (tmp_expression_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_expression_value_6 == NULL)) {
                            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                        }

                        if (tmp_expression_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 38;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_6);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[85]);
                Py_DECREF(tmp_expression_value_6);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 5, tmp_tuple_element_4);
                tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[31]);

                if (tmp_expression_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_expression_value_7 == NULL)) {
                            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_expression_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 39;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_7);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[85]);
                Py_DECREF(tmp_expression_value_7);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 6, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 7, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 8, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 9, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 10, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 11, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 12, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 13, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_key_1 = mod_consts[5];
            tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

            if (tmp_expression_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_1);

                        exception_lineno = 33;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[86]);

            if (tmp_subscript_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_8);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_1);

                exception_lineno = 33;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 14 );
            {
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_10;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[4];
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 34;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[50]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_9);

                            exception_lineno = 34;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[0]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_subscript_value_4 == NULL)) {
                            tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_subscript_value_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_9);
                            Py_DECREF(tmp_expression_value_10);

                            exception_lineno = 34;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_subscript_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_9);

                    exception_lineno = 34;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_9);
                Py_DECREF(tmp_subscript_value_3);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[6];
                tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 35;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[56]);

                if (tmp_subscript_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_subscript_value_5 == NULL)) {
                            tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                        }

                        if (tmp_subscript_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_11);

                            exception_lineno = 35;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_5);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_11);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[8];
                tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 36;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[62]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_subscript_value_6 == NULL)) {
                            tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_subscript_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_12);

                            exception_lineno = 36;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 37;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[65]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_subscript_value_7 == NULL)) {
                            tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                        }

                        if (tmp_subscript_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_13);

                            exception_lineno = 37;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_13);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[9];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[36]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 38;
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
                tmp_dict_key_1 = mod_consts[10];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[31]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 39;
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
                tmp_dict_key_1 = mod_consts[11];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[59]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[59]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 40;
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
                tmp_dict_key_1 = mod_consts[12];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[72]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[72]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 41;
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
                tmp_dict_key_1 = mod_consts[13];
                tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 42;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[86]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[14];
                tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 46;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[73]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[73]);

                        if (unlikely(tmp_subscript_value_9 == NULL)) {
                            tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                        }

                        if (tmp_subscript_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_15);

                            exception_lineno = 46;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[15];
                tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 47;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[87]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_10 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 47;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[88];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[59]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[59]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 48;
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
                tmp_dict_key_1 = mod_consts[89];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[48]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[48]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 49;
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
            Py_DECREF(tmp_defaults_1);
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_flet_core$view$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$view$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[92], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$view$$$function__3__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$view$$$function__4__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[95], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[97]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 93;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$view$$$function__5_route();

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 93;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$view$$$function__5_route();

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 93;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[5]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 97;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$view$$$function__6_route();

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 97;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[99], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_12;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_4 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[97]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 102;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[100];
            tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[50]);

            if (tmp_expression_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[50]);

                    if (unlikely(tmp_expression_value_17 == NULL)) {
                        tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                    }

                    if (tmp_expression_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);

                        exception_lineno = 103;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[0]);

            if (tmp_subscript_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_11 == NULL)) {
                        tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);
                        Py_DECREF(tmp_expression_value_17);

                        exception_lineno = 103;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_17);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$view$$$function__7_controls(tmp_annotations_2);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 102;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[100];
            tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[50]);

            if (tmp_expression_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[50]);

                    if (unlikely(tmp_expression_value_18 == NULL)) {
                        tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                    }

                    if (tmp_expression_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[0]);

            if (tmp_subscript_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_12 == NULL)) {
                        tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_18);

                        exception_lineno = 103;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_18);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$view$$$function__7_controls(tmp_annotations_3);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 102;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_13;
            tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[4]);

            if (unlikely(tmp_expression_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 106;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[99]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[33];
            tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[50]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[50]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        exception_lineno = 107;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[0]);

            if (tmp_subscript_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_13 == NULL)) {
                        tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);
                        Py_DECREF(tmp_expression_value_20);

                        exception_lineno = 107;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_20);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 107;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$view$$$function__8_controls(tmp_annotations_4);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 106;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_15;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_7 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[97]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 111;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[100];
            tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 112;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[56]);

            if (tmp_subscript_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_subscript_value_14 == NULL)) {
                        tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_subscript_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);
                        Py_DECREF(tmp_expression_value_21);

                        exception_lineno = 112;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 112;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$view$$$function__9_appbar(tmp_annotations_5);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 111;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[100];
            tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 112;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[56]);

            if (tmp_subscript_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_subscript_value_15 == NULL)) {
                        tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_subscript_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_22);

                        exception_lineno = 112;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_22);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$view$$$function__9_appbar(tmp_annotations_6);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 111;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_16;
            tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[6]);

            if (unlikely(tmp_expression_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 115;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[99]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_7 = mod_consts[33];
            tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);

                        exception_lineno = 116;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[56]);

            if (tmp_subscript_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_subscript_value_16 == NULL)) {
                        tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_subscript_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);
                        Py_DECREF(tmp_expression_value_24);

                        exception_lineno = 116;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_16);
            Py_DECREF(tmp_expression_value_24);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 116;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$view$$$function__10_appbar(tmp_annotations_7);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 115;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_18;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_10 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[97]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 120;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[100];
            tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

            if (tmp_expression_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 121;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[62]);

            if (tmp_subscript_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_subscript_value_17 == NULL)) {
                        tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_subscript_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);
                        Py_DECREF(tmp_expression_value_25);

                        exception_lineno = 121;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_25);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$view$$$function__11_floating_action_button(tmp_annotations_8);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 120;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[100];
            tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

            if (tmp_expression_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_expression_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 121;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[62]);

            if (tmp_subscript_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_subscript_value_18 == NULL)) {
                        tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_subscript_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_26);

                        exception_lineno = 121;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_26);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$view$$$function__11_floating_action_button(tmp_annotations_9);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 120;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_19;
            tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[8]);

            if (unlikely(tmp_expression_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 124;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[99]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[33];
            tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

            if (tmp_expression_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 125;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[62]);

            if (tmp_subscript_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_subscript_value_19 == NULL)) {
                        tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_subscript_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);
                        Py_DECREF(tmp_expression_value_28);

                        exception_lineno = 125;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_28);
            Py_DECREF(tmp_subscript_value_19);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 125;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$view$$$function__12_floating_action_button(tmp_annotations_10);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 124;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_21;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_13 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (unlikely(tmp_called_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[97]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 129;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_11 = mod_consts[100];
            tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 130;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[65]);

            if (tmp_subscript_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[65]);

                    if (unlikely(tmp_subscript_value_20 == NULL)) {
                        tmp_subscript_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                    }

                    if (tmp_subscript_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);
                        Py_DECREF(tmp_expression_value_29);

                        exception_lineno = 130;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_29);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$view$$$function__13_navigation_bar(tmp_annotations_11);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 129;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_14 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_12 = mod_consts[100];
            tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

            if (tmp_expression_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 130;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[65]);

            if (tmp_subscript_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[65]);

                    if (unlikely(tmp_subscript_value_21 == NULL)) {
                        tmp_subscript_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                    }

                    if (tmp_subscript_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_30);

                        exception_lineno = 130;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_30);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$view$$$function__13_navigation_bar(tmp_annotations_12);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 129;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_22;
            tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[7]);

            if (unlikely(tmp_expression_value_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 133;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[99]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_13 = mod_consts[33];
            tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[51]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[51]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 134;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_22 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[65]);

            if (tmp_subscript_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[65]);

                    if (unlikely(tmp_subscript_value_22 == NULL)) {
                        tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                    }

                    if (tmp_subscript_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);
                        Py_DECREF(tmp_expression_value_32);

                        exception_lineno = 134;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_32);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 134;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$view$$$function__14_navigation_bar(tmp_annotations_13);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 133;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_16 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (unlikely(tmp_called_value_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[97]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 138;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_14 = mod_consts[100];
            tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[31]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_dict_value_14 == NULL)) {
                        tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                    }

                    if (tmp_dict_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 139;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$view$$$function__15_horizontal_alignment(tmp_annotations_14);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_17 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_15 = mod_consts[100];
            tmp_dict_value_15 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[31]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_dict_value_15 == NULL)) {
                        tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                    }

                    if (tmp_dict_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 139;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$view$$$function__15_horizontal_alignment(tmp_annotations_15);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[10]);

            if (unlikely(tmp_expression_value_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 142;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[99]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_16 = mod_consts[33];
            tmp_dict_value_16 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[31]);

            if (tmp_dict_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_dict_value_16 == NULL)) {
                        tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
                    }

                    if (tmp_dict_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 143;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$view$$$function__16_horizontal_alignment(tmp_annotations_16);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 142;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            tmp_dict_key_17 = mod_consts[33];
            tmp_dict_value_17 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[70]);

            if (tmp_dict_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_17 == NULL)) {
                        tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 150;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$view$$$function__17___set_horizontal_alignment(tmp_annotations_17);

            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_19 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (unlikely(tmp_called_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[97]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_18 = mod_consts[100];
            tmp_dict_value_18 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[36]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[36]);

                    if (unlikely(tmp_dict_value_18 == NULL)) {
                        tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                    }

                    if (tmp_dict_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 155;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$view$$$function__18_vertical_alignment(tmp_annotations_18);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 154;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_20 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_19 = mod_consts[100];
            tmp_dict_value_19 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[36]);

            if (tmp_dict_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[36]);

                    if (unlikely(tmp_dict_value_19 == NULL)) {
                        tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                    }

                    if (tmp_dict_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 155;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$view$$$function__18_vertical_alignment(tmp_annotations_19);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 154;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[9]);

            if (unlikely(tmp_expression_value_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 158;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[99]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_20 = mod_consts[33];
            tmp_dict_value_20 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[36]);

            if (tmp_dict_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[36]);

                    if (unlikely(tmp_dict_value_20 == NULL)) {
                        tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                    }

                    if (tmp_dict_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);

                        exception_lineno = 159;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$view$$$function__19_vertical_alignment(tmp_annotations_20);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 158;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            tmp_dict_key_21 = mod_consts[33];
            tmp_dict_value_21 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[71]);

            if (tmp_dict_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_dict_value_21 == NULL)) {
                        tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_dict_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 166;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$view$$$function__20___set_vertical_alignment(tmp_annotations_21);

            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_22 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (unlikely(tmp_called_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[97]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_22 = mod_consts[100];
            tmp_dict_value_22 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[59]);

            if (tmp_dict_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_dict_value_22 == NULL)) {
                        tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_dict_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 171;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$view$$$function__21_spacing(tmp_annotations_22);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_23 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_23 = mod_consts[100];
            tmp_dict_value_23 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[59]);

            if (tmp_dict_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_dict_value_23 == NULL)) {
                        tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_dict_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 171;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$view$$$function__21_spacing(tmp_annotations_23);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[11]);

            if (unlikely(tmp_expression_value_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[99]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_24 = mod_consts[33];
            tmp_dict_value_24 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[59]);

            if (tmp_dict_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_dict_value_24 == NULL)) {
                        tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_dict_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);

                        exception_lineno = 175;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$view$$$function__22_spacing(tmp_annotations_24);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 174;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_25 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (unlikely(tmp_called_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[97]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 179;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_25 = mod_consts[100];
            tmp_dict_value_25 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[72]);

            if (tmp_dict_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_dict_value_25 == NULL)) {
                        tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                    }

                    if (tmp_dict_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);

                        exception_lineno = 180;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_25 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$view$$$function__23_padding(tmp_annotations_25);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 179;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_26 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_26 = mod_consts[100];
            tmp_dict_value_26 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[72]);

            if (tmp_dict_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_dict_value_26 == NULL)) {
                        tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                    }

                    if (tmp_dict_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 180;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$view$$$function__23_padding(tmp_annotations_26);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 179;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[12]);

            if (unlikely(tmp_expression_value_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[99]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_27 = mod_consts[33];
            tmp_dict_value_27 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[72]);

            if (tmp_dict_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[72]);

                    if (unlikely(tmp_dict_value_27 == NULL)) {
                        tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                    }

                    if (tmp_dict_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);

                        exception_lineno = 184;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_27 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$view$$$function__24_padding(tmp_annotations_27);

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 183;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_29;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_28 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[97]);

            if (unlikely(tmp_called_value_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[97]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$view$$$function__25_bgcolor();

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 188;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_29 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$view$$$function__25_bgcolor();

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 188;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_30;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[13]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[13]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 192;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$view$$$function__26_bgcolor();

            frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame.f_lineno = 192;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[99], tmp_args_element_value_30);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_37f9f2833538ace1a1195f16e1987b9e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_37f9f2833538ace1a1195f16e1987b9e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_37f9f2833538ace1a1195f16e1987b9e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_37f9f2833538ace1a1195f16e1987b9e_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_37f9f2833538ace1a1195f16e1987b9e_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$view$$$class__1_View_20, mod_consts[114], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_30 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[76];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_flet_core$view$$$class__1_View_20;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_e5b642adfef3c2849a83aac9115106fa->m_frame.f_lineno = 20;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_30, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto try_except_handler_5;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_29);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_28 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_flet_core$view$$$class__1_View_20);
        locals_flet_core$view$$$class__1_View_20 = NULL;
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

        Py_DECREF(locals_flet_core$view$$$class__1_View_20);
        locals_flet_core$view$$$class__1_View_20 = NULL;
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
        exception_lineno = 20;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$view, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_28);
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
        exception_tb = MAKE_TRACEBACK(frame_e5b642adfef3c2849a83aac9115106fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e5b642adfef3c2849a83aac9115106fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e5b642adfef3c2849a83aac9115106fa, exception_lineno);
    }



    assertFrameObject(frame_e5b642adfef3c2849a83aac9115106fa);

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
    PGO_onModuleExit("flet_core.view", false);

    Py_INCREF(module_flet_core$view);
    return module_flet_core$view;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$view, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$view", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
