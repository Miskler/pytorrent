/* Generated code for Python module 'flet_core.charts.line_chart_data_point'
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

/* The "module_flet_core$charts$line_chart_data_point" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$charts$line_chart_data_point;
PyDictObject *moduledict_flet_core$charts$line_chart_data_point;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[121];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[121];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.charts.line_chart_data_point"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 121; i++) {
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
void checkModuleConstants_flet_core$charts$line_chart_data_point(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 121; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_635bb7c79b044f0eca2d0f52ae39318b;
static PyCodeObject *codeobj_028c2c112ecc6ce00708f74c85d5b410;
static PyCodeObject *codeobj_07a21e2ac6a6377b8084346cccc0312a;
static PyCodeObject *codeobj_5e038cc0c0f40c6304b9bf831fbcc2ac;
static PyCodeObject *codeobj_2a7693cc02e545a4ed70344e87cba184;
static PyCodeObject *codeobj_5786ebc8c072d937746dbdf6e2d5154d;
static PyCodeObject *codeobj_ef4f24e7358bf1e888513e5d48e6876c;
static PyCodeObject *codeobj_2b44b50765975e020a03498e7646d673;
static PyCodeObject *codeobj_6336c163150564b834324e30f94a7ce7;
static PyCodeObject *codeobj_7f1247e220b28d3968ec886883ddc64f;
static PyCodeObject *codeobj_a0b5e0c80c98d82fbc64bb7c07c6bd84;
static PyCodeObject *codeobj_a9f3bb4548252c2fd55870efba330652;
static PyCodeObject *codeobj_5c3fd1787a7dabd55864543352b8dd60;
static PyCodeObject *codeobj_958038e4b28cda90a7e892aac5052568;
static PyCodeObject *codeobj_6a94d94ec20ec46ab5355dcbf4ed5fea;
static PyCodeObject *codeobj_f9a7caca2c34920862e6b0ee38cb2ed5;
static PyCodeObject *codeobj_57cbe1d8dd97f629aaa7a24f71dde1de;
static PyCodeObject *codeobj_7768dbecb5bf4d98ff43d902afc80b5e;
static PyCodeObject *codeobj_d5c2ba5a263c4b5f91e18cd4e398794e;
static PyCodeObject *codeobj_0acce8e5cf8df938eb5ae244dccbb285;
static PyCodeObject *codeobj_343e024b79b916f25ac3703159d1378c;
static PyCodeObject *codeobj_5f88c18efeef9c0cf8469feb05d51ee2;
static PyCodeObject *codeobj_421ec264d6951f5da5c25657614faab0;
static PyCodeObject *codeobj_2fdc2d3f5ce6fce660eea1df988aa415;
static PyCodeObject *codeobj_848283774462ae10524405e8d31e5e94;
static PyCodeObject *codeobj_751a32562030da9e2be6a19da530640e;
static PyCodeObject *codeobj_04dc322ca25b3403565b7a6ff7d18f4b;
static PyCodeObject *codeobj_d61a22603d28356107cd9241aa1c1bbf;
static PyCodeObject *codeobj_5d5335b37487c26bfd8e2b07308653fd;
static PyCodeObject *codeobj_c03b09b7f6060940d77c452b7b729c13;
static PyCodeObject *codeobj_17a5cf13c20636baa90026e794fffa2a;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[44]; CHECK_OBJECT(module_filename_obj);
    codeobj_635bb7c79b044f0eca2d0f52ae39318b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_028c2c112ecc6ce00708f74c85d5b410 = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[114], NULL, 0, 0, 0);
    codeobj_07a21e2ac6a6377b8084346cccc0312a = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[115], NULL, 17, 0, 0);
    codeobj_5e038cc0c0f40c6304b9bf831fbcc2ac = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[116], NULL, 2, 0, 0);
    codeobj_2a7693cc02e545a4ed70344e87cba184 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[117], mod_consts[114], 1, 0, 0);
    codeobj_5786ebc8c072d937746dbdf6e2d5154d = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[118], NULL, 1, 0, 0);
    codeobj_ef4f24e7358bf1e888513e5d48e6876c = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[90], mod_consts[90], mod_consts[119], NULL, 1, 0, 0);
    codeobj_2b44b50765975e020a03498e7646d673 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[119], NULL, 1, 0, 0);
    codeobj_6336c163150564b834324e30f94a7ce7 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[116], NULL, 2, 0, 0);
    codeobj_7f1247e220b28d3968ec886883ddc64f = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[119], NULL, 1, 0, 0);
    codeobj_a0b5e0c80c98d82fbc64bb7c07c6bd84 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[116], NULL, 2, 0, 0);
    codeobj_a9f3bb4548252c2fd55870efba330652 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[119], NULL, 1, 0, 0);
    codeobj_5c3fd1787a7dabd55864543352b8dd60 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[116], NULL, 2, 0, 0);
    codeobj_958038e4b28cda90a7e892aac5052568 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[119], NULL, 1, 0, 0);
    codeobj_6a94d94ec20ec46ab5355dcbf4ed5fea = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[116], NULL, 2, 0, 0);
    codeobj_f9a7caca2c34920862e6b0ee38cb2ed5 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[119], NULL, 1, 0, 0);
    codeobj_57cbe1d8dd97f629aaa7a24f71dde1de = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[116], NULL, 2, 0, 0);
    codeobj_7768dbecb5bf4d98ff43d902afc80b5e = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[119], NULL, 1, 0, 0);
    codeobj_d5c2ba5a263c4b5f91e18cd4e398794e = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[116], NULL, 2, 0, 0);
    codeobj_0acce8e5cf8df938eb5ae244dccbb285 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[119], NULL, 1, 0, 0);
    codeobj_343e024b79b916f25ac3703159d1378c = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[116], NULL, 2, 0, 0);
    codeobj_5f88c18efeef9c0cf8469feb05d51ee2 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[119], NULL, 1, 0, 0);
    codeobj_421ec264d6951f5da5c25657614faab0 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[116], NULL, 2, 0, 0);
    codeobj_2fdc2d3f5ce6fce660eea1df988aa415 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[119], NULL, 1, 0, 0);
    codeobj_848283774462ae10524405e8d31e5e94 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[116], NULL, 2, 0, 0);
    codeobj_751a32562030da9e2be6a19da530640e = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[119], NULL, 1, 0, 0);
    codeobj_04dc322ca25b3403565b7a6ff7d18f4b = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[116], NULL, 2, 0, 0);
    codeobj_d61a22603d28356107cd9241aa1c1bbf = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[119], NULL, 1, 0, 0);
    codeobj_5d5335b37487c26bfd8e2b07308653fd = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[116], NULL, 2, 0, 0);
    codeobj_c03b09b7f6060940d77c452b7b729c13 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[119], NULL, 1, 0, 0);
    codeobj_17a5cf13c20636baa90026e794fffa2a = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[116], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__10_selected(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__11_show_tooltip(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__12_show_tooltip(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__13_tooltip(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__14_tooltip(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__15_tooltip_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__16_tooltip_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__17___set_tooltip_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__18_tooltip_style();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__19_tooltip_style(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__20_point();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__21_point(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__22_selected_point();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__23_selected_point(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__24_show_above_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__25_show_above_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__26_show_below_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__27_show_below_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__28_selected_below_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__29_selected_below_line(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__3__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__4__get_children();


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__5_x(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__6_x(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__7_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__8_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__9_selected(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_y = python_pars[2];
    PyObject *par_ref = python_pars[3];
    PyObject *par_disabled = python_pars[4];
    PyObject *par_visible = python_pars[5];
    PyObject *par_data = python_pars[6];
    PyObject *par_selected = python_pars[7];
    PyObject *par_show_tooltip = python_pars[8];
    PyObject *par_tooltip = python_pars[9];
    PyObject *par_tooltip_style = python_pars[10];
    PyObject *par_tooltip_align = python_pars[11];
    PyObject *par_point = python_pars[12];
    PyObject *par_selected_point = python_pars[13];
    PyObject *par_show_above_line = python_pars[14];
    PyObject *par_show_below_line = python_pars[15];
    PyObject *par_selected_below_line = python_pars[16];
    struct Nuitka_FrameObject *frame_07a21e2ac6a6377b8084346cccc0312a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_07a21e2ac6a6377b8084346cccc0312a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_07a21e2ac6a6377b8084346cccc0312a)) {
        Py_XDECREF(cache_frame_07a21e2ac6a6377b8084346cccc0312a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07a21e2ac6a6377b8084346cccc0312a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07a21e2ac6a6377b8084346cccc0312a = MAKE_FUNCTION_FRAME(codeobj_07a21e2ac6a6377b8084346cccc0312a, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_07a21e2ac6a6377b8084346cccc0312a->m_type_description == NULL);
    frame_07a21e2ac6a6377b8084346cccc0312a = cache_frame_07a21e2ac6a6377b8084346cccc0312a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_07a21e2ac6a6377b8084346cccc0312a);
    assert(Py_REFCNT(frame_07a21e2ac6a6377b8084346cccc0312a) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooo";
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
        frame_07a21e2ac6a6377b8084346cccc0312a->m_frame.f_lineno = 35;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_x);
        tmp_assattr_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_y);
        tmp_assattr_value_2 = par_y;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_selected);
        tmp_assattr_value_3 = par_selected;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_show_tooltip);
        tmp_assattr_value_4 = par_show_tooltip;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_tooltip);
        tmp_assattr_value_5 = par_tooltip;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_tooltip_align);
        tmp_assattr_value_6 = par_tooltip_align;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_tooltip_style);
        tmp_assattr_value_7 = par_tooltip_style;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_point);
        tmp_assattr_value_8 = par_point;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[10], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_selected_point);
        tmp_assattr_value_9 = par_selected_point;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[11], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_show_above_line);
        tmp_assattr_value_10 = par_show_above_line;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[12], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_show_below_line);
        tmp_assattr_value_11 = par_show_below_line;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[13], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_selected_below_line);
        tmp_assattr_value_12 = par_selected_below_line;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[14], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_07a21e2ac6a6377b8084346cccc0312a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07a21e2ac6a6377b8084346cccc0312a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07a21e2ac6a6377b8084346cccc0312a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07a21e2ac6a6377b8084346cccc0312a,
        type_description_1,
        par_self,
        par_x,
        par_y,
        par_ref,
        par_disabled,
        par_visible,
        par_data,
        par_selected,
        par_show_tooltip,
        par_tooltip,
        par_tooltip_style,
        par_tooltip_align,
        par_point,
        par_selected_point,
        par_show_above_line,
        par_show_below_line,
        par_selected_below_line
    );


    // Release cached frame if used for exception.
    if (frame_07a21e2ac6a6377b8084346cccc0312a == cache_frame_07a21e2ac6a6377b8084346cccc0312a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_07a21e2ac6a6377b8084346cccc0312a);
        cache_frame_07a21e2ac6a6377b8084346cccc0312a = NULL;
    }

    assertFrameObject(frame_07a21e2ac6a6377b8084346cccc0312a);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_selected);
    Py_DECREF(par_selected);
    CHECK_OBJECT(par_show_tooltip);
    Py_DECREF(par_show_tooltip);
    CHECK_OBJECT(par_tooltip);
    Py_DECREF(par_tooltip);
    CHECK_OBJECT(par_tooltip_style);
    Py_DECREF(par_tooltip_style);
    CHECK_OBJECT(par_tooltip_align);
    Py_DECREF(par_tooltip_align);
    CHECK_OBJECT(par_point);
    Py_DECREF(par_point);
    CHECK_OBJECT(par_selected_point);
    Py_DECREF(par_selected_point);
    CHECK_OBJECT(par_show_above_line);
    Py_DECREF(par_show_above_line);
    CHECK_OBJECT(par_show_below_line);
    Py_DECREF(par_show_below_line);
    CHECK_OBJECT(par_selected_below_line);
    Py_DECREF(par_selected_below_line);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_selected);
    Py_DECREF(par_selected);
    CHECK_OBJECT(par_show_tooltip);
    Py_DECREF(par_show_tooltip);
    CHECK_OBJECT(par_tooltip);
    Py_DECREF(par_tooltip);
    CHECK_OBJECT(par_tooltip_style);
    Py_DECREF(par_tooltip_style);
    CHECK_OBJECT(par_tooltip_align);
    Py_DECREF(par_tooltip_align);
    CHECK_OBJECT(par_point);
    Py_DECREF(par_point);
    CHECK_OBJECT(par_selected_point);
    Py_DECREF(par_selected_point);
    CHECK_OBJECT(par_show_above_line);
    Py_DECREF(par_show_above_line);
    CHECK_OBJECT(par_show_below_line);
    Py_DECREF(par_show_below_line);
    CHECK_OBJECT(par_selected_below_line);
    Py_DECREF(par_selected_below_line);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__3__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2a7693cc02e545a4ed70344e87cba184;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2a7693cc02e545a4ed70344e87cba184 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2a7693cc02e545a4ed70344e87cba184)) {
        Py_XDECREF(cache_frame_2a7693cc02e545a4ed70344e87cba184);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2a7693cc02e545a4ed70344e87cba184 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2a7693cc02e545a4ed70344e87cba184 = MAKE_FUNCTION_FRAME(codeobj_2a7693cc02e545a4ed70344e87cba184, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2a7693cc02e545a4ed70344e87cba184->m_type_description == NULL);
    frame_2a7693cc02e545a4ed70344e87cba184 = cache_frame_2a7693cc02e545a4ed70344e87cba184;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2a7693cc02e545a4ed70344e87cba184);
    assert(Py_REFCNT(frame_2a7693cc02e545a4ed70344e87cba184) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$charts$line_chart_data_point, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_2a7693cc02e545a4ed70344e87cba184->m_frame.f_lineno = 60;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[18];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 61;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_2a7693cc02e545a4ed70344e87cba184->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
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
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[10];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[20]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 62;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_2a7693cc02e545a4ed70344e87cba184->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[17]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[21];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[22]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 63;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_2a7693cc02e545a4ed70344e87cba184->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[17]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[23];
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[24]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 64;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_2a7693cc02e545a4ed70344e87cba184->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2a7693cc02e545a4ed70344e87cba184, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2a7693cc02e545a4ed70344e87cba184->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a7693cc02e545a4ed70344e87cba184, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2a7693cc02e545a4ed70344e87cba184,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2a7693cc02e545a4ed70344e87cba184 == cache_frame_2a7693cc02e545a4ed70344e87cba184) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2a7693cc02e545a4ed70344e87cba184);
        cache_frame_2a7693cc02e545a4ed70344e87cba184 = NULL;
    }

    assertFrameObject(frame_2a7693cc02e545a4ed70344e87cba184);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__4__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_children = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_children == NULL);
        var_children = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_children);
    tmp_return_value = var_children;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_children);
    Py_DECREF(var_children);
    var_children = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__5_x(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d61a22603d28356107cd9241aa1c1bbf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d61a22603d28356107cd9241aa1c1bbf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d61a22603d28356107cd9241aa1c1bbf)) {
        Py_XDECREF(cache_frame_d61a22603d28356107cd9241aa1c1bbf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d61a22603d28356107cd9241aa1c1bbf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d61a22603d28356107cd9241aa1c1bbf = MAKE_FUNCTION_FRAME(codeobj_d61a22603d28356107cd9241aa1c1bbf, module_flet_core$charts$line_chart_data_point, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d61a22603d28356107cd9241aa1c1bbf->m_type_description == NULL);
    frame_d61a22603d28356107cd9241aa1c1bbf = cache_frame_d61a22603d28356107cd9241aa1c1bbf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d61a22603d28356107cd9241aa1c1bbf);
    assert(Py_REFCNT(frame_d61a22603d28356107cd9241aa1c1bbf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d61a22603d28356107cd9241aa1c1bbf->m_frame.f_lineno = 73;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[26], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
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
        exception_tb = MAKE_TRACEBACK(frame_d61a22603d28356107cd9241aa1c1bbf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d61a22603d28356107cd9241aa1c1bbf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d61a22603d28356107cd9241aa1c1bbf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d61a22603d28356107cd9241aa1c1bbf,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d61a22603d28356107cd9241aa1c1bbf == cache_frame_d61a22603d28356107cd9241aa1c1bbf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d61a22603d28356107cd9241aa1c1bbf);
        cache_frame_d61a22603d28356107cd9241aa1c1bbf = NULL;
    }

    assertFrameObject(frame_d61a22603d28356107cd9241aa1c1bbf);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__6_x(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_5d5335b37487c26bfd8e2b07308653fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5d5335b37487c26bfd8e2b07308653fd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5d5335b37487c26bfd8e2b07308653fd)) {
        Py_XDECREF(cache_frame_5d5335b37487c26bfd8e2b07308653fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d5335b37487c26bfd8e2b07308653fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d5335b37487c26bfd8e2b07308653fd = MAKE_FUNCTION_FRAME(codeobj_5d5335b37487c26bfd8e2b07308653fd, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d5335b37487c26bfd8e2b07308653fd->m_type_description == NULL);
    frame_5d5335b37487c26bfd8e2b07308653fd = cache_frame_5d5335b37487c26bfd8e2b07308653fd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d5335b37487c26bfd8e2b07308653fd);
    assert(Py_REFCNT(frame_5d5335b37487c26bfd8e2b07308653fd) == 2);

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
        frame_5d5335b37487c26bfd8e2b07308653fd->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
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
        exception_tb = MAKE_TRACEBACK(frame_5d5335b37487c26bfd8e2b07308653fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d5335b37487c26bfd8e2b07308653fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d5335b37487c26bfd8e2b07308653fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d5335b37487c26bfd8e2b07308653fd,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_5d5335b37487c26bfd8e2b07308653fd == cache_frame_5d5335b37487c26bfd8e2b07308653fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d5335b37487c26bfd8e2b07308653fd);
        cache_frame_5d5335b37487c26bfd8e2b07308653fd = NULL;
    }

    assertFrameObject(frame_5d5335b37487c26bfd8e2b07308653fd);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__7_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c03b09b7f6060940d77c452b7b729c13;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c03b09b7f6060940d77c452b7b729c13 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c03b09b7f6060940d77c452b7b729c13)) {
        Py_XDECREF(cache_frame_c03b09b7f6060940d77c452b7b729c13);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c03b09b7f6060940d77c452b7b729c13 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c03b09b7f6060940d77c452b7b729c13 = MAKE_FUNCTION_FRAME(codeobj_c03b09b7f6060940d77c452b7b729c13, module_flet_core$charts$line_chart_data_point, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c03b09b7f6060940d77c452b7b729c13->m_type_description == NULL);
    frame_c03b09b7f6060940d77c452b7b729c13 = cache_frame_c03b09b7f6060940d77c452b7b729c13;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c03b09b7f6060940d77c452b7b729c13);
    assert(Py_REFCNT(frame_c03b09b7f6060940d77c452b7b729c13) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c03b09b7f6060940d77c452b7b729c13->m_frame.f_lineno = 82;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[29], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
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
        exception_tb = MAKE_TRACEBACK(frame_c03b09b7f6060940d77c452b7b729c13, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c03b09b7f6060940d77c452b7b729c13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c03b09b7f6060940d77c452b7b729c13, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c03b09b7f6060940d77c452b7b729c13,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c03b09b7f6060940d77c452b7b729c13 == cache_frame_c03b09b7f6060940d77c452b7b729c13) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c03b09b7f6060940d77c452b7b729c13);
        cache_frame_c03b09b7f6060940d77c452b7b729c13 = NULL;
    }

    assertFrameObject(frame_c03b09b7f6060940d77c452b7b729c13);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__8_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_17a5cf13c20636baa90026e794fffa2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_17a5cf13c20636baa90026e794fffa2a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_17a5cf13c20636baa90026e794fffa2a)) {
        Py_XDECREF(cache_frame_17a5cf13c20636baa90026e794fffa2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_17a5cf13c20636baa90026e794fffa2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_17a5cf13c20636baa90026e794fffa2a = MAKE_FUNCTION_FRAME(codeobj_17a5cf13c20636baa90026e794fffa2a, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_17a5cf13c20636baa90026e794fffa2a->m_type_description == NULL);
    frame_17a5cf13c20636baa90026e794fffa2a = cache_frame_17a5cf13c20636baa90026e794fffa2a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_17a5cf13c20636baa90026e794fffa2a);
    assert(Py_REFCNT(frame_17a5cf13c20636baa90026e794fffa2a) == 2);

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
        frame_17a5cf13c20636baa90026e794fffa2a->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
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
        exception_tb = MAKE_TRACEBACK(frame_17a5cf13c20636baa90026e794fffa2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_17a5cf13c20636baa90026e794fffa2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_17a5cf13c20636baa90026e794fffa2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_17a5cf13c20636baa90026e794fffa2a,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_17a5cf13c20636baa90026e794fffa2a == cache_frame_17a5cf13c20636baa90026e794fffa2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_17a5cf13c20636baa90026e794fffa2a);
        cache_frame_17a5cf13c20636baa90026e794fffa2a = NULL;
    }

    assertFrameObject(frame_17a5cf13c20636baa90026e794fffa2a);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__9_selected(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7f1247e220b28d3968ec886883ddc64f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f1247e220b28d3968ec886883ddc64f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f1247e220b28d3968ec886883ddc64f)) {
        Py_XDECREF(cache_frame_7f1247e220b28d3968ec886883ddc64f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f1247e220b28d3968ec886883ddc64f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f1247e220b28d3968ec886883ddc64f = MAKE_FUNCTION_FRAME(codeobj_7f1247e220b28d3968ec886883ddc64f, module_flet_core$charts$line_chart_data_point, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f1247e220b28d3968ec886883ddc64f->m_type_description == NULL);
    frame_7f1247e220b28d3968ec886883ddc64f = cache_frame_7f1247e220b28d3968ec886883ddc64f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7f1247e220b28d3968ec886883ddc64f);
    assert(Py_REFCNT(frame_7f1247e220b28d3968ec886883ddc64f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7f1247e220b28d3968ec886883ddc64f->m_frame.f_lineno = 91;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[30], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
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
        exception_tb = MAKE_TRACEBACK(frame_7f1247e220b28d3968ec886883ddc64f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f1247e220b28d3968ec886883ddc64f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f1247e220b28d3968ec886883ddc64f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f1247e220b28d3968ec886883ddc64f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7f1247e220b28d3968ec886883ddc64f == cache_frame_7f1247e220b28d3968ec886883ddc64f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f1247e220b28d3968ec886883ddc64f);
        cache_frame_7f1247e220b28d3968ec886883ddc64f = NULL;
    }

    assertFrameObject(frame_7f1247e220b28d3968ec886883ddc64f);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__10_selected(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a0b5e0c80c98d82fbc64bb7c07c6bd84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a0b5e0c80c98d82fbc64bb7c07c6bd84 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a0b5e0c80c98d82fbc64bb7c07c6bd84)) {
        Py_XDECREF(cache_frame_a0b5e0c80c98d82fbc64bb7c07c6bd84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0b5e0c80c98d82fbc64bb7c07c6bd84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0b5e0c80c98d82fbc64bb7c07c6bd84 = MAKE_FUNCTION_FRAME(codeobj_a0b5e0c80c98d82fbc64bb7c07c6bd84, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a0b5e0c80c98d82fbc64bb7c07c6bd84->m_type_description == NULL);
    frame_a0b5e0c80c98d82fbc64bb7c07c6bd84 = cache_frame_a0b5e0c80c98d82fbc64bb7c07c6bd84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a0b5e0c80c98d82fbc64bb7c07c6bd84);
    assert(Py_REFCNT(frame_a0b5e0c80c98d82fbc64bb7c07c6bd84) == 2);

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
        frame_a0b5e0c80c98d82fbc64bb7c07c6bd84->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
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
        exception_tb = MAKE_TRACEBACK(frame_a0b5e0c80c98d82fbc64bb7c07c6bd84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0b5e0c80c98d82fbc64bb7c07c6bd84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0b5e0c80c98d82fbc64bb7c07c6bd84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0b5e0c80c98d82fbc64bb7c07c6bd84,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a0b5e0c80c98d82fbc64bb7c07c6bd84 == cache_frame_a0b5e0c80c98d82fbc64bb7c07c6bd84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a0b5e0c80c98d82fbc64bb7c07c6bd84);
        cache_frame_a0b5e0c80c98d82fbc64bb7c07c6bd84 = NULL;
    }

    assertFrameObject(frame_a0b5e0c80c98d82fbc64bb7c07c6bd84);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__11_show_tooltip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0acce8e5cf8df938eb5ae244dccbb285;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0acce8e5cf8df938eb5ae244dccbb285 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0acce8e5cf8df938eb5ae244dccbb285)) {
        Py_XDECREF(cache_frame_0acce8e5cf8df938eb5ae244dccbb285);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0acce8e5cf8df938eb5ae244dccbb285 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0acce8e5cf8df938eb5ae244dccbb285 = MAKE_FUNCTION_FRAME(codeobj_0acce8e5cf8df938eb5ae244dccbb285, module_flet_core$charts$line_chart_data_point, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0acce8e5cf8df938eb5ae244dccbb285->m_type_description == NULL);
    frame_0acce8e5cf8df938eb5ae244dccbb285 = cache_frame_0acce8e5cf8df938eb5ae244dccbb285;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0acce8e5cf8df938eb5ae244dccbb285);
    assert(Py_REFCNT(frame_0acce8e5cf8df938eb5ae244dccbb285) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0acce8e5cf8df938eb5ae244dccbb285->m_frame.f_lineno = 100;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[31], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
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
        exception_tb = MAKE_TRACEBACK(frame_0acce8e5cf8df938eb5ae244dccbb285, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0acce8e5cf8df938eb5ae244dccbb285->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0acce8e5cf8df938eb5ae244dccbb285, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0acce8e5cf8df938eb5ae244dccbb285,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0acce8e5cf8df938eb5ae244dccbb285 == cache_frame_0acce8e5cf8df938eb5ae244dccbb285) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0acce8e5cf8df938eb5ae244dccbb285);
        cache_frame_0acce8e5cf8df938eb5ae244dccbb285 = NULL;
    }

    assertFrameObject(frame_0acce8e5cf8df938eb5ae244dccbb285);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__12_show_tooltip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_343e024b79b916f25ac3703159d1378c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_343e024b79b916f25ac3703159d1378c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_343e024b79b916f25ac3703159d1378c)) {
        Py_XDECREF(cache_frame_343e024b79b916f25ac3703159d1378c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_343e024b79b916f25ac3703159d1378c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_343e024b79b916f25ac3703159d1378c = MAKE_FUNCTION_FRAME(codeobj_343e024b79b916f25ac3703159d1378c, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_343e024b79b916f25ac3703159d1378c->m_type_description == NULL);
    frame_343e024b79b916f25ac3703159d1378c = cache_frame_343e024b79b916f25ac3703159d1378c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_343e024b79b916f25ac3703159d1378c);
    assert(Py_REFCNT(frame_343e024b79b916f25ac3703159d1378c) == 2);

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
        frame_343e024b79b916f25ac3703159d1378c->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
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
        exception_tb = MAKE_TRACEBACK(frame_343e024b79b916f25ac3703159d1378c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_343e024b79b916f25ac3703159d1378c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_343e024b79b916f25ac3703159d1378c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_343e024b79b916f25ac3703159d1378c,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_343e024b79b916f25ac3703159d1378c == cache_frame_343e024b79b916f25ac3703159d1378c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_343e024b79b916f25ac3703159d1378c);
        cache_frame_343e024b79b916f25ac3703159d1378c = NULL;
    }

    assertFrameObject(frame_343e024b79b916f25ac3703159d1378c);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__13_tooltip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5f88c18efeef9c0cf8469feb05d51ee2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5f88c18efeef9c0cf8469feb05d51ee2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5f88c18efeef9c0cf8469feb05d51ee2)) {
        Py_XDECREF(cache_frame_5f88c18efeef9c0cf8469feb05d51ee2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f88c18efeef9c0cf8469feb05d51ee2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f88c18efeef9c0cf8469feb05d51ee2 = MAKE_FUNCTION_FRAME(codeobj_5f88c18efeef9c0cf8469feb05d51ee2, module_flet_core$charts$line_chart_data_point, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f88c18efeef9c0cf8469feb05d51ee2->m_type_description == NULL);
    frame_5f88c18efeef9c0cf8469feb05d51ee2 = cache_frame_5f88c18efeef9c0cf8469feb05d51ee2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5f88c18efeef9c0cf8469feb05d51ee2);
    assert(Py_REFCNT(frame_5f88c18efeef9c0cf8469feb05d51ee2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_5f88c18efeef9c0cf8469feb05d51ee2->m_frame.f_lineno = 109;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[25],
            PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
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
        exception_tb = MAKE_TRACEBACK(frame_5f88c18efeef9c0cf8469feb05d51ee2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f88c18efeef9c0cf8469feb05d51ee2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f88c18efeef9c0cf8469feb05d51ee2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f88c18efeef9c0cf8469feb05d51ee2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5f88c18efeef9c0cf8469feb05d51ee2 == cache_frame_5f88c18efeef9c0cf8469feb05d51ee2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f88c18efeef9c0cf8469feb05d51ee2);
        cache_frame_5f88c18efeef9c0cf8469feb05d51ee2 = NULL;
    }

    assertFrameObject(frame_5f88c18efeef9c0cf8469feb05d51ee2);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__14_tooltip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_421ec264d6951f5da5c25657614faab0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_421ec264d6951f5da5c25657614faab0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_421ec264d6951f5da5c25657614faab0)) {
        Py_XDECREF(cache_frame_421ec264d6951f5da5c25657614faab0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_421ec264d6951f5da5c25657614faab0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_421ec264d6951f5da5c25657614faab0 = MAKE_FUNCTION_FRAME(codeobj_421ec264d6951f5da5c25657614faab0, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_421ec264d6951f5da5c25657614faab0->m_type_description == NULL);
    frame_421ec264d6951f5da5c25657614faab0 = cache_frame_421ec264d6951f5da5c25657614faab0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_421ec264d6951f5da5c25657614faab0);
    assert(Py_REFCNT(frame_421ec264d6951f5da5c25657614faab0) == 2);

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
        frame_421ec264d6951f5da5c25657614faab0->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
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
        exception_tb = MAKE_TRACEBACK(frame_421ec264d6951f5da5c25657614faab0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_421ec264d6951f5da5c25657614faab0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_421ec264d6951f5da5c25657614faab0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_421ec264d6951f5da5c25657614faab0,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_421ec264d6951f5da5c25657614faab0 == cache_frame_421ec264d6951f5da5c25657614faab0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_421ec264d6951f5da5c25657614faab0);
        cache_frame_421ec264d6951f5da5c25657614faab0 = NULL;
    }

    assertFrameObject(frame_421ec264d6951f5da5c25657614faab0);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__15_tooltip_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2fdc2d3f5ce6fce660eea1df988aa415;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2fdc2d3f5ce6fce660eea1df988aa415 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2fdc2d3f5ce6fce660eea1df988aa415)) {
        Py_XDECREF(cache_frame_2fdc2d3f5ce6fce660eea1df988aa415);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2fdc2d3f5ce6fce660eea1df988aa415 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2fdc2d3f5ce6fce660eea1df988aa415 = MAKE_FUNCTION_FRAME(codeobj_2fdc2d3f5ce6fce660eea1df988aa415, module_flet_core$charts$line_chart_data_point, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2fdc2d3f5ce6fce660eea1df988aa415->m_type_description == NULL);
    frame_2fdc2d3f5ce6fce660eea1df988aa415 = cache_frame_2fdc2d3f5ce6fce660eea1df988aa415;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2fdc2d3f5ce6fce660eea1df988aa415);
    assert(Py_REFCNT(frame_2fdc2d3f5ce6fce660eea1df988aa415) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
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
        exception_tb = MAKE_TRACEBACK(frame_2fdc2d3f5ce6fce660eea1df988aa415, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2fdc2d3f5ce6fce660eea1df988aa415->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2fdc2d3f5ce6fce660eea1df988aa415, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2fdc2d3f5ce6fce660eea1df988aa415,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2fdc2d3f5ce6fce660eea1df988aa415 == cache_frame_2fdc2d3f5ce6fce660eea1df988aa415) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2fdc2d3f5ce6fce660eea1df988aa415);
        cache_frame_2fdc2d3f5ce6fce660eea1df988aa415 = NULL;
    }

    assertFrameObject(frame_2fdc2d3f5ce6fce660eea1df988aa415);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__16_tooltip_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_848283774462ae10524405e8d31e5e94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_848283774462ae10524405e8d31e5e94 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_848283774462ae10524405e8d31e5e94)) {
        Py_XDECREF(cache_frame_848283774462ae10524405e8d31e5e94);

#if _DEBUG_REFCOUNTS
        if (cache_frame_848283774462ae10524405e8d31e5e94 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_848283774462ae10524405e8d31e5e94 = MAKE_FUNCTION_FRAME(codeobj_848283774462ae10524405e8d31e5e94, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_848283774462ae10524405e8d31e5e94->m_type_description == NULL);
    frame_848283774462ae10524405e8d31e5e94 = cache_frame_848283774462ae10524405e8d31e5e94;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_848283774462ae10524405e8d31e5e94);
    assert(Py_REFCNT(frame_848283774462ae10524405e8d31e5e94) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[34], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
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
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[36];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[37]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_848283774462ae10524405e8d31e5e94->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
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
        frame_848283774462ae10524405e8d31e5e94->m_frame.f_lineno = 126;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[38], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_848283774462ae10524405e8d31e5e94, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_848283774462ae10524405e8d31e5e94->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_848283774462ae10524405e8d31e5e94, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_848283774462ae10524405e8d31e5e94,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_848283774462ae10524405e8d31e5e94 == cache_frame_848283774462ae10524405e8d31e5e94) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_848283774462ae10524405e8d31e5e94);
        cache_frame_848283774462ae10524405e8d31e5e94 = NULL;
    }

    assertFrameObject(frame_848283774462ae10524405e8d31e5e94);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__17___set_tooltip_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_5e038cc0c0f40c6304b9bf831fbcc2ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5e038cc0c0f40c6304b9bf831fbcc2ac = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5e038cc0c0f40c6304b9bf831fbcc2ac)) {
        Py_XDECREF(cache_frame_5e038cc0c0f40c6304b9bf831fbcc2ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e038cc0c0f40c6304b9bf831fbcc2ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e038cc0c0f40c6304b9bf831fbcc2ac = MAKE_FUNCTION_FRAME(codeobj_5e038cc0c0f40c6304b9bf831fbcc2ac, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5e038cc0c0f40c6304b9bf831fbcc2ac->m_type_description == NULL);
    frame_5e038cc0c0f40c6304b9bf831fbcc2ac = cache_frame_5e038cc0c0f40c6304b9bf831fbcc2ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5e038cc0c0f40c6304b9bf831fbcc2ac);
    assert(Py_REFCNT(frame_5e038cc0c0f40c6304b9bf831fbcc2ac) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[36];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_5e038cc0c0f40c6304b9bf831fbcc2ac->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
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
        exception_tb = MAKE_TRACEBACK(frame_5e038cc0c0f40c6304b9bf831fbcc2ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e038cc0c0f40c6304b9bf831fbcc2ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e038cc0c0f40c6304b9bf831fbcc2ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e038cc0c0f40c6304b9bf831fbcc2ac,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_5e038cc0c0f40c6304b9bf831fbcc2ac == cache_frame_5e038cc0c0f40c6304b9bf831fbcc2ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5e038cc0c0f40c6304b9bf831fbcc2ac);
        cache_frame_5e038cc0c0f40c6304b9bf831fbcc2ac = NULL;
    }

    assertFrameObject(frame_5e038cc0c0f40c6304b9bf831fbcc2ac);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__18_tooltip_style(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_751a32562030da9e2be6a19da530640e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_751a32562030da9e2be6a19da530640e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_751a32562030da9e2be6a19da530640e)) {
        Py_XDECREF(cache_frame_751a32562030da9e2be6a19da530640e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_751a32562030da9e2be6a19da530640e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_751a32562030da9e2be6a19da530640e = MAKE_FUNCTION_FRAME(codeobj_751a32562030da9e2be6a19da530640e, module_flet_core$charts$line_chart_data_point, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_751a32562030da9e2be6a19da530640e->m_type_description == NULL);
    frame_751a32562030da9e2be6a19da530640e = cache_frame_751a32562030da9e2be6a19da530640e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_751a32562030da9e2be6a19da530640e);
    assert(Py_REFCNT(frame_751a32562030da9e2be6a19da530640e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
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
        exception_tb = MAKE_TRACEBACK(frame_751a32562030da9e2be6a19da530640e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_751a32562030da9e2be6a19da530640e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_751a32562030da9e2be6a19da530640e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_751a32562030da9e2be6a19da530640e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_751a32562030da9e2be6a19da530640e == cache_frame_751a32562030da9e2be6a19da530640e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_751a32562030da9e2be6a19da530640e);
        cache_frame_751a32562030da9e2be6a19da530640e = NULL;
    }

    assertFrameObject(frame_751a32562030da9e2be6a19da530640e);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__19_tooltip_style(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_04dc322ca25b3403565b7a6ff7d18f4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_04dc322ca25b3403565b7a6ff7d18f4b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_04dc322ca25b3403565b7a6ff7d18f4b)) {
        Py_XDECREF(cache_frame_04dc322ca25b3403565b7a6ff7d18f4b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04dc322ca25b3403565b7a6ff7d18f4b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04dc322ca25b3403565b7a6ff7d18f4b = MAKE_FUNCTION_FRAME(codeobj_04dc322ca25b3403565b7a6ff7d18f4b, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04dc322ca25b3403565b7a6ff7d18f4b->m_type_description == NULL);
    frame_04dc322ca25b3403565b7a6ff7d18f4b = cache_frame_04dc322ca25b3403565b7a6ff7d18f4b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_04dc322ca25b3403565b7a6ff7d18f4b);
    assert(Py_REFCNT(frame_04dc322ca25b3403565b7a6ff7d18f4b) == 2);

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


            exception_lineno = 138;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_04dc322ca25b3403565b7a6ff7d18f4b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04dc322ca25b3403565b7a6ff7d18f4b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04dc322ca25b3403565b7a6ff7d18f4b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04dc322ca25b3403565b7a6ff7d18f4b,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_04dc322ca25b3403565b7a6ff7d18f4b == cache_frame_04dc322ca25b3403565b7a6ff7d18f4b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04dc322ca25b3403565b7a6ff7d18f4b);
        cache_frame_04dc322ca25b3403565b7a6ff7d18f4b = NULL;
    }

    assertFrameObject(frame_04dc322ca25b3403565b7a6ff7d18f4b);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__20_point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2b44b50765975e020a03498e7646d673;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b44b50765975e020a03498e7646d673 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b44b50765975e020a03498e7646d673)) {
        Py_XDECREF(cache_frame_2b44b50765975e020a03498e7646d673);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b44b50765975e020a03498e7646d673 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b44b50765975e020a03498e7646d673 = MAKE_FUNCTION_FRAME(codeobj_2b44b50765975e020a03498e7646d673, module_flet_core$charts$line_chart_data_point, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b44b50765975e020a03498e7646d673->m_type_description == NULL);
    frame_2b44b50765975e020a03498e7646d673 = cache_frame_2b44b50765975e020a03498e7646d673;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2b44b50765975e020a03498e7646d673);
    assert(Py_REFCNT(frame_2b44b50765975e020a03498e7646d673) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
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
        exception_tb = MAKE_TRACEBACK(frame_2b44b50765975e020a03498e7646d673, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b44b50765975e020a03498e7646d673->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b44b50765975e020a03498e7646d673, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b44b50765975e020a03498e7646d673,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2b44b50765975e020a03498e7646d673 == cache_frame_2b44b50765975e020a03498e7646d673) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b44b50765975e020a03498e7646d673);
        cache_frame_2b44b50765975e020a03498e7646d673 = NULL;
    }

    assertFrameObject(frame_2b44b50765975e020a03498e7646d673);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__21_point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6336c163150564b834324e30f94a7ce7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6336c163150564b834324e30f94a7ce7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6336c163150564b834324e30f94a7ce7)) {
        Py_XDECREF(cache_frame_6336c163150564b834324e30f94a7ce7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6336c163150564b834324e30f94a7ce7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6336c163150564b834324e30f94a7ce7 = MAKE_FUNCTION_FRAME(codeobj_6336c163150564b834324e30f94a7ce7, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6336c163150564b834324e30f94a7ce7->m_type_description == NULL);
    frame_6336c163150564b834324e30f94a7ce7 = cache_frame_6336c163150564b834324e30f94a7ce7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6336c163150564b834324e30f94a7ce7);
    assert(Py_REFCNT(frame_6336c163150564b834324e30f94a7ce7) == 2);

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


            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6336c163150564b834324e30f94a7ce7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6336c163150564b834324e30f94a7ce7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6336c163150564b834324e30f94a7ce7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6336c163150564b834324e30f94a7ce7,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6336c163150564b834324e30f94a7ce7 == cache_frame_6336c163150564b834324e30f94a7ce7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6336c163150564b834324e30f94a7ce7);
        cache_frame_6336c163150564b834324e30f94a7ce7 = NULL;
    }

    assertFrameObject(frame_6336c163150564b834324e30f94a7ce7);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__22_selected_point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_958038e4b28cda90a7e892aac5052568;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_958038e4b28cda90a7e892aac5052568 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_958038e4b28cda90a7e892aac5052568)) {
        Py_XDECREF(cache_frame_958038e4b28cda90a7e892aac5052568);

#if _DEBUG_REFCOUNTS
        if (cache_frame_958038e4b28cda90a7e892aac5052568 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_958038e4b28cda90a7e892aac5052568 = MAKE_FUNCTION_FRAME(codeobj_958038e4b28cda90a7e892aac5052568, module_flet_core$charts$line_chart_data_point, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_958038e4b28cda90a7e892aac5052568->m_type_description == NULL);
    frame_958038e4b28cda90a7e892aac5052568 = cache_frame_958038e4b28cda90a7e892aac5052568;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_958038e4b28cda90a7e892aac5052568);
    assert(Py_REFCNT(frame_958038e4b28cda90a7e892aac5052568) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
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
        exception_tb = MAKE_TRACEBACK(frame_958038e4b28cda90a7e892aac5052568, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_958038e4b28cda90a7e892aac5052568->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_958038e4b28cda90a7e892aac5052568, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_958038e4b28cda90a7e892aac5052568,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_958038e4b28cda90a7e892aac5052568 == cache_frame_958038e4b28cda90a7e892aac5052568) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_958038e4b28cda90a7e892aac5052568);
        cache_frame_958038e4b28cda90a7e892aac5052568 = NULL;
    }

    assertFrameObject(frame_958038e4b28cda90a7e892aac5052568);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__23_selected_point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6a94d94ec20ec46ab5355dcbf4ed5fea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6a94d94ec20ec46ab5355dcbf4ed5fea = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6a94d94ec20ec46ab5355dcbf4ed5fea)) {
        Py_XDECREF(cache_frame_6a94d94ec20ec46ab5355dcbf4ed5fea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a94d94ec20ec46ab5355dcbf4ed5fea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a94d94ec20ec46ab5355dcbf4ed5fea = MAKE_FUNCTION_FRAME(codeobj_6a94d94ec20ec46ab5355dcbf4ed5fea, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a94d94ec20ec46ab5355dcbf4ed5fea->m_type_description == NULL);
    frame_6a94d94ec20ec46ab5355dcbf4ed5fea = cache_frame_6a94d94ec20ec46ab5355dcbf4ed5fea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6a94d94ec20ec46ab5355dcbf4ed5fea);
    assert(Py_REFCNT(frame_6a94d94ec20ec46ab5355dcbf4ed5fea) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[22], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6a94d94ec20ec46ab5355dcbf4ed5fea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a94d94ec20ec46ab5355dcbf4ed5fea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a94d94ec20ec46ab5355dcbf4ed5fea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a94d94ec20ec46ab5355dcbf4ed5fea,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6a94d94ec20ec46ab5355dcbf4ed5fea == cache_frame_6a94d94ec20ec46ab5355dcbf4ed5fea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a94d94ec20ec46ab5355dcbf4ed5fea);
        cache_frame_6a94d94ec20ec46ab5355dcbf4ed5fea = NULL;
    }

    assertFrameObject(frame_6a94d94ec20ec46ab5355dcbf4ed5fea);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__24_show_above_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f9a7caca2c34920862e6b0ee38cb2ed5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f9a7caca2c34920862e6b0ee38cb2ed5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f9a7caca2c34920862e6b0ee38cb2ed5)) {
        Py_XDECREF(cache_frame_f9a7caca2c34920862e6b0ee38cb2ed5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9a7caca2c34920862e6b0ee38cb2ed5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9a7caca2c34920862e6b0ee38cb2ed5 = MAKE_FUNCTION_FRAME(codeobj_f9a7caca2c34920862e6b0ee38cb2ed5, module_flet_core$charts$line_chart_data_point, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f9a7caca2c34920862e6b0ee38cb2ed5->m_type_description == NULL);
    frame_f9a7caca2c34920862e6b0ee38cb2ed5 = cache_frame_f9a7caca2c34920862e6b0ee38cb2ed5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f9a7caca2c34920862e6b0ee38cb2ed5);
    assert(Py_REFCNT(frame_f9a7caca2c34920862e6b0ee38cb2ed5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f9a7caca2c34920862e6b0ee38cb2ed5->m_frame.f_lineno = 161;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[39], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
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
        exception_tb = MAKE_TRACEBACK(frame_f9a7caca2c34920862e6b0ee38cb2ed5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9a7caca2c34920862e6b0ee38cb2ed5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9a7caca2c34920862e6b0ee38cb2ed5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9a7caca2c34920862e6b0ee38cb2ed5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f9a7caca2c34920862e6b0ee38cb2ed5 == cache_frame_f9a7caca2c34920862e6b0ee38cb2ed5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f9a7caca2c34920862e6b0ee38cb2ed5);
        cache_frame_f9a7caca2c34920862e6b0ee38cb2ed5 = NULL;
    }

    assertFrameObject(frame_f9a7caca2c34920862e6b0ee38cb2ed5);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__25_show_above_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_57cbe1d8dd97f629aaa7a24f71dde1de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_57cbe1d8dd97f629aaa7a24f71dde1de = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_57cbe1d8dd97f629aaa7a24f71dde1de)) {
        Py_XDECREF(cache_frame_57cbe1d8dd97f629aaa7a24f71dde1de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57cbe1d8dd97f629aaa7a24f71dde1de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57cbe1d8dd97f629aaa7a24f71dde1de = MAKE_FUNCTION_FRAME(codeobj_57cbe1d8dd97f629aaa7a24f71dde1de, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_57cbe1d8dd97f629aaa7a24f71dde1de->m_type_description == NULL);
    frame_57cbe1d8dd97f629aaa7a24f71dde1de = cache_frame_57cbe1d8dd97f629aaa7a24f71dde1de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_57cbe1d8dd97f629aaa7a24f71dde1de);
    assert(Py_REFCNT(frame_57cbe1d8dd97f629aaa7a24f71dde1de) == 2);

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
        frame_57cbe1d8dd97f629aaa7a24f71dde1de->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
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
        exception_tb = MAKE_TRACEBACK(frame_57cbe1d8dd97f629aaa7a24f71dde1de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57cbe1d8dd97f629aaa7a24f71dde1de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57cbe1d8dd97f629aaa7a24f71dde1de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57cbe1d8dd97f629aaa7a24f71dde1de,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_57cbe1d8dd97f629aaa7a24f71dde1de == cache_frame_57cbe1d8dd97f629aaa7a24f71dde1de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_57cbe1d8dd97f629aaa7a24f71dde1de);
        cache_frame_57cbe1d8dd97f629aaa7a24f71dde1de = NULL;
    }

    assertFrameObject(frame_57cbe1d8dd97f629aaa7a24f71dde1de);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__26_show_below_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7768dbecb5bf4d98ff43d902afc80b5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7768dbecb5bf4d98ff43d902afc80b5e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7768dbecb5bf4d98ff43d902afc80b5e)) {
        Py_XDECREF(cache_frame_7768dbecb5bf4d98ff43d902afc80b5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7768dbecb5bf4d98ff43d902afc80b5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7768dbecb5bf4d98ff43d902afc80b5e = MAKE_FUNCTION_FRAME(codeobj_7768dbecb5bf4d98ff43d902afc80b5e, module_flet_core$charts$line_chart_data_point, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7768dbecb5bf4d98ff43d902afc80b5e->m_type_description == NULL);
    frame_7768dbecb5bf4d98ff43d902afc80b5e = cache_frame_7768dbecb5bf4d98ff43d902afc80b5e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7768dbecb5bf4d98ff43d902afc80b5e);
    assert(Py_REFCNT(frame_7768dbecb5bf4d98ff43d902afc80b5e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7768dbecb5bf4d98ff43d902afc80b5e->m_frame.f_lineno = 170;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[41], 0), mod_consts[27]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
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
        exception_tb = MAKE_TRACEBACK(frame_7768dbecb5bf4d98ff43d902afc80b5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7768dbecb5bf4d98ff43d902afc80b5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7768dbecb5bf4d98ff43d902afc80b5e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7768dbecb5bf4d98ff43d902afc80b5e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7768dbecb5bf4d98ff43d902afc80b5e == cache_frame_7768dbecb5bf4d98ff43d902afc80b5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7768dbecb5bf4d98ff43d902afc80b5e);
        cache_frame_7768dbecb5bf4d98ff43d902afc80b5e = NULL;
    }

    assertFrameObject(frame_7768dbecb5bf4d98ff43d902afc80b5e);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__27_show_below_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d5c2ba5a263c4b5f91e18cd4e398794e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d5c2ba5a263c4b5f91e18cd4e398794e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d5c2ba5a263c4b5f91e18cd4e398794e)) {
        Py_XDECREF(cache_frame_d5c2ba5a263c4b5f91e18cd4e398794e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d5c2ba5a263c4b5f91e18cd4e398794e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d5c2ba5a263c4b5f91e18cd4e398794e = MAKE_FUNCTION_FRAME(codeobj_d5c2ba5a263c4b5f91e18cd4e398794e, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d5c2ba5a263c4b5f91e18cd4e398794e->m_type_description == NULL);
    frame_d5c2ba5a263c4b5f91e18cd4e398794e = cache_frame_d5c2ba5a263c4b5f91e18cd4e398794e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d5c2ba5a263c4b5f91e18cd4e398794e);
    assert(Py_REFCNT(frame_d5c2ba5a263c4b5f91e18cd4e398794e) == 2);

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
        frame_d5c2ba5a263c4b5f91e18cd4e398794e->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_d5c2ba5a263c4b5f91e18cd4e398794e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5c2ba5a263c4b5f91e18cd4e398794e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5c2ba5a263c4b5f91e18cd4e398794e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d5c2ba5a263c4b5f91e18cd4e398794e,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d5c2ba5a263c4b5f91e18cd4e398794e == cache_frame_d5c2ba5a263c4b5f91e18cd4e398794e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d5c2ba5a263c4b5f91e18cd4e398794e);
        cache_frame_d5c2ba5a263c4b5f91e18cd4e398794e = NULL;
    }

    assertFrameObject(frame_d5c2ba5a263c4b5f91e18cd4e398794e);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__28_selected_below_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a9f3bb4548252c2fd55870efba330652;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a9f3bb4548252c2fd55870efba330652 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a9f3bb4548252c2fd55870efba330652)) {
        Py_XDECREF(cache_frame_a9f3bb4548252c2fd55870efba330652);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a9f3bb4548252c2fd55870efba330652 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a9f3bb4548252c2fd55870efba330652 = MAKE_FUNCTION_FRAME(codeobj_a9f3bb4548252c2fd55870efba330652, module_flet_core$charts$line_chart_data_point, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a9f3bb4548252c2fd55870efba330652->m_type_description == NULL);
    frame_a9f3bb4548252c2fd55870efba330652 = cache_frame_a9f3bb4548252c2fd55870efba330652;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a9f3bb4548252c2fd55870efba330652);
    assert(Py_REFCNT(frame_a9f3bb4548252c2fd55870efba330652) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
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
        exception_tb = MAKE_TRACEBACK(frame_a9f3bb4548252c2fd55870efba330652, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a9f3bb4548252c2fd55870efba330652->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a9f3bb4548252c2fd55870efba330652, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a9f3bb4548252c2fd55870efba330652,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a9f3bb4548252c2fd55870efba330652 == cache_frame_a9f3bb4548252c2fd55870efba330652) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a9f3bb4548252c2fd55870efba330652);
        cache_frame_a9f3bb4548252c2fd55870efba330652 = NULL;
    }

    assertFrameObject(frame_a9f3bb4548252c2fd55870efba330652);

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


static PyObject *impl_flet_core$charts$line_chart_data_point$$$function__29_selected_below_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_5c3fd1787a7dabd55864543352b8dd60;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5c3fd1787a7dabd55864543352b8dd60 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c3fd1787a7dabd55864543352b8dd60)) {
        Py_XDECREF(cache_frame_5c3fd1787a7dabd55864543352b8dd60);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c3fd1787a7dabd55864543352b8dd60 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c3fd1787a7dabd55864543352b8dd60 = MAKE_FUNCTION_FRAME(codeobj_5c3fd1787a7dabd55864543352b8dd60, module_flet_core$charts$line_chart_data_point, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c3fd1787a7dabd55864543352b8dd60->m_type_description == NULL);
    frame_5c3fd1787a7dabd55864543352b8dd60 = cache_frame_5c3fd1787a7dabd55864543352b8dd60;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5c3fd1787a7dabd55864543352b8dd60);
    assert(Py_REFCNT(frame_5c3fd1787a7dabd55864543352b8dd60) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c3fd1787a7dabd55864543352b8dd60, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c3fd1787a7dabd55864543352b8dd60->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c3fd1787a7dabd55864543352b8dd60, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c3fd1787a7dabd55864543352b8dd60,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_5c3fd1787a7dabd55864543352b8dd60 == cache_frame_5c3fd1787a7dabd55864543352b8dd60) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c3fd1787a7dabd55864543352b8dd60);
        cache_frame_5c3fd1787a7dabd55864543352b8dd60 = NULL;
    }

    assertFrameObject(frame_5c3fd1787a7dabd55864543352b8dd60);

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



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__10_selected(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__10_selected,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_a0b5e0c80c98d82fbc64bb7c07c6bd84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__11_show_tooltip(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__11_show_tooltip,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_0acce8e5cf8df938eb5ae244dccbb285,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__12_show_tooltip(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__12_show_tooltip,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_343e024b79b916f25ac3703159d1378c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__13_tooltip(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__13_tooltip,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_5f88c18efeef9c0cf8469feb05d51ee2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__14_tooltip(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__14_tooltip,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_421ec264d6951f5da5c25657614faab0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__15_tooltip_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__15_tooltip_align,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_2fdc2d3f5ce6fce660eea1df988aa415,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__16_tooltip_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__16_tooltip_align,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_848283774462ae10524405e8d31e5e94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__17___set_tooltip_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__17___set_tooltip_align,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[105],
#endif
        codeobj_5e038cc0c0f40c6304b9bf831fbcc2ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__18_tooltip_style() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__18_tooltip_style,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_751a32562030da9e2be6a19da530640e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__19_tooltip_style(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__19_tooltip_style,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_04dc322ca25b3403565b7a6ff7d18f4b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_07a21e2ac6a6377b8084346cccc0312a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__20_point() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__20_point,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_2b44b50765975e020a03498e7646d673,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__21_point(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__21_point,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_6336c163150564b834324e30f94a7ce7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__22_selected_point() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__22_selected_point,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_958038e4b28cda90a7e892aac5052568,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__23_selected_point(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__23_selected_point,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_6a94d94ec20ec46ab5355dcbf4ed5fea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__24_show_above_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__24_show_above_line,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_f9a7caca2c34920862e6b0ee38cb2ed5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__25_show_above_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__25_show_above_line,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_57cbe1d8dd97f629aaa7a24f71dde1de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__26_show_below_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__26_show_below_line,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_7768dbecb5bf4d98ff43d902afc80b5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__27_show_below_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__27_show_below_line,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_d5c2ba5a263c4b5f91e18cd4e398794e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__28_selected_below_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__28_selected_below_line,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_a9f3bb4548252c2fd55870efba330652,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__29_selected_below_line(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__29_selected_below_line,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_5c3fd1787a7dabd55864543352b8dd60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_ef4f24e7358bf1e888513e5d48e6876c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[89]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__3__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__3__before_build_command,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_2a7693cc02e545a4ed70344e87cba184,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__4__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__4__get_children,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_5786ebc8c072d937746dbdf6e2d5154d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__5_x(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__5_x,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_d61a22603d28356107cd9241aa1c1bbf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__6_x(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__6_x,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_5d5335b37487c26bfd8e2b07308653fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__7_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__7_y,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_c03b09b7f6060940d77c452b7b729c13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__8_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__8_y,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_17a5cf13c20636baa90026e794fffa2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__9_selected(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$charts$line_chart_data_point$$$function__9_selected,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_7f1247e220b28d3968ec886883ddc64f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$charts$line_chart_data_point,
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

function_impl_code functable_flet_core$charts$line_chart_data_point[] = {
    impl_flet_core$charts$line_chart_data_point$$$function__1___init__,
    NULL,
    impl_flet_core$charts$line_chart_data_point$$$function__3__before_build_command,
    impl_flet_core$charts$line_chart_data_point$$$function__4__get_children,
    impl_flet_core$charts$line_chart_data_point$$$function__5_x,
    impl_flet_core$charts$line_chart_data_point$$$function__6_x,
    impl_flet_core$charts$line_chart_data_point$$$function__7_y,
    impl_flet_core$charts$line_chart_data_point$$$function__8_y,
    impl_flet_core$charts$line_chart_data_point$$$function__9_selected,
    impl_flet_core$charts$line_chart_data_point$$$function__10_selected,
    impl_flet_core$charts$line_chart_data_point$$$function__11_show_tooltip,
    impl_flet_core$charts$line_chart_data_point$$$function__12_show_tooltip,
    impl_flet_core$charts$line_chart_data_point$$$function__13_tooltip,
    impl_flet_core$charts$line_chart_data_point$$$function__14_tooltip,
    impl_flet_core$charts$line_chart_data_point$$$function__15_tooltip_align,
    impl_flet_core$charts$line_chart_data_point$$$function__16_tooltip_align,
    impl_flet_core$charts$line_chart_data_point$$$function__17___set_tooltip_align,
    impl_flet_core$charts$line_chart_data_point$$$function__18_tooltip_style,
    impl_flet_core$charts$line_chart_data_point$$$function__19_tooltip_style,
    impl_flet_core$charts$line_chart_data_point$$$function__20_point,
    impl_flet_core$charts$line_chart_data_point$$$function__21_point,
    impl_flet_core$charts$line_chart_data_point$$$function__22_selected_point,
    impl_flet_core$charts$line_chart_data_point$$$function__23_selected_point,
    impl_flet_core$charts$line_chart_data_point$$$function__24_show_above_line,
    impl_flet_core$charts$line_chart_data_point$$$function__25_show_above_line,
    impl_flet_core$charts$line_chart_data_point$$$function__26_show_below_line,
    impl_flet_core$charts$line_chart_data_point$$$function__27_show_below_line,
    impl_flet_core$charts$line_chart_data_point$$$function__28_selected_below_line,
    impl_flet_core$charts$line_chart_data_point$$$function__29_selected_below_line,
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

    function_impl_code *current = functable_flet_core$charts$line_chart_data_point;
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

    if (offset > sizeof(functable_flet_core$charts$line_chart_data_point) || offset < 0) {
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
        functable_flet_core$charts$line_chart_data_point[offset],
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
        module_flet_core$charts$line_chart_data_point,
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
PyObject *modulecode_flet_core$charts$line_chart_data_point(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.charts.line_chart_data_point");

    // Store the module for future use.
    module_flet_core$charts$line_chart_data_point = module;

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
        PRINT_STRING("flet_core.charts.line_chart_data_point: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.charts.line_chart_data_point: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.charts.line_chart_data_point: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$charts$line_chart_data_point\n");

    moduledict_flet_core$charts$line_chart_data_point = MODULE_DICT(module_flet_core$charts$line_chart_data_point);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$charts$line_chart_data_point,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$charts$line_chart_data_point,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[120]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$charts$line_chart_data_point,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$charts$line_chart_data_point,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$charts$line_chart_data_point,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$charts$line_chart_data_point);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$charts$line_chart_data_point);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_635bb7c79b044f0eca2d0f52ae39318b;
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
    PyObject *locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_028c2c112ecc6ce00708f74c85d5b410_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_2);
    }
    frame_635bb7c79b044f0eca2d0f52ae39318b = MAKE_MODULE_FRAME(codeobj_635bb7c79b044f0eca2d0f52ae39318b, module_flet_core$charts$line_chart_data_point);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_635bb7c79b044f0eca2d0f52ae39318b);
    assert(Py_REFCNT(frame_635bb7c79b044f0eca2d0f52ae39318b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[44];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[47], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[48], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_3);
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
                (PyObject *)moduledict_flet_core$charts$line_chart_data_point,
                mod_consts[50],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[50]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$charts$line_chart_data_point,
                mod_consts[52],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[52]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$charts$line_chart_data_point,
                mod_consts[53],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[53]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_7);
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
        tmp_name_value_1 = mod_consts[54];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$charts$line_chart_data_point;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[55];
        tmp_level_value_1 = mod_consts[51];
        frame_635bb7c79b044f0eca2d0f52ae39318b->m_frame.f_lineno = 3;
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
                (PyObject *)moduledict_flet_core$charts$line_chart_data_point,
                mod_consts[56],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[57];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$charts$line_chart_data_point;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[58];
        tmp_level_value_2 = mod_consts[51];
        frame_635bb7c79b044f0eca2d0f52ae39318b->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_flet_core$charts$line_chart_data_point,
                mod_consts[59],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[60];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$charts$line_chart_data_point;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[61];
        tmp_level_value_3 = mod_consts[51];
        frame_635bb7c79b044f0eca2d0f52ae39318b->m_frame.f_lineno = 5;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

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
                (PyObject *)moduledict_flet_core$charts$line_chart_data_point,
                mod_consts[0],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[0]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$charts$line_chart_data_point,
                mod_consts[62],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[62]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_12);
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
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[63];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$charts$line_chart_data_point;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[64];
        tmp_level_value_4 = mod_consts[51];
        frame_635bb7c79b044f0eca2d0f52ae39318b->m_frame.f_lineno = 6;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$charts$line_chart_data_point,
                mod_consts[65],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[66];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$charts$line_chart_data_point;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[67];
        tmp_level_value_5 = mod_consts[51];
        frame_635bb7c79b044f0eca2d0f52ae39318b->m_frame.f_lineno = 7;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$charts$line_chart_data_point,
                mod_consts[68],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[69];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$charts$line_chart_data_point;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[70];
        tmp_level_value_6 = mod_consts[51];
        frame_635bb7c79b044f0eca2d0f52ae39318b->m_frame.f_lineno = 8;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$charts$line_chart_data_point,
                mod_consts[35],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[35]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$charts$line_chart_data_point,
                mod_consts[71],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[71]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_17);
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
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

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


            exception_lineno = 11;

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


            exception_lineno = 11;

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
        tmp_subscript_value_1 = mod_consts[51];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

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


            exception_lineno = 11;

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
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[72]);
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[72]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[73];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_635bb7c79b044f0eca2d0f52ae39318b->m_frame.f_lineno = 11;
        tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

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
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[74]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

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
        tmp_mod_expr_left_1 = mod_consts[75];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[76];
        tmp_getattr_default_1 = mod_consts[77];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[76]);
            Py_DECREF(tmp_expression_value_5);
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
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 11;
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
            locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[79], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_6;
        }
        frame_028c2c112ecc6ce00708f74c85d5b410_2 = MAKE_CLASS_FRAME(codeobj_028c2c112ecc6ce00708f74c85d5b410, module_flet_core$charts$line_chart_data_point, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_028c2c112ecc6ce00708f74c85d5b410_2);
        assert(Py_REFCNT(frame_028c2c112ecc6ce00708f74c85d5b410_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_tuple_element_4 = Py_None;
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(16);
            {
                PyObject *tmp_expression_value_6;
                PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 5, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 6, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 7, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 8, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 9, tmp_tuple_element_4);
                tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[35]);

                if (tmp_expression_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_expression_value_6 == NULL)) {
                            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                        }

                        if (tmp_expression_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 27;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_6);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[81]);
                Py_DECREF(tmp_expression_value_6);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 10, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 11, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 12, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 13, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 14, tmp_tuple_element_4);
                tmp_tuple_element_4 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 15, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_key_1 = mod_consts[3];
            tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[62]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_dict_value_1 == NULL)) {
                        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_dict_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_1);

                        exception_lineno = 14;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 16 );
            {
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_2;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_tuple_element_7;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[4];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[62]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 15;
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
                tmp_dict_key_1 = mod_consts[82];
                tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

                if (tmp_expression_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                        if (unlikely(tmp_expression_value_7 == NULL)) {
                            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                        }

                        if (tmp_expression_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 16;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_2 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[65]);

                if (tmp_subscript_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_subscript_value_2 == NULL)) {
                            tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                        }

                        if (tmp_subscript_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_7);

                            exception_lineno = 16;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_2);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
                Py_DECREF(tmp_expression_value_7);
                Py_DECREF(tmp_subscript_value_2);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 16;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[83];
                tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 17;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_3 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

                if (tmp_subscript_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_3 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_3);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_8);
                Py_DECREF(tmp_subscript_value_3);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 17;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[85];
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 18;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_4 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_9);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 18;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[86];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[50]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 19;
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
                tmp_dict_key_1 = mod_consts[5];
                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 23;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

                if (tmp_subscript_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_5 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_5);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 23;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[6];
                tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 24;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_11);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 25;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[87]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[9];
                tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 26;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[68]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_subscript_value_8 == NULL)) {
                            tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_subscript_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_13);

                            exception_lineno = 26;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_13);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 26;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[8];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[35]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 27;
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
                tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[53]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 28;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_5 = Py_None;
                tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[59]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[59]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 28;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_9, 2, tmp_tuple_element_5);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_9);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[11];
                tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[53]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 29;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_6 = Py_None;
                tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_6 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[59]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[59]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 29;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_10, 2, tmp_tuple_element_6);
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_subscript_value_10);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 29;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[12];
                tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 30;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[13];
                tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 31;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 31;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[14];
                tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[53]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 32;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_7 = Py_None;
                tmp_subscript_value_13 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_13, 0, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_7 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_13, 1, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[56]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 32;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_13, 2, tmp_tuple_element_7);
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_13);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
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


            tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[90], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__3__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__4__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[93], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
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
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 71;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[96];
            tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[62]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_dict_value_2 == NULL)) {
                        tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_dict_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);

                        exception_lineno = 72;
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


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__5_x(tmp_annotations_2);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 71;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[96];
            tmp_dict_value_3 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[62]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
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


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__5_x(tmp_annotations_3);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 71;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[3]);

            if (unlikely(tmp_expression_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 75;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[98]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[37];
            tmp_dict_value_4 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[62]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);

                        exception_lineno = 76;
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


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__6_x(tmp_annotations_4);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 75;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[3], tmp_dictset_value);
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
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
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
            tmp_called_value_5 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 80;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[96];
            tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[62]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_5);

                        exception_lineno = 81;
                        type_description_2 = "c";
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


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__7_y(tmp_annotations_5);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[96];
            tmp_dict_value_6 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[62]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 81;
                        type_description_2 = "c";
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


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__7_y(tmp_annotations_6);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[4]);

            if (unlikely(tmp_expression_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 84;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[98]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_7 = mod_consts[37];
            tmp_dict_value_7 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[62]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 85;
                        type_description_2 = "c";
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


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__8_y(tmp_annotations_7);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 84;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_15;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
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
            tmp_called_value_8 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 89;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[96];
            tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);

                        exception_lineno = 90;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_subscript_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_14 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__9_selected(tmp_annotations_8);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 89;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[96];
            tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 90;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_subscript_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_15 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_22);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__9_selected(tmp_annotations_9);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 89;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_16;
            tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[5]);

            if (unlikely(tmp_expression_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 93;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[98]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[37];
            tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 94;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_subscript_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_16 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_16);
            Py_DECREF(tmp_expression_value_24);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 94;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__10_selected(tmp_annotations_10);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 93;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[5], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_18;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
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
            tmp_called_value_11 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 98;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_11 = mod_consts[96];
            tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        exception_lineno = 99;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_subscript_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_17 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_25);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);

                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__11_show_tooltip(tmp_annotations_11);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 98;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_12 = mod_consts[96];
            tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_subscript_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_18 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_26);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__11_show_tooltip(tmp_annotations_12);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 98;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_19;
            tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[6]);

            if (unlikely(tmp_expression_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 102;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[98]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_13 = mod_consts[37];
            tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 103;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_subscript_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_19 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_28);
            Py_DECREF(tmp_subscript_value_19);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__12_show_tooltip(tmp_annotations_13);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 102;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[6], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_21;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
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
            tmp_called_value_14 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 107;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_14 = mod_consts[96];
            tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 108;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[87]);

            if (tmp_subscript_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_29);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__13_tooltip(tmp_annotations_14);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 107;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_15 = mod_consts[96];
            tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 108;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[87]);

            if (tmp_subscript_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_21 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_30);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__13_tooltip(tmp_annotations_15);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 107;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_22;
            tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[7]);

            if (unlikely(tmp_expression_value_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 111;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[98]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_16 = mod_consts[37];
            tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 112;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_22 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[87]);

            if (tmp_subscript_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_22 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_32);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 112;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__14_tooltip(tmp_annotations_16);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 111;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[7], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
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
            tmp_called_value_17 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 116;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_17 = mod_consts[96];
            tmp_dict_value_17 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[35]);

            if (tmp_dict_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_dict_value_17 == NULL)) {
                        tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_dict_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 117;
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


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__15_tooltip_align(tmp_annotations_17);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 116;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_18 = mod_consts[96];
            tmp_dict_value_18 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[35]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_dict_value_18 == NULL)) {
                        tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_dict_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 117;
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


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__15_tooltip_align(tmp_annotations_18);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 116;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[8]);

            if (unlikely(tmp_expression_value_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 120;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[98]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_19 = mod_consts[37];
            tmp_dict_value_19 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[35]);

            if (tmp_dict_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_dict_value_19 == NULL)) {
                        tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
                    }

                    if (tmp_dict_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 121;
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


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__16_tooltip_align(tmp_annotations_19);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 120;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[8], tmp_dictset_value);
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
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            tmp_dict_key_20 = mod_consts[37];
            tmp_dict_value_20 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[71]);

            if (tmp_dict_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[71]);

                    if (unlikely(tmp_dict_value_20 == NULL)) {
                        tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                    }

                    if (tmp_dict_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 128;
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


            tmp_dictset_value = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__17___set_tooltip_align(tmp_annotations_20);

            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_20;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
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
            tmp_called_value_20 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 132;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__18_tooltip_style();

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 132;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__18_tooltip_style();

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 132;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_23;
            tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[9]);

            if (unlikely(tmp_expression_value_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 136;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[98]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_21 = mod_consts[37];
            tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 137;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[68]);

            if (tmp_subscript_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[68]);

                    if (unlikely(tmp_subscript_value_23 == NULL)) {
                        tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                    }

                    if (tmp_subscript_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_expression_value_35);

                        exception_lineno = 137;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_23);
            Py_DECREF(tmp_expression_value_35);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 137;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__19_tooltip_style(tmp_annotations_21);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 136;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_23;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
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
            tmp_called_value_23 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (unlikely(tmp_called_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 141;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__20_point();

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 141;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_24 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__20_point();

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 141;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_tuple_element_8;
            tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[10]);

            if (unlikely(tmp_expression_value_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 145;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[98]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_22 = mod_consts[37];
            tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[53]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);

                        exception_lineno = 146;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_8 = Py_None;
            tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_24, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_8 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto tuple_build_exception_6;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_24, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[59]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 146;
                        type_description_2 = "c";
                        goto tuple_build_exception_6;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto tuple_build_exception_6;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_24, 2, tmp_tuple_element_8);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_24);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 146;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__21_point(tmp_annotations_22);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 145;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_26;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
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
            tmp_called_value_26 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (unlikely(tmp_called_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 150;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__22_selected_point();

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 150;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_27 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__22_selected_point();

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 150;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_tuple_element_9;
            tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[11]);

            if (unlikely(tmp_expression_value_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[98]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_23 = mod_consts[37];
            tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[53]);

            if (tmp_expression_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);

                        exception_lineno = 155;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_9 = Py_None;
            tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_25, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_9 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto tuple_build_exception_7;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_25, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[59]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[59]);

                    if (unlikely(tmp_tuple_element_9 == NULL)) {
                        tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
                    }

                    if (tmp_tuple_element_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 155;
                        type_description_2 = "c";
                        goto tuple_build_exception_7;
                    }
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto tuple_build_exception_7;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_25, 2, tmp_tuple_element_9);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_expression_value_39);
            Py_DECREF(tmp_subscript_value_25);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_25);
            Py_DECREF(tmp_expression_value_39);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 155;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__23_selected_point(tmp_annotations_23);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 154;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[11], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_27;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
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
            tmp_called_value_29 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (unlikely(tmp_called_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 159;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_24 = mod_consts[96];
            tmp_expression_value_40 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_40 == NULL)) {
                        tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_29);

                        exception_lineno = 160;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_40);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_26 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_subscript_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_26 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_40);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 160;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__24_show_above_line(tmp_annotations_24);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 159;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_30 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_25 = mod_consts[96];
            tmp_expression_value_41 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 160;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_41);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_27 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_subscript_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_27 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_41);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__24_show_above_line(tmp_annotations_25);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 159;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_28;
            tmp_expression_value_42 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[12]);

            if (unlikely(tmp_expression_value_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 163;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[98]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_26 = mod_consts[37];
            tmp_expression_value_43 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_43 == NULL)) {
                        tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);

                        exception_lineno = 164;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_subscript_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_28 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_43);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 164;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__25_show_above_line(tmp_annotations_26);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 163;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_28;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_30;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_32 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (unlikely(tmp_called_value_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 168;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_27 = mod_consts[96];
            tmp_expression_value_44 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_44 == NULL)) {
                        tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_32);

                        exception_lineno = 169;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_44);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_29 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_subscript_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_29 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_44);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_dict_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_32);

                exception_lineno = 169;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_27 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));


            tmp_args_element_value_31 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__26_show_below_line(tmp_annotations_27);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 168;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_33 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_28 = mod_consts[96];
            tmp_expression_value_45 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 169;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_30 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_subscript_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_30 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_30);
            Py_DECREF(tmp_expression_value_45);
            Py_DECREF(tmp_subscript_value_30);
            if (tmp_dict_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_28 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));


            tmp_args_element_value_32 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__26_show_below_line(tmp_annotations_28);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 168;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_annotations_29;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_31;
            tmp_expression_value_46 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[13]);

            if (unlikely(tmp_expression_value_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[13]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[98]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_29 = mod_consts[37];
            tmp_expression_value_47 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[52]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[52]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);

                        exception_lineno = 173;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_31 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_subscript_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_31 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_47);
            Py_DECREF(tmp_subscript_value_31);
            if (tmp_dict_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_34);

                exception_lineno = 173;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_29 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_args_element_value_33 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__27_show_below_line(tmp_annotations_29);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 172;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_31;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_tuple_element_11;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_35 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[95]);

            if (unlikely(tmp_called_value_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_30 = mod_consts[96];
            tmp_expression_value_48 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[53]);

            if (tmp_expression_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_48 == NULL)) {
                        tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);

                        exception_lineno = 178;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_48);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_10 = Py_None;
            tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_32, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_tuple_element_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_10 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_tuple_element_10);
                } else {
                    goto tuple_build_exception_8;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_32, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[56]);

            if (tmp_tuple_element_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_tuple_element_10 == NULL)) {
                        tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_tuple_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 178;
                        type_description_2 = "c";
                        goto tuple_build_exception_8;
                    }
                    Py_INCREF(tmp_tuple_element_10);
                } else {
                    goto tuple_build_exception_8;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_32, 2, tmp_tuple_element_10);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_expression_value_48);
            Py_DECREF(tmp_subscript_value_32);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_32);
            Py_DECREF(tmp_expression_value_48);
            Py_DECREF(tmp_subscript_value_32);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 178;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_30 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));


            tmp_args_element_value_34 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__28_selected_below_line(tmp_annotations_30);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 177;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_36 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_31 = mod_consts[96];
            tmp_expression_value_49 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[53]);

            if (tmp_expression_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_49 == NULL)) {
                        tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 178;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_49);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_11 = Py_None;
            tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_33, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_11 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_tuple_element_11);
                } else {
                    goto tuple_build_exception_9;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_33, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[56]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_tuple_element_11 == NULL)) {
                        tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_tuple_element_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 178;
                        type_description_2 = "c";
                        goto tuple_build_exception_9;
                    }
                    Py_INCREF(tmp_tuple_element_11);
                } else {
                    goto tuple_build_exception_9;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_33, 2, tmp_tuple_element_11);
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_expression_value_49);
            Py_DECREF(tmp_subscript_value_33);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_49);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_31 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));


            tmp_args_element_value_35 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__28_selected_below_line(tmp_annotations_31);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 177;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_tuple_element_12;
            tmp_expression_value_50 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[14]);

            if (unlikely(tmp_expression_value_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[98]);
            Py_DECREF(tmp_expression_value_50);
            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_32 = mod_consts[37];
            tmp_expression_value_51 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[53]);

            if (tmp_expression_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 182;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_51);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_12 = Py_None;
            tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_34, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[84]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_12 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_tuple_element_12);
                } else {
                    goto tuple_build_exception_10;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_34, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = PyObject_GetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[56]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 182;
                        type_description_2 = "c";
                        goto tuple_build_exception_10;
                    }
                    Py_INCREF(tmp_tuple_element_12);
                } else {
                    goto tuple_build_exception_10;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_34, 2, tmp_tuple_element_12);
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_expression_value_51);
            Py_DECREF(tmp_subscript_value_34);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_34);
            Py_DECREF(tmp_expression_value_51);
            Py_DECREF(tmp_subscript_value_34);
            if (tmp_dict_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 182;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));


            tmp_args_element_value_36 = MAKE_FUNCTION_flet_core$charts$line_chart_data_point$$$function__29_selected_below_line(tmp_annotations_32);

            frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame.f_lineno = 181;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_028c2c112ecc6ce00708f74c85d5b410_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_028c2c112ecc6ce00708f74c85d5b410_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_028c2c112ecc6ce00708f74c85d5b410_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_028c2c112ecc6ce00708f74c85d5b410_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_028c2c112ecc6ce00708f74c85d5b410_2);

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
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_38 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_13 = mod_consts[73];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_13 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_635bb7c79b044f0eca2d0f52ae39318b->m_frame.f_lineno = 11;
            tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_38, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_25);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_24 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11);
        locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11 = NULL;
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

        Py_DECREF(locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11);
        locals_flet_core$charts$line_chart_data_point$$$class__1_LineChartDataPoint_11 = NULL;
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
        exception_lineno = 11;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_24);
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_635bb7c79b044f0eca2d0f52ae39318b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_635bb7c79b044f0eca2d0f52ae39318b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_635bb7c79b044f0eca2d0f52ae39318b, exception_lineno);
    }



    assertFrameObject(frame_635bb7c79b044f0eca2d0f52ae39318b);

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
    PGO_onModuleExit("flet_core.charts.line_chart_data_point", false);

    Py_INCREF(module_flet_core$charts$line_chart_data_point);
    return module_flet_core$charts$line_chart_data_point;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$charts$line_chart_data_point, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$charts$line_chart_data_point", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
