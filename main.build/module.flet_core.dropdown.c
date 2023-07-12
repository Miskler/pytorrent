/* Generated code for Python module 'flet_core.dropdown'
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

/* The "module_flet_core$dropdown" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$dropdown;
PyDictObject *moduledict_flet_core$dropdown;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[181];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[181];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.dropdown"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 181; i++) {
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
void checkModuleConstants_flet_core$dropdown(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 181; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_fa492b0f3ce43e7e9363700d34a85633;
static PyCodeObject *codeobj_e6d61900e4f754e3dcd72c48f503a536;
static PyCodeObject *codeobj_c07cdadd3240458995778c793fd7cf78;
static PyCodeObject *codeobj_5f9869bb472ddb59adda0da2e48e5289;
static PyCodeObject *codeobj_1b4466781a1053ef13bb10171aad1e19;
static PyCodeObject *codeobj_d77ba7517121466bdb87667e658bd600;
static PyCodeObject *codeobj_4f19d839651acf5dd744d55db4106805;
static PyCodeObject *codeobj_af11bba52299876fa21a7dc4ca8f0526;
static PyCodeObject *codeobj_de659b6346f30ada19425a4ec274be77;
static PyCodeObject *codeobj_1819c33874a917d0d0e3cf16fe5fbd50;
static PyCodeObject *codeobj_7ffdb66365df0a12dfef21b88a53b431;
static PyCodeObject *codeobj_b9f37b8bb4275734e5af022183f74519;
static PyCodeObject *codeobj_68f89f3f39d47e94fafea50102d3eccb;
static PyCodeObject *codeobj_83fc84fa7a1b70d794af2c64a718f845;
static PyCodeObject *codeobj_7a207826bbbce99eace0d91abc675627;
static PyCodeObject *codeobj_e96f6b4b47c114e7b866aa0c773c9cf5;
static PyCodeObject *codeobj_c0bc2c854b0147ba6ae92828d21a121d;
static PyCodeObject *codeobj_ff3d969630bf29a07690e36ad473918c;
static PyCodeObject *codeobj_f3bf50f44e561d250aa25a4c696388ad;
static PyCodeObject *codeobj_7dafe3e149e82ebb231600134141b7d1;
static PyCodeObject *codeobj_f950512513cdc67022e89b23bc8b11a5;
static PyCodeObject *codeobj_079d74cb91d2971aa7f278cd3b432253;
static PyCodeObject *codeobj_1a0f731ce7e4222cc90fe4422392e67e;
static PyCodeObject *codeobj_7be5a0cce09591d1bfd19ff4db7919a3;
static PyCodeObject *codeobj_6e11880f633fdd33e3a7613b90b26946;
static PyCodeObject *codeobj_a4ee7faea9afdf9229f25bf215dff84b;
static PyCodeObject *codeobj_cf6ba3235e6fafd41fe468de0813ed5e;
static PyCodeObject *codeobj_50495801f407917cd7cda4504e1b24e3;
static PyCodeObject *codeobj_6a4769ce9009323f0f2a703b8c04f8a6;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[45]; CHECK_OBJECT(module_filename_obj);
    codeobj_fa492b0f3ce43e7e9363700d34a85633 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[171], mod_consts[171], NULL, NULL, 0, 0, 0);
    codeobj_e6d61900e4f754e3dcd72c48f503a536 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[172], NULL, 0, 0, 0);
    codeobj_c07cdadd3240458995778c793fd7cf78 = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[172], NULL, 0, 0, 0);
    codeobj_5f9869bb472ddb59adda0da2e48e5289 = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[173], NULL, 5, 0, 0);
    codeobj_1b4466781a1053ef13bb10171aad1e19 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[174], NULL, 64, 0, 0);
    codeobj_d77ba7517121466bdb87667e658bd600 = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[12], mod_consts[12], mod_consts[175], mod_consts[172], 1, 0, 0);
    codeobj_4f19d839651acf5dd744d55db4106805 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[176], NULL, 1, 0, 0);
    codeobj_af11bba52299876fa21a7dc4ca8f0526 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[177], NULL, 1, 0, 0);
    codeobj_de659b6346f30ada19425a4ec274be77 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[177], NULL, 1, 0, 0);
    codeobj_1819c33874a917d0d0e3cf16fe5fbd50 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[177], NULL, 1, 0, 0);
    codeobj_7ffdb66365df0a12dfef21b88a53b431 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[178], NULL, 2, 0, 0);
    codeobj_b9f37b8bb4275734e5af022183f74519 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[177], NULL, 1, 0, 0);
    codeobj_68f89f3f39d47e94fafea50102d3eccb = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[178], NULL, 2, 0, 0);
    codeobj_83fc84fa7a1b70d794af2c64a718f845 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[177], NULL, 1, 0, 0);
    codeobj_7a207826bbbce99eace0d91abc675627 = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[177], NULL, 1, 0, 0);
    codeobj_e96f6b4b47c114e7b866aa0c773c9cf5 = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[177], NULL, 1, 0, 0);
    codeobj_c0bc2c854b0147ba6ae92828d21a121d = MAKE_CODE_OBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[178], NULL, 2, 0, 0);
    codeobj_ff3d969630bf29a07690e36ad473918c = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[177], NULL, 1, 0, 0);
    codeobj_f3bf50f44e561d250aa25a4c696388ad = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[179], NULL, 2, 0, 0);
    codeobj_7dafe3e149e82ebb231600134141b7d1 = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[177], NULL, 1, 0, 0);
    codeobj_f950512513cdc67022e89b23bc8b11a5 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[179], NULL, 2, 0, 0);
    codeobj_079d74cb91d2971aa7f278cd3b432253 = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[177], NULL, 1, 0, 0);
    codeobj_1a0f731ce7e4222cc90fe4422392e67e = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[179], NULL, 2, 0, 0);
    codeobj_7be5a0cce09591d1bfd19ff4db7919a3 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[177], NULL, 1, 0, 0);
    codeobj_6e11880f633fdd33e3a7613b90b26946 = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[178], NULL, 2, 0, 0);
    codeobj_a4ee7faea9afdf9229f25bf215dff84b = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[177], NULL, 1, 0, 0);
    codeobj_cf6ba3235e6fafd41fe468de0813ed5e = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[178], NULL, 2, 0, 0);
    codeobj_50495801f407917cd7cda4504e1b24e3 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[177], NULL, 1, 0, 0);
    codeobj_6a4769ce9009323f0f2a703b8c04f8a6 = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[178], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_flet_core$dropdown$$$function__6_focus_async$$$coroutine__1_focus_async(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__10_value(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__11_autofocus(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__12_autofocus(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__13_alignment(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__14_alignment(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__15_on_change();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__16_on_change();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__17_on_focus();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__18_on_focus();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__19_on_blur();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__20_on_blur();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__21___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__22__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__23_key();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__24_key();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__25_text();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__26_text();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__3__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__4__get_children();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__5_focus();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__6_focus_async();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__7_options();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__8_options();


static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__9_value(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$dropdown$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ref = python_pars[1];
    PyObject *par_key = python_pars[2];
    PyObject *par_width = python_pars[3];
    PyObject *par_height = python_pars[4];
    PyObject *par_expand = python_pars[5];
    PyObject *par_col = python_pars[6];
    PyObject *par_opacity = python_pars[7];
    PyObject *par_rotate = python_pars[8];
    PyObject *par_scale = python_pars[9];
    PyObject *par_offset = python_pars[10];
    PyObject *par_aspect_ratio = python_pars[11];
    PyObject *par_animate_opacity = python_pars[12];
    PyObject *par_animate_size = python_pars[13];
    PyObject *par_animate_position = python_pars[14];
    PyObject *par_animate_rotation = python_pars[15];
    PyObject *par_animate_scale = python_pars[16];
    PyObject *par_animate_offset = python_pars[17];
    PyObject *par_on_animation_end = python_pars[18];
    PyObject *par_tooltip = python_pars[19];
    PyObject *par_visible = python_pars[20];
    PyObject *par_disabled = python_pars[21];
    PyObject *par_data = python_pars[22];
    PyObject *par_text_size = python_pars[23];
    PyObject *par_text_style = python_pars[24];
    PyObject *par_label = python_pars[25];
    PyObject *par_label_style = python_pars[26];
    PyObject *par_icon = python_pars[27];
    PyObject *par_border = python_pars[28];
    PyObject *par_color = python_pars[29];
    PyObject *par_bgcolor = python_pars[30];
    PyObject *par_border_radius = python_pars[31];
    PyObject *par_border_width = python_pars[32];
    PyObject *par_border_color = python_pars[33];
    PyObject *par_focused_color = python_pars[34];
    PyObject *par_focused_bgcolor = python_pars[35];
    PyObject *par_focused_border_width = python_pars[36];
    PyObject *par_focused_border_color = python_pars[37];
    PyObject *par_content_padding = python_pars[38];
    PyObject *par_dense = python_pars[39];
    PyObject *par_filled = python_pars[40];
    PyObject *par_hint_text = python_pars[41];
    PyObject *par_hint_style = python_pars[42];
    PyObject *par_helper_text = python_pars[43];
    PyObject *par_helper_style = python_pars[44];
    PyObject *par_counter_text = python_pars[45];
    PyObject *par_counter_style = python_pars[46];
    PyObject *par_error_text = python_pars[47];
    PyObject *par_error_style = python_pars[48];
    PyObject *par_prefix = python_pars[49];
    PyObject *par_prefix_icon = python_pars[50];
    PyObject *par_prefix_text = python_pars[51];
    PyObject *par_prefix_style = python_pars[52];
    PyObject *par_suffix = python_pars[53];
    PyObject *par_suffix_icon = python_pars[54];
    PyObject *par_suffix_text = python_pars[55];
    PyObject *par_suffix_style = python_pars[56];
    PyObject *par_value = python_pars[57];
    PyObject *par_autofocus = python_pars[58];
    PyObject *par_options = python_pars[59];
    PyObject *par_alignment = python_pars[60];
    PyObject *par_on_change = python_pars[61];
    PyObject *par_on_focus = python_pars[62];
    PyObject *par_on_blur = python_pars[63];
    struct Nuitka_FrameObject *frame_1b4466781a1053ef13bb10171aad1e19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1b4466781a1053ef13bb10171aad1e19 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1b4466781a1053ef13bb10171aad1e19)) {
        Py_XDECREF(cache_frame_1b4466781a1053ef13bb10171aad1e19);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b4466781a1053ef13bb10171aad1e19 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b4466781a1053ef13bb10171aad1e19 = MAKE_FUNCTION_FRAME(codeobj_1b4466781a1053ef13bb10171aad1e19, module_flet_core$dropdown, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b4466781a1053ef13bb10171aad1e19->m_type_description == NULL);
    frame_1b4466781a1053ef13bb10171aad1e19 = cache_frame_1b4466781a1053ef13bb10171aad1e19;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1b4466781a1053ef13bb10171aad1e19);
    assert(Py_REFCNT(frame_1b4466781a1053ef13bb10171aad1e19) == 2);

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
        PyObject *tmp_kw_call_dict_value_26_1;
        PyObject *tmp_kw_call_dict_value_27_1;
        PyObject *tmp_kw_call_dict_value_28_1;
        PyObject *tmp_kw_call_dict_value_29_1;
        PyObject *tmp_kw_call_dict_value_30_1;
        PyObject *tmp_kw_call_dict_value_31_1;
        PyObject *tmp_kw_call_dict_value_32_1;
        PyObject *tmp_kw_call_dict_value_33_1;
        PyObject *tmp_kw_call_dict_value_34_1;
        PyObject *tmp_kw_call_dict_value_35_1;
        PyObject *tmp_kw_call_dict_value_36_1;
        PyObject *tmp_kw_call_dict_value_37_1;
        PyObject *tmp_kw_call_dict_value_38_1;
        PyObject *tmp_kw_call_dict_value_39_1;
        PyObject *tmp_kw_call_dict_value_40_1;
        PyObject *tmp_kw_call_dict_value_41_1;
        PyObject *tmp_kw_call_dict_value_42_1;
        PyObject *tmp_kw_call_dict_value_43_1;
        PyObject *tmp_kw_call_dict_value_44_1;
        PyObject *tmp_kw_call_dict_value_45_1;
        PyObject *tmp_kw_call_dict_value_46_1;
        PyObject *tmp_kw_call_dict_value_47_1;
        PyObject *tmp_kw_call_dict_value_48_1;
        PyObject *tmp_kw_call_dict_value_49_1;
        PyObject *tmp_kw_call_dict_value_50_1;
        PyObject *tmp_kw_call_dict_value_51_1;
        PyObject *tmp_kw_call_dict_value_52_1;
        PyObject *tmp_kw_call_dict_value_53_1;
        PyObject *tmp_kw_call_dict_value_54_1;
        PyObject *tmp_kw_call_dict_value_55_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT(par_expand);
        tmp_kw_call_dict_value_4_1 = par_expand;
        CHECK_OBJECT(par_col);
        tmp_kw_call_dict_value_5_1 = par_col;
        CHECK_OBJECT(par_opacity);
        tmp_kw_call_dict_value_6_1 = par_opacity;
        CHECK_OBJECT(par_rotate);
        tmp_kw_call_dict_value_7_1 = par_rotate;
        CHECK_OBJECT(par_scale);
        tmp_kw_call_dict_value_8_1 = par_scale;
        CHECK_OBJECT(par_offset);
        tmp_kw_call_dict_value_9_1 = par_offset;
        CHECK_OBJECT(par_aspect_ratio);
        tmp_kw_call_dict_value_10_1 = par_aspect_ratio;
        CHECK_OBJECT(par_animate_opacity);
        tmp_kw_call_dict_value_11_1 = par_animate_opacity;
        CHECK_OBJECT(par_animate_size);
        tmp_kw_call_dict_value_12_1 = par_animate_size;
        CHECK_OBJECT(par_animate_position);
        tmp_kw_call_dict_value_13_1 = par_animate_position;
        CHECK_OBJECT(par_animate_rotation);
        tmp_kw_call_dict_value_14_1 = par_animate_rotation;
        CHECK_OBJECT(par_animate_scale);
        tmp_kw_call_dict_value_15_1 = par_animate_scale;
        CHECK_OBJECT(par_animate_offset);
        tmp_kw_call_dict_value_16_1 = par_animate_offset;
        CHECK_OBJECT(par_on_animation_end);
        tmp_kw_call_dict_value_17_1 = par_on_animation_end;
        CHECK_OBJECT(par_tooltip);
        tmp_kw_call_dict_value_18_1 = par_tooltip;
        CHECK_OBJECT(par_visible);
        tmp_kw_call_dict_value_19_1 = par_visible;
        CHECK_OBJECT(par_disabled);
        tmp_kw_call_dict_value_20_1 = par_disabled;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_21_1 = par_data;
        CHECK_OBJECT(par_text_size);
        tmp_kw_call_dict_value_22_1 = par_text_size;
        CHECK_OBJECT(par_text_style);
        tmp_kw_call_dict_value_23_1 = par_text_style;
        CHECK_OBJECT(par_label);
        tmp_kw_call_dict_value_24_1 = par_label;
        CHECK_OBJECT(par_label_style);
        tmp_kw_call_dict_value_25_1 = par_label_style;
        CHECK_OBJECT(par_icon);
        tmp_kw_call_dict_value_26_1 = par_icon;
        CHECK_OBJECT(par_border);
        tmp_kw_call_dict_value_27_1 = par_border;
        CHECK_OBJECT(par_color);
        tmp_kw_call_dict_value_28_1 = par_color;
        CHECK_OBJECT(par_bgcolor);
        tmp_kw_call_dict_value_29_1 = par_bgcolor;
        CHECK_OBJECT(par_border_radius);
        tmp_kw_call_dict_value_30_1 = par_border_radius;
        CHECK_OBJECT(par_border_width);
        tmp_kw_call_dict_value_31_1 = par_border_width;
        CHECK_OBJECT(par_border_color);
        tmp_kw_call_dict_value_32_1 = par_border_color;
        CHECK_OBJECT(par_focused_color);
        tmp_kw_call_dict_value_33_1 = par_focused_color;
        CHECK_OBJECT(par_focused_bgcolor);
        tmp_kw_call_dict_value_34_1 = par_focused_bgcolor;
        CHECK_OBJECT(par_focused_border_width);
        tmp_kw_call_dict_value_35_1 = par_focused_border_width;
        CHECK_OBJECT(par_focused_border_color);
        tmp_kw_call_dict_value_36_1 = par_focused_border_color;
        CHECK_OBJECT(par_content_padding);
        tmp_kw_call_dict_value_37_1 = par_content_padding;
        CHECK_OBJECT(par_dense);
        tmp_kw_call_dict_value_38_1 = par_dense;
        CHECK_OBJECT(par_filled);
        tmp_kw_call_dict_value_39_1 = par_filled;
        CHECK_OBJECT(par_hint_text);
        tmp_kw_call_dict_value_40_1 = par_hint_text;
        CHECK_OBJECT(par_hint_style);
        tmp_kw_call_dict_value_41_1 = par_hint_style;
        CHECK_OBJECT(par_helper_text);
        tmp_kw_call_dict_value_42_1 = par_helper_text;
        CHECK_OBJECT(par_helper_style);
        tmp_kw_call_dict_value_43_1 = par_helper_style;
        CHECK_OBJECT(par_counter_text);
        tmp_kw_call_dict_value_44_1 = par_counter_text;
        CHECK_OBJECT(par_counter_style);
        tmp_kw_call_dict_value_45_1 = par_counter_style;
        CHECK_OBJECT(par_error_text);
        tmp_kw_call_dict_value_46_1 = par_error_text;
        CHECK_OBJECT(par_error_style);
        tmp_kw_call_dict_value_47_1 = par_error_style;
        CHECK_OBJECT(par_prefix);
        tmp_kw_call_dict_value_48_1 = par_prefix;
        CHECK_OBJECT(par_prefix_icon);
        tmp_kw_call_dict_value_49_1 = par_prefix_icon;
        CHECK_OBJECT(par_prefix_text);
        tmp_kw_call_dict_value_50_1 = par_prefix_text;
        CHECK_OBJECT(par_prefix_style);
        tmp_kw_call_dict_value_51_1 = par_prefix_style;
        CHECK_OBJECT(par_suffix);
        tmp_kw_call_dict_value_52_1 = par_suffix;
        CHECK_OBJECT(par_suffix_icon);
        tmp_kw_call_dict_value_53_1 = par_suffix_icon;
        CHECK_OBJECT(par_suffix_text);
        tmp_kw_call_dict_value_54_1 = par_suffix_text;
        CHECK_OBJECT(par_suffix_style);
        tmp_kw_call_dict_value_55_1 = par_suffix_style;
        frame_1b4466781a1053ef13bb10171aad1e19->m_frame.f_lineno = 125;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[56] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1, tmp_kw_call_dict_value_24_1, tmp_kw_call_dict_value_25_1, tmp_kw_call_dict_value_26_1, tmp_kw_call_dict_value_27_1, tmp_kw_call_dict_value_28_1, tmp_kw_call_dict_value_29_1, tmp_kw_call_dict_value_30_1, tmp_kw_call_dict_value_31_1, tmp_kw_call_dict_value_32_1, tmp_kw_call_dict_value_33_1, tmp_kw_call_dict_value_34_1, tmp_kw_call_dict_value_35_1, tmp_kw_call_dict_value_36_1, tmp_kw_call_dict_value_37_1, tmp_kw_call_dict_value_38_1, tmp_kw_call_dict_value_39_1, tmp_kw_call_dict_value_40_1, tmp_kw_call_dict_value_41_1, tmp_kw_call_dict_value_42_1, tmp_kw_call_dict_value_43_1, tmp_kw_call_dict_value_44_1, tmp_kw_call_dict_value_45_1, tmp_kw_call_dict_value_46_1, tmp_kw_call_dict_value_47_1, tmp_kw_call_dict_value_48_1, tmp_kw_call_dict_value_49_1, tmp_kw_call_dict_value_50_1, tmp_kw_call_dict_value_51_1, tmp_kw_call_dict_value_52_1, tmp_kw_call_dict_value_53_1, tmp_kw_call_dict_value_54_1, tmp_kw_call_dict_value_55_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_2 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_autofocus);
        tmp_assattr_value_3 = par_autofocus;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_options);
        tmp_assattr_value_4 = par_options;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_alignment);
        tmp_assattr_value_5 = par_alignment;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_on_focus);
        tmp_assattr_value_6 = par_on_focus;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_on_blur);
        tmp_assattr_value_7 = par_on_blur;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_on_change);
        tmp_assattr_value_8 = par_on_change;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[10], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b4466781a1053ef13bb10171aad1e19, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b4466781a1053ef13bb10171aad1e19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b4466781a1053ef13bb10171aad1e19, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b4466781a1053ef13bb10171aad1e19,
        type_description_1,
        par_self,
        par_ref,
        par_key,
        par_width,
        par_height,
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
        par_text_size,
        par_text_style,
        par_label,
        par_label_style,
        par_icon,
        par_border,
        par_color,
        par_bgcolor,
        par_border_radius,
        par_border_width,
        par_border_color,
        par_focused_color,
        par_focused_bgcolor,
        par_focused_border_width,
        par_focused_border_color,
        par_content_padding,
        par_dense,
        par_filled,
        par_hint_text,
        par_hint_style,
        par_helper_text,
        par_helper_style,
        par_counter_text,
        par_counter_style,
        par_error_text,
        par_error_style,
        par_prefix,
        par_prefix_icon,
        par_prefix_text,
        par_prefix_style,
        par_suffix,
        par_suffix_icon,
        par_suffix_text,
        par_suffix_style,
        par_value,
        par_autofocus,
        par_options,
        par_alignment,
        par_on_change,
        par_on_focus,
        par_on_blur
    );


    // Release cached frame if used for exception.
    if (frame_1b4466781a1053ef13bb10171aad1e19 == cache_frame_1b4466781a1053ef13bb10171aad1e19) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b4466781a1053ef13bb10171aad1e19);
        cache_frame_1b4466781a1053ef13bb10171aad1e19 = NULL;
    }

    assertFrameObject(frame_1b4466781a1053ef13bb10171aad1e19);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
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
    CHECK_OBJECT(par_text_size);
    Py_DECREF(par_text_size);
    CHECK_OBJECT(par_text_style);
    Py_DECREF(par_text_style);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    CHECK_OBJECT(par_label_style);
    Py_DECREF(par_label_style);
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    CHECK_OBJECT(par_border);
    Py_DECREF(par_border);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_border_radius);
    Py_DECREF(par_border_radius);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    CHECK_OBJECT(par_border_color);
    Py_DECREF(par_border_color);
    CHECK_OBJECT(par_focused_color);
    Py_DECREF(par_focused_color);
    CHECK_OBJECT(par_focused_bgcolor);
    Py_DECREF(par_focused_bgcolor);
    CHECK_OBJECT(par_focused_border_width);
    Py_DECREF(par_focused_border_width);
    CHECK_OBJECT(par_focused_border_color);
    Py_DECREF(par_focused_border_color);
    CHECK_OBJECT(par_content_padding);
    Py_DECREF(par_content_padding);
    CHECK_OBJECT(par_dense);
    Py_DECREF(par_dense);
    CHECK_OBJECT(par_filled);
    Py_DECREF(par_filled);
    CHECK_OBJECT(par_hint_text);
    Py_DECREF(par_hint_text);
    CHECK_OBJECT(par_hint_style);
    Py_DECREF(par_hint_style);
    CHECK_OBJECT(par_helper_text);
    Py_DECREF(par_helper_text);
    CHECK_OBJECT(par_helper_style);
    Py_DECREF(par_helper_style);
    CHECK_OBJECT(par_counter_text);
    Py_DECREF(par_counter_text);
    CHECK_OBJECT(par_counter_style);
    Py_DECREF(par_counter_style);
    CHECK_OBJECT(par_error_text);
    Py_DECREF(par_error_text);
    CHECK_OBJECT(par_error_style);
    Py_DECREF(par_error_style);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_prefix_icon);
    Py_DECREF(par_prefix_icon);
    CHECK_OBJECT(par_prefix_text);
    Py_DECREF(par_prefix_text);
    CHECK_OBJECT(par_prefix_style);
    Py_DECREF(par_prefix_style);
    CHECK_OBJECT(par_suffix);
    Py_DECREF(par_suffix);
    CHECK_OBJECT(par_suffix_icon);
    Py_DECREF(par_suffix_icon);
    CHECK_OBJECT(par_suffix_text);
    Py_DECREF(par_suffix_text);
    CHECK_OBJECT(par_suffix_style);
    Py_DECREF(par_suffix_style);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_autofocus);
    Py_DECREF(par_autofocus);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    CHECK_OBJECT(par_alignment);
    Py_DECREF(par_alignment);
    CHECK_OBJECT(par_on_change);
    Py_DECREF(par_on_change);
    CHECK_OBJECT(par_on_focus);
    Py_DECREF(par_on_focus);
    CHECK_OBJECT(par_on_blur);
    Py_DECREF(par_on_blur);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
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
    CHECK_OBJECT(par_text_size);
    Py_DECREF(par_text_size);
    CHECK_OBJECT(par_text_style);
    Py_DECREF(par_text_style);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    CHECK_OBJECT(par_label_style);
    Py_DECREF(par_label_style);
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    CHECK_OBJECT(par_border);
    Py_DECREF(par_border);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_border_radius);
    Py_DECREF(par_border_radius);
    CHECK_OBJECT(par_border_width);
    Py_DECREF(par_border_width);
    CHECK_OBJECT(par_border_color);
    Py_DECREF(par_border_color);
    CHECK_OBJECT(par_focused_color);
    Py_DECREF(par_focused_color);
    CHECK_OBJECT(par_focused_bgcolor);
    Py_DECREF(par_focused_bgcolor);
    CHECK_OBJECT(par_focused_border_width);
    Py_DECREF(par_focused_border_width);
    CHECK_OBJECT(par_focused_border_color);
    Py_DECREF(par_focused_border_color);
    CHECK_OBJECT(par_content_padding);
    Py_DECREF(par_content_padding);
    CHECK_OBJECT(par_dense);
    Py_DECREF(par_dense);
    CHECK_OBJECT(par_filled);
    Py_DECREF(par_filled);
    CHECK_OBJECT(par_hint_text);
    Py_DECREF(par_hint_text);
    CHECK_OBJECT(par_hint_style);
    Py_DECREF(par_hint_style);
    CHECK_OBJECT(par_helper_text);
    Py_DECREF(par_helper_text);
    CHECK_OBJECT(par_helper_style);
    Py_DECREF(par_helper_style);
    CHECK_OBJECT(par_counter_text);
    Py_DECREF(par_counter_text);
    CHECK_OBJECT(par_counter_style);
    Py_DECREF(par_counter_style);
    CHECK_OBJECT(par_error_text);
    Py_DECREF(par_error_text);
    CHECK_OBJECT(par_error_style);
    Py_DECREF(par_error_style);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_prefix_icon);
    Py_DECREF(par_prefix_icon);
    CHECK_OBJECT(par_prefix_text);
    Py_DECREF(par_prefix_text);
    CHECK_OBJECT(par_prefix_style);
    Py_DECREF(par_prefix_style);
    CHECK_OBJECT(par_suffix);
    Py_DECREF(par_suffix);
    CHECK_OBJECT(par_suffix_icon);
    Py_DECREF(par_suffix_icon);
    CHECK_OBJECT(par_suffix_text);
    Py_DECREF(par_suffix_text);
    CHECK_OBJECT(par_suffix_style);
    Py_DECREF(par_suffix_style);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_autofocus);
    Py_DECREF(par_autofocus);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    CHECK_OBJECT(par_alignment);
    Py_DECREF(par_alignment);
    CHECK_OBJECT(par_on_change);
    Py_DECREF(par_on_change);
    CHECK_OBJECT(par_on_focus);
    Py_DECREF(par_on_focus);
    CHECK_OBJECT(par_on_blur);
    Py_DECREF(par_on_blur);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$dropdown$$$function__3__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d77ba7517121466bdb87667e658bd600;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d77ba7517121466bdb87667e658bd600 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d77ba7517121466bdb87667e658bd600)) {
        Py_XDECREF(cache_frame_d77ba7517121466bdb87667e658bd600);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d77ba7517121466bdb87667e658bd600 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d77ba7517121466bdb87667e658bd600 = MAKE_FUNCTION_FRAME(codeobj_d77ba7517121466bdb87667e658bd600, module_flet_core$dropdown, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d77ba7517121466bdb87667e658bd600->m_type_description == NULL);
    frame_d77ba7517121466bdb87667e658bd600 = cache_frame_d77ba7517121466bdb87667e658bd600;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d77ba7517121466bdb87667e658bd600);
    assert(Py_REFCNT(frame_d77ba7517121466bdb87667e658bd600) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 201;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$dropdown, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_d77ba7517121466bdb87667e658bd600->m_frame.f_lineno = 201;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[12]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[7];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 202;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_d77ba7517121466bdb87667e658bd600->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
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
        exception_tb = MAKE_TRACEBACK(frame_d77ba7517121466bdb87667e658bd600, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d77ba7517121466bdb87667e658bd600->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d77ba7517121466bdb87667e658bd600, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d77ba7517121466bdb87667e658bd600,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_d77ba7517121466bdb87667e658bd600 == cache_frame_d77ba7517121466bdb87667e658bd600) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d77ba7517121466bdb87667e658bd600);
        cache_frame_d77ba7517121466bdb87667e658bd600 = NULL;
    }

    assertFrameObject(frame_d77ba7517121466bdb87667e658bd600);

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


static PyObject *impl_flet_core$dropdown$$$function__4__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_4f19d839651acf5dd744d55db4106805;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4f19d839651acf5dd744d55db4106805 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4f19d839651acf5dd744d55db4106805)) {
        Py_XDECREF(cache_frame_4f19d839651acf5dd744d55db4106805);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f19d839651acf5dd744d55db4106805 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f19d839651acf5dd744d55db4106805 = MAKE_FUNCTION_FRAME(codeobj_4f19d839651acf5dd744d55db4106805, module_flet_core$dropdown, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f19d839651acf5dd744d55db4106805->m_type_description == NULL);
    frame_4f19d839651acf5dd744d55db4106805 = cache_frame_4f19d839651acf5dd744d55db4106805;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f19d839651acf5dd744d55db4106805);
    assert(Py_REFCNT(frame_4f19d839651acf5dd744d55db4106805) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_4f19d839651acf5dd744d55db4106805->m_frame.f_lineno = 205;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[15], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_result);
        tmp_expression_value_1 = var_result;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 206;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4f19d839651acf5dd744d55db4106805->m_frame.f_lineno = 206;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
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
        exception_tb = MAKE_TRACEBACK(frame_4f19d839651acf5dd744d55db4106805, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f19d839651acf5dd744d55db4106805->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f19d839651acf5dd744d55db4106805, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f19d839651acf5dd744d55db4106805,
        type_description_1,
        par_self,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_4f19d839651acf5dd744d55db4106805 == cache_frame_4f19d839651acf5dd744d55db4106805) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f19d839651acf5dd744d55db4106805);
        cache_frame_4f19d839651acf5dd744d55db4106805 = NULL;
    }

    assertFrameObject(frame_4f19d839651acf5dd744d55db4106805);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var_result);
    var_result = NULL;
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


static PyObject *impl_flet_core$dropdown$$$function__5_focus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_83fc84fa7a1b70d794af2c64a718f845;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83fc84fa7a1b70d794af2c64a718f845 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_83fc84fa7a1b70d794af2c64a718f845)) {
        Py_XDECREF(cache_frame_83fc84fa7a1b70d794af2c64a718f845);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83fc84fa7a1b70d794af2c64a718f845 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83fc84fa7a1b70d794af2c64a718f845 = MAKE_FUNCTION_FRAME(codeobj_83fc84fa7a1b70d794af2c64a718f845, module_flet_core$dropdown, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83fc84fa7a1b70d794af2c64a718f845->m_type_description == NULL);
    frame_83fc84fa7a1b70d794af2c64a718f845 = cache_frame_83fc84fa7a1b70d794af2c64a718f845;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_83fc84fa7a1b70d794af2c64a718f845);
    assert(Py_REFCNT(frame_83fc84fa7a1b70d794af2c64a718f845) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[17];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 210;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_83fc84fa7a1b70d794af2c64a718f845->m_frame.f_lineno = 210;
        tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 210;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 210;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_83fc84fa7a1b70d794af2c64a718f845->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_83fc84fa7a1b70d794af2c64a718f845->m_frame.f_lineno = 211;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_83fc84fa7a1b70d794af2c64a718f845, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83fc84fa7a1b70d794af2c64a718f845->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83fc84fa7a1b70d794af2c64a718f845, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83fc84fa7a1b70d794af2c64a718f845,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_83fc84fa7a1b70d794af2c64a718f845 == cache_frame_83fc84fa7a1b70d794af2c64a718f845) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83fc84fa7a1b70d794af2c64a718f845);
        cache_frame_83fc84fa7a1b70d794af2c64a718f845 = NULL;
    }

    assertFrameObject(frame_83fc84fa7a1b70d794af2c64a718f845);

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


static PyObject *impl_flet_core$dropdown$$$function__6_focus_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_COROUTINE_flet_core$dropdown$$$function__6_focus_async$$$coroutine__1_focus_async(tmp_closure_1);

        goto function_return_exit;
    }

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



#if 1
struct flet_core$dropdown$$$function__6_focus_async$$$coroutine__1_focus_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$dropdown$$$function__6_focus_async$$$coroutine__1_focus_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$dropdown$$$function__6_focus_async$$$coroutine__1_focus_async_locals *coroutine_heap = (struct flet_core$dropdown$$$function__6_focus_async$$$coroutine__1_focus_async_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_7a207826bbbce99eace0d91abc675627, module_flet_core$dropdown, sizeof(void *));
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[20]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[17];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 214;
        tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 215;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[20]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 215;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[21]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = ASYNC_AWAIT(tmp_expression_value_3, await_normal);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_2;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "c";
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
            coroutine->m_closure[0]
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
    goto function_exception_exit;

    frame_no_exception_1:;
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_flet_core$dropdown$$$function__6_focus_async$$$coroutine__1_focus_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$dropdown$$$function__6_focus_async$$$coroutine__1_focus_async_context,
        module_flet_core$dropdown,
        mod_consts[22],
        mod_consts[23],
        codeobj_7a207826bbbce99eace0d91abc675627,
        closure,
        1,
#if 1
        sizeof(struct flet_core$dropdown$$$function__6_focus_async$$$coroutine__1_focus_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$dropdown$$$function__7_options(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7be5a0cce09591d1bfd19ff4db7919a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7be5a0cce09591d1bfd19ff4db7919a3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7be5a0cce09591d1bfd19ff4db7919a3)) {
        Py_XDECREF(cache_frame_7be5a0cce09591d1bfd19ff4db7919a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7be5a0cce09591d1bfd19ff4db7919a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7be5a0cce09591d1bfd19ff4db7919a3 = MAKE_FUNCTION_FRAME(codeobj_7be5a0cce09591d1bfd19ff4db7919a3, module_flet_core$dropdown, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7be5a0cce09591d1bfd19ff4db7919a3->m_type_description == NULL);
    frame_7be5a0cce09591d1bfd19ff4db7919a3 = cache_frame_7be5a0cce09591d1bfd19ff4db7919a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7be5a0cce09591d1bfd19ff4db7919a3);
    assert(Py_REFCNT(frame_7be5a0cce09591d1bfd19ff4db7919a3) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
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
        exception_tb = MAKE_TRACEBACK(frame_7be5a0cce09591d1bfd19ff4db7919a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7be5a0cce09591d1bfd19ff4db7919a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7be5a0cce09591d1bfd19ff4db7919a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7be5a0cce09591d1bfd19ff4db7919a3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7be5a0cce09591d1bfd19ff4db7919a3 == cache_frame_7be5a0cce09591d1bfd19ff4db7919a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7be5a0cce09591d1bfd19ff4db7919a3);
        cache_frame_7be5a0cce09591d1bfd19ff4db7919a3 = NULL;
    }

    assertFrameObject(frame_7be5a0cce09591d1bfd19ff4db7919a3);

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


static PyObject *impl_flet_core$dropdown$$$function__8_options(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6e11880f633fdd33e3a7613b90b26946;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e11880f633fdd33e3a7613b90b26946 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e11880f633fdd33e3a7613b90b26946)) {
        Py_XDECREF(cache_frame_6e11880f633fdd33e3a7613b90b26946);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e11880f633fdd33e3a7613b90b26946 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e11880f633fdd33e3a7613b90b26946 = MAKE_FUNCTION_FRAME(codeobj_6e11880f633fdd33e3a7613b90b26946, module_flet_core$dropdown, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e11880f633fdd33e3a7613b90b26946->m_type_description == NULL);
    frame_6e11880f633fdd33e3a7613b90b26946 = cache_frame_6e11880f633fdd33e3a7613b90b26946;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6e11880f633fdd33e3a7613b90b26946);
    assert(Py_REFCNT(frame_6e11880f633fdd33e3a7613b90b26946) == 2);

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
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e11880f633fdd33e3a7613b90b26946, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e11880f633fdd33e3a7613b90b26946->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e11880f633fdd33e3a7613b90b26946, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e11880f633fdd33e3a7613b90b26946,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6e11880f633fdd33e3a7613b90b26946 == cache_frame_6e11880f633fdd33e3a7613b90b26946) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e11880f633fdd33e3a7613b90b26946);
        cache_frame_6e11880f633fdd33e3a7613b90b26946 = NULL;
    }

    assertFrameObject(frame_6e11880f633fdd33e3a7613b90b26946);

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


static PyObject *impl_flet_core$dropdown$$$function__9_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_50495801f407917cd7cda4504e1b24e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_50495801f407917cd7cda4504e1b24e3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_50495801f407917cd7cda4504e1b24e3)) {
        Py_XDECREF(cache_frame_50495801f407917cd7cda4504e1b24e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50495801f407917cd7cda4504e1b24e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50495801f407917cd7cda4504e1b24e3 = MAKE_FUNCTION_FRAME(codeobj_50495801f407917cd7cda4504e1b24e3, module_flet_core$dropdown, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50495801f407917cd7cda4504e1b24e3->m_type_description == NULL);
    frame_50495801f407917cd7cda4504e1b24e3 = cache_frame_50495801f407917cd7cda4504e1b24e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_50495801f407917cd7cda4504e1b24e3);
    assert(Py_REFCNT(frame_50495801f407917cd7cda4504e1b24e3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_50495801f407917cd7cda4504e1b24e3->m_frame.f_lineno = 229;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_50495801f407917cd7cda4504e1b24e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50495801f407917cd7cda4504e1b24e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50495801f407917cd7cda4504e1b24e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50495801f407917cd7cda4504e1b24e3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_50495801f407917cd7cda4504e1b24e3 == cache_frame_50495801f407917cd7cda4504e1b24e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50495801f407917cd7cda4504e1b24e3);
        cache_frame_50495801f407917cd7cda4504e1b24e3 = NULL;
    }

    assertFrameObject(frame_50495801f407917cd7cda4504e1b24e3);

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


static PyObject *impl_flet_core$dropdown$$$function__10_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6a4769ce9009323f0f2a703b8c04f8a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6a4769ce9009323f0f2a703b8c04f8a6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6a4769ce9009323f0f2a703b8c04f8a6)) {
        Py_XDECREF(cache_frame_6a4769ce9009323f0f2a703b8c04f8a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a4769ce9009323f0f2a703b8c04f8a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a4769ce9009323f0f2a703b8c04f8a6 = MAKE_FUNCTION_FRAME(codeobj_6a4769ce9009323f0f2a703b8c04f8a6, module_flet_core$dropdown, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a4769ce9009323f0f2a703b8c04f8a6->m_type_description == NULL);
    frame_6a4769ce9009323f0f2a703b8c04f8a6 = cache_frame_6a4769ce9009323f0f2a703b8c04f8a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6a4769ce9009323f0f2a703b8c04f8a6);
    assert(Py_REFCNT(frame_6a4769ce9009323f0f2a703b8c04f8a6) == 2);

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
        frame_6a4769ce9009323f0f2a703b8c04f8a6->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[26],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
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
        exception_tb = MAKE_TRACEBACK(frame_6a4769ce9009323f0f2a703b8c04f8a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a4769ce9009323f0f2a703b8c04f8a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a4769ce9009323f0f2a703b8c04f8a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a4769ce9009323f0f2a703b8c04f8a6,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6a4769ce9009323f0f2a703b8c04f8a6 == cache_frame_6a4769ce9009323f0f2a703b8c04f8a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a4769ce9009323f0f2a703b8c04f8a6);
        cache_frame_6a4769ce9009323f0f2a703b8c04f8a6 = NULL;
    }

    assertFrameObject(frame_6a4769ce9009323f0f2a703b8c04f8a6);

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


static PyObject *impl_flet_core$dropdown$$$function__11_autofocus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b9f37b8bb4275734e5af022183f74519;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b9f37b8bb4275734e5af022183f74519 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b9f37b8bb4275734e5af022183f74519)) {
        Py_XDECREF(cache_frame_b9f37b8bb4275734e5af022183f74519);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9f37b8bb4275734e5af022183f74519 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9f37b8bb4275734e5af022183f74519 = MAKE_FUNCTION_FRAME(codeobj_b9f37b8bb4275734e5af022183f74519, module_flet_core$dropdown, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b9f37b8bb4275734e5af022183f74519->m_type_description == NULL);
    frame_b9f37b8bb4275734e5af022183f74519 = cache_frame_b9f37b8bb4275734e5af022183f74519;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b9f37b8bb4275734e5af022183f74519);
    assert(Py_REFCNT(frame_b9f37b8bb4275734e5af022183f74519) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b9f37b8bb4275734e5af022183f74519->m_frame.f_lineno = 238;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[27], 0), mod_consts[28]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
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
        exception_tb = MAKE_TRACEBACK(frame_b9f37b8bb4275734e5af022183f74519, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9f37b8bb4275734e5af022183f74519->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9f37b8bb4275734e5af022183f74519, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9f37b8bb4275734e5af022183f74519,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b9f37b8bb4275734e5af022183f74519 == cache_frame_b9f37b8bb4275734e5af022183f74519) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b9f37b8bb4275734e5af022183f74519);
        cache_frame_b9f37b8bb4275734e5af022183f74519 = NULL;
    }

    assertFrameObject(frame_b9f37b8bb4275734e5af022183f74519);

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


static PyObject *impl_flet_core$dropdown$$$function__12_autofocus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_68f89f3f39d47e94fafea50102d3eccb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_68f89f3f39d47e94fafea50102d3eccb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_68f89f3f39d47e94fafea50102d3eccb)) {
        Py_XDECREF(cache_frame_68f89f3f39d47e94fafea50102d3eccb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_68f89f3f39d47e94fafea50102d3eccb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_68f89f3f39d47e94fafea50102d3eccb = MAKE_FUNCTION_FRAME(codeobj_68f89f3f39d47e94fafea50102d3eccb, module_flet_core$dropdown, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_68f89f3f39d47e94fafea50102d3eccb->m_type_description == NULL);
    frame_68f89f3f39d47e94fafea50102d3eccb = cache_frame_68f89f3f39d47e94fafea50102d3eccb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_68f89f3f39d47e94fafea50102d3eccb);
    assert(Py_REFCNT(frame_68f89f3f39d47e94fafea50102d3eccb) == 2);

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
        frame_68f89f3f39d47e94fafea50102d3eccb->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[26],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
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
        exception_tb = MAKE_TRACEBACK(frame_68f89f3f39d47e94fafea50102d3eccb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_68f89f3f39d47e94fafea50102d3eccb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_68f89f3f39d47e94fafea50102d3eccb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_68f89f3f39d47e94fafea50102d3eccb,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_68f89f3f39d47e94fafea50102d3eccb == cache_frame_68f89f3f39d47e94fafea50102d3eccb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_68f89f3f39d47e94fafea50102d3eccb);
        cache_frame_68f89f3f39d47e94fafea50102d3eccb = NULL;
    }

    assertFrameObject(frame_68f89f3f39d47e94fafea50102d3eccb);

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


static PyObject *impl_flet_core$dropdown$$$function__13_alignment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1819c33874a917d0d0e3cf16fe5fbd50;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1819c33874a917d0d0e3cf16fe5fbd50 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1819c33874a917d0d0e3cf16fe5fbd50)) {
        Py_XDECREF(cache_frame_1819c33874a917d0d0e3cf16fe5fbd50);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1819c33874a917d0d0e3cf16fe5fbd50 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1819c33874a917d0d0e3cf16fe5fbd50 = MAKE_FUNCTION_FRAME(codeobj_1819c33874a917d0d0e3cf16fe5fbd50, module_flet_core$dropdown, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1819c33874a917d0d0e3cf16fe5fbd50->m_type_description == NULL);
    frame_1819c33874a917d0d0e3cf16fe5fbd50 = cache_frame_1819c33874a917d0d0e3cf16fe5fbd50;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1819c33874a917d0d0e3cf16fe5fbd50);
    assert(Py_REFCNT(frame_1819c33874a917d0d0e3cf16fe5fbd50) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
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
        exception_tb = MAKE_TRACEBACK(frame_1819c33874a917d0d0e3cf16fe5fbd50, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1819c33874a917d0d0e3cf16fe5fbd50->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1819c33874a917d0d0e3cf16fe5fbd50, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1819c33874a917d0d0e3cf16fe5fbd50,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1819c33874a917d0d0e3cf16fe5fbd50 == cache_frame_1819c33874a917d0d0e3cf16fe5fbd50) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1819c33874a917d0d0e3cf16fe5fbd50);
        cache_frame_1819c33874a917d0d0e3cf16fe5fbd50 = NULL;
    }

    assertFrameObject(frame_1819c33874a917d0d0e3cf16fe5fbd50);

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


static PyObject *impl_flet_core$dropdown$$$function__14_alignment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_7ffdb66365df0a12dfef21b88a53b431;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ffdb66365df0a12dfef21b88a53b431 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ffdb66365df0a12dfef21b88a53b431)) {
        Py_XDECREF(cache_frame_7ffdb66365df0a12dfef21b88a53b431);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ffdb66365df0a12dfef21b88a53b431 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ffdb66365df0a12dfef21b88a53b431 = MAKE_FUNCTION_FRAME(codeobj_7ffdb66365df0a12dfef21b88a53b431, module_flet_core$dropdown, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ffdb66365df0a12dfef21b88a53b431->m_type_description == NULL);
    frame_7ffdb66365df0a12dfef21b88a53b431 = cache_frame_7ffdb66365df0a12dfef21b88a53b431;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ffdb66365df0a12dfef21b88a53b431);
    assert(Py_REFCNT(frame_7ffdb66365df0a12dfef21b88a53b431) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ffdb66365df0a12dfef21b88a53b431, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ffdb66365df0a12dfef21b88a53b431->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ffdb66365df0a12dfef21b88a53b431, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ffdb66365df0a12dfef21b88a53b431,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7ffdb66365df0a12dfef21b88a53b431 == cache_frame_7ffdb66365df0a12dfef21b88a53b431) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ffdb66365df0a12dfef21b88a53b431);
        cache_frame_7ffdb66365df0a12dfef21b88a53b431 = NULL;
    }

    assertFrameObject(frame_7ffdb66365df0a12dfef21b88a53b431);

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


static PyObject *impl_flet_core$dropdown$$$function__15_on_change(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7dafe3e149e82ebb231600134141b7d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7dafe3e149e82ebb231600134141b7d1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7dafe3e149e82ebb231600134141b7d1)) {
        Py_XDECREF(cache_frame_7dafe3e149e82ebb231600134141b7d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7dafe3e149e82ebb231600134141b7d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7dafe3e149e82ebb231600134141b7d1 = MAKE_FUNCTION_FRAME(codeobj_7dafe3e149e82ebb231600134141b7d1, module_flet_core$dropdown, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7dafe3e149e82ebb231600134141b7d1->m_type_description == NULL);
    frame_7dafe3e149e82ebb231600134141b7d1 = cache_frame_7dafe3e149e82ebb231600134141b7d1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7dafe3e149e82ebb231600134141b7d1);
    assert(Py_REFCNT(frame_7dafe3e149e82ebb231600134141b7d1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_7dafe3e149e82ebb231600134141b7d1->m_frame.f_lineno = 256;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[29],
            PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
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
        exception_tb = MAKE_TRACEBACK(frame_7dafe3e149e82ebb231600134141b7d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7dafe3e149e82ebb231600134141b7d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7dafe3e149e82ebb231600134141b7d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7dafe3e149e82ebb231600134141b7d1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7dafe3e149e82ebb231600134141b7d1 == cache_frame_7dafe3e149e82ebb231600134141b7d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7dafe3e149e82ebb231600134141b7d1);
        cache_frame_7dafe3e149e82ebb231600134141b7d1 = NULL;
    }

    assertFrameObject(frame_7dafe3e149e82ebb231600134141b7d1);

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


static PyObject *impl_flet_core$dropdown$$$function__16_on_change(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_f950512513cdc67022e89b23bc8b11a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f950512513cdc67022e89b23bc8b11a5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f950512513cdc67022e89b23bc8b11a5)) {
        Py_XDECREF(cache_frame_f950512513cdc67022e89b23bc8b11a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f950512513cdc67022e89b23bc8b11a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f950512513cdc67022e89b23bc8b11a5 = MAKE_FUNCTION_FRAME(codeobj_f950512513cdc67022e89b23bc8b11a5, module_flet_core$dropdown, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f950512513cdc67022e89b23bc8b11a5->m_type_description == NULL);
    frame_f950512513cdc67022e89b23bc8b11a5 = cache_frame_f950512513cdc67022e89b23bc8b11a5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f950512513cdc67022e89b23bc8b11a5);
    assert(Py_REFCNT(frame_f950512513cdc67022e89b23bc8b11a5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[32];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_f950512513cdc67022e89b23bc8b11a5->m_frame.f_lineno = 260;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
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
        exception_tb = MAKE_TRACEBACK(frame_f950512513cdc67022e89b23bc8b11a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f950512513cdc67022e89b23bc8b11a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f950512513cdc67022e89b23bc8b11a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f950512513cdc67022e89b23bc8b11a5,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_f950512513cdc67022e89b23bc8b11a5 == cache_frame_f950512513cdc67022e89b23bc8b11a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f950512513cdc67022e89b23bc8b11a5);
        cache_frame_f950512513cdc67022e89b23bc8b11a5 = NULL;
    }

    assertFrameObject(frame_f950512513cdc67022e89b23bc8b11a5);

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


static PyObject *impl_flet_core$dropdown$$$function__17_on_focus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_079d74cb91d2971aa7f278cd3b432253;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_079d74cb91d2971aa7f278cd3b432253 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_079d74cb91d2971aa7f278cd3b432253)) {
        Py_XDECREF(cache_frame_079d74cb91d2971aa7f278cd3b432253);

#if _DEBUG_REFCOUNTS
        if (cache_frame_079d74cb91d2971aa7f278cd3b432253 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_079d74cb91d2971aa7f278cd3b432253 = MAKE_FUNCTION_FRAME(codeobj_079d74cb91d2971aa7f278cd3b432253, module_flet_core$dropdown, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_079d74cb91d2971aa7f278cd3b432253->m_type_description == NULL);
    frame_079d74cb91d2971aa7f278cd3b432253 = cache_frame_079d74cb91d2971aa7f278cd3b432253;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_079d74cb91d2971aa7f278cd3b432253);
    assert(Py_REFCNT(frame_079d74cb91d2971aa7f278cd3b432253) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_079d74cb91d2971aa7f278cd3b432253->m_frame.f_lineno = 265;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[29],
            PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
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
        exception_tb = MAKE_TRACEBACK(frame_079d74cb91d2971aa7f278cd3b432253, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_079d74cb91d2971aa7f278cd3b432253->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_079d74cb91d2971aa7f278cd3b432253, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_079d74cb91d2971aa7f278cd3b432253,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_079d74cb91d2971aa7f278cd3b432253 == cache_frame_079d74cb91d2971aa7f278cd3b432253) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_079d74cb91d2971aa7f278cd3b432253);
        cache_frame_079d74cb91d2971aa7f278cd3b432253 = NULL;
    }

    assertFrameObject(frame_079d74cb91d2971aa7f278cd3b432253);

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


static PyObject *impl_flet_core$dropdown$$$function__18_on_focus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_1a0f731ce7e4222cc90fe4422392e67e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a0f731ce7e4222cc90fe4422392e67e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a0f731ce7e4222cc90fe4422392e67e)) {
        Py_XDECREF(cache_frame_1a0f731ce7e4222cc90fe4422392e67e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a0f731ce7e4222cc90fe4422392e67e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a0f731ce7e4222cc90fe4422392e67e = MAKE_FUNCTION_FRAME(codeobj_1a0f731ce7e4222cc90fe4422392e67e, module_flet_core$dropdown, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a0f731ce7e4222cc90fe4422392e67e->m_type_description == NULL);
    frame_1a0f731ce7e4222cc90fe4422392e67e = cache_frame_1a0f731ce7e4222cc90fe4422392e67e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a0f731ce7e4222cc90fe4422392e67e);
    assert(Py_REFCNT(frame_1a0f731ce7e4222cc90fe4422392e67e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[17];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_1a0f731ce7e4222cc90fe4422392e67e->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
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
        exception_tb = MAKE_TRACEBACK(frame_1a0f731ce7e4222cc90fe4422392e67e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a0f731ce7e4222cc90fe4422392e67e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a0f731ce7e4222cc90fe4422392e67e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a0f731ce7e4222cc90fe4422392e67e,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_1a0f731ce7e4222cc90fe4422392e67e == cache_frame_1a0f731ce7e4222cc90fe4422392e67e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a0f731ce7e4222cc90fe4422392e67e);
        cache_frame_1a0f731ce7e4222cc90fe4422392e67e = NULL;
    }

    assertFrameObject(frame_1a0f731ce7e4222cc90fe4422392e67e);

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


static PyObject *impl_flet_core$dropdown$$$function__19_on_blur(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ff3d969630bf29a07690e36ad473918c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ff3d969630bf29a07690e36ad473918c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ff3d969630bf29a07690e36ad473918c)) {
        Py_XDECREF(cache_frame_ff3d969630bf29a07690e36ad473918c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff3d969630bf29a07690e36ad473918c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff3d969630bf29a07690e36ad473918c = MAKE_FUNCTION_FRAME(codeobj_ff3d969630bf29a07690e36ad473918c, module_flet_core$dropdown, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff3d969630bf29a07690e36ad473918c->m_type_description == NULL);
    frame_ff3d969630bf29a07690e36ad473918c = cache_frame_ff3d969630bf29a07690e36ad473918c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff3d969630bf29a07690e36ad473918c);
    assert(Py_REFCNT(frame_ff3d969630bf29a07690e36ad473918c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ff3d969630bf29a07690e36ad473918c->m_frame.f_lineno = 274;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[29],
            PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
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
        exception_tb = MAKE_TRACEBACK(frame_ff3d969630bf29a07690e36ad473918c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff3d969630bf29a07690e36ad473918c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff3d969630bf29a07690e36ad473918c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff3d969630bf29a07690e36ad473918c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ff3d969630bf29a07690e36ad473918c == cache_frame_ff3d969630bf29a07690e36ad473918c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff3d969630bf29a07690e36ad473918c);
        cache_frame_ff3d969630bf29a07690e36ad473918c = NULL;
    }

    assertFrameObject(frame_ff3d969630bf29a07690e36ad473918c);

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


static PyObject *impl_flet_core$dropdown$$$function__20_on_blur(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_f3bf50f44e561d250aa25a4c696388ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f3bf50f44e561d250aa25a4c696388ad = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f3bf50f44e561d250aa25a4c696388ad)) {
        Py_XDECREF(cache_frame_f3bf50f44e561d250aa25a4c696388ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3bf50f44e561d250aa25a4c696388ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3bf50f44e561d250aa25a4c696388ad = MAKE_FUNCTION_FRAME(codeobj_f3bf50f44e561d250aa25a4c696388ad, module_flet_core$dropdown, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f3bf50f44e561d250aa25a4c696388ad->m_type_description == NULL);
    frame_f3bf50f44e561d250aa25a4c696388ad = cache_frame_f3bf50f44e561d250aa25a4c696388ad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f3bf50f44e561d250aa25a4c696388ad);
    assert(Py_REFCNT(frame_f3bf50f44e561d250aa25a4c696388ad) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[35];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_f3bf50f44e561d250aa25a4c696388ad->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
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
        exception_tb = MAKE_TRACEBACK(frame_f3bf50f44e561d250aa25a4c696388ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3bf50f44e561d250aa25a4c696388ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3bf50f44e561d250aa25a4c696388ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3bf50f44e561d250aa25a4c696388ad,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_f3bf50f44e561d250aa25a4c696388ad == cache_frame_f3bf50f44e561d250aa25a4c696388ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f3bf50f44e561d250aa25a4c696388ad);
        cache_frame_f3bf50f44e561d250aa25a4c696388ad = NULL;
    }

    assertFrameObject(frame_f3bf50f44e561d250aa25a4c696388ad);

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


static PyObject *impl_flet_core$dropdown$$$function__21___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_text = python_pars[2];
    PyObject *par_disabled = python_pars[3];
    PyObject *par_ref = python_pars[4];
    struct Nuitka_FrameObject *frame_5f9869bb472ddb59adda0da2e48e5289;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5f9869bb472ddb59adda0da2e48e5289 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5f9869bb472ddb59adda0da2e48e5289)) {
        Py_XDECREF(cache_frame_5f9869bb472ddb59adda0da2e48e5289);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f9869bb472ddb59adda0da2e48e5289 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f9869bb472ddb59adda0da2e48e5289 = MAKE_FUNCTION_FRAME(codeobj_5f9869bb472ddb59adda0da2e48e5289, module_flet_core$dropdown, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f9869bb472ddb59adda0da2e48e5289->m_type_description == NULL);
    frame_5f9869bb472ddb59adda0da2e48e5289 = cache_frame_5f9869bb472ddb59adda0da2e48e5289;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5f9869bb472ddb59adda0da2e48e5289);
    assert(Py_REFCNT(frame_5f9869bb472ddb59adda0da2e48e5289) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        CHECK_OBJECT(par_disabled);
        tmp_kw_call_dict_value_1_1 = par_disabled;
        frame_5f9869bb472ddb59adda0da2e48e5289->m_frame.f_lineno = 283;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_text);
        tmp_cmp_expr_left_2 = par_text;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? Py_True : Py_False;
        tmp_operand_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
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
        tmp_raise_value_1 = mod_consts[38];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 284;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_key);
        tmp_assattr_value_1 = par_key;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[39], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_text);
        tmp_assattr_value_2 = par_text;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[40], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_disabled);
        tmp_assattr_value_3 = par_disabled;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[41], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f9869bb472ddb59adda0da2e48e5289, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f9869bb472ddb59adda0da2e48e5289->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f9869bb472ddb59adda0da2e48e5289, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f9869bb472ddb59adda0da2e48e5289,
        type_description_1,
        par_self,
        par_key,
        par_text,
        par_disabled,
        par_ref
    );


    // Release cached frame if used for exception.
    if (frame_5f9869bb472ddb59adda0da2e48e5289 == cache_frame_5f9869bb472ddb59adda0da2e48e5289) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f9869bb472ddb59adda0da2e48e5289);
        cache_frame_5f9869bb472ddb59adda0da2e48e5289 = NULL;
    }

    assertFrameObject(frame_5f9869bb472ddb59adda0da2e48e5289);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$dropdown$$$function__23_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e96f6b4b47c114e7b866aa0c773c9cf5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e96f6b4b47c114e7b866aa0c773c9cf5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e96f6b4b47c114e7b866aa0c773c9cf5)) {
        Py_XDECREF(cache_frame_e96f6b4b47c114e7b866aa0c773c9cf5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e96f6b4b47c114e7b866aa0c773c9cf5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e96f6b4b47c114e7b866aa0c773c9cf5 = MAKE_FUNCTION_FRAME(codeobj_e96f6b4b47c114e7b866aa0c773c9cf5, module_flet_core$dropdown, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e96f6b4b47c114e7b866aa0c773c9cf5->m_type_description == NULL);
    frame_e96f6b4b47c114e7b866aa0c773c9cf5 = cache_frame_e96f6b4b47c114e7b866aa0c773c9cf5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e96f6b4b47c114e7b866aa0c773c9cf5);
    assert(Py_REFCNT(frame_e96f6b4b47c114e7b866aa0c773c9cf5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_e96f6b4b47c114e7b866aa0c773c9cf5->m_frame.f_lineno = 295;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
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
        exception_tb = MAKE_TRACEBACK(frame_e96f6b4b47c114e7b866aa0c773c9cf5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e96f6b4b47c114e7b866aa0c773c9cf5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e96f6b4b47c114e7b866aa0c773c9cf5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e96f6b4b47c114e7b866aa0c773c9cf5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e96f6b4b47c114e7b866aa0c773c9cf5 == cache_frame_e96f6b4b47c114e7b866aa0c773c9cf5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e96f6b4b47c114e7b866aa0c773c9cf5);
        cache_frame_e96f6b4b47c114e7b866aa0c773c9cf5 = NULL;
    }

    assertFrameObject(frame_e96f6b4b47c114e7b866aa0c773c9cf5);

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


static PyObject *impl_flet_core$dropdown$$$function__24_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_c0bc2c854b0147ba6ae92828d21a121d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c0bc2c854b0147ba6ae92828d21a121d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c0bc2c854b0147ba6ae92828d21a121d)) {
        Py_XDECREF(cache_frame_c0bc2c854b0147ba6ae92828d21a121d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0bc2c854b0147ba6ae92828d21a121d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0bc2c854b0147ba6ae92828d21a121d = MAKE_FUNCTION_FRAME(codeobj_c0bc2c854b0147ba6ae92828d21a121d, module_flet_core$dropdown, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c0bc2c854b0147ba6ae92828d21a121d->m_type_description == NULL);
    frame_c0bc2c854b0147ba6ae92828d21a121d = cache_frame_c0bc2c854b0147ba6ae92828d21a121d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c0bc2c854b0147ba6ae92828d21a121d);
    assert(Py_REFCNT(frame_c0bc2c854b0147ba6ae92828d21a121d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[39];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_c0bc2c854b0147ba6ae92828d21a121d->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[26],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
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
        exception_tb = MAKE_TRACEBACK(frame_c0bc2c854b0147ba6ae92828d21a121d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0bc2c854b0147ba6ae92828d21a121d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0bc2c854b0147ba6ae92828d21a121d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0bc2c854b0147ba6ae92828d21a121d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c0bc2c854b0147ba6ae92828d21a121d == cache_frame_c0bc2c854b0147ba6ae92828d21a121d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c0bc2c854b0147ba6ae92828d21a121d);
        cache_frame_c0bc2c854b0147ba6ae92828d21a121d = NULL;
    }

    assertFrameObject(frame_c0bc2c854b0147ba6ae92828d21a121d);

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


static PyObject *impl_flet_core$dropdown$$$function__25_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a4ee7faea9afdf9229f25bf215dff84b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a4ee7faea9afdf9229f25bf215dff84b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a4ee7faea9afdf9229f25bf215dff84b)) {
        Py_XDECREF(cache_frame_a4ee7faea9afdf9229f25bf215dff84b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4ee7faea9afdf9229f25bf215dff84b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4ee7faea9afdf9229f25bf215dff84b = MAKE_FUNCTION_FRAME(codeobj_a4ee7faea9afdf9229f25bf215dff84b, module_flet_core$dropdown, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a4ee7faea9afdf9229f25bf215dff84b->m_type_description == NULL);
    frame_a4ee7faea9afdf9229f25bf215dff84b = cache_frame_a4ee7faea9afdf9229f25bf215dff84b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a4ee7faea9afdf9229f25bf215dff84b);
    assert(Py_REFCNT(frame_a4ee7faea9afdf9229f25bf215dff84b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a4ee7faea9afdf9229f25bf215dff84b->m_frame.f_lineno = 304;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[43], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
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
        exception_tb = MAKE_TRACEBACK(frame_a4ee7faea9afdf9229f25bf215dff84b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4ee7faea9afdf9229f25bf215dff84b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4ee7faea9afdf9229f25bf215dff84b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4ee7faea9afdf9229f25bf215dff84b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a4ee7faea9afdf9229f25bf215dff84b == cache_frame_a4ee7faea9afdf9229f25bf215dff84b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a4ee7faea9afdf9229f25bf215dff84b);
        cache_frame_a4ee7faea9afdf9229f25bf215dff84b = NULL;
    }

    assertFrameObject(frame_a4ee7faea9afdf9229f25bf215dff84b);

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


static PyObject *impl_flet_core$dropdown$$$function__26_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_cf6ba3235e6fafd41fe468de0813ed5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cf6ba3235e6fafd41fe468de0813ed5e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf6ba3235e6fafd41fe468de0813ed5e)) {
        Py_XDECREF(cache_frame_cf6ba3235e6fafd41fe468de0813ed5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf6ba3235e6fafd41fe468de0813ed5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf6ba3235e6fafd41fe468de0813ed5e = MAKE_FUNCTION_FRAME(codeobj_cf6ba3235e6fafd41fe468de0813ed5e, module_flet_core$dropdown, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf6ba3235e6fafd41fe468de0813ed5e->m_type_description == NULL);
    frame_cf6ba3235e6fafd41fe468de0813ed5e = cache_frame_cf6ba3235e6fafd41fe468de0813ed5e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf6ba3235e6fafd41fe468de0813ed5e);
    assert(Py_REFCNT(frame_cf6ba3235e6fafd41fe468de0813ed5e) == 2);

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
        frame_cf6ba3235e6fafd41fe468de0813ed5e->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[26],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
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
        exception_tb = MAKE_TRACEBACK(frame_cf6ba3235e6fafd41fe468de0813ed5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf6ba3235e6fafd41fe468de0813ed5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf6ba3235e6fafd41fe468de0813ed5e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf6ba3235e6fafd41fe468de0813ed5e,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_cf6ba3235e6fafd41fe468de0813ed5e == cache_frame_cf6ba3235e6fafd41fe468de0813ed5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf6ba3235e6fafd41fe468de0813ed5e);
        cache_frame_cf6ba3235e6fafd41fe468de0813ed5e = NULL;
    }

    assertFrameObject(frame_cf6ba3235e6fafd41fe468de0813ed5e);

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



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__10_value(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__10_value,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_6a4769ce9009323f0f2a703b8c04f8a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__11_autofocus(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__11_autofocus,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_b9f37b8bb4275734e5af022183f74519,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__12_autofocus(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__12_autofocus,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_68f89f3f39d47e94fafea50102d3eccb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__13_alignment(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__13_alignment,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_1819c33874a917d0d0e3cf16fe5fbd50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__14_alignment(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__14_alignment,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_7ffdb66365df0a12dfef21b88a53b431,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__15_on_change() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__15_on_change,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_7dafe3e149e82ebb231600134141b7d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__16_on_change() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__16_on_change,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_f950512513cdc67022e89b23bc8b11a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__17_on_focus() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__17_on_focus,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_079d74cb91d2971aa7f278cd3b432253,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__18_on_focus() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__18_on_focus,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_1a0f731ce7e4222cc90fe4422392e67e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__19_on_blur() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__19_on_blur,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_ff3d969630bf29a07690e36ad473918c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_1b4466781a1053ef13bb10171aad1e19,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__20_on_blur() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__20_on_blur,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_f3bf50f44e561d250aa25a4c696388ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__21___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__21___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_5f9869bb472ddb59adda0da2e48e5289,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__22__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_de659b6346f30ada19425a4ec274be77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[167]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__23_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__23_key,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_e96f6b4b47c114e7b866aa0c773c9cf5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__24_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__24_key,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_c0bc2c854b0147ba6ae92828d21a121d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__25_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__25_text,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_a4ee7faea9afdf9229f25bf215dff84b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__26_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__26_text,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_cf6ba3235e6fafd41fe468de0813ed5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_af11bba52299876fa21a7dc4ca8f0526,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[147]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__3__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__3__before_build_command,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_d77ba7517121466bdb87667e658bd600,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__4__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__4__get_children,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_4f19d839651acf5dd744d55db4106805,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__5_focus() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__5_focus,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_83fc84fa7a1b70d794af2c64a718f845,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__6_focus_async() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__6_focus_async,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[23],
#endif
        codeobj_7a207826bbbce99eace0d91abc675627,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__7_options() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__7_options,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_7be5a0cce09591d1bfd19ff4db7919a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__8_options() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__8_options,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_6e11880f633fdd33e3a7613b90b26946,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$dropdown,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$dropdown$$$function__9_value(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$dropdown$$$function__9_value,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_50495801f407917cd7cda4504e1b24e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$dropdown,
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

function_impl_code functable_flet_core$dropdown[] = {
    impl_flet_core$dropdown$$$function__1___init__,
    NULL,
    impl_flet_core$dropdown$$$function__3__before_build_command,
    impl_flet_core$dropdown$$$function__4__get_children,
    impl_flet_core$dropdown$$$function__5_focus,
    impl_flet_core$dropdown$$$function__6_focus_async,
    impl_flet_core$dropdown$$$function__7_options,
    impl_flet_core$dropdown$$$function__8_options,
    impl_flet_core$dropdown$$$function__9_value,
    impl_flet_core$dropdown$$$function__10_value,
    impl_flet_core$dropdown$$$function__11_autofocus,
    impl_flet_core$dropdown$$$function__12_autofocus,
    impl_flet_core$dropdown$$$function__13_alignment,
    impl_flet_core$dropdown$$$function__14_alignment,
    impl_flet_core$dropdown$$$function__15_on_change,
    impl_flet_core$dropdown$$$function__16_on_change,
    impl_flet_core$dropdown$$$function__17_on_focus,
    impl_flet_core$dropdown$$$function__18_on_focus,
    impl_flet_core$dropdown$$$function__19_on_blur,
    impl_flet_core$dropdown$$$function__20_on_blur,
    impl_flet_core$dropdown$$$function__21___init__,
    NULL,
    impl_flet_core$dropdown$$$function__23_key,
    impl_flet_core$dropdown$$$function__24_key,
    impl_flet_core$dropdown$$$function__25_text,
    impl_flet_core$dropdown$$$function__26_text,
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

    function_impl_code *current = functable_flet_core$dropdown;
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

    if (offset > sizeof(functable_flet_core$dropdown) || offset < 0) {
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
        functable_flet_core$dropdown[offset],
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
        module_flet_core$dropdown,
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
PyObject *modulecode_flet_core$dropdown(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.dropdown");

    // Store the module for future use.
    module_flet_core$dropdown = module;

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
        PRINT_STRING("flet_core.dropdown: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.dropdown: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.dropdown: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$dropdown\n");

    moduledict_flet_core$dropdown = MODULE_DICT(module_flet_core$dropdown);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$dropdown,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$dropdown,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[180]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$dropdown,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$dropdown,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$dropdown,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$dropdown);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$dropdown, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$dropdown, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$dropdown, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$dropdown);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
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
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_fa492b0f3ce43e7e9363700d34a85633;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_res;
    PyObject *locals_flet_core$dropdown$$$class__1_Dropdown_20 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_e6d61900e4f754e3dcd72c48f503a536_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_flet_core$dropdown$$$class__2_Option_281 = NULL;
    struct Nuitka_FrameObject *frame_c07cdadd3240458995778c793fd7cf78_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_2);
    }
    frame_fa492b0f3ce43e7e9363700d34a85633 = MAKE_MODULE_FRAME(codeobj_fa492b0f3ce43e7e9363700d34a85633, module_flet_core$dropdown);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fa492b0f3ce43e7e9363700d34a85633);
    assert(Py_REFCNT(frame_fa492b0f3ce43e7e9363700d34a85633) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[45];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[49], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[18];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$dropdown;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[51];
        frame_fa492b0f3ce43e7e9363700d34a85633->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_4);
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
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[52],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[52]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[53],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[53]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[54],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[54]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_8);
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
        tmp_name_value_2 = mod_consts[55];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$dropdown;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[56];
        tmp_level_value_2 = mod_consts[51];
        frame_fa492b0f3ce43e7e9363700d34a85633->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[57],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[57]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[58];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$dropdown;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[59];
        tmp_level_value_3 = mod_consts[51];
        frame_fa492b0f3ce43e7e9363700d34a85633->m_frame.f_lineno = 5;
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
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[36],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[36]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[60],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[60]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_12);
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
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[61];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$dropdown;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[62];
        tmp_level_value_4 = mod_consts[51];
        frame_fa492b0f3ce43e7e9363700d34a85633->m_frame.f_lineno = 6;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[0],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[0]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[63],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[63]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_15);
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
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[64];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$dropdown;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[65];
        tmp_level_value_5 = mod_consts[51];
        frame_fa492b0f3ce43e7e9363700d34a85633->m_frame.f_lineno = 7;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[66],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[66]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[67];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$dropdown;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[68];
        tmp_level_value_6 = mod_consts[51];
        frame_fa492b0f3ce43e7e9363700d34a85633->m_frame.f_lineno = 8;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[69],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[69]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[70];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_flet_core$dropdown;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[71];
        tmp_level_value_7 = mod_consts[51];
        frame_fa492b0f3ce43e7e9363700d34a85633->m_frame.f_lineno = 9;
        tmp_assign_source_18 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_11 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[72],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[72]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[73],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[73]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[74],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[74]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[75],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[75]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_15 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[76],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[76]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_16 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[77],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[77]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_17 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_flet_core$dropdown,
                mod_consts[78],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[78]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_25);
    }
    goto try_end_4;
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

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        tmp_assign_source_26 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_27 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
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

            goto try_except_handler_5;
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


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_29 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[79]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[79]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        tmp_tuple_element_2 = mod_consts[80];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_fa492b0f3ce43e7e9363700d34a85633->m_frame.f_lineno = 20;
        tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[81]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
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
        tmp_mod_expr_left_1 = mod_consts[82];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[83];
        tmp_getattr_default_1 = mod_consts[84];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[83]);
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
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 20;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_31;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$dropdown$$$class__1_Dropdown_20 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_7;
        }
        frame_e6d61900e4f754e3dcd72c48f503a536_2 = MAKE_CLASS_FRAME(codeobj_e6d61900e4f754e3dcd72c48f503a536, module_flet_core$dropdown, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e6d61900e4f754e3dcd72c48f503a536_2);
        assert(Py_REFCNT(frame_e6d61900e4f754e3dcd72c48f503a536_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            tmp_defaults_1 = mod_consts[89];
            tmp_dict_key_1 = mod_consts[90];
            tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 55;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[66]);

            if (tmp_subscript_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_subscript_value_2 == NULL)) {
                        tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_subscript_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_6);

                        exception_lineno = 55;
                        type_description_2 = "c";
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


                exception_lineno = 55;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 58 );
            {
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_21;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_25;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_26;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_27;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_28;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_subscript_value_29;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_30;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_33;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_34;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_35;
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_36;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_37;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_subscript_value_38;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_subscript_value_39;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_40;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[39];
                tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_7 == NULL)) {
                            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 56;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_3 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 56;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[92];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 57;
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
                tmp_dict_key_1 = mod_consts[93];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 58;
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
                tmp_dict_key_1 = mod_consts[94];
                tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[54]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[54]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 59;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_4 = Py_None;
                tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[95]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_4 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[96]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_4 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_4, 2, tmp_tuple_element_4);
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_8);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[97];
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 60;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[76]);

                if (tmp_subscript_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_subscript_value_5 == NULL)) {
                            tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_subscript_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_9);

                            exception_lineno = 60;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 60;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[98];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 61;
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
                tmp_dict_key_1 = mod_consts[99];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[77]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[77]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 62;
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
                tmp_dict_key_1 = mod_consts[100];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[78]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[78]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 63;
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
                tmp_dict_key_1 = mod_consts[101];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[74]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[74]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 64;
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
                tmp_dict_key_1 = mod_consts[102];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 65;
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
                tmp_dict_key_1 = mod_consts[103];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[72]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[72]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 66;
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
                tmp_dict_key_1 = mod_consts[104];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[72]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[72]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 67;
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
                tmp_dict_key_1 = mod_consts[105];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[72]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[72]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 68;
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
                tmp_dict_key_1 = mod_consts[106];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[72]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[72]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 69;
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
                tmp_dict_key_1 = mod_consts[107];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[72]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[72]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 70;
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
                tmp_dict_key_1 = mod_consts[108];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[72]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[72]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 71;
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
                tmp_dict_key_1 = mod_consts[109];
                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 73;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

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


                    exception_lineno = 73;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[110];
                tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 74;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[95]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = (PyObject *)&PyBool_Type;
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


                    exception_lineno = 74;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[41];
                tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 75;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[95]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = (PyObject *)&PyBool_Type;
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


                    exception_lineno = 75;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[111];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[52]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[52]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
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
                tmp_dict_key_1 = mod_consts[112];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 80;
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
                tmp_dict_key_1 = mod_consts[113];
                tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 81;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[69]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_subscript_value_9 == NULL)) {
                            tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_subscript_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_13);

                            exception_lineno = 81;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_13);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 81;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[114];
                tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 82;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 82;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[115];
                tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 83;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[69]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_subscript_value_11 == NULL)) {
                            tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_subscript_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_15);

                            exception_lineno = 83;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[116];
                tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 84;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[117];
                tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 85;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[63]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_subscript_value_13 == NULL)) {
                            tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_subscript_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_17);

                            exception_lineno = 85;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 85;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[118];
                tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 86;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[119];
                tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 87;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_19);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[120];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[73]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[73]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 88;
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
                tmp_dict_key_1 = mod_consts[121];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 89;
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
                tmp_dict_key_1 = mod_consts[122];
                tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 90;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_16 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_20);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[123];
                tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 91;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_21);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 91;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[124];
                tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 92;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_18 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 92;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[125];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 93;
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
                tmp_dict_key_1 = mod_consts[126];
                tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 94;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_19);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[127];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[75]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[75]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 95;
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
                tmp_dict_key_1 = mod_consts[128];
                tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 96;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[95]);

                if (tmp_subscript_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_20 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_20);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_20);
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
                tmp_dict_key_1 = mod_consts[129];
                tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 97;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[95]);

                if (tmp_subscript_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_21 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_21);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[130];
                tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 98;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_22 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_22 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_22);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_22);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[131];
                tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 99;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[69]);

                if (tmp_subscript_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_subscript_value_23 == NULL)) {
                            tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_subscript_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_27);

                            exception_lineno = 99;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_23);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_23);
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
                tmp_dict_key_1 = mod_consts[132];
                tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 100;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_24 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_24 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_24);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_24);
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
                tmp_dict_key_1 = mod_consts[133];
                tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 101;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_25 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[69]);

                if (tmp_subscript_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_subscript_value_25 == NULL)) {
                            tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_subscript_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_29);

                            exception_lineno = 101;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_25);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[134];
                tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 102;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_26 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_26 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_26);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_26);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 102;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[135];
                tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 103;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_27 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[69]);

                if (tmp_subscript_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_subscript_value_27 == NULL)) {
                            tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_subscript_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_31);

                            exception_lineno = 103;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_27);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_27);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_27);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 103;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[136];
                tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_32 == NULL)) {
                            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 104;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_32);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_28);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_28);
                Py_DECREF(tmp_expression_value_32);
                Py_DECREF(tmp_subscript_value_28);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[137];
                tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_33 == NULL)) {
                            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 105;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_33);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_29 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[69]);

                if (tmp_subscript_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_subscript_value_29 == NULL)) {
                            tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_subscript_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_33);

                            exception_lineno = 105;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_29);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_29);
                Py_DECREF(tmp_expression_value_33);
                Py_DECREF(tmp_subscript_value_29);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[138];
                tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 106;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_30 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[36]);

                if (tmp_subscript_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_subscript_value_30 == NULL)) {
                            tmp_subscript_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                        }

                        if (tmp_subscript_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_34);

                            exception_lineno = 106;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_30);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_30);
                Py_DECREF(tmp_expression_value_34);
                Py_DECREF(tmp_subscript_value_30);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[139];
                tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_35 == NULL)) {
                            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 107;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_35);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_31 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_31 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_31);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_35);
                Py_DECREF(tmp_subscript_value_31);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 107;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[140];
                tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_36 == NULL)) {
                            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_36 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 108;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_36);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_32 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_32 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_32);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_36);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[141];
                tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 109;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_33 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[69]);

                if (tmp_subscript_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_subscript_value_33 == NULL)) {
                            tmp_subscript_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_subscript_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_37);

                            exception_lineno = 109;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_33);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_33);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_33);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[142];
                tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 110;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_34 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[36]);

                if (tmp_subscript_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[36]);

                        if (unlikely(tmp_subscript_value_34 == NULL)) {
                            tmp_subscript_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
                        }

                        if (tmp_subscript_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_38);

                            exception_lineno = 110;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_34);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_34);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_34);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[143];
                tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 111;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_35 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_35 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_35);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_35);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_35);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[144];
                tmp_expression_value_40 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 112;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_36 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_36 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_36);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_36);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_36);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 112;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[145];
                tmp_expression_value_41 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_41 == NULL)) {
                            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 113;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_41);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_37 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[69]);

                if (tmp_subscript_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_subscript_value_37 == NULL)) {
                            tmp_subscript_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_subscript_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_41);

                            exception_lineno = 113;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_37);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_37);
                Py_DECREF(tmp_expression_value_41);
                Py_DECREF(tmp_subscript_value_37);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[4];
                tmp_expression_value_42 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_42 == NULL)) {
                            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 117;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_42);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_38 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

                if (tmp_subscript_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_38 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_38);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_38);
                Py_DECREF(tmp_expression_value_42);
                Py_DECREF(tmp_subscript_value_38);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[5];
                tmp_expression_value_43 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_43 == NULL)) {
                            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 118;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_43);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_39 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[95]);

                if (tmp_subscript_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_39 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_39);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_39);
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_subscript_value_39);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 118;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_expression_value_44 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

                if (tmp_expression_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_expression_value_44 == NULL)) {
                            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_expression_value_44 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 120;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_44);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_40 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[57]);

                if (tmp_subscript_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[57]);

                        if (unlikely(tmp_subscript_value_40 == NULL)) {
                            tmp_subscript_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
                        }

                        if (tmp_subscript_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_44);

                            exception_lineno = 120;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_40);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_40);
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_subscript_value_40);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 120;
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
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$dropdown$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$dropdown$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[148], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$dropdown$$$function__3__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$dropdown$$$function__4__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[15], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$dropdown$$$function__5_focus();

        tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[17], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$dropdown$$$function__6_focus_async();

        tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[22], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
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
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[153]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$dropdown$$$function__7_options();

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 218;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$dropdown$$$function__7_options();

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 218;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[6]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 222;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$dropdown$$$function__8_options();

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 222;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[155], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
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
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_42;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
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
            tmp_called_value_4 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[153]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[156];
            tmp_expression_value_45 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

            if (tmp_expression_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);

                        exception_lineno = 228;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_41 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

            if (tmp_subscript_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_41 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_41);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_45);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 228;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$dropdown$$$function__9_value(tmp_annotations_2);

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 227;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[156];
            tmp_expression_value_46 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

            if (tmp_expression_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 228;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_42 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

            if (tmp_subscript_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_42 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_42);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_42);
            Py_DECREF(tmp_expression_value_46);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$dropdown$$$function__9_value(tmp_annotations_3);

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 227;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_43;
            tmp_expression_value_47 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[4]);

            if (unlikely(tmp_expression_value_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 231;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[155]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[4];
            tmp_expression_value_48 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

            if (tmp_expression_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_48 == NULL)) {
                        tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        exception_lineno = 232;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_48);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_43 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[91]);

            if (tmp_subscript_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_43 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_43);
            Py_DECREF(tmp_expression_value_48);
            Py_DECREF(tmp_subscript_value_43);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 232;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$dropdown$$$function__10_value(tmp_annotations_4);

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 231;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
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
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_44;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_45;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
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
            tmp_called_value_7 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[153]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[156];
            tmp_expression_value_49 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

            if (tmp_expression_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_49 == NULL)) {
                        tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 237;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_49);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_44 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[95]);

            if (tmp_subscript_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_44 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_44);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_44);
            Py_DECREF(tmp_expression_value_49);
            Py_DECREF(tmp_subscript_value_44);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$dropdown$$$function__11_autofocus(tmp_annotations_5);

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 236;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[156];
            tmp_expression_value_50 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

            if (tmp_expression_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 237;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_50);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_45 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[95]);

            if (tmp_subscript_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_45 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_45);
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_45);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$dropdown$$$function__11_autofocus(tmp_annotations_6);

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 236;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_46;
            tmp_expression_value_51 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[5]);

            if (unlikely(tmp_expression_value_51 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 240;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[155]);
            Py_DECREF(tmp_expression_value_51);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_7 = mod_consts[4];
            tmp_expression_value_52 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

            if (tmp_expression_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_52 == NULL)) {
                        tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);

                        exception_lineno = 241;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_52);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_46 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[95]);

            if (tmp_subscript_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_46 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_46);
            Py_DECREF(tmp_expression_value_52);
            Py_DECREF(tmp_subscript_value_46);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 241;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$dropdown$$$function__12_autofocus(tmp_annotations_7);

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 240;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
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
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_47;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_48;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
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
            tmp_called_value_10 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[153]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[156];
            tmp_expression_value_53 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

            if (tmp_expression_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 246;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_53);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_47 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[57]);

            if (tmp_subscript_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[57]);

                    if (unlikely(tmp_subscript_value_47 == NULL)) {
                        tmp_subscript_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
                    }

                    if (tmp_subscript_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);
                        Py_DECREF(tmp_expression_value_53);

                        exception_lineno = 246;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_47);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_47);
            Py_DECREF(tmp_expression_value_53);
            Py_DECREF(tmp_subscript_value_47);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$dropdown$$$function__13_alignment(tmp_annotations_8);

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 245;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[156];
            tmp_expression_value_54 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

            if (tmp_expression_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 246;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_54);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_48 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[57]);

            if (tmp_subscript_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[57]);

                    if (unlikely(tmp_subscript_value_48 == NULL)) {
                        tmp_subscript_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
                    }

                    if (tmp_subscript_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_54);

                        exception_lineno = 246;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_48);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_48);
            Py_DECREF(tmp_expression_value_54);
            Py_DECREF(tmp_subscript_value_48);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$dropdown$$$function__13_alignment(tmp_annotations_9);

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 245;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_49;
            tmp_expression_value_55 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[7]);

            if (unlikely(tmp_expression_value_55 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[155]);
            Py_DECREF(tmp_expression_value_55);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[4];
            tmp_expression_value_56 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[53]);

            if (tmp_expression_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_expression_value_56 == NULL)) {
                        tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_expression_value_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 250;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_56);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_49 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[57]);

            if (tmp_subscript_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[57]);

                    if (unlikely(tmp_subscript_value_49 == NULL)) {
                        tmp_subscript_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
                    }

                    if (tmp_subscript_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);
                        Py_DECREF(tmp_expression_value_56);

                        exception_lineno = 250;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_49);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_49);
            Py_DECREF(tmp_expression_value_56);
            Py_DECREF(tmp_subscript_value_49);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$dropdown$$$function__14_alignment(tmp_annotations_10);

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 249;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_14;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
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
            tmp_called_value_13 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (unlikely(tmp_called_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[153]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$dropdown$$$function__15_on_change();

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 254;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_14 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$dropdown$$$function__15_on_change();

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 254;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_15;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[10]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$dropdown$$$function__16_on_change();

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 258;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[155], tmp_args_element_value_15);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_17;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
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
            tmp_called_value_15 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (unlikely(tmp_called_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[153]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$dropdown$$$function__17_on_focus();

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 263;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_16 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$dropdown$$$function__17_on_focus();

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 263;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_18;
            tmp_called_instance_3 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[8]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 267;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$dropdown$$$function__18_on_focus();

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 267;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[155], tmp_args_element_value_18);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_20;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
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
            tmp_called_value_17 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[153]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[153]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$dropdown$$$function__19_on_blur();

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 272;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$dropdown$$$function__19_on_blur();

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 272;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_21;
            tmp_called_instance_4 = PyObject_GetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[9]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$dropdown$$$function__20_on_blur();

            frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame.f_lineno = 276;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[155], tmp_args_element_value_21);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e6d61900e4f754e3dcd72c48f503a536_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e6d61900e4f754e3dcd72c48f503a536_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e6d61900e4f754e3dcd72c48f503a536_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e6d61900e4f754e3dcd72c48f503a536_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_e6d61900e4f754e3dcd72c48f503a536_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
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


                exception_lineno = 20;

                goto try_except_handler_7;
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
        tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__1_Dropdown_20, mod_consts[163], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_7;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_19 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[80];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_flet_core$dropdown$$$class__1_Dropdown_20;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_fa492b0f3ce43e7e9363700d34a85633->m_frame.f_lineno = 20;
            tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto try_except_handler_7;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_33);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_32 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_flet_core$dropdown$$$class__1_Dropdown_20);
        locals_flet_core$dropdown$$$class__1_Dropdown_20 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$dropdown$$$class__1_Dropdown_20);
        locals_flet_core$dropdown$$$class__1_Dropdown_20 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_6:;
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

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 20;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_32);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_8;
        }
        tmp_assign_source_34 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_35 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_50;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_8;
        }
        tmp_condition_result_12 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_57 = tmp_class_creation_2__bases;
        tmp_subscript_value_50 = mod_consts[51];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_57, tmp_subscript_value_50, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_8;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_37 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_37;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_58 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_58, mod_consts[79]);
        tmp_condition_result_13 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_59 = tmp_class_creation_2__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[79]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_8;
        }
        tmp_tuple_element_7 = mod_consts[164];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_7 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_fa492b0f3ce43e7e9363700d34a85633->m_frame.f_lineno = 281;
        tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_38;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_60 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_60, mod_consts[81]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_8;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
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
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[82];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[83];
        tmp_getattr_default_2 = mod_consts[84];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_61;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_61 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_61 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[83]);
            Py_DECREF(tmp_expression_value_61);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
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


            exception_lineno = 281;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 281;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_39;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$dropdown$$$class__2_Option_281 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_10;
        }
        frame_c07cdadd3240458995778c793fd7cf78_3 = MAKE_CLASS_FRAME(codeobj_c07cdadd3240458995778c793fd7cf78, module_flet_core$dropdown, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c07cdadd3240458995778c793fd7cf78_3);
        assert(Py_REFCNT(frame_c07cdadd3240458995778c793fd7cf78_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[165];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$dropdown$$$function__21___init__(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$dropdown$$$function__22__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[148], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_23;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[153]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
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
            tmp_called_value_21 = PyObject_GetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[153]);

            if (unlikely(tmp_called_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[153]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 293;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$dropdown$$$function__23_key();

            frame_c07cdadd3240458995778c793fd7cf78_3->m_frame.f_lineno = 293;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_22 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$dropdown$$$function__23_key();

            frame_c07cdadd3240458995778c793fd7cf78_3->m_frame.f_lineno = 293;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_24;
            tmp_called_instance_5 = PyObject_GetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[39]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[39]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 297;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$dropdown$$$function__24_key();

            frame_c07cdadd3240458995778c793fd7cf78_3->m_frame.f_lineno = 297;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[155], tmp_args_element_value_24);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_26;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[153]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
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
            tmp_called_value_23 = PyObject_GetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[153]);

            if (unlikely(tmp_called_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[153]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$dropdown$$$function__25_text();

            frame_c07cdadd3240458995778c793fd7cf78_3->m_frame.f_lineno = 302;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_24 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$dropdown$$$function__25_text();

            frame_c07cdadd3240458995778c793fd7cf78_3->m_frame.f_lineno = 302;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_27;
            tmp_called_instance_6 = PyObject_GetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[40]);

            if (unlikely(tmp_called_instance_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$dropdown$$$function__26_text();

            frame_c07cdadd3240458995778c793fd7cf78_3->m_frame.f_lineno = 306;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[155], tmp_args_element_value_27);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c07cdadd3240458995778c793fd7cf78_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c07cdadd3240458995778c793fd7cf78_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c07cdadd3240458995778c793fd7cf78_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c07cdadd3240458995778c793fd7cf78_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_c07cdadd3240458995778c793fd7cf78_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_10;
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


                exception_lineno = 281;

                goto try_except_handler_10;
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
        tmp_res = PyObject_SetItem(locals_flet_core$dropdown$$$class__2_Option_281, mod_consts[163], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_10;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_25 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = mod_consts[164];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_flet_core$dropdown$$$class__2_Option_281;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_fa492b0f3ce43e7e9363700d34a85633->m_frame.f_lineno = 281;
            tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto try_except_handler_10;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_41;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_40 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_40);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_flet_core$dropdown$$$class__2_Option_281);
        locals_flet_core$dropdown$$$class__2_Option_281 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$dropdown$$$class__2_Option_281);
        locals_flet_core$dropdown$$$class__2_Option_281 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_9:;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 281;
        goto try_except_handler_8;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flet_core$dropdown, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_40);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fa492b0f3ce43e7e9363700d34a85633, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa492b0f3ce43e7e9363700d34a85633->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa492b0f3ce43e7e9363700d34a85633, exception_lineno);
    }



    assertFrameObject(frame_fa492b0f3ce43e7e9363700d34a85633);

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
    PGO_onModuleExit("flet_core.dropdown", false);

    Py_INCREF(module_flet_core$dropdown);
    return module_flet_core$dropdown;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$dropdown, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$dropdown", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
