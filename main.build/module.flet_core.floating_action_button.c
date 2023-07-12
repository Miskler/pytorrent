/* Generated code for Python module 'flet_core.floating_action_button'
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

/* The "module_flet_core$floating_action_button" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$floating_action_button;
PyDictObject *moduledict_flet_core$floating_action_button;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[134];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[134];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.floating_action_button"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 134; i++) {
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
void checkModuleConstants_flet_core$floating_action_button(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 134; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d15dc9587ead5f82a66acf0d30486fbb;
static PyCodeObject *codeobj_7958d1f9503875b4359b8e8269a57e8c;
static PyCodeObject *codeobj_f3f4b5ecbf2f416aaa836ce9898a38d7;
static PyCodeObject *codeobj_5ffcc36db6400833ab1b33786e770280;
static PyCodeObject *codeobj_3fde791d72bb836a32799cd7c1971d5a;
static PyCodeObject *codeobj_b6c2eb2508ee626e2076b466ede1ebeb;
static PyCodeObject *codeobj_03c54428ae24b3a0a2efdcf17fd74288;
static PyCodeObject *codeobj_da98dec9b68968d4c955821738328b76;
static PyCodeObject *codeobj_58497790ffa335caaec9228bf72b6e75;
static PyCodeObject *codeobj_96dc4c3a601690d8453687a1fc11bd30;
static PyCodeObject *codeobj_61a32c7ca4f711ef19ddb0c973d1387f;
static PyCodeObject *codeobj_c731c82593d44538109653ea80b52473;
static PyCodeObject *codeobj_d545682f971c9540cc2f94701ba44e67;
static PyCodeObject *codeobj_8260f4b7f4354f6ba8d03bebe04cadc2;
static PyCodeObject *codeobj_4550eaccac9179326aa9a53a49fc9774;
static PyCodeObject *codeobj_c23cb7ad23ba34f5de321719037e6951;
static PyCodeObject *codeobj_a430c6e422b0326182dbae614d83de98;
static PyCodeObject *codeobj_e993f69a3254366fa565bebb73069ec7;
static PyCodeObject *codeobj_6cde5b8e68783b62e0900e291d5ac36a;
static PyCodeObject *codeobj_8be2b080c7f28763c744c16e5f1d6bd4;
static PyCodeObject *codeobj_ca689b15a46c1eee41f6495231959cfe;
static PyCodeObject *codeobj_8ae1f6fbb36d063b9558b4c2b8a3b46d;
static PyCodeObject *codeobj_166062803086ba6b2efc1e4ee0b1c2f3;
static PyCodeObject *codeobj_5b891d11de4af9836e57dfe80ddd5852;
static PyCodeObject *codeobj_502e32eec59c6edc7a89990da669a697;
static PyCodeObject *codeobj_460db58e2a0010b068c4435c1a6815b6;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[36]; CHECK_OBJECT(module_filename_obj);
    codeobj_d15dc9587ead5f82a66acf0d30486fbb = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[126], mod_consts[126], NULL, NULL, 0, 0, 0);
    codeobj_7958d1f9503875b4359b8e8269a57e8c = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[127], NULL, 0, 0, 0);
    codeobj_f3f4b5ecbf2f416aaa836ce9898a38d7 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[128], NULL, 37, 0, 0);
    codeobj_5ffcc36db6400833ab1b33786e770280 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[14], mod_consts[14], mod_consts[129], mod_consts[127], 1, 0, 0);
    codeobj_3fde791d72bb836a32799cd7c1971d5a = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[130], NULL, 1, 0, 0);
    codeobj_b6c2eb2508ee626e2076b466ede1ebeb = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[130], NULL, 1, 0, 0);
    codeobj_03c54428ae24b3a0a2efdcf17fd74288 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[130], NULL, 1, 0, 0);
    codeobj_da98dec9b68968d4c955821738328b76 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[131], NULL, 2, 0, 0);
    codeobj_58497790ffa335caaec9228bf72b6e75 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[130], NULL, 1, 0, 0);
    codeobj_96dc4c3a601690d8453687a1fc11bd30 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[131], NULL, 2, 0, 0);
    codeobj_61a32c7ca4f711ef19ddb0c973d1387f = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[130], NULL, 1, 0, 0);
    codeobj_c731c82593d44538109653ea80b52473 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[131], NULL, 2, 0, 0);
    codeobj_d545682f971c9540cc2f94701ba44e67 = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[130], NULL, 1, 0, 0);
    codeobj_8260f4b7f4354f6ba8d03bebe04cadc2 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[131], NULL, 2, 0, 0);
    codeobj_4550eaccac9179326aa9a53a49fc9774 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[130], NULL, 1, 0, 0);
    codeobj_c23cb7ad23ba34f5de321719037e6951 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[131], NULL, 2, 0, 0);
    codeobj_a430c6e422b0326182dbae614d83de98 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[130], NULL, 1, 0, 0);
    codeobj_e993f69a3254366fa565bebb73069ec7 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[132], NULL, 2, 0, 0);
    codeobj_6cde5b8e68783b62e0900e291d5ac36a = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[130], NULL, 1, 0, 0);
    codeobj_8be2b080c7f28763c744c16e5f1d6bd4 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[131], NULL, 2, 0, 0);
    codeobj_ca689b15a46c1eee41f6495231959cfe = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[130], NULL, 1, 0, 0);
    codeobj_8ae1f6fbb36d063b9558b4c2b8a3b46d = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[131], NULL, 2, 0, 0);
    codeobj_166062803086ba6b2efc1e4ee0b1c2f3 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[130], NULL, 1, 0, 0);
    codeobj_5b891d11de4af9836e57dfe80ddd5852 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[131], NULL, 2, 0, 0);
    codeobj_502e32eec59c6edc7a89990da669a697 = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[130], NULL, 1, 0, 0);
    codeobj_460db58e2a0010b068c4435c1a6815b6 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[131], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__10_bgcolor();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__11_url();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__12_url();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__13_url_target();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__14_url_target();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__15_on_click();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__16_on_click();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__17_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__18_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__19_autofocus(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__20_autofocus(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__21_shape(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__22_shape(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__23_mini(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__24_mini(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__3__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__4__get_children();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__5_text();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__6_text();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__7_icon();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__8_icon();


static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__9_bgcolor();


// The module function definitions.
static PyObject *impl_flet_core$floating_action_button$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_text = python_pars[1];
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
    PyObject *par_icon = python_pars[28];
    PyObject *par_bgcolor = python_pars[29];
    PyObject *par_content = python_pars[30];
    PyObject *par_autofocus = python_pars[31];
    PyObject *par_shape = python_pars[32];
    PyObject *par_mini = python_pars[33];
    PyObject *par_url = python_pars[34];
    PyObject *par_url_target = python_pars[35];
    PyObject *par_on_click = python_pars[36];
    struct Nuitka_FrameObject *frame_f3f4b5ecbf2f416aaa836ce9898a38d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f3f4b5ecbf2f416aaa836ce9898a38d7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f3f4b5ecbf2f416aaa836ce9898a38d7)) {
        Py_XDECREF(cache_frame_f3f4b5ecbf2f416aaa836ce9898a38d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3f4b5ecbf2f416aaa836ce9898a38d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3f4b5ecbf2f416aaa836ce9898a38d7 = MAKE_FUNCTION_FRAME(codeobj_f3f4b5ecbf2f416aaa836ce9898a38d7, module_flet_core$floating_action_button, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f3f4b5ecbf2f416aaa836ce9898a38d7->m_type_description == NULL);
    frame_f3f4b5ecbf2f416aaa836ce9898a38d7 = cache_frame_f3f4b5ecbf2f416aaa836ce9898a38d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f3f4b5ecbf2f416aaa836ce9898a38d7);
    assert(Py_REFCNT(frame_f3f4b5ecbf2f416aaa836ce9898a38d7) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
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
        frame_f3f4b5ecbf2f416aaa836ce9898a38d7->m_frame.f_lineno = 107;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[26] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1, tmp_kw_call_dict_value_24_1, tmp_kw_call_dict_value_25_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_text);
        tmp_assattr_value_1 = par_text;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
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


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_bgcolor);
        tmp_assattr_value_3 = par_bgcolor;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_content);
        tmp_assattr_value_4 = par_content;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_autofocus);
        tmp_assattr_value_5 = par_autofocus;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_shape);
        tmp_assattr_value_6 = par_shape;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_mini);
        tmp_assattr_value_7 = par_mini;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_url);
        tmp_assattr_value_8 = par_url;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[10], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_url_target);
        tmp_assattr_value_9 = par_url_target;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[11], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_on_click);
        tmp_assattr_value_10 = par_on_click;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[12], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f3f4b5ecbf2f416aaa836ce9898a38d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3f4b5ecbf2f416aaa836ce9898a38d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3f4b5ecbf2f416aaa836ce9898a38d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3f4b5ecbf2f416aaa836ce9898a38d7,
        type_description_1,
        par_self,
        par_text,
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
        par_icon,
        par_bgcolor,
        par_content,
        par_autofocus,
        par_shape,
        par_mini,
        par_url,
        par_url_target,
        par_on_click
    );


    // Release cached frame if used for exception.
    if (frame_f3f4b5ecbf2f416aaa836ce9898a38d7 == cache_frame_f3f4b5ecbf2f416aaa836ce9898a38d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f3f4b5ecbf2f416aaa836ce9898a38d7);
        cache_frame_f3f4b5ecbf2f416aaa836ce9898a38d7 = NULL;
    }

    assertFrameObject(frame_f3f4b5ecbf2f416aaa836ce9898a38d7);

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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
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
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_autofocus);
    Py_DECREF(par_autofocus);
    CHECK_OBJECT(par_shape);
    Py_DECREF(par_shape);
    CHECK_OBJECT(par_mini);
    Py_DECREF(par_mini);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_url_target);
    Py_DECREF(par_url_target);
    CHECK_OBJECT(par_on_click);
    Py_DECREF(par_on_click);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
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
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_autofocus);
    Py_DECREF(par_autofocus);
    CHECK_OBJECT(par_shape);
    Py_DECREF(par_shape);
    CHECK_OBJECT(par_mini);
    Py_DECREF(par_mini);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_url_target);
    Py_DECREF(par_url_target);
    CHECK_OBJECT(par_on_click);
    Py_DECREF(par_on_click);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$floating_action_button$$$function__3__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5ffcc36db6400833ab1b33786e770280;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5ffcc36db6400833ab1b33786e770280 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5ffcc36db6400833ab1b33786e770280)) {
        Py_XDECREF(cache_frame_5ffcc36db6400833ab1b33786e770280);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ffcc36db6400833ab1b33786e770280 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ffcc36db6400833ab1b33786e770280 = MAKE_FUNCTION_FRAME(codeobj_5ffcc36db6400833ab1b33786e770280, module_flet_core$floating_action_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5ffcc36db6400833ab1b33786e770280->m_type_description == NULL);
    frame_5ffcc36db6400833ab1b33786e770280 = cache_frame_5ffcc36db6400833ab1b33786e770280;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5ffcc36db6400833ab1b33786e770280);
    assert(Py_REFCNT(frame_5ffcc36db6400833ab1b33786e770280) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$floating_action_button, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_5ffcc36db6400833ab1b33786e770280->m_frame.f_lineno = 152;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[8];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 153;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_5ffcc36db6400833ab1b33786e770280->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
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
        exception_tb = MAKE_TRACEBACK(frame_5ffcc36db6400833ab1b33786e770280, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ffcc36db6400833ab1b33786e770280->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ffcc36db6400833ab1b33786e770280, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ffcc36db6400833ab1b33786e770280,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_5ffcc36db6400833ab1b33786e770280 == cache_frame_5ffcc36db6400833ab1b33786e770280) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5ffcc36db6400833ab1b33786e770280);
        cache_frame_5ffcc36db6400833ab1b33786e770280 = NULL;
    }

    assertFrameObject(frame_5ffcc36db6400833ab1b33786e770280);

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


static PyObject *impl_flet_core$floating_action_button$$$function__4__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3fde791d72bb836a32799cd7c1971d5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3fde791d72bb836a32799cd7c1971d5a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3fde791d72bb836a32799cd7c1971d5a)) {
        Py_XDECREF(cache_frame_3fde791d72bb836a32799cd7c1971d5a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3fde791d72bb836a32799cd7c1971d5a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3fde791d72bb836a32799cd7c1971d5a = MAKE_FUNCTION_FRAME(codeobj_3fde791d72bb836a32799cd7c1971d5a, module_flet_core$floating_action_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3fde791d72bb836a32799cd7c1971d5a->m_type_description == NULL);
    frame_3fde791d72bb836a32799cd7c1971d5a = cache_frame_3fde791d72bb836a32799cd7c1971d5a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3fde791d72bb836a32799cd7c1971d5a);
    assert(Py_REFCNT(frame_3fde791d72bb836a32799cd7c1971d5a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
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
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3fde791d72bb836a32799cd7c1971d5a->m_frame.f_lineno = 158;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[18],
            &PyTuple_GET_ITEM(mod_consts[19], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_3fde791d72bb836a32799cd7c1971d5a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3fde791d72bb836a32799cd7c1971d5a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3fde791d72bb836a32799cd7c1971d5a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3fde791d72bb836a32799cd7c1971d5a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3fde791d72bb836a32799cd7c1971d5a == cache_frame_3fde791d72bb836a32799cd7c1971d5a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3fde791d72bb836a32799cd7c1971d5a);
        cache_frame_3fde791d72bb836a32799cd7c1971d5a = NULL;
    }

    assertFrameObject(frame_3fde791d72bb836a32799cd7c1971d5a);

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


static PyObject *impl_flet_core$floating_action_button$$$function__5_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ca689b15a46c1eee41f6495231959cfe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ca689b15a46c1eee41f6495231959cfe = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ca689b15a46c1eee41f6495231959cfe)) {
        Py_XDECREF(cache_frame_ca689b15a46c1eee41f6495231959cfe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ca689b15a46c1eee41f6495231959cfe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ca689b15a46c1eee41f6495231959cfe = MAKE_FUNCTION_FRAME(codeobj_ca689b15a46c1eee41f6495231959cfe, module_flet_core$floating_action_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ca689b15a46c1eee41f6495231959cfe->m_type_description == NULL);
    frame_ca689b15a46c1eee41f6495231959cfe = cache_frame_ca689b15a46c1eee41f6495231959cfe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ca689b15a46c1eee41f6495231959cfe);
    assert(Py_REFCNT(frame_ca689b15a46c1eee41f6495231959cfe) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ca689b15a46c1eee41f6495231959cfe->m_frame.f_lineno = 164;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[20],
            PyTuple_GET_ITEM(mod_consts[21], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_ca689b15a46c1eee41f6495231959cfe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ca689b15a46c1eee41f6495231959cfe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca689b15a46c1eee41f6495231959cfe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ca689b15a46c1eee41f6495231959cfe,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ca689b15a46c1eee41f6495231959cfe == cache_frame_ca689b15a46c1eee41f6495231959cfe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ca689b15a46c1eee41f6495231959cfe);
        cache_frame_ca689b15a46c1eee41f6495231959cfe = NULL;
    }

    assertFrameObject(frame_ca689b15a46c1eee41f6495231959cfe);

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


static PyObject *impl_flet_core$floating_action_button$$$function__6_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_8ae1f6fbb36d063b9558b4c2b8a3b46d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8ae1f6fbb36d063b9558b4c2b8a3b46d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8ae1f6fbb36d063b9558b4c2b8a3b46d)) {
        Py_XDECREF(cache_frame_8ae1f6fbb36d063b9558b4c2b8a3b46d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ae1f6fbb36d063b9558b4c2b8a3b46d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ae1f6fbb36d063b9558b4c2b8a3b46d = MAKE_FUNCTION_FRAME(codeobj_8ae1f6fbb36d063b9558b4c2b8a3b46d, module_flet_core$floating_action_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ae1f6fbb36d063b9558b4c2b8a3b46d->m_type_description == NULL);
    frame_8ae1f6fbb36d063b9558b4c2b8a3b46d = cache_frame_8ae1f6fbb36d063b9558b4c2b8a3b46d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ae1f6fbb36d063b9558b4c2b8a3b46d);
    assert(Py_REFCNT(frame_8ae1f6fbb36d063b9558b4c2b8a3b46d) == 2);

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
        frame_8ae1f6fbb36d063b9558b4c2b8a3b46d->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[22],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
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
        exception_tb = MAKE_TRACEBACK(frame_8ae1f6fbb36d063b9558b4c2b8a3b46d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ae1f6fbb36d063b9558b4c2b8a3b46d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ae1f6fbb36d063b9558b4c2b8a3b46d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ae1f6fbb36d063b9558b4c2b8a3b46d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8ae1f6fbb36d063b9558b4c2b8a3b46d == cache_frame_8ae1f6fbb36d063b9558b4c2b8a3b46d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ae1f6fbb36d063b9558b4c2b8a3b46d);
        cache_frame_8ae1f6fbb36d063b9558b4c2b8a3b46d = NULL;
    }

    assertFrameObject(frame_8ae1f6fbb36d063b9558b4c2b8a3b46d);

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


static PyObject *impl_flet_core$floating_action_button$$$function__7_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d545682f971c9540cc2f94701ba44e67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d545682f971c9540cc2f94701ba44e67 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d545682f971c9540cc2f94701ba44e67)) {
        Py_XDECREF(cache_frame_d545682f971c9540cc2f94701ba44e67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d545682f971c9540cc2f94701ba44e67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d545682f971c9540cc2f94701ba44e67 = MAKE_FUNCTION_FRAME(codeobj_d545682f971c9540cc2f94701ba44e67, module_flet_core$floating_action_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d545682f971c9540cc2f94701ba44e67->m_type_description == NULL);
    frame_d545682f971c9540cc2f94701ba44e67 = cache_frame_d545682f971c9540cc2f94701ba44e67;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d545682f971c9540cc2f94701ba44e67);
    assert(Py_REFCNT(frame_d545682f971c9540cc2f94701ba44e67) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_d545682f971c9540cc2f94701ba44e67->m_frame.f_lineno = 173;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[20],
            PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
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
        exception_tb = MAKE_TRACEBACK(frame_d545682f971c9540cc2f94701ba44e67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d545682f971c9540cc2f94701ba44e67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d545682f971c9540cc2f94701ba44e67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d545682f971c9540cc2f94701ba44e67,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d545682f971c9540cc2f94701ba44e67 == cache_frame_d545682f971c9540cc2f94701ba44e67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d545682f971c9540cc2f94701ba44e67);
        cache_frame_d545682f971c9540cc2f94701ba44e67 = NULL;
    }

    assertFrameObject(frame_d545682f971c9540cc2f94701ba44e67);

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


static PyObject *impl_flet_core$floating_action_button$$$function__8_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_8260f4b7f4354f6ba8d03bebe04cadc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8260f4b7f4354f6ba8d03bebe04cadc2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8260f4b7f4354f6ba8d03bebe04cadc2)) {
        Py_XDECREF(cache_frame_8260f4b7f4354f6ba8d03bebe04cadc2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8260f4b7f4354f6ba8d03bebe04cadc2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8260f4b7f4354f6ba8d03bebe04cadc2 = MAKE_FUNCTION_FRAME(codeobj_8260f4b7f4354f6ba8d03bebe04cadc2, module_flet_core$floating_action_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8260f4b7f4354f6ba8d03bebe04cadc2->m_type_description == NULL);
    frame_8260f4b7f4354f6ba8d03bebe04cadc2 = cache_frame_8260f4b7f4354f6ba8d03bebe04cadc2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8260f4b7f4354f6ba8d03bebe04cadc2);
    assert(Py_REFCNT(frame_8260f4b7f4354f6ba8d03bebe04cadc2) == 2);

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
        frame_8260f4b7f4354f6ba8d03bebe04cadc2->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[22],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
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
        exception_tb = MAKE_TRACEBACK(frame_8260f4b7f4354f6ba8d03bebe04cadc2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8260f4b7f4354f6ba8d03bebe04cadc2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8260f4b7f4354f6ba8d03bebe04cadc2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8260f4b7f4354f6ba8d03bebe04cadc2,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8260f4b7f4354f6ba8d03bebe04cadc2 == cache_frame_8260f4b7f4354f6ba8d03bebe04cadc2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8260f4b7f4354f6ba8d03bebe04cadc2);
        cache_frame_8260f4b7f4354f6ba8d03bebe04cadc2 = NULL;
    }

    assertFrameObject(frame_8260f4b7f4354f6ba8d03bebe04cadc2);

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


static PyObject *impl_flet_core$floating_action_button$$$function__9_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_58497790ffa335caaec9228bf72b6e75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_58497790ffa335caaec9228bf72b6e75 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_58497790ffa335caaec9228bf72b6e75)) {
        Py_XDECREF(cache_frame_58497790ffa335caaec9228bf72b6e75);

#if _DEBUG_REFCOUNTS
        if (cache_frame_58497790ffa335caaec9228bf72b6e75 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_58497790ffa335caaec9228bf72b6e75 = MAKE_FUNCTION_FRAME(codeobj_58497790ffa335caaec9228bf72b6e75, module_flet_core$floating_action_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_58497790ffa335caaec9228bf72b6e75->m_type_description == NULL);
    frame_58497790ffa335caaec9228bf72b6e75 = cache_frame_58497790ffa335caaec9228bf72b6e75;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_58497790ffa335caaec9228bf72b6e75);
    assert(Py_REFCNT(frame_58497790ffa335caaec9228bf72b6e75) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_58497790ffa335caaec9228bf72b6e75->m_frame.f_lineno = 182;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[20],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
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
        exception_tb = MAKE_TRACEBACK(frame_58497790ffa335caaec9228bf72b6e75, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_58497790ffa335caaec9228bf72b6e75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_58497790ffa335caaec9228bf72b6e75, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_58497790ffa335caaec9228bf72b6e75,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_58497790ffa335caaec9228bf72b6e75 == cache_frame_58497790ffa335caaec9228bf72b6e75) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_58497790ffa335caaec9228bf72b6e75);
        cache_frame_58497790ffa335caaec9228bf72b6e75 = NULL;
    }

    assertFrameObject(frame_58497790ffa335caaec9228bf72b6e75);

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


static PyObject *impl_flet_core$floating_action_button$$$function__10_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_96dc4c3a601690d8453687a1fc11bd30;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96dc4c3a601690d8453687a1fc11bd30 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96dc4c3a601690d8453687a1fc11bd30)) {
        Py_XDECREF(cache_frame_96dc4c3a601690d8453687a1fc11bd30);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96dc4c3a601690d8453687a1fc11bd30 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96dc4c3a601690d8453687a1fc11bd30 = MAKE_FUNCTION_FRAME(codeobj_96dc4c3a601690d8453687a1fc11bd30, module_flet_core$floating_action_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96dc4c3a601690d8453687a1fc11bd30->m_type_description == NULL);
    frame_96dc4c3a601690d8453687a1fc11bd30 = cache_frame_96dc4c3a601690d8453687a1fc11bd30;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96dc4c3a601690d8453687a1fc11bd30);
    assert(Py_REFCNT(frame_96dc4c3a601690d8453687a1fc11bd30) == 2);

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
        frame_96dc4c3a601690d8453687a1fc11bd30->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[22],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
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
        exception_tb = MAKE_TRACEBACK(frame_96dc4c3a601690d8453687a1fc11bd30, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96dc4c3a601690d8453687a1fc11bd30->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96dc4c3a601690d8453687a1fc11bd30, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96dc4c3a601690d8453687a1fc11bd30,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_96dc4c3a601690d8453687a1fc11bd30 == cache_frame_96dc4c3a601690d8453687a1fc11bd30) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96dc4c3a601690d8453687a1fc11bd30);
        cache_frame_96dc4c3a601690d8453687a1fc11bd30 = NULL;
    }

    assertFrameObject(frame_96dc4c3a601690d8453687a1fc11bd30);

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


static PyObject *impl_flet_core$floating_action_button$$$function__11_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_166062803086ba6b2efc1e4ee0b1c2f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_166062803086ba6b2efc1e4ee0b1c2f3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_166062803086ba6b2efc1e4ee0b1c2f3)) {
        Py_XDECREF(cache_frame_166062803086ba6b2efc1e4ee0b1c2f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_166062803086ba6b2efc1e4ee0b1c2f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_166062803086ba6b2efc1e4ee0b1c2f3 = MAKE_FUNCTION_FRAME(codeobj_166062803086ba6b2efc1e4ee0b1c2f3, module_flet_core$floating_action_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_166062803086ba6b2efc1e4ee0b1c2f3->m_type_description == NULL);
    frame_166062803086ba6b2efc1e4ee0b1c2f3 = cache_frame_166062803086ba6b2efc1e4ee0b1c2f3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_166062803086ba6b2efc1e4ee0b1c2f3);
    assert(Py_REFCNT(frame_166062803086ba6b2efc1e4ee0b1c2f3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_166062803086ba6b2efc1e4ee0b1c2f3->m_frame.f_lineno = 191;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[20],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
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
        exception_tb = MAKE_TRACEBACK(frame_166062803086ba6b2efc1e4ee0b1c2f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_166062803086ba6b2efc1e4ee0b1c2f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_166062803086ba6b2efc1e4ee0b1c2f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_166062803086ba6b2efc1e4ee0b1c2f3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_166062803086ba6b2efc1e4ee0b1c2f3 == cache_frame_166062803086ba6b2efc1e4ee0b1c2f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_166062803086ba6b2efc1e4ee0b1c2f3);
        cache_frame_166062803086ba6b2efc1e4ee0b1c2f3 = NULL;
    }

    assertFrameObject(frame_166062803086ba6b2efc1e4ee0b1c2f3);

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


static PyObject *impl_flet_core$floating_action_button$$$function__12_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_5b891d11de4af9836e57dfe80ddd5852;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5b891d11de4af9836e57dfe80ddd5852 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5b891d11de4af9836e57dfe80ddd5852)) {
        Py_XDECREF(cache_frame_5b891d11de4af9836e57dfe80ddd5852);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b891d11de4af9836e57dfe80ddd5852 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b891d11de4af9836e57dfe80ddd5852 = MAKE_FUNCTION_FRAME(codeobj_5b891d11de4af9836e57dfe80ddd5852, module_flet_core$floating_action_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b891d11de4af9836e57dfe80ddd5852->m_type_description == NULL);
    frame_5b891d11de4af9836e57dfe80ddd5852 = cache_frame_5b891d11de4af9836e57dfe80ddd5852;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5b891d11de4af9836e57dfe80ddd5852);
    assert(Py_REFCNT(frame_5b891d11de4af9836e57dfe80ddd5852) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[10];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_5b891d11de4af9836e57dfe80ddd5852->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[22],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
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
        exception_tb = MAKE_TRACEBACK(frame_5b891d11de4af9836e57dfe80ddd5852, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b891d11de4af9836e57dfe80ddd5852->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b891d11de4af9836e57dfe80ddd5852, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b891d11de4af9836e57dfe80ddd5852,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_5b891d11de4af9836e57dfe80ddd5852 == cache_frame_5b891d11de4af9836e57dfe80ddd5852) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b891d11de4af9836e57dfe80ddd5852);
        cache_frame_5b891d11de4af9836e57dfe80ddd5852 = NULL;
    }

    assertFrameObject(frame_5b891d11de4af9836e57dfe80ddd5852);

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


static PyObject *impl_flet_core$floating_action_button$$$function__13_url_target(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_502e32eec59c6edc7a89990da669a697;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_502e32eec59c6edc7a89990da669a697 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_502e32eec59c6edc7a89990da669a697)) {
        Py_XDECREF(cache_frame_502e32eec59c6edc7a89990da669a697);

#if _DEBUG_REFCOUNTS
        if (cache_frame_502e32eec59c6edc7a89990da669a697 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_502e32eec59c6edc7a89990da669a697 = MAKE_FUNCTION_FRAME(codeobj_502e32eec59c6edc7a89990da669a697, module_flet_core$floating_action_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_502e32eec59c6edc7a89990da669a697->m_type_description == NULL);
    frame_502e32eec59c6edc7a89990da669a697 = cache_frame_502e32eec59c6edc7a89990da669a697;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_502e32eec59c6edc7a89990da669a697);
    assert(Py_REFCNT(frame_502e32eec59c6edc7a89990da669a697) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_502e32eec59c6edc7a89990da669a697->m_frame.f_lineno = 200;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[20],
            PyTuple_GET_ITEM(mod_consts[26], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
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
        exception_tb = MAKE_TRACEBACK(frame_502e32eec59c6edc7a89990da669a697, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_502e32eec59c6edc7a89990da669a697->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_502e32eec59c6edc7a89990da669a697, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_502e32eec59c6edc7a89990da669a697,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_502e32eec59c6edc7a89990da669a697 == cache_frame_502e32eec59c6edc7a89990da669a697) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_502e32eec59c6edc7a89990da669a697);
        cache_frame_502e32eec59c6edc7a89990da669a697 = NULL;
    }

    assertFrameObject(frame_502e32eec59c6edc7a89990da669a697);

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


static PyObject *impl_flet_core$floating_action_button$$$function__14_url_target(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_460db58e2a0010b068c4435c1a6815b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_460db58e2a0010b068c4435c1a6815b6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_460db58e2a0010b068c4435c1a6815b6)) {
        Py_XDECREF(cache_frame_460db58e2a0010b068c4435c1a6815b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_460db58e2a0010b068c4435c1a6815b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_460db58e2a0010b068c4435c1a6815b6 = MAKE_FUNCTION_FRAME(codeobj_460db58e2a0010b068c4435c1a6815b6, module_flet_core$floating_action_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_460db58e2a0010b068c4435c1a6815b6->m_type_description == NULL);
    frame_460db58e2a0010b068c4435c1a6815b6 = cache_frame_460db58e2a0010b068c4435c1a6815b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_460db58e2a0010b068c4435c1a6815b6);
    assert(Py_REFCNT(frame_460db58e2a0010b068c4435c1a6815b6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[27];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_460db58e2a0010b068c4435c1a6815b6->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[22],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
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
        exception_tb = MAKE_TRACEBACK(frame_460db58e2a0010b068c4435c1a6815b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_460db58e2a0010b068c4435c1a6815b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_460db58e2a0010b068c4435c1a6815b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_460db58e2a0010b068c4435c1a6815b6,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_460db58e2a0010b068c4435c1a6815b6 == cache_frame_460db58e2a0010b068c4435c1a6815b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_460db58e2a0010b068c4435c1a6815b6);
        cache_frame_460db58e2a0010b068c4435c1a6815b6 = NULL;
    }

    assertFrameObject(frame_460db58e2a0010b068c4435c1a6815b6);

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


static PyObject *impl_flet_core$floating_action_button$$$function__15_on_click(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a430c6e422b0326182dbae614d83de98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a430c6e422b0326182dbae614d83de98 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a430c6e422b0326182dbae614d83de98)) {
        Py_XDECREF(cache_frame_a430c6e422b0326182dbae614d83de98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a430c6e422b0326182dbae614d83de98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a430c6e422b0326182dbae614d83de98 = MAKE_FUNCTION_FRAME(codeobj_a430c6e422b0326182dbae614d83de98, module_flet_core$floating_action_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a430c6e422b0326182dbae614d83de98->m_type_description == NULL);
    frame_a430c6e422b0326182dbae614d83de98 = cache_frame_a430c6e422b0326182dbae614d83de98;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a430c6e422b0326182dbae614d83de98);
    assert(Py_REFCNT(frame_a430c6e422b0326182dbae614d83de98) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a430c6e422b0326182dbae614d83de98->m_frame.f_lineno = 209;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[29], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
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
        exception_tb = MAKE_TRACEBACK(frame_a430c6e422b0326182dbae614d83de98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a430c6e422b0326182dbae614d83de98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a430c6e422b0326182dbae614d83de98, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a430c6e422b0326182dbae614d83de98,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a430c6e422b0326182dbae614d83de98 == cache_frame_a430c6e422b0326182dbae614d83de98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a430c6e422b0326182dbae614d83de98);
        cache_frame_a430c6e422b0326182dbae614d83de98 = NULL;
    }

    assertFrameObject(frame_a430c6e422b0326182dbae614d83de98);

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


static PyObject *impl_flet_core$floating_action_button$$$function__16_on_click(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_e993f69a3254366fa565bebb73069ec7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e993f69a3254366fa565bebb73069ec7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e993f69a3254366fa565bebb73069ec7)) {
        Py_XDECREF(cache_frame_e993f69a3254366fa565bebb73069ec7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e993f69a3254366fa565bebb73069ec7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e993f69a3254366fa565bebb73069ec7 = MAKE_FUNCTION_FRAME(codeobj_e993f69a3254366fa565bebb73069ec7, module_flet_core$floating_action_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e993f69a3254366fa565bebb73069ec7->m_type_description == NULL);
    frame_e993f69a3254366fa565bebb73069ec7 = cache_frame_e993f69a3254366fa565bebb73069ec7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e993f69a3254366fa565bebb73069ec7);
    assert(Py_REFCNT(frame_e993f69a3254366fa565bebb73069ec7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[31];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_e993f69a3254366fa565bebb73069ec7->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[30],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
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
        exception_tb = MAKE_TRACEBACK(frame_e993f69a3254366fa565bebb73069ec7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e993f69a3254366fa565bebb73069ec7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e993f69a3254366fa565bebb73069ec7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e993f69a3254366fa565bebb73069ec7,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_e993f69a3254366fa565bebb73069ec7 == cache_frame_e993f69a3254366fa565bebb73069ec7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e993f69a3254366fa565bebb73069ec7);
        cache_frame_e993f69a3254366fa565bebb73069ec7 = NULL;
    }

    assertFrameObject(frame_e993f69a3254366fa565bebb73069ec7);

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


static PyObject *impl_flet_core$floating_action_button$$$function__17_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_61a32c7ca4f711ef19ddb0c973d1387f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_61a32c7ca4f711ef19ddb0c973d1387f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_61a32c7ca4f711ef19ddb0c973d1387f)) {
        Py_XDECREF(cache_frame_61a32c7ca4f711ef19ddb0c973d1387f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_61a32c7ca4f711ef19ddb0c973d1387f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_61a32c7ca4f711ef19ddb0c973d1387f = MAKE_FUNCTION_FRAME(codeobj_61a32c7ca4f711ef19ddb0c973d1387f, module_flet_core$floating_action_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_61a32c7ca4f711ef19ddb0c973d1387f->m_type_description == NULL);
    frame_61a32c7ca4f711ef19ddb0c973d1387f = cache_frame_61a32c7ca4f711ef19ddb0c973d1387f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_61a32c7ca4f711ef19ddb0c973d1387f);
    assert(Py_REFCNT(frame_61a32c7ca4f711ef19ddb0c973d1387f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
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
        exception_tb = MAKE_TRACEBACK(frame_61a32c7ca4f711ef19ddb0c973d1387f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61a32c7ca4f711ef19ddb0c973d1387f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61a32c7ca4f711ef19ddb0c973d1387f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_61a32c7ca4f711ef19ddb0c973d1387f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_61a32c7ca4f711ef19ddb0c973d1387f == cache_frame_61a32c7ca4f711ef19ddb0c973d1387f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_61a32c7ca4f711ef19ddb0c973d1387f);
        cache_frame_61a32c7ca4f711ef19ddb0c973d1387f = NULL;
    }

    assertFrameObject(frame_61a32c7ca4f711ef19ddb0c973d1387f);

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


static PyObject *impl_flet_core$floating_action_button$$$function__18_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_c731c82593d44538109653ea80b52473;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c731c82593d44538109653ea80b52473 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c731c82593d44538109653ea80b52473)) {
        Py_XDECREF(cache_frame_c731c82593d44538109653ea80b52473);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c731c82593d44538109653ea80b52473 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c731c82593d44538109653ea80b52473 = MAKE_FUNCTION_FRAME(codeobj_c731c82593d44538109653ea80b52473, module_flet_core$floating_action_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c731c82593d44538109653ea80b52473->m_type_description == NULL);
    frame_c731c82593d44538109653ea80b52473 = cache_frame_c731c82593d44538109653ea80b52473;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c731c82593d44538109653ea80b52473);
    assert(Py_REFCNT(frame_c731c82593d44538109653ea80b52473) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c731c82593d44538109653ea80b52473, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c731c82593d44538109653ea80b52473->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c731c82593d44538109653ea80b52473, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c731c82593d44538109653ea80b52473,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c731c82593d44538109653ea80b52473 == cache_frame_c731c82593d44538109653ea80b52473) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c731c82593d44538109653ea80b52473);
        cache_frame_c731c82593d44538109653ea80b52473 = NULL;
    }

    assertFrameObject(frame_c731c82593d44538109653ea80b52473);

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


static PyObject *impl_flet_core$floating_action_button$$$function__19_autofocus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_03c54428ae24b3a0a2efdcf17fd74288;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_03c54428ae24b3a0a2efdcf17fd74288 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_03c54428ae24b3a0a2efdcf17fd74288)) {
        Py_XDECREF(cache_frame_03c54428ae24b3a0a2efdcf17fd74288);

#if _DEBUG_REFCOUNTS
        if (cache_frame_03c54428ae24b3a0a2efdcf17fd74288 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_03c54428ae24b3a0a2efdcf17fd74288 = MAKE_FUNCTION_FRAME(codeobj_03c54428ae24b3a0a2efdcf17fd74288, module_flet_core$floating_action_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_03c54428ae24b3a0a2efdcf17fd74288->m_type_description == NULL);
    frame_03c54428ae24b3a0a2efdcf17fd74288 = cache_frame_03c54428ae24b3a0a2efdcf17fd74288;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_03c54428ae24b3a0a2efdcf17fd74288);
    assert(Py_REFCNT(frame_03c54428ae24b3a0a2efdcf17fd74288) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_03c54428ae24b3a0a2efdcf17fd74288->m_frame.f_lineno = 227;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[32], 0), mod_consts[33]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
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
        exception_tb = MAKE_TRACEBACK(frame_03c54428ae24b3a0a2efdcf17fd74288, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_03c54428ae24b3a0a2efdcf17fd74288->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_03c54428ae24b3a0a2efdcf17fd74288, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_03c54428ae24b3a0a2efdcf17fd74288,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_03c54428ae24b3a0a2efdcf17fd74288 == cache_frame_03c54428ae24b3a0a2efdcf17fd74288) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_03c54428ae24b3a0a2efdcf17fd74288);
        cache_frame_03c54428ae24b3a0a2efdcf17fd74288 = NULL;
    }

    assertFrameObject(frame_03c54428ae24b3a0a2efdcf17fd74288);

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


static PyObject *impl_flet_core$floating_action_button$$$function__20_autofocus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_da98dec9b68968d4c955821738328b76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da98dec9b68968d4c955821738328b76 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da98dec9b68968d4c955821738328b76)) {
        Py_XDECREF(cache_frame_da98dec9b68968d4c955821738328b76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da98dec9b68968d4c955821738328b76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da98dec9b68968d4c955821738328b76 = MAKE_FUNCTION_FRAME(codeobj_da98dec9b68968d4c955821738328b76, module_flet_core$floating_action_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da98dec9b68968d4c955821738328b76->m_type_description == NULL);
    frame_da98dec9b68968d4c955821738328b76 = cache_frame_da98dec9b68968d4c955821738328b76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_da98dec9b68968d4c955821738328b76);
    assert(Py_REFCNT(frame_da98dec9b68968d4c955821738328b76) == 2);

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
        frame_da98dec9b68968d4c955821738328b76->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[22],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
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
        exception_tb = MAKE_TRACEBACK(frame_da98dec9b68968d4c955821738328b76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da98dec9b68968d4c955821738328b76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da98dec9b68968d4c955821738328b76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da98dec9b68968d4c955821738328b76,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_da98dec9b68968d4c955821738328b76 == cache_frame_da98dec9b68968d4c955821738328b76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da98dec9b68968d4c955821738328b76);
        cache_frame_da98dec9b68968d4c955821738328b76 = NULL;
    }

    assertFrameObject(frame_da98dec9b68968d4c955821738328b76);

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


static PyObject *impl_flet_core$floating_action_button$$$function__21_shape(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6cde5b8e68783b62e0900e291d5ac36a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6cde5b8e68783b62e0900e291d5ac36a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6cde5b8e68783b62e0900e291d5ac36a)) {
        Py_XDECREF(cache_frame_6cde5b8e68783b62e0900e291d5ac36a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6cde5b8e68783b62e0900e291d5ac36a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6cde5b8e68783b62e0900e291d5ac36a = MAKE_FUNCTION_FRAME(codeobj_6cde5b8e68783b62e0900e291d5ac36a, module_flet_core$floating_action_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6cde5b8e68783b62e0900e291d5ac36a->m_type_description == NULL);
    frame_6cde5b8e68783b62e0900e291d5ac36a = cache_frame_6cde5b8e68783b62e0900e291d5ac36a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6cde5b8e68783b62e0900e291d5ac36a);
    assert(Py_REFCNT(frame_6cde5b8e68783b62e0900e291d5ac36a) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
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
        exception_tb = MAKE_TRACEBACK(frame_6cde5b8e68783b62e0900e291d5ac36a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6cde5b8e68783b62e0900e291d5ac36a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6cde5b8e68783b62e0900e291d5ac36a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6cde5b8e68783b62e0900e291d5ac36a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6cde5b8e68783b62e0900e291d5ac36a == cache_frame_6cde5b8e68783b62e0900e291d5ac36a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6cde5b8e68783b62e0900e291d5ac36a);
        cache_frame_6cde5b8e68783b62e0900e291d5ac36a = NULL;
    }

    assertFrameObject(frame_6cde5b8e68783b62e0900e291d5ac36a);

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


static PyObject *impl_flet_core$floating_action_button$$$function__22_shape(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_8be2b080c7f28763c744c16e5f1d6bd4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8be2b080c7f28763c744c16e5f1d6bd4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8be2b080c7f28763c744c16e5f1d6bd4)) {
        Py_XDECREF(cache_frame_8be2b080c7f28763c744c16e5f1d6bd4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8be2b080c7f28763c744c16e5f1d6bd4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8be2b080c7f28763c744c16e5f1d6bd4 = MAKE_FUNCTION_FRAME(codeobj_8be2b080c7f28763c744c16e5f1d6bd4, module_flet_core$floating_action_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8be2b080c7f28763c744c16e5f1d6bd4->m_type_description == NULL);
    frame_8be2b080c7f28763c744c16e5f1d6bd4 = cache_frame_8be2b080c7f28763c744c16e5f1d6bd4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8be2b080c7f28763c744c16e5f1d6bd4);
    assert(Py_REFCNT(frame_8be2b080c7f28763c744c16e5f1d6bd4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[16], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8be2b080c7f28763c744c16e5f1d6bd4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8be2b080c7f28763c744c16e5f1d6bd4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8be2b080c7f28763c744c16e5f1d6bd4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8be2b080c7f28763c744c16e5f1d6bd4,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8be2b080c7f28763c744c16e5f1d6bd4 == cache_frame_8be2b080c7f28763c744c16e5f1d6bd4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8be2b080c7f28763c744c16e5f1d6bd4);
        cache_frame_8be2b080c7f28763c744c16e5f1d6bd4 = NULL;
    }

    assertFrameObject(frame_8be2b080c7f28763c744c16e5f1d6bd4);

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


static PyObject *impl_flet_core$floating_action_button$$$function__23_mini(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4550eaccac9179326aa9a53a49fc9774;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4550eaccac9179326aa9a53a49fc9774 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4550eaccac9179326aa9a53a49fc9774)) {
        Py_XDECREF(cache_frame_4550eaccac9179326aa9a53a49fc9774);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4550eaccac9179326aa9a53a49fc9774 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4550eaccac9179326aa9a53a49fc9774 = MAKE_FUNCTION_FRAME(codeobj_4550eaccac9179326aa9a53a49fc9774, module_flet_core$floating_action_button, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4550eaccac9179326aa9a53a49fc9774->m_type_description == NULL);
    frame_4550eaccac9179326aa9a53a49fc9774 = cache_frame_4550eaccac9179326aa9a53a49fc9774;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4550eaccac9179326aa9a53a49fc9774);
    assert(Py_REFCNT(frame_4550eaccac9179326aa9a53a49fc9774) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4550eaccac9179326aa9a53a49fc9774->m_frame.f_lineno = 245;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[34], 0), mod_consts[33]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
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
        exception_tb = MAKE_TRACEBACK(frame_4550eaccac9179326aa9a53a49fc9774, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4550eaccac9179326aa9a53a49fc9774->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4550eaccac9179326aa9a53a49fc9774, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4550eaccac9179326aa9a53a49fc9774,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4550eaccac9179326aa9a53a49fc9774 == cache_frame_4550eaccac9179326aa9a53a49fc9774) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4550eaccac9179326aa9a53a49fc9774);
        cache_frame_4550eaccac9179326aa9a53a49fc9774 = NULL;
    }

    assertFrameObject(frame_4550eaccac9179326aa9a53a49fc9774);

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


static PyObject *impl_flet_core$floating_action_button$$$function__24_mini(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_c23cb7ad23ba34f5de321719037e6951;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c23cb7ad23ba34f5de321719037e6951 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c23cb7ad23ba34f5de321719037e6951)) {
        Py_XDECREF(cache_frame_c23cb7ad23ba34f5de321719037e6951);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c23cb7ad23ba34f5de321719037e6951 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c23cb7ad23ba34f5de321719037e6951 = MAKE_FUNCTION_FRAME(codeobj_c23cb7ad23ba34f5de321719037e6951, module_flet_core$floating_action_button, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c23cb7ad23ba34f5de321719037e6951->m_type_description == NULL);
    frame_c23cb7ad23ba34f5de321719037e6951 = cache_frame_c23cb7ad23ba34f5de321719037e6951;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c23cb7ad23ba34f5de321719037e6951);
    assert(Py_REFCNT(frame_c23cb7ad23ba34f5de321719037e6951) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[9];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_c23cb7ad23ba34f5de321719037e6951->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[22],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
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
        exception_tb = MAKE_TRACEBACK(frame_c23cb7ad23ba34f5de321719037e6951, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c23cb7ad23ba34f5de321719037e6951->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c23cb7ad23ba34f5de321719037e6951, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c23cb7ad23ba34f5de321719037e6951,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c23cb7ad23ba34f5de321719037e6951 == cache_frame_c23cb7ad23ba34f5de321719037e6951) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c23cb7ad23ba34f5de321719037e6951);
        cache_frame_c23cb7ad23ba34f5de321719037e6951 = NULL;
    }

    assertFrameObject(frame_c23cb7ad23ba34f5de321719037e6951);

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



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__10_bgcolor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__10_bgcolor,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_96dc4c3a601690d8453687a1fc11bd30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__11_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__11_url,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_166062803086ba6b2efc1e4ee0b1c2f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__12_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__12_url,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_5b891d11de4af9836e57dfe80ddd5852,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__13_url_target() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__13_url_target,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_502e32eec59c6edc7a89990da669a697,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__14_url_target() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__14_url_target,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_460db58e2a0010b068c4435c1a6815b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__15_on_click() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__15_on_click,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_a430c6e422b0326182dbae614d83de98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__16_on_click() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__16_on_click,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_e993f69a3254366fa565bebb73069ec7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__17_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__17_content,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_61a32c7ca4f711ef19ddb0c973d1387f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__18_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__18_content,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_c731c82593d44538109653ea80b52473,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__19_autofocus(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__19_autofocus,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_03c54428ae24b3a0a2efdcf17fd74288,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_f3f4b5ecbf2f416aaa836ce9898a38d7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__20_autofocus(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__20_autofocus,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_da98dec9b68968d4c955821738328b76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__21_shape(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__21_shape,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_6cde5b8e68783b62e0900e291d5ac36a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__22_shape(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__22_shape,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_8be2b080c7f28763c744c16e5f1d6bd4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__23_mini(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__23_mini,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_4550eaccac9179326aa9a53a49fc9774,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__24_mini(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__24_mini,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_c23cb7ad23ba34f5de321719037e6951,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_b6c2eb2508ee626e2076b466ede1ebeb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[105]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__3__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__3__before_build_command,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_5ffcc36db6400833ab1b33786e770280,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__4__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__4__get_children,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_3fde791d72bb836a32799cd7c1971d5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__5_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__5_text,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_ca689b15a46c1eee41f6495231959cfe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__6_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__6_text,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_8ae1f6fbb36d063b9558b4c2b8a3b46d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__7_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__7_icon,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_d545682f971c9540cc2f94701ba44e67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__8_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__8_icon,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_8260f4b7f4354f6ba8d03bebe04cadc2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$floating_action_button$$$function__9_bgcolor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$floating_action_button$$$function__9_bgcolor,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_58497790ffa335caaec9228bf72b6e75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$floating_action_button,
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

function_impl_code functable_flet_core$floating_action_button[] = {
    impl_flet_core$floating_action_button$$$function__1___init__,
    NULL,
    impl_flet_core$floating_action_button$$$function__3__before_build_command,
    impl_flet_core$floating_action_button$$$function__4__get_children,
    impl_flet_core$floating_action_button$$$function__5_text,
    impl_flet_core$floating_action_button$$$function__6_text,
    impl_flet_core$floating_action_button$$$function__7_icon,
    impl_flet_core$floating_action_button$$$function__8_icon,
    impl_flet_core$floating_action_button$$$function__9_bgcolor,
    impl_flet_core$floating_action_button$$$function__10_bgcolor,
    impl_flet_core$floating_action_button$$$function__11_url,
    impl_flet_core$floating_action_button$$$function__12_url,
    impl_flet_core$floating_action_button$$$function__13_url_target,
    impl_flet_core$floating_action_button$$$function__14_url_target,
    impl_flet_core$floating_action_button$$$function__15_on_click,
    impl_flet_core$floating_action_button$$$function__16_on_click,
    impl_flet_core$floating_action_button$$$function__17_content,
    impl_flet_core$floating_action_button$$$function__18_content,
    impl_flet_core$floating_action_button$$$function__19_autofocus,
    impl_flet_core$floating_action_button$$$function__20_autofocus,
    impl_flet_core$floating_action_button$$$function__21_shape,
    impl_flet_core$floating_action_button$$$function__22_shape,
    impl_flet_core$floating_action_button$$$function__23_mini,
    impl_flet_core$floating_action_button$$$function__24_mini,
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

    function_impl_code *current = functable_flet_core$floating_action_button;
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

    if (offset > sizeof(functable_flet_core$floating_action_button) || offset < 0) {
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
        functable_flet_core$floating_action_button[offset],
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
        module_flet_core$floating_action_button,
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
PyObject *modulecode_flet_core$floating_action_button(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.floating_action_button");

    // Store the module for future use.
    module_flet_core$floating_action_button = module;

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
        PRINT_STRING("flet_core.floating_action_button: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.floating_action_button: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.floating_action_button: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$floating_action_button\n");

    moduledict_flet_core$floating_action_button = MODULE_DICT(module_flet_core$floating_action_button);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$floating_action_button,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$floating_action_button,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[133]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$floating_action_button,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$floating_action_button,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$floating_action_button,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$floating_action_button);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$floating_action_button);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_d15dc9587ead5f82a66acf0d30486fbb;
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
    PyObject *locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_7958d1f9503875b4359b8e8269a57e8c_2;
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
        UPDATE_STRING_DICT0(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_2);
    }
    frame_d15dc9587ead5f82a66acf0d30486fbb = MAKE_MODULE_FRAME(codeobj_d15dc9587ead5f82a66acf0d30486fbb, module_flet_core$floating_action_button);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d15dc9587ead5f82a66acf0d30486fbb);
    assert(Py_REFCNT(frame_d15dc9587ead5f82a66acf0d30486fbb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[36];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[39], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[40], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_3);
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
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[42],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[42]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[44],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[44]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[45],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[45]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_7);
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
        tmp_name_value_1 = mod_consts[46];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$floating_action_button;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[47];
        tmp_level_value_1 = mod_consts[43];
        frame_d15dc9587ead5f82a66acf0d30486fbb->m_frame.f_lineno = 3;
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
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[48],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[49];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$floating_action_button;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[50];
        tmp_level_value_2 = mod_consts[43];
        frame_d15dc9587ead5f82a66acf0d30486fbb->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[0],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[51];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$floating_action_button;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[52];
        tmp_level_value_3 = mod_consts[43];
        frame_d15dc9587ead5f82a66acf0d30486fbb->m_frame.f_lineno = 5;
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
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[53],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[53]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[54],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[54]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_12);
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
        tmp_name_value_4 = mod_consts[55];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$floating_action_button;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[56];
        tmp_level_value_4 = mod_consts[43];
        frame_d15dc9587ead5f82a66acf0d30486fbb->m_frame.f_lineno = 6;
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
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[57],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[57]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[58];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$floating_action_button;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[59];
        tmp_level_value_5 = mod_consts[43];
        frame_d15dc9587ead5f82a66acf0d30486fbb->m_frame.f_lineno = 7;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

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
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[60],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[60]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[61],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[61]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[62],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[62]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[63],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[63]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$floating_action_button,
                mod_consts[64],
                mod_consts[43]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[64]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_19);
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
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

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


            exception_lineno = 16;

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


            exception_lineno = 16;

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
        tmp_subscript_value_1 = mod_consts[43];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

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


            exception_lineno = 16;

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
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[65]);
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[65]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[66];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_d15dc9587ead5f82a66acf0d30486fbb->m_frame.f_lineno = 16;
        tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

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
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[67]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

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
        tmp_mod_expr_left_1 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[69];
        tmp_getattr_default_1 = mod_consts[70];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[69]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

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


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 16;
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
            locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[66];
        tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_6;
        }
        frame_7958d1f9503875b4359b8e8269a57e8c_2 = MAKE_CLASS_FRAME(codeobj_7958d1f9503875b4359b8e8269a57e8c, module_flet_core$floating_action_button, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7958d1f9503875b4359b8e8269a57e8c_2);
        assert(Py_REFCNT(frame_7958d1f9503875b4359b8e8269a57e8c_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            tmp_defaults_1 = mod_consts[75];
            tmp_dict_key_1 = mod_consts[3];
            tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[76]);

            if (tmp_subscript_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
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


                exception_lineno = 67;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 34 );
            {
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_tuple_element_4;
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
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[77];
                tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_7 == NULL)) {
                            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 68;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_3 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[57]);

                if (tmp_subscript_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[57]);

                        if (unlikely(tmp_subscript_value_3 == NULL)) {
                            tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
                        }

                        if (tmp_subscript_value_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_7);

                            exception_lineno = 68;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 68;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[78];
                tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 69;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[76]);

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


                    exception_lineno = 69;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[79];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[54]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[54]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
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
                tmp_dict_key_1 = mod_consts[80];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[54]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[54]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
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
                tmp_dict_key_1 = mod_consts[81];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[54]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[54]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 72;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[54]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[54]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 73;
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
                tmp_dict_key_1 = mod_consts[83];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[54]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[54]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 74;
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
                tmp_dict_key_1 = mod_consts[84];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[54]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[54]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 75;
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
                tmp_dict_key_1 = mod_consts[85];
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[45]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_4 = Py_None;
                tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[86]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_4 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[87]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_4 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_5, 2, tmp_tuple_element_4);
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_9);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[88];
                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 77;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[62]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_subscript_value_6 == NULL)) {
                            tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_subscript_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_10);

                            exception_lineno = 77;
                            type_description_2 = "c";
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


                    exception_lineno = 77;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[89];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[54]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[54]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
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
                tmp_dict_key_1 = mod_consts[90];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[63]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 79;
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
                tmp_dict_key_1 = mod_consts[91];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[64]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
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
                tmp_dict_key_1 = mod_consts[92];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[61]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 81;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[54]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[54]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 82;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 83;
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
                tmp_dict_key_1 = mod_consts[95];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 84;
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
                tmp_dict_key_1 = mod_consts[96];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 85;
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
                tmp_dict_key_1 = mod_consts[97];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 86;
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
                tmp_dict_key_1 = mod_consts[98];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 87;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
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
                tmp_dict_key_1 = mod_consts[100];
                tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 90;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[76]);

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


                    exception_lineno = 90;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[101];
                tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 91;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[86]);

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


                    exception_lineno = 91;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[102];
                tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 92;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[86]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_9 = (PyObject *)&PyBool_Type;
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


                    exception_lineno = 92;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[103];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[42]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[42]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
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
                tmp_dict_key_1 = mod_consts[4];
                tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 97;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[76]);

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


                    exception_lineno = 97;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[5];
                tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 98;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[76]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 98;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[6];
                tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 99;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[53]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[53]);

                        if (unlikely(tmp_subscript_value_12 == NULL)) {
                            tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                        }

                        if (tmp_subscript_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_16);

                            exception_lineno = 99;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 99;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 100;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[86]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = (PyObject *)&PyBool_Type;
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


                    exception_lineno = 100;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[8];
                tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 101;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[48]);

                if (tmp_subscript_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[48]);

                        if (unlikely(tmp_subscript_value_14 == NULL)) {
                            tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                        }

                        if (tmp_subscript_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_18);

                            exception_lineno = 101;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 101;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[9];
                tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 102;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[86]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = (PyObject *)&PyBool_Type;
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


                    exception_lineno = 102;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[10];
                tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 103;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[76]);

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


                    exception_lineno = 103;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[11];
                tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 104;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[76]);

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


                    exception_lineno = 104;
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


            tmp_dictset_value = MAKE_FUNCTION_flet_core$floating_action_button$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$floating_action_button$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[106], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$floating_action_button$$$function__3__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$floating_action_button$$$function__4__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[109], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
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
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[111]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 162;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__5_text();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__5_text();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[3]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 166;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__6_text();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 166;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[113], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
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
            tmp_called_value_4 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[111]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 171;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__7_icon();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 171;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__7_icon();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 171;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_6;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[4]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__8_icon();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 175;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[113], tmp_args_element_value_6);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_8;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
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
            tmp_called_value_6 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[111]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 180;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__9_bgcolor();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 180;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__9_bgcolor();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 180;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_9;
            tmp_called_instance_3 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[5]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__10_bgcolor();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 184;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[113], tmp_args_element_value_9);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_11;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
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
            tmp_called_value_8 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[111]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 189;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__11_url();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 189;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__11_url();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 189;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_12;
            tmp_called_instance_4 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[10]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__12_url();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 193;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[113], tmp_args_element_value_12);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_14;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
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
            tmp_called_value_10 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[111]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 198;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__13_url_target();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 198;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__13_url_target();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 198;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_15;
            tmp_called_instance_5 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[11]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__14_url_target();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 202;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[113], tmp_args_element_value_15);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_17;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
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
            tmp_called_value_12 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[111]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 207;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__15_on_click();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 207;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__15_on_click();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 207;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_18;
            tmp_called_instance_6 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[12]);

            if (unlikely(tmp_called_instance_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__16_on_click();

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 211;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[113], tmp_args_element_value_18);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_19;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
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
            tmp_called_value_14 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[111]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 216;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[119];
            tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 217;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[53]);

            if (tmp_subscript_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_subscript_value_18 == NULL)) {
                        tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_subscript_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);
                        Py_DECREF(tmp_expression_value_22);

                        exception_lineno = 217;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_22);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 217;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__17_content(tmp_annotations_2);

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 216;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[119];
            tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 217;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[53]);

            if (tmp_subscript_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_subscript_value_19 == NULL)) {
                        tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_subscript_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_23);

                        exception_lineno = 217;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_23);
            Py_DECREF(tmp_subscript_value_19);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__17_content(tmp_annotations_3);

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 216;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_20;
            tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[6]);

            if (unlikely(tmp_expression_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[113]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[121];
            tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 221;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[53]);

            if (tmp_subscript_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[53]);

                    if (unlikely(tmp_subscript_value_20 == NULL)) {
                        tmp_subscript_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                    }

                    if (tmp_subscript_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_expression_value_25);

                        exception_lineno = 221;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_25);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 221;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__18_content(tmp_annotations_4);

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 220;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_22;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
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
            tmp_called_value_17 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[111]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 225;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[119];
            tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 226;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[86]);

            if (tmp_subscript_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_21 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_26);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 226;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__19_autofocus(tmp_annotations_5);

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 225;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[119];
            tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 226;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_22 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[86]);

            if (tmp_subscript_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_22 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_27);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__19_autofocus(tmp_annotations_6);

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 225;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_23;
            tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[7]);

            if (unlikely(tmp_expression_value_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 229;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[113]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_7 = mod_consts[121];
            tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 230;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[86]);

            if (tmp_subscript_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_23 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_23);
            Py_DECREF(tmp_expression_value_29);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);

                exception_lineno = 230;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__20_autofocus(tmp_annotations_7);

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 229;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_25;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
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
            tmp_called_value_20 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[111]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 234;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[119];
            tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);

                        exception_lineno = 235;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_24 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[48]);

            if (tmp_subscript_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[48]);

                    if (unlikely(tmp_subscript_value_24 == NULL)) {
                        tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                    }

                    if (tmp_subscript_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);
                        Py_DECREF(tmp_expression_value_30);

                        exception_lineno = 235;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_30);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_20);

                exception_lineno = 235;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__21_shape(tmp_annotations_8);

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 234;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[119];
            tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 235;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_25 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[48]);

            if (tmp_subscript_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[48]);

                    if (unlikely(tmp_subscript_value_25 == NULL)) {
                        tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                    }

                    if (tmp_subscript_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_31);

                        exception_lineno = 235;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_25);
            Py_DECREF(tmp_expression_value_31);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__21_shape(tmp_annotations_9);

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 234;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_26;
            tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[8]);

            if (unlikely(tmp_expression_value_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[113]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[121];
            tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 239;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_26 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[48]);

            if (tmp_subscript_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[48]);

                    if (unlikely(tmp_subscript_value_26 == NULL)) {
                        tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
                    }

                    if (tmp_subscript_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_expression_value_33);

                        exception_lineno = 239;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_33);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 239;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__22_shape(tmp_annotations_10);

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 238;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_28;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
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
            tmp_called_value_23 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[111]);

            if (unlikely(tmp_called_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[111]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 243;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_11 = mod_consts[119];
            tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_34 == NULL)) {
                        tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);

                        exception_lineno = 244;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_34);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_27 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[86]);

            if (tmp_subscript_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_27 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_34);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__23_mini(tmp_annotations_11);

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 243;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_24 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_12 = mod_consts[119];
            tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 244;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[86]);

            if (tmp_subscript_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_28 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_35);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__23_mini(tmp_annotations_12);

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 243;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_29;
            tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[9]);

            if (unlikely(tmp_expression_value_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[113]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_13 = mod_consts[121];
            tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[44]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);

                        exception_lineno = 248;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_29 = PyObject_GetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[86]);

            if (tmp_subscript_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_29 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$floating_action_button$$$function__24_mini(tmp_annotations_13);

            frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7958d1f9503875b4359b8e8269a57e8c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7958d1f9503875b4359b8e8269a57e8c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7958d1f9503875b4359b8e8269a57e8c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7958d1f9503875b4359b8e8269a57e8c_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_7958d1f9503875b4359b8e8269a57e8c_2);

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


                exception_lineno = 16;

                goto try_except_handler_6;
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
        tmp_res = PyObject_SetItem(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16, mod_consts[125], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_26 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[66];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_d15dc9587ead5f82a66acf0d30486fbb->m_frame.f_lineno = 16;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_26, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_27);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_26 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16);
        locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16 = NULL;
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

        Py_DECREF(locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16);
        locals_flet_core$floating_action_button$$$class__1_FloatingActionButton_16 = NULL;
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
        exception_lineno = 16;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_26);
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
        exception_tb = MAKE_TRACEBACK(frame_d15dc9587ead5f82a66acf0d30486fbb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d15dc9587ead5f82a66acf0d30486fbb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d15dc9587ead5f82a66acf0d30486fbb, exception_lineno);
    }



    assertFrameObject(frame_d15dc9587ead5f82a66acf0d30486fbb);

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
    PGO_onModuleExit("flet_core.floating_action_button", false);

    Py_INCREF(module_flet_core$floating_action_button);
    return module_flet_core$floating_action_button;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$floating_action_button, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$floating_action_button", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
