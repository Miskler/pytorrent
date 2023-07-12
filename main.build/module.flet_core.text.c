/* Generated code for Python module 'flet_core.text'
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

/* The "module_flet_core$text" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$text;
PyDictObject *moduledict_flet_core$text;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[207];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[207];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.text"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 207; i++) {
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
void checkModuleConstants_flet_core$text(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 207; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_be2e94af15594d11d77a12fc16d2dee4;
static PyCodeObject *codeobj_70a71c054dc6f0ec6d21efc2f76f20c6;
static PyCodeObject *codeobj_a06cb7f43117837a089faff96559dd57;
static PyCodeObject *codeobj_136b543aeeacbd2d80295ebd12fede96;
static PyCodeObject *codeobj_f87685019735df2c437192e45e37178a;
static PyCodeObject *codeobj_a3e0f0b8dfcd273f2a4b5adb04fb333d;
static PyCodeObject *codeobj_da154813e68c7fc5e755bebe2d4a6910;
static PyCodeObject *codeobj_23743b17604f8cd1fb5de47ed663f70f;
static PyCodeObject *codeobj_8bc0500d99837b874742dd6e1a1b5d4a;
static PyCodeObject *codeobj_40f2d57cc9f008f9bba863417785a5fa;
static PyCodeObject *codeobj_a511dc8fffa30abe2bbddefafb48c7c7;
static PyCodeObject *codeobj_41f424a5ace7e7a4f131d9e7535fced2;
static PyCodeObject *codeobj_05404a754e344fa10c7cd38e8c939680;
static PyCodeObject *codeobj_eb7c8c66bafaa38c7c7a70ea394228cd;
static PyCodeObject *codeobj_8d8563b6eb00cde73552c38ff5b0ed54;
static PyCodeObject *codeobj_34e918f6227e35369d3626476f59b6b2;
static PyCodeObject *codeobj_e2ce7d6cee109cd5925562f43fbc7d75;
static PyCodeObject *codeobj_6c899b27b26dd450a9c56bcae09f86eb;
static PyCodeObject *codeobj_2196678513f3acf0a0bf82b19722f3fd;
static PyCodeObject *codeobj_f19c15302e2adbde6eb5161317e929f3;
static PyCodeObject *codeobj_7e3abd1894a47a0d06a77fc653a9a255;
static PyCodeObject *codeobj_3f696f81a22b8c9ba7f35bd2c314229e;
static PyCodeObject *codeobj_72312a2044a8bc4fd0e256fb3dff2646;
static PyCodeObject *codeobj_0a40818655bef46003b90498b7540a36;
static PyCodeObject *codeobj_0ff593e58b1fabd33e2ffd7b0ee34972;
static PyCodeObject *codeobj_bb45e7f8b313bf311504a1aa3acb0e4c;
static PyCodeObject *codeobj_fa4d5c443321ddb1ab5f0fbed00a5ae7;
static PyCodeObject *codeobj_cf30e3b16cda6310a7735c75dcf94336;
static PyCodeObject *codeobj_6b79d3c289de383cf67227e6dc8349bf;
static PyCodeObject *codeobj_2da11f89dbb99e148ee0a8d5a5121633;
static PyCodeObject *codeobj_9203cc80626b05132228861d5d3fe59e;
static PyCodeObject *codeobj_86ed0d64f387be4f56d263ed9941efac;
static PyCodeObject *codeobj_d244a3ee711e1f6c2194478091d25783;
static PyCodeObject *codeobj_3ac6623c186df30b7ee0d710f5d75618;
static PyCodeObject *codeobj_ebdfb2b149a3a3f3612c1ec5118d31e7;
static PyCodeObject *codeobj_fe70a8444bad86ebf93c4f9a4da26c3b;
static PyCodeObject *codeobj_97a8e3058309ec305e75231d9cd56e1e;
static PyCodeObject *codeobj_91e262871e14a3a11f74450b7918f185;
static PyCodeObject *codeobj_be1d31da4d052feda4e7ec380ca50c92;
static PyCodeObject *codeobj_39f77170329cb652f6a01cc0c29031fc;
static PyCodeObject *codeobj_0a7b6a9fe1ad0ad74549f692ef471ca6;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[50]; CHECK_OBJECT(module_filename_obj);
    codeobj_be2e94af15594d11d77a12fc16d2dee4 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[200], mod_consts[200], NULL, NULL, 0, 0, 0);
    codeobj_70a71c054dc6f0ec6d21efc2f76f20c6 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[201], NULL, 0, 0, 0);
    codeobj_a06cb7f43117837a089faff96559dd57 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[201], NULL, 0, 0, 0);
    codeobj_136b543aeeacbd2d80295ebd12fede96 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[201], NULL, 0, 0, 0);
    codeobj_f87685019735df2c437192e45e37178a = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[202], NULL, 42, 0, 0);
    codeobj_a3e0f0b8dfcd273f2a4b5adb04fb333d = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[195], mod_consts[195], mod_consts[203], NULL, 2, 0, 0);
    codeobj_da154813e68c7fc5e755bebe2d4a6910 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[188], mod_consts[188], mod_consts[203], NULL, 2, 0, 0);
    codeobj_23743b17604f8cd1fb5de47ed663f70f = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[203], NULL, 2, 0, 0);
    codeobj_8bc0500d99837b874742dd6e1a1b5d4a = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[185], mod_consts[185], mod_consts[203], NULL, 2, 0, 0);
    codeobj_40f2d57cc9f008f9bba863417785a5fa = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[204], NULL, 1, 0, 0);
    codeobj_a511dc8fffa30abe2bbddefafb48c7c7 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[205], NULL, 1, 0, 0);
    codeobj_41f424a5ace7e7a4f131d9e7535fced2 = MAKE_CODE_OBJECT(module_filename_obj, 350, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[205], NULL, 1, 0, 0);
    codeobj_05404a754e344fa10c7cd38e8c939680 = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[203], NULL, 2, 0, 0);
    codeobj_eb7c8c66bafaa38c7c7a70ea394228cd = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[205], NULL, 1, 0, 0);
    codeobj_8d8563b6eb00cde73552c38ff5b0ed54 = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[203], NULL, 2, 0, 0);
    codeobj_34e918f6227e35369d3626476f59b6b2 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[205], NULL, 1, 0, 0);
    codeobj_e2ce7d6cee109cd5925562f43fbc7d75 = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[203], NULL, 2, 0, 0);
    codeobj_6c899b27b26dd450a9c56bcae09f86eb = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[205], NULL, 1, 0, 0);
    codeobj_2196678513f3acf0a0bf82b19722f3fd = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[203], NULL, 2, 0, 0);
    codeobj_f19c15302e2adbde6eb5161317e929f3 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[205], NULL, 1, 0, 0);
    codeobj_7e3abd1894a47a0d06a77fc653a9a255 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[203], NULL, 2, 0, 0);
    codeobj_3f696f81a22b8c9ba7f35bd2c314229e = MAKE_CODE_OBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[205], NULL, 1, 0, 0);
    codeobj_72312a2044a8bc4fd0e256fb3dff2646 = MAKE_CODE_OBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[203], NULL, 2, 0, 0);
    codeobj_0a40818655bef46003b90498b7540a36 = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[205], NULL, 1, 0, 0);
    codeobj_0ff593e58b1fabd33e2ffd7b0ee34972 = MAKE_CODE_OBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[203], NULL, 2, 0, 0);
    codeobj_bb45e7f8b313bf311504a1aa3acb0e4c = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[205], NULL, 1, 0, 0);
    codeobj_fa4d5c443321ddb1ab5f0fbed00a5ae7 = MAKE_CODE_OBJECT(module_filename_obj, 311, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[203], NULL, 2, 0, 0);
    codeobj_cf30e3b16cda6310a7735c75dcf94336 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[205], NULL, 1, 0, 0);
    codeobj_6b79d3c289de383cf67227e6dc8349bf = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[203], NULL, 2, 0, 0);
    codeobj_2da11f89dbb99e148ee0a8d5a5121633 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[205], NULL, 1, 0, 0);
    codeobj_9203cc80626b05132228861d5d3fe59e = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[203], NULL, 2, 0, 0);
    codeobj_86ed0d64f387be4f56d263ed9941efac = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[205], NULL, 1, 0, 0);
    codeobj_d244a3ee711e1f6c2194478091d25783 = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[203], NULL, 2, 0, 0);
    codeobj_3ac6623c186df30b7ee0d710f5d75618 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[205], NULL, 1, 0, 0);
    codeobj_ebdfb2b149a3a3f3612c1ec5118d31e7 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[203], NULL, 2, 0, 0);
    codeobj_fe70a8444bad86ebf93c4f9a4da26c3b = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[205], NULL, 1, 0, 0);
    codeobj_97a8e3058309ec305e75231d9cd56e1e = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[203], NULL, 2, 0, 0);
    codeobj_91e262871e14a3a11f74450b7918f185 = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[205], NULL, 1, 0, 0);
    codeobj_be1d31da4d052feda4e7ec380ca50c92 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[203], NULL, 2, 0, 0);
    codeobj_39f77170329cb652f6a01cc0c29031fc = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[205], NULL, 1, 0, 0);
    codeobj_0a7b6a9fe1ad0ad74549f692ef471ca6 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[203], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__10___set_text_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__11_font_family();


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__12_font_family();


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__13_size(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__14_size(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__15_weight(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__16_weight(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__17___set_weight(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__18_style(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__19_style(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__20___set_style(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__21_italic(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__22_italic(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__23_no_wrap(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__24_no_wrap(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__25_selectable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__26_selectable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__27_max_lines(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__28_max_lines(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__29_overflow(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__30_overflow(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__31___set_overflow(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__32_color();


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__33_color();


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__34_bgcolor();


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__35_bgcolor();


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__36_semantics_label();


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__37_semantics_label();


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__3__get_children();


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__4_value(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__5_value(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__6_spans(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__7_spans(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__8_text_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$text$$$function__9_text_align(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$text$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
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
    PyObject *par_spans = python_pars[28];
    PyObject *par_text_align = python_pars[29];
    PyObject *par_font_family = python_pars[30];
    PyObject *par_size = python_pars[31];
    PyObject *par_weight = python_pars[32];
    PyObject *par_italic = python_pars[33];
    PyObject *par_style = python_pars[34];
    PyObject *par_max_lines = python_pars[35];
    PyObject *par_overflow = python_pars[36];
    PyObject *par_selectable = python_pars[37];
    PyObject *par_no_wrap = python_pars[38];
    PyObject *par_color = python_pars[39];
    PyObject *par_bgcolor = python_pars[40];
    PyObject *par_semantics_label = python_pars[41];
    struct Nuitka_FrameObject *frame_f87685019735df2c437192e45e37178a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f87685019735df2c437192e45e37178a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f87685019735df2c437192e45e37178a)) {
        Py_XDECREF(cache_frame_f87685019735df2c437192e45e37178a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f87685019735df2c437192e45e37178a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f87685019735df2c437192e45e37178a = MAKE_FUNCTION_FRAME(codeobj_f87685019735df2c437192e45e37178a, module_flet_core$text, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f87685019735df2c437192e45e37178a->m_type_description == NULL);
    frame_f87685019735df2c437192e45e37178a = cache_frame_f87685019735df2c437192e45e37178a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f87685019735df2c437192e45e37178a);
    assert(Py_REFCNT(frame_f87685019735df2c437192e45e37178a) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
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
        frame_f87685019735df2c437192e45e37178a->m_frame.f_lineno = 149;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[26] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1, tmp_kw_call_dict_value_24_1, tmp_kw_call_dict_value_25_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_spans);
        tmp_assattr_value_2 = par_spans;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_text_align);
        tmp_assattr_value_3 = par_text_align;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_font_family);
        tmp_assattr_value_4 = par_font_family;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_size);
        tmp_assattr_value_5 = par_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_weight);
        tmp_assattr_value_6 = par_weight;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_italic);
        tmp_assattr_value_7 = par_italic;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_no_wrap);
        tmp_assattr_value_8 = par_no_wrap;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[10], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_style);
        tmp_assattr_value_9 = par_style;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[11], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_max_lines);
        tmp_assattr_value_10 = par_max_lines;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[12], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_overflow);
        tmp_assattr_value_11 = par_overflow;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[13], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_selectable);
        tmp_assattr_value_12 = par_selectable;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[14], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_color);
        tmp_assattr_value_13 = par_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[15], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(par_bgcolor);
        tmp_assattr_value_14 = par_bgcolor;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[16], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(par_semantics_label);
        tmp_assattr_value_15 = par_semantics_label;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[17], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f87685019735df2c437192e45e37178a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f87685019735df2c437192e45e37178a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f87685019735df2c437192e45e37178a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f87685019735df2c437192e45e37178a,
        type_description_1,
        par_self,
        par_value,
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
        par_spans,
        par_text_align,
        par_font_family,
        par_size,
        par_weight,
        par_italic,
        par_style,
        par_max_lines,
        par_overflow,
        par_selectable,
        par_no_wrap,
        par_color,
        par_bgcolor,
        par_semantics_label
    );


    // Release cached frame if used for exception.
    if (frame_f87685019735df2c437192e45e37178a == cache_frame_f87685019735df2c437192e45e37178a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f87685019735df2c437192e45e37178a);
        cache_frame_f87685019735df2c437192e45e37178a = NULL;
    }

    assertFrameObject(frame_f87685019735df2c437192e45e37178a);

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
    CHECK_OBJECT(par_spans);
    Py_DECREF(par_spans);
    CHECK_OBJECT(par_text_align);
    Py_DECREF(par_text_align);
    CHECK_OBJECT(par_font_family);
    Py_DECREF(par_font_family);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_italic);
    Py_DECREF(par_italic);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    CHECK_OBJECT(par_max_lines);
    Py_DECREF(par_max_lines);
    CHECK_OBJECT(par_overflow);
    Py_DECREF(par_overflow);
    CHECK_OBJECT(par_selectable);
    Py_DECREF(par_selectable);
    CHECK_OBJECT(par_no_wrap);
    Py_DECREF(par_no_wrap);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_semantics_label);
    Py_DECREF(par_semantics_label);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
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
    CHECK_OBJECT(par_spans);
    Py_DECREF(par_spans);
    CHECK_OBJECT(par_text_align);
    Py_DECREF(par_text_align);
    CHECK_OBJECT(par_font_family);
    Py_DECREF(par_font_family);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_italic);
    Py_DECREF(par_italic);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    CHECK_OBJECT(par_max_lines);
    Py_DECREF(par_max_lines);
    CHECK_OBJECT(par_overflow);
    Py_DECREF(par_overflow);
    CHECK_OBJECT(par_selectable);
    Py_DECREF(par_selectable);
    CHECK_OBJECT(par_no_wrap);
    Py_DECREF(par_no_wrap);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_semantics_label);
    Py_DECREF(par_semantics_label);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$text$$$function__3__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_children = NULL;
    struct Nuitka_FrameObject *frame_40f2d57cc9f008f9bba863417785a5fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_40f2d57cc9f008f9bba863417785a5fa = NULL;
    PyObject *tmp_return_value = NULL;
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
    if (isFrameUnusable(cache_frame_40f2d57cc9f008f9bba863417785a5fa)) {
        Py_XDECREF(cache_frame_40f2d57cc9f008f9bba863417785a5fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_40f2d57cc9f008f9bba863417785a5fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_40f2d57cc9f008f9bba863417785a5fa = MAKE_FUNCTION_FRAME(codeobj_40f2d57cc9f008f9bba863417785a5fa, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_40f2d57cc9f008f9bba863417785a5fa->m_type_description == NULL);
    frame_40f2d57cc9f008f9bba863417785a5fa = cache_frame_40f2d57cc9f008f9bba863417785a5fa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_40f2d57cc9f008f9bba863417785a5fa);
    assert(Py_REFCNT(frame_40f2d57cc9f008f9bba863417785a5fa) == 2);

    // Framed code:
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_value_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_children);
        tmp_list_arg_value_1 = var_children;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_value_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_EXTEND_FROM_ITERABLE(tmp_list_arg_value_1, tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_40f2d57cc9f008f9bba863417785a5fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_40f2d57cc9f008f9bba863417785a5fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_40f2d57cc9f008f9bba863417785a5fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_40f2d57cc9f008f9bba863417785a5fa,
        type_description_1,
        par_self,
        var_children
    );


    // Release cached frame if used for exception.
    if (frame_40f2d57cc9f008f9bba863417785a5fa == cache_frame_40f2d57cc9f008f9bba863417785a5fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_40f2d57cc9f008f9bba863417785a5fa);
        cache_frame_40f2d57cc9f008f9bba863417785a5fa = NULL;
    }

    assertFrameObject(frame_40f2d57cc9f008f9bba863417785a5fa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
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


static PyObject *impl_flet_core$text$$$function__4_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_91e262871e14a3a11f74450b7918f185;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_91e262871e14a3a11f74450b7918f185 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_91e262871e14a3a11f74450b7918f185)) {
        Py_XDECREF(cache_frame_91e262871e14a3a11f74450b7918f185);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91e262871e14a3a11f74450b7918f185 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91e262871e14a3a11f74450b7918f185 = MAKE_FUNCTION_FRAME(codeobj_91e262871e14a3a11f74450b7918f185, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_91e262871e14a3a11f74450b7918f185->m_type_description == NULL);
    frame_91e262871e14a3a11f74450b7918f185 = cache_frame_91e262871e14a3a11f74450b7918f185;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_91e262871e14a3a11f74450b7918f185);
    assert(Py_REFCNT(frame_91e262871e14a3a11f74450b7918f185) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_91e262871e14a3a11f74450b7918f185->m_frame.f_lineno = 206;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
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
        exception_tb = MAKE_TRACEBACK(frame_91e262871e14a3a11f74450b7918f185, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91e262871e14a3a11f74450b7918f185->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91e262871e14a3a11f74450b7918f185, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91e262871e14a3a11f74450b7918f185,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_91e262871e14a3a11f74450b7918f185 == cache_frame_91e262871e14a3a11f74450b7918f185) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_91e262871e14a3a11f74450b7918f185);
        cache_frame_91e262871e14a3a11f74450b7918f185 = NULL;
    }

    assertFrameObject(frame_91e262871e14a3a11f74450b7918f185);

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


static PyObject *impl_flet_core$text$$$function__5_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_be1d31da4d052feda4e7ec380ca50c92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be1d31da4d052feda4e7ec380ca50c92 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_be1d31da4d052feda4e7ec380ca50c92)) {
        Py_XDECREF(cache_frame_be1d31da4d052feda4e7ec380ca50c92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be1d31da4d052feda4e7ec380ca50c92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be1d31da4d052feda4e7ec380ca50c92 = MAKE_FUNCTION_FRAME(codeobj_be1d31da4d052feda4e7ec380ca50c92, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be1d31da4d052feda4e7ec380ca50c92->m_type_description == NULL);
    frame_be1d31da4d052feda4e7ec380ca50c92 = cache_frame_be1d31da4d052feda4e7ec380ca50c92;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be1d31da4d052feda4e7ec380ca50c92);
    assert(Py_REFCNT(frame_be1d31da4d052feda4e7ec380ca50c92) == 2);

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
        frame_be1d31da4d052feda4e7ec380ca50c92->m_frame.f_lineno = 210;
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


            exception_lineno = 210;
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
        exception_tb = MAKE_TRACEBACK(frame_be1d31da4d052feda4e7ec380ca50c92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be1d31da4d052feda4e7ec380ca50c92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be1d31da4d052feda4e7ec380ca50c92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be1d31da4d052feda4e7ec380ca50c92,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_be1d31da4d052feda4e7ec380ca50c92 == cache_frame_be1d31da4d052feda4e7ec380ca50c92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be1d31da4d052feda4e7ec380ca50c92);
        cache_frame_be1d31da4d052feda4e7ec380ca50c92 = NULL;
    }

    assertFrameObject(frame_be1d31da4d052feda4e7ec380ca50c92);

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


static PyObject *impl_flet_core$text$$$function__6_spans(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_86ed0d64f387be4f56d263ed9941efac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_86ed0d64f387be4f56d263ed9941efac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_86ed0d64f387be4f56d263ed9941efac)) {
        Py_XDECREF(cache_frame_86ed0d64f387be4f56d263ed9941efac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_86ed0d64f387be4f56d263ed9941efac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_86ed0d64f387be4f56d263ed9941efac = MAKE_FUNCTION_FRAME(codeobj_86ed0d64f387be4f56d263ed9941efac, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_86ed0d64f387be4f56d263ed9941efac->m_type_description == NULL);
    frame_86ed0d64f387be4f56d263ed9941efac = cache_frame_86ed0d64f387be4f56d263ed9941efac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_86ed0d64f387be4f56d263ed9941efac);
    assert(Py_REFCNT(frame_86ed0d64f387be4f56d263ed9941efac) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
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
        exception_tb = MAKE_TRACEBACK(frame_86ed0d64f387be4f56d263ed9941efac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_86ed0d64f387be4f56d263ed9941efac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_86ed0d64f387be4f56d263ed9941efac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_86ed0d64f387be4f56d263ed9941efac,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_86ed0d64f387be4f56d263ed9941efac == cache_frame_86ed0d64f387be4f56d263ed9941efac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_86ed0d64f387be4f56d263ed9941efac);
        cache_frame_86ed0d64f387be4f56d263ed9941efac = NULL;
    }

    assertFrameObject(frame_86ed0d64f387be4f56d263ed9941efac);

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


static PyObject *impl_flet_core$text$$$function__7_spans(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d244a3ee711e1f6c2194478091d25783;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d244a3ee711e1f6c2194478091d25783 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d244a3ee711e1f6c2194478091d25783)) {
        Py_XDECREF(cache_frame_d244a3ee711e1f6c2194478091d25783);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d244a3ee711e1f6c2194478091d25783 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d244a3ee711e1f6c2194478091d25783 = MAKE_FUNCTION_FRAME(codeobj_d244a3ee711e1f6c2194478091d25783, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d244a3ee711e1f6c2194478091d25783->m_type_description == NULL);
    frame_d244a3ee711e1f6c2194478091d25783 = cache_frame_d244a3ee711e1f6c2194478091d25783;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d244a3ee711e1f6c2194478091d25783);
    assert(Py_REFCNT(frame_d244a3ee711e1f6c2194478091d25783) == 2);

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
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d244a3ee711e1f6c2194478091d25783, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d244a3ee711e1f6c2194478091d25783->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d244a3ee711e1f6c2194478091d25783, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d244a3ee711e1f6c2194478091d25783,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d244a3ee711e1f6c2194478091d25783 == cache_frame_d244a3ee711e1f6c2194478091d25783) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d244a3ee711e1f6c2194478091d25783);
        cache_frame_d244a3ee711e1f6c2194478091d25783 = NULL;
    }

    assertFrameObject(frame_d244a3ee711e1f6c2194478091d25783);

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


static PyObject *impl_flet_core$text$$$function__8_text_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fe70a8444bad86ebf93c4f9a4da26c3b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fe70a8444bad86ebf93c4f9a4da26c3b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fe70a8444bad86ebf93c4f9a4da26c3b)) {
        Py_XDECREF(cache_frame_fe70a8444bad86ebf93c4f9a4da26c3b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fe70a8444bad86ebf93c4f9a4da26c3b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fe70a8444bad86ebf93c4f9a4da26c3b = MAKE_FUNCTION_FRAME(codeobj_fe70a8444bad86ebf93c4f9a4da26c3b, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fe70a8444bad86ebf93c4f9a4da26c3b->m_type_description == NULL);
    frame_fe70a8444bad86ebf93c4f9a4da26c3b = cache_frame_fe70a8444bad86ebf93c4f9a4da26c3b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fe70a8444bad86ebf93c4f9a4da26c3b);
    assert(Py_REFCNT(frame_fe70a8444bad86ebf93c4f9a4da26c3b) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
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
        exception_tb = MAKE_TRACEBACK(frame_fe70a8444bad86ebf93c4f9a4da26c3b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe70a8444bad86ebf93c4f9a4da26c3b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe70a8444bad86ebf93c4f9a4da26c3b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fe70a8444bad86ebf93c4f9a4da26c3b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fe70a8444bad86ebf93c4f9a4da26c3b == cache_frame_fe70a8444bad86ebf93c4f9a4da26c3b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fe70a8444bad86ebf93c4f9a4da26c3b);
        cache_frame_fe70a8444bad86ebf93c4f9a4da26c3b = NULL;
    }

    assertFrameObject(frame_fe70a8444bad86ebf93c4f9a4da26c3b);

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


static PyObject *impl_flet_core$text$$$function__9_text_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_97a8e3058309ec305e75231d9cd56e1e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_97a8e3058309ec305e75231d9cd56e1e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_97a8e3058309ec305e75231d9cd56e1e)) {
        Py_XDECREF(cache_frame_97a8e3058309ec305e75231d9cd56e1e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97a8e3058309ec305e75231d9cd56e1e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97a8e3058309ec305e75231d9cd56e1e = MAKE_FUNCTION_FRAME(codeobj_97a8e3058309ec305e75231d9cd56e1e, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97a8e3058309ec305e75231d9cd56e1e->m_type_description == NULL);
    frame_97a8e3058309ec305e75231d9cd56e1e = cache_frame_97a8e3058309ec305e75231d9cd56e1e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_97a8e3058309ec305e75231d9cd56e1e);
    assert(Py_REFCNT(frame_97a8e3058309ec305e75231d9cd56e1e) == 2);

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


            exception_lineno = 228;
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
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[24];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_97a8e3058309ec305e75231d9cd56e1e->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
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
        frame_97a8e3058309ec305e75231d9cd56e1e->m_frame.f_lineno = 232;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[25], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
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
        exception_tb = MAKE_TRACEBACK(frame_97a8e3058309ec305e75231d9cd56e1e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97a8e3058309ec305e75231d9cd56e1e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97a8e3058309ec305e75231d9cd56e1e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97a8e3058309ec305e75231d9cd56e1e,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_97a8e3058309ec305e75231d9cd56e1e == cache_frame_97a8e3058309ec305e75231d9cd56e1e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97a8e3058309ec305e75231d9cd56e1e);
        cache_frame_97a8e3058309ec305e75231d9cd56e1e = NULL;
    }

    assertFrameObject(frame_97a8e3058309ec305e75231d9cd56e1e);

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


static PyObject *impl_flet_core$text$$$function__10___set_text_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_23743b17604f8cd1fb5de47ed663f70f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_23743b17604f8cd1fb5de47ed663f70f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_23743b17604f8cd1fb5de47ed663f70f)) {
        Py_XDECREF(cache_frame_23743b17604f8cd1fb5de47ed663f70f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_23743b17604f8cd1fb5de47ed663f70f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_23743b17604f8cd1fb5de47ed663f70f = MAKE_FUNCTION_FRAME(codeobj_23743b17604f8cd1fb5de47ed663f70f, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_23743b17604f8cd1fb5de47ed663f70f->m_type_description == NULL);
    frame_23743b17604f8cd1fb5de47ed663f70f = cache_frame_23743b17604f8cd1fb5de47ed663f70f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_23743b17604f8cd1fb5de47ed663f70f);
    assert(Py_REFCNT(frame_23743b17604f8cd1fb5de47ed663f70f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[24];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_23743b17604f8cd1fb5de47ed663f70f->m_frame.f_lineno = 235;
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


            exception_lineno = 235;
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
        exception_tb = MAKE_TRACEBACK(frame_23743b17604f8cd1fb5de47ed663f70f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23743b17604f8cd1fb5de47ed663f70f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23743b17604f8cd1fb5de47ed663f70f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_23743b17604f8cd1fb5de47ed663f70f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_23743b17604f8cd1fb5de47ed663f70f == cache_frame_23743b17604f8cd1fb5de47ed663f70f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_23743b17604f8cd1fb5de47ed663f70f);
        cache_frame_23743b17604f8cd1fb5de47ed663f70f = NULL;
    }

    assertFrameObject(frame_23743b17604f8cd1fb5de47ed663f70f);

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


static PyObject *impl_flet_core$text$$$function__11_font_family(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_34e918f6227e35369d3626476f59b6b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_34e918f6227e35369d3626476f59b6b2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_34e918f6227e35369d3626476f59b6b2)) {
        Py_XDECREF(cache_frame_34e918f6227e35369d3626476f59b6b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_34e918f6227e35369d3626476f59b6b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_34e918f6227e35369d3626476f59b6b2 = MAKE_FUNCTION_FRAME(codeobj_34e918f6227e35369d3626476f59b6b2, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_34e918f6227e35369d3626476f59b6b2->m_type_description == NULL);
    frame_34e918f6227e35369d3626476f59b6b2 = cache_frame_34e918f6227e35369d3626476f59b6b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_34e918f6227e35369d3626476f59b6b2);
    assert(Py_REFCNT(frame_34e918f6227e35369d3626476f59b6b2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_34e918f6227e35369d3626476f59b6b2->m_frame.f_lineno = 240;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[26], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
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
        exception_tb = MAKE_TRACEBACK(frame_34e918f6227e35369d3626476f59b6b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_34e918f6227e35369d3626476f59b6b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_34e918f6227e35369d3626476f59b6b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_34e918f6227e35369d3626476f59b6b2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_34e918f6227e35369d3626476f59b6b2 == cache_frame_34e918f6227e35369d3626476f59b6b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_34e918f6227e35369d3626476f59b6b2);
        cache_frame_34e918f6227e35369d3626476f59b6b2 = NULL;
    }

    assertFrameObject(frame_34e918f6227e35369d3626476f59b6b2);

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


static PyObject *impl_flet_core$text$$$function__12_font_family(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e2ce7d6cee109cd5925562f43fbc7d75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e2ce7d6cee109cd5925562f43fbc7d75 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e2ce7d6cee109cd5925562f43fbc7d75)) {
        Py_XDECREF(cache_frame_e2ce7d6cee109cd5925562f43fbc7d75);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e2ce7d6cee109cd5925562f43fbc7d75 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e2ce7d6cee109cd5925562f43fbc7d75 = MAKE_FUNCTION_FRAME(codeobj_e2ce7d6cee109cd5925562f43fbc7d75, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e2ce7d6cee109cd5925562f43fbc7d75->m_type_description == NULL);
    frame_e2ce7d6cee109cd5925562f43fbc7d75 = cache_frame_e2ce7d6cee109cd5925562f43fbc7d75;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e2ce7d6cee109cd5925562f43fbc7d75);
    assert(Py_REFCNT(frame_e2ce7d6cee109cd5925562f43fbc7d75) == 2);

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
        frame_e2ce7d6cee109cd5925562f43fbc7d75->m_frame.f_lineno = 244;
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


            exception_lineno = 244;
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
        exception_tb = MAKE_TRACEBACK(frame_e2ce7d6cee109cd5925562f43fbc7d75, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e2ce7d6cee109cd5925562f43fbc7d75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e2ce7d6cee109cd5925562f43fbc7d75, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e2ce7d6cee109cd5925562f43fbc7d75,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e2ce7d6cee109cd5925562f43fbc7d75 == cache_frame_e2ce7d6cee109cd5925562f43fbc7d75) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e2ce7d6cee109cd5925562f43fbc7d75);
        cache_frame_e2ce7d6cee109cd5925562f43fbc7d75 = NULL;
    }

    assertFrameObject(frame_e2ce7d6cee109cd5925562f43fbc7d75);

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


static PyObject *impl_flet_core$text$$$function__13_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2da11f89dbb99e148ee0a8d5a5121633;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2da11f89dbb99e148ee0a8d5a5121633 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2da11f89dbb99e148ee0a8d5a5121633)) {
        Py_XDECREF(cache_frame_2da11f89dbb99e148ee0a8d5a5121633);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2da11f89dbb99e148ee0a8d5a5121633 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2da11f89dbb99e148ee0a8d5a5121633 = MAKE_FUNCTION_FRAME(codeobj_2da11f89dbb99e148ee0a8d5a5121633, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2da11f89dbb99e148ee0a8d5a5121633->m_type_description == NULL);
    frame_2da11f89dbb99e148ee0a8d5a5121633 = cache_frame_2da11f89dbb99e148ee0a8d5a5121633;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2da11f89dbb99e148ee0a8d5a5121633);
    assert(Py_REFCNT(frame_2da11f89dbb99e148ee0a8d5a5121633) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_2da11f89dbb99e148ee0a8d5a5121633->m_frame.f_lineno = 249;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
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
        exception_tb = MAKE_TRACEBACK(frame_2da11f89dbb99e148ee0a8d5a5121633, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2da11f89dbb99e148ee0a8d5a5121633->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2da11f89dbb99e148ee0a8d5a5121633, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2da11f89dbb99e148ee0a8d5a5121633,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2da11f89dbb99e148ee0a8d5a5121633 == cache_frame_2da11f89dbb99e148ee0a8d5a5121633) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2da11f89dbb99e148ee0a8d5a5121633);
        cache_frame_2da11f89dbb99e148ee0a8d5a5121633 = NULL;
    }

    assertFrameObject(frame_2da11f89dbb99e148ee0a8d5a5121633);

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


static PyObject *impl_flet_core$text$$$function__14_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_9203cc80626b05132228861d5d3fe59e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9203cc80626b05132228861d5d3fe59e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9203cc80626b05132228861d5d3fe59e)) {
        Py_XDECREF(cache_frame_9203cc80626b05132228861d5d3fe59e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9203cc80626b05132228861d5d3fe59e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9203cc80626b05132228861d5d3fe59e = MAKE_FUNCTION_FRAME(codeobj_9203cc80626b05132228861d5d3fe59e, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9203cc80626b05132228861d5d3fe59e->m_type_description == NULL);
    frame_9203cc80626b05132228861d5d3fe59e = cache_frame_9203cc80626b05132228861d5d3fe59e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9203cc80626b05132228861d5d3fe59e);
    assert(Py_REFCNT(frame_9203cc80626b05132228861d5d3fe59e) == 2);

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
        frame_9203cc80626b05132228861d5d3fe59e->m_frame.f_lineno = 253;
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


            exception_lineno = 253;
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
        exception_tb = MAKE_TRACEBACK(frame_9203cc80626b05132228861d5d3fe59e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9203cc80626b05132228861d5d3fe59e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9203cc80626b05132228861d5d3fe59e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9203cc80626b05132228861d5d3fe59e,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_9203cc80626b05132228861d5d3fe59e == cache_frame_9203cc80626b05132228861d5d3fe59e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9203cc80626b05132228861d5d3fe59e);
        cache_frame_9203cc80626b05132228861d5d3fe59e = NULL;
    }

    assertFrameObject(frame_9203cc80626b05132228861d5d3fe59e);

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


static PyObject *impl_flet_core$text$$$function__15_weight(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_39f77170329cb652f6a01cc0c29031fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_39f77170329cb652f6a01cc0c29031fc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_39f77170329cb652f6a01cc0c29031fc)) {
        Py_XDECREF(cache_frame_39f77170329cb652f6a01cc0c29031fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39f77170329cb652f6a01cc0c29031fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39f77170329cb652f6a01cc0c29031fc = MAKE_FUNCTION_FRAME(codeobj_39f77170329cb652f6a01cc0c29031fc, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_39f77170329cb652f6a01cc0c29031fc->m_type_description == NULL);
    frame_39f77170329cb652f6a01cc0c29031fc = cache_frame_39f77170329cb652f6a01cc0c29031fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_39f77170329cb652f6a01cc0c29031fc);
    assert(Py_REFCNT(frame_39f77170329cb652f6a01cc0c29031fc) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
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
        exception_tb = MAKE_TRACEBACK(frame_39f77170329cb652f6a01cc0c29031fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39f77170329cb652f6a01cc0c29031fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39f77170329cb652f6a01cc0c29031fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39f77170329cb652f6a01cc0c29031fc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_39f77170329cb652f6a01cc0c29031fc == cache_frame_39f77170329cb652f6a01cc0c29031fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_39f77170329cb652f6a01cc0c29031fc);
        cache_frame_39f77170329cb652f6a01cc0c29031fc = NULL;
    }

    assertFrameObject(frame_39f77170329cb652f6a01cc0c29031fc);

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


static PyObject *impl_flet_core$text$$$function__16_weight(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_0a7b6a9fe1ad0ad74549f692ef471ca6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0a7b6a9fe1ad0ad74549f692ef471ca6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0a7b6a9fe1ad0ad74549f692ef471ca6)) {
        Py_XDECREF(cache_frame_0a7b6a9fe1ad0ad74549f692ef471ca6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a7b6a9fe1ad0ad74549f692ef471ca6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a7b6a9fe1ad0ad74549f692ef471ca6 = MAKE_FUNCTION_FRAME(codeobj_0a7b6a9fe1ad0ad74549f692ef471ca6, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0a7b6a9fe1ad0ad74549f692ef471ca6->m_type_description == NULL);
    frame_0a7b6a9fe1ad0ad74549f692ef471ca6 = cache_frame_0a7b6a9fe1ad0ad74549f692ef471ca6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0a7b6a9fe1ad0ad74549f692ef471ca6);
    assert(Py_REFCNT(frame_0a7b6a9fe1ad0ad74549f692ef471ca6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[29], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
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
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[8];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 264;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0a7b6a9fe1ad0ad74549f692ef471ca6->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
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
        frame_0a7b6a9fe1ad0ad74549f692ef471ca6->m_frame.f_lineno = 266;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[31], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
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
        exception_tb = MAKE_TRACEBACK(frame_0a7b6a9fe1ad0ad74549f692ef471ca6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a7b6a9fe1ad0ad74549f692ef471ca6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a7b6a9fe1ad0ad74549f692ef471ca6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a7b6a9fe1ad0ad74549f692ef471ca6,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_0a7b6a9fe1ad0ad74549f692ef471ca6 == cache_frame_0a7b6a9fe1ad0ad74549f692ef471ca6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0a7b6a9fe1ad0ad74549f692ef471ca6);
        cache_frame_0a7b6a9fe1ad0ad74549f692ef471ca6 = NULL;
    }

    assertFrameObject(frame_0a7b6a9fe1ad0ad74549f692ef471ca6);

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


static PyObject *impl_flet_core$text$$$function__17___set_weight(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_8bc0500d99837b874742dd6e1a1b5d4a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8bc0500d99837b874742dd6e1a1b5d4a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8bc0500d99837b874742dd6e1a1b5d4a)) {
        Py_XDECREF(cache_frame_8bc0500d99837b874742dd6e1a1b5d4a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8bc0500d99837b874742dd6e1a1b5d4a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8bc0500d99837b874742dd6e1a1b5d4a = MAKE_FUNCTION_FRAME(codeobj_8bc0500d99837b874742dd6e1a1b5d4a, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8bc0500d99837b874742dd6e1a1b5d4a->m_type_description == NULL);
    frame_8bc0500d99837b874742dd6e1a1b5d4a = cache_frame_8bc0500d99837b874742dd6e1a1b5d4a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8bc0500d99837b874742dd6e1a1b5d4a);
    assert(Py_REFCNT(frame_8bc0500d99837b874742dd6e1a1b5d4a) == 2);

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
        frame_8bc0500d99837b874742dd6e1a1b5d4a->m_frame.f_lineno = 269;
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
        exception_tb = MAKE_TRACEBACK(frame_8bc0500d99837b874742dd6e1a1b5d4a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8bc0500d99837b874742dd6e1a1b5d4a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8bc0500d99837b874742dd6e1a1b5d4a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8bc0500d99837b874742dd6e1a1b5d4a,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8bc0500d99837b874742dd6e1a1b5d4a == cache_frame_8bc0500d99837b874742dd6e1a1b5d4a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8bc0500d99837b874742dd6e1a1b5d4a);
        cache_frame_8bc0500d99837b874742dd6e1a1b5d4a = NULL;
    }

    assertFrameObject(frame_8bc0500d99837b874742dd6e1a1b5d4a);

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


static PyObject *impl_flet_core$text$$$function__18_style(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3ac6623c186df30b7ee0d710f5d75618;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3ac6623c186df30b7ee0d710f5d75618 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3ac6623c186df30b7ee0d710f5d75618)) {
        Py_XDECREF(cache_frame_3ac6623c186df30b7ee0d710f5d75618);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ac6623c186df30b7ee0d710f5d75618 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ac6623c186df30b7ee0d710f5d75618 = MAKE_FUNCTION_FRAME(codeobj_3ac6623c186df30b7ee0d710f5d75618, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ac6623c186df30b7ee0d710f5d75618->m_type_description == NULL);
    frame_3ac6623c186df30b7ee0d710f5d75618 = cache_frame_3ac6623c186df30b7ee0d710f5d75618;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3ac6623c186df30b7ee0d710f5d75618);
    assert(Py_REFCNT(frame_3ac6623c186df30b7ee0d710f5d75618) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
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
        exception_tb = MAKE_TRACEBACK(frame_3ac6623c186df30b7ee0d710f5d75618, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ac6623c186df30b7ee0d710f5d75618->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ac6623c186df30b7ee0d710f5d75618, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ac6623c186df30b7ee0d710f5d75618,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3ac6623c186df30b7ee0d710f5d75618 == cache_frame_3ac6623c186df30b7ee0d710f5d75618) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ac6623c186df30b7ee0d710f5d75618);
        cache_frame_3ac6623c186df30b7ee0d710f5d75618 = NULL;
    }

    assertFrameObject(frame_3ac6623c186df30b7ee0d710f5d75618);

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


static PyObject *impl_flet_core$text$$$function__19_style(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_ebdfb2b149a3a3f3612c1ec5118d31e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ebdfb2b149a3a3f3612c1ec5118d31e7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ebdfb2b149a3a3f3612c1ec5118d31e7)) {
        Py_XDECREF(cache_frame_ebdfb2b149a3a3f3612c1ec5118d31e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ebdfb2b149a3a3f3612c1ec5118d31e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ebdfb2b149a3a3f3612c1ec5118d31e7 = MAKE_FUNCTION_FRAME(codeobj_ebdfb2b149a3a3f3612c1ec5118d31e7, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ebdfb2b149a3a3f3612c1ec5118d31e7->m_type_description == NULL);
    frame_ebdfb2b149a3a3f3612c1ec5118d31e7 = cache_frame_ebdfb2b149a3a3f3612c1ec5118d31e7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ebdfb2b149a3a3f3612c1ec5118d31e7);
    assert(Py_REFCNT(frame_ebdfb2b149a3a3f3612c1ec5118d31e7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[32], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
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
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[11];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ebdfb2b149a3a3f3612c1ec5118d31e7->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
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
        frame_ebdfb2b149a3a3f3612c1ec5118d31e7->m_frame.f_lineno = 282;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[34], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
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
        exception_tb = MAKE_TRACEBACK(frame_ebdfb2b149a3a3f3612c1ec5118d31e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ebdfb2b149a3a3f3612c1ec5118d31e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ebdfb2b149a3a3f3612c1ec5118d31e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ebdfb2b149a3a3f3612c1ec5118d31e7,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ebdfb2b149a3a3f3612c1ec5118d31e7 == cache_frame_ebdfb2b149a3a3f3612c1ec5118d31e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ebdfb2b149a3a3f3612c1ec5118d31e7);
        cache_frame_ebdfb2b149a3a3f3612c1ec5118d31e7 = NULL;
    }

    assertFrameObject(frame_ebdfb2b149a3a3f3612c1ec5118d31e7);

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


static PyObject *impl_flet_core$text$$$function__20___set_style(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_da154813e68c7fc5e755bebe2d4a6910;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da154813e68c7fc5e755bebe2d4a6910 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da154813e68c7fc5e755bebe2d4a6910)) {
        Py_XDECREF(cache_frame_da154813e68c7fc5e755bebe2d4a6910);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da154813e68c7fc5e755bebe2d4a6910 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da154813e68c7fc5e755bebe2d4a6910 = MAKE_FUNCTION_FRAME(codeobj_da154813e68c7fc5e755bebe2d4a6910, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da154813e68c7fc5e755bebe2d4a6910->m_type_description == NULL);
    frame_da154813e68c7fc5e755bebe2d4a6910 = cache_frame_da154813e68c7fc5e755bebe2d4a6910;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_da154813e68c7fc5e755bebe2d4a6910);
    assert(Py_REFCNT(frame_da154813e68c7fc5e755bebe2d4a6910) == 2);

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
        frame_da154813e68c7fc5e755bebe2d4a6910->m_frame.f_lineno = 285;
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


            exception_lineno = 285;
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
        exception_tb = MAKE_TRACEBACK(frame_da154813e68c7fc5e755bebe2d4a6910, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da154813e68c7fc5e755bebe2d4a6910->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da154813e68c7fc5e755bebe2d4a6910, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da154813e68c7fc5e755bebe2d4a6910,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_da154813e68c7fc5e755bebe2d4a6910 == cache_frame_da154813e68c7fc5e755bebe2d4a6910) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da154813e68c7fc5e755bebe2d4a6910);
        cache_frame_da154813e68c7fc5e755bebe2d4a6910 = NULL;
    }

    assertFrameObject(frame_da154813e68c7fc5e755bebe2d4a6910);

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


static PyObject *impl_flet_core$text$$$function__21_italic(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6c899b27b26dd450a9c56bcae09f86eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6c899b27b26dd450a9c56bcae09f86eb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6c899b27b26dd450a9c56bcae09f86eb)) {
        Py_XDECREF(cache_frame_6c899b27b26dd450a9c56bcae09f86eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c899b27b26dd450a9c56bcae09f86eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c899b27b26dd450a9c56bcae09f86eb = MAKE_FUNCTION_FRAME(codeobj_6c899b27b26dd450a9c56bcae09f86eb, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6c899b27b26dd450a9c56bcae09f86eb->m_type_description == NULL);
    frame_6c899b27b26dd450a9c56bcae09f86eb = cache_frame_6c899b27b26dd450a9c56bcae09f86eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6c899b27b26dd450a9c56bcae09f86eb);
    assert(Py_REFCNT(frame_6c899b27b26dd450a9c56bcae09f86eb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6c899b27b26dd450a9c56bcae09f86eb->m_frame.f_lineno = 290;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[35], 0), mod_consts[36]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
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
        exception_tb = MAKE_TRACEBACK(frame_6c899b27b26dd450a9c56bcae09f86eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c899b27b26dd450a9c56bcae09f86eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c899b27b26dd450a9c56bcae09f86eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c899b27b26dd450a9c56bcae09f86eb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6c899b27b26dd450a9c56bcae09f86eb == cache_frame_6c899b27b26dd450a9c56bcae09f86eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6c899b27b26dd450a9c56bcae09f86eb);
        cache_frame_6c899b27b26dd450a9c56bcae09f86eb = NULL;
    }

    assertFrameObject(frame_6c899b27b26dd450a9c56bcae09f86eb);

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


static PyObject *impl_flet_core$text$$$function__22_italic(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_2196678513f3acf0a0bf82b19722f3fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2196678513f3acf0a0bf82b19722f3fd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2196678513f3acf0a0bf82b19722f3fd)) {
        Py_XDECREF(cache_frame_2196678513f3acf0a0bf82b19722f3fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2196678513f3acf0a0bf82b19722f3fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2196678513f3acf0a0bf82b19722f3fd = MAKE_FUNCTION_FRAME(codeobj_2196678513f3acf0a0bf82b19722f3fd, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2196678513f3acf0a0bf82b19722f3fd->m_type_description == NULL);
    frame_2196678513f3acf0a0bf82b19722f3fd = cache_frame_2196678513f3acf0a0bf82b19722f3fd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2196678513f3acf0a0bf82b19722f3fd);
    assert(Py_REFCNT(frame_2196678513f3acf0a0bf82b19722f3fd) == 2);

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
        frame_2196678513f3acf0a0bf82b19722f3fd->m_frame.f_lineno = 294;
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


            exception_lineno = 294;
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
        exception_tb = MAKE_TRACEBACK(frame_2196678513f3acf0a0bf82b19722f3fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2196678513f3acf0a0bf82b19722f3fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2196678513f3acf0a0bf82b19722f3fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2196678513f3acf0a0bf82b19722f3fd,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_2196678513f3acf0a0bf82b19722f3fd == cache_frame_2196678513f3acf0a0bf82b19722f3fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2196678513f3acf0a0bf82b19722f3fd);
        cache_frame_2196678513f3acf0a0bf82b19722f3fd = NULL;
    }

    assertFrameObject(frame_2196678513f3acf0a0bf82b19722f3fd);

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


static PyObject *impl_flet_core$text$$$function__23_no_wrap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3f696f81a22b8c9ba7f35bd2c314229e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f696f81a22b8c9ba7f35bd2c314229e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3f696f81a22b8c9ba7f35bd2c314229e)) {
        Py_XDECREF(cache_frame_3f696f81a22b8c9ba7f35bd2c314229e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f696f81a22b8c9ba7f35bd2c314229e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f696f81a22b8c9ba7f35bd2c314229e = MAKE_FUNCTION_FRAME(codeobj_3f696f81a22b8c9ba7f35bd2c314229e, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3f696f81a22b8c9ba7f35bd2c314229e->m_type_description == NULL);
    frame_3f696f81a22b8c9ba7f35bd2c314229e = cache_frame_3f696f81a22b8c9ba7f35bd2c314229e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3f696f81a22b8c9ba7f35bd2c314229e);
    assert(Py_REFCNT(frame_3f696f81a22b8c9ba7f35bd2c314229e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3f696f81a22b8c9ba7f35bd2c314229e->m_frame.f_lineno = 299;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[37], 0), mod_consts[36]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
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
        exception_tb = MAKE_TRACEBACK(frame_3f696f81a22b8c9ba7f35bd2c314229e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f696f81a22b8c9ba7f35bd2c314229e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f696f81a22b8c9ba7f35bd2c314229e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f696f81a22b8c9ba7f35bd2c314229e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3f696f81a22b8c9ba7f35bd2c314229e == cache_frame_3f696f81a22b8c9ba7f35bd2c314229e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3f696f81a22b8c9ba7f35bd2c314229e);
        cache_frame_3f696f81a22b8c9ba7f35bd2c314229e = NULL;
    }

    assertFrameObject(frame_3f696f81a22b8c9ba7f35bd2c314229e);

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


static PyObject *impl_flet_core$text$$$function__24_no_wrap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_72312a2044a8bc4fd0e256fb3dff2646;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_72312a2044a8bc4fd0e256fb3dff2646 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_72312a2044a8bc4fd0e256fb3dff2646)) {
        Py_XDECREF(cache_frame_72312a2044a8bc4fd0e256fb3dff2646);

#if _DEBUG_REFCOUNTS
        if (cache_frame_72312a2044a8bc4fd0e256fb3dff2646 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_72312a2044a8bc4fd0e256fb3dff2646 = MAKE_FUNCTION_FRAME(codeobj_72312a2044a8bc4fd0e256fb3dff2646, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_72312a2044a8bc4fd0e256fb3dff2646->m_type_description == NULL);
    frame_72312a2044a8bc4fd0e256fb3dff2646 = cache_frame_72312a2044a8bc4fd0e256fb3dff2646;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_72312a2044a8bc4fd0e256fb3dff2646);
    assert(Py_REFCNT(frame_72312a2044a8bc4fd0e256fb3dff2646) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[38];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_72312a2044a8bc4fd0e256fb3dff2646->m_frame.f_lineno = 303;
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


            exception_lineno = 303;
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
        exception_tb = MAKE_TRACEBACK(frame_72312a2044a8bc4fd0e256fb3dff2646, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72312a2044a8bc4fd0e256fb3dff2646->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72312a2044a8bc4fd0e256fb3dff2646, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_72312a2044a8bc4fd0e256fb3dff2646,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_72312a2044a8bc4fd0e256fb3dff2646 == cache_frame_72312a2044a8bc4fd0e256fb3dff2646) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_72312a2044a8bc4fd0e256fb3dff2646);
        cache_frame_72312a2044a8bc4fd0e256fb3dff2646 = NULL;
    }

    assertFrameObject(frame_72312a2044a8bc4fd0e256fb3dff2646);

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


static PyObject *impl_flet_core$text$$$function__25_selectable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bb45e7f8b313bf311504a1aa3acb0e4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bb45e7f8b313bf311504a1aa3acb0e4c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bb45e7f8b313bf311504a1aa3acb0e4c)) {
        Py_XDECREF(cache_frame_bb45e7f8b313bf311504a1aa3acb0e4c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb45e7f8b313bf311504a1aa3acb0e4c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb45e7f8b313bf311504a1aa3acb0e4c = MAKE_FUNCTION_FRAME(codeobj_bb45e7f8b313bf311504a1aa3acb0e4c, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb45e7f8b313bf311504a1aa3acb0e4c->m_type_description == NULL);
    frame_bb45e7f8b313bf311504a1aa3acb0e4c = cache_frame_bb45e7f8b313bf311504a1aa3acb0e4c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bb45e7f8b313bf311504a1aa3acb0e4c);
    assert(Py_REFCNT(frame_bb45e7f8b313bf311504a1aa3acb0e4c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bb45e7f8b313bf311504a1aa3acb0e4c->m_frame.f_lineno = 308;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[39], 0), mod_consts[36]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
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
        exception_tb = MAKE_TRACEBACK(frame_bb45e7f8b313bf311504a1aa3acb0e4c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb45e7f8b313bf311504a1aa3acb0e4c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb45e7f8b313bf311504a1aa3acb0e4c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb45e7f8b313bf311504a1aa3acb0e4c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bb45e7f8b313bf311504a1aa3acb0e4c == cache_frame_bb45e7f8b313bf311504a1aa3acb0e4c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb45e7f8b313bf311504a1aa3acb0e4c);
        cache_frame_bb45e7f8b313bf311504a1aa3acb0e4c = NULL;
    }

    assertFrameObject(frame_bb45e7f8b313bf311504a1aa3acb0e4c);

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


static PyObject *impl_flet_core$text$$$function__26_selectable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_fa4d5c443321ddb1ab5f0fbed00a5ae7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fa4d5c443321ddb1ab5f0fbed00a5ae7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa4d5c443321ddb1ab5f0fbed00a5ae7)) {
        Py_XDECREF(cache_frame_fa4d5c443321ddb1ab5f0fbed00a5ae7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa4d5c443321ddb1ab5f0fbed00a5ae7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa4d5c443321ddb1ab5f0fbed00a5ae7 = MAKE_FUNCTION_FRAME(codeobj_fa4d5c443321ddb1ab5f0fbed00a5ae7, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa4d5c443321ddb1ab5f0fbed00a5ae7->m_type_description == NULL);
    frame_fa4d5c443321ddb1ab5f0fbed00a5ae7 = cache_frame_fa4d5c443321ddb1ab5f0fbed00a5ae7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fa4d5c443321ddb1ab5f0fbed00a5ae7);
    assert(Py_REFCNT(frame_fa4d5c443321ddb1ab5f0fbed00a5ae7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[14];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_fa4d5c443321ddb1ab5f0fbed00a5ae7->m_frame.f_lineno = 312;
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


            exception_lineno = 312;
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
        exception_tb = MAKE_TRACEBACK(frame_fa4d5c443321ddb1ab5f0fbed00a5ae7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa4d5c443321ddb1ab5f0fbed00a5ae7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa4d5c443321ddb1ab5f0fbed00a5ae7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa4d5c443321ddb1ab5f0fbed00a5ae7,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_fa4d5c443321ddb1ab5f0fbed00a5ae7 == cache_frame_fa4d5c443321ddb1ab5f0fbed00a5ae7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa4d5c443321ddb1ab5f0fbed00a5ae7);
        cache_frame_fa4d5c443321ddb1ab5f0fbed00a5ae7 = NULL;
    }

    assertFrameObject(frame_fa4d5c443321ddb1ab5f0fbed00a5ae7);

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


static PyObject *impl_flet_core$text$$$function__27_max_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f19c15302e2adbde6eb5161317e929f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f19c15302e2adbde6eb5161317e929f3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f19c15302e2adbde6eb5161317e929f3)) {
        Py_XDECREF(cache_frame_f19c15302e2adbde6eb5161317e929f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f19c15302e2adbde6eb5161317e929f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f19c15302e2adbde6eb5161317e929f3 = MAKE_FUNCTION_FRAME(codeobj_f19c15302e2adbde6eb5161317e929f3, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f19c15302e2adbde6eb5161317e929f3->m_type_description == NULL);
    frame_f19c15302e2adbde6eb5161317e929f3 = cache_frame_f19c15302e2adbde6eb5161317e929f3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f19c15302e2adbde6eb5161317e929f3);
    assert(Py_REFCNT(frame_f19c15302e2adbde6eb5161317e929f3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f19c15302e2adbde6eb5161317e929f3->m_frame.f_lineno = 317;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
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
        exception_tb = MAKE_TRACEBACK(frame_f19c15302e2adbde6eb5161317e929f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f19c15302e2adbde6eb5161317e929f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f19c15302e2adbde6eb5161317e929f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f19c15302e2adbde6eb5161317e929f3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f19c15302e2adbde6eb5161317e929f3 == cache_frame_f19c15302e2adbde6eb5161317e929f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f19c15302e2adbde6eb5161317e929f3);
        cache_frame_f19c15302e2adbde6eb5161317e929f3 = NULL;
    }

    assertFrameObject(frame_f19c15302e2adbde6eb5161317e929f3);

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


static PyObject *impl_flet_core$text$$$function__28_max_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_7e3abd1894a47a0d06a77fc653a9a255;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7e3abd1894a47a0d06a77fc653a9a255 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7e3abd1894a47a0d06a77fc653a9a255)) {
        Py_XDECREF(cache_frame_7e3abd1894a47a0d06a77fc653a9a255);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e3abd1894a47a0d06a77fc653a9a255 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e3abd1894a47a0d06a77fc653a9a255 = MAKE_FUNCTION_FRAME(codeobj_7e3abd1894a47a0d06a77fc653a9a255, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7e3abd1894a47a0d06a77fc653a9a255->m_type_description == NULL);
    frame_7e3abd1894a47a0d06a77fc653a9a255 = cache_frame_7e3abd1894a47a0d06a77fc653a9a255;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7e3abd1894a47a0d06a77fc653a9a255);
    assert(Py_REFCNT(frame_7e3abd1894a47a0d06a77fc653a9a255) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[41];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_7e3abd1894a47a0d06a77fc653a9a255->m_frame.f_lineno = 321;
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


            exception_lineno = 321;
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
        exception_tb = MAKE_TRACEBACK(frame_7e3abd1894a47a0d06a77fc653a9a255, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e3abd1894a47a0d06a77fc653a9a255->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e3abd1894a47a0d06a77fc653a9a255, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e3abd1894a47a0d06a77fc653a9a255,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7e3abd1894a47a0d06a77fc653a9a255 == cache_frame_7e3abd1894a47a0d06a77fc653a9a255) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7e3abd1894a47a0d06a77fc653a9a255);
        cache_frame_7e3abd1894a47a0d06a77fc653a9a255 = NULL;
    }

    assertFrameObject(frame_7e3abd1894a47a0d06a77fc653a9a255);

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


static PyObject *impl_flet_core$text$$$function__29_overflow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0a40818655bef46003b90498b7540a36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0a40818655bef46003b90498b7540a36 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0a40818655bef46003b90498b7540a36)) {
        Py_XDECREF(cache_frame_0a40818655bef46003b90498b7540a36);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a40818655bef46003b90498b7540a36 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a40818655bef46003b90498b7540a36 = MAKE_FUNCTION_FRAME(codeobj_0a40818655bef46003b90498b7540a36, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0a40818655bef46003b90498b7540a36->m_type_description == NULL);
    frame_0a40818655bef46003b90498b7540a36 = cache_frame_0a40818655bef46003b90498b7540a36;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0a40818655bef46003b90498b7540a36);
    assert(Py_REFCNT(frame_0a40818655bef46003b90498b7540a36) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
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
        exception_tb = MAKE_TRACEBACK(frame_0a40818655bef46003b90498b7540a36, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a40818655bef46003b90498b7540a36->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a40818655bef46003b90498b7540a36, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a40818655bef46003b90498b7540a36,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0a40818655bef46003b90498b7540a36 == cache_frame_0a40818655bef46003b90498b7540a36) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0a40818655bef46003b90498b7540a36);
        cache_frame_0a40818655bef46003b90498b7540a36 = NULL;
    }

    assertFrameObject(frame_0a40818655bef46003b90498b7540a36);

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


static PyObject *impl_flet_core$text$$$function__30_overflow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_0ff593e58b1fabd33e2ffd7b0ee34972;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0ff593e58b1fabd33e2ffd7b0ee34972 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0ff593e58b1fabd33e2ffd7b0ee34972)) {
        Py_XDECREF(cache_frame_0ff593e58b1fabd33e2ffd7b0ee34972);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ff593e58b1fabd33e2ffd7b0ee34972 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ff593e58b1fabd33e2ffd7b0ee34972 = MAKE_FUNCTION_FRAME(codeobj_0ff593e58b1fabd33e2ffd7b0ee34972, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0ff593e58b1fabd33e2ffd7b0ee34972->m_type_description == NULL);
    frame_0ff593e58b1fabd33e2ffd7b0ee34972 = cache_frame_0ff593e58b1fabd33e2ffd7b0ee34972;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0ff593e58b1fabd33e2ffd7b0ee34972);
    assert(Py_REFCNT(frame_0ff593e58b1fabd33e2ffd7b0ee34972) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[42], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
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
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[13];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 332;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0ff593e58b1fabd33e2ffd7b0ee34972->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
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
        frame_0ff593e58b1fabd33e2ffd7b0ee34972->m_frame.f_lineno = 334;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[44], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
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
        exception_tb = MAKE_TRACEBACK(frame_0ff593e58b1fabd33e2ffd7b0ee34972, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ff593e58b1fabd33e2ffd7b0ee34972->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ff593e58b1fabd33e2ffd7b0ee34972, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ff593e58b1fabd33e2ffd7b0ee34972,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_0ff593e58b1fabd33e2ffd7b0ee34972 == cache_frame_0ff593e58b1fabd33e2ffd7b0ee34972) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0ff593e58b1fabd33e2ffd7b0ee34972);
        cache_frame_0ff593e58b1fabd33e2ffd7b0ee34972 = NULL;
    }

    assertFrameObject(frame_0ff593e58b1fabd33e2ffd7b0ee34972);

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


static PyObject *impl_flet_core$text$$$function__31___set_overflow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a3e0f0b8dfcd273f2a4b5adb04fb333d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a3e0f0b8dfcd273f2a4b5adb04fb333d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a3e0f0b8dfcd273f2a4b5adb04fb333d)) {
        Py_XDECREF(cache_frame_a3e0f0b8dfcd273f2a4b5adb04fb333d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a3e0f0b8dfcd273f2a4b5adb04fb333d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a3e0f0b8dfcd273f2a4b5adb04fb333d = MAKE_FUNCTION_FRAME(codeobj_a3e0f0b8dfcd273f2a4b5adb04fb333d, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a3e0f0b8dfcd273f2a4b5adb04fb333d->m_type_description == NULL);
    frame_a3e0f0b8dfcd273f2a4b5adb04fb333d = cache_frame_a3e0f0b8dfcd273f2a4b5adb04fb333d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a3e0f0b8dfcd273f2a4b5adb04fb333d);
    assert(Py_REFCNT(frame_a3e0f0b8dfcd273f2a4b5adb04fb333d) == 2);

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
        frame_a3e0f0b8dfcd273f2a4b5adb04fb333d->m_frame.f_lineno = 337;
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


            exception_lineno = 337;
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
        exception_tb = MAKE_TRACEBACK(frame_a3e0f0b8dfcd273f2a4b5adb04fb333d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a3e0f0b8dfcd273f2a4b5adb04fb333d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a3e0f0b8dfcd273f2a4b5adb04fb333d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a3e0f0b8dfcd273f2a4b5adb04fb333d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a3e0f0b8dfcd273f2a4b5adb04fb333d == cache_frame_a3e0f0b8dfcd273f2a4b5adb04fb333d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a3e0f0b8dfcd273f2a4b5adb04fb333d);
        cache_frame_a3e0f0b8dfcd273f2a4b5adb04fb333d = NULL;
    }

    assertFrameObject(frame_a3e0f0b8dfcd273f2a4b5adb04fb333d);

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


static PyObject *impl_flet_core$text$$$function__32_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_eb7c8c66bafaa38c7c7a70ea394228cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eb7c8c66bafaa38c7c7a70ea394228cd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb7c8c66bafaa38c7c7a70ea394228cd)) {
        Py_XDECREF(cache_frame_eb7c8c66bafaa38c7c7a70ea394228cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb7c8c66bafaa38c7c7a70ea394228cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb7c8c66bafaa38c7c7a70ea394228cd = MAKE_FUNCTION_FRAME(codeobj_eb7c8c66bafaa38c7c7a70ea394228cd, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb7c8c66bafaa38c7c7a70ea394228cd->m_type_description == NULL);
    frame_eb7c8c66bafaa38c7c7a70ea394228cd = cache_frame_eb7c8c66bafaa38c7c7a70ea394228cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eb7c8c66bafaa38c7c7a70ea394228cd);
    assert(Py_REFCNT(frame_eb7c8c66bafaa38c7c7a70ea394228cd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_eb7c8c66bafaa38c7c7a70ea394228cd->m_frame.f_lineno = 342;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[45], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
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
        exception_tb = MAKE_TRACEBACK(frame_eb7c8c66bafaa38c7c7a70ea394228cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb7c8c66bafaa38c7c7a70ea394228cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb7c8c66bafaa38c7c7a70ea394228cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb7c8c66bafaa38c7c7a70ea394228cd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_eb7c8c66bafaa38c7c7a70ea394228cd == cache_frame_eb7c8c66bafaa38c7c7a70ea394228cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb7c8c66bafaa38c7c7a70ea394228cd);
        cache_frame_eb7c8c66bafaa38c7c7a70ea394228cd = NULL;
    }

    assertFrameObject(frame_eb7c8c66bafaa38c7c7a70ea394228cd);

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


static PyObject *impl_flet_core$text$$$function__33_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_8d8563b6eb00cde73552c38ff5b0ed54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8d8563b6eb00cde73552c38ff5b0ed54 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8d8563b6eb00cde73552c38ff5b0ed54)) {
        Py_XDECREF(cache_frame_8d8563b6eb00cde73552c38ff5b0ed54);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8d8563b6eb00cde73552c38ff5b0ed54 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8d8563b6eb00cde73552c38ff5b0ed54 = MAKE_FUNCTION_FRAME(codeobj_8d8563b6eb00cde73552c38ff5b0ed54, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8d8563b6eb00cde73552c38ff5b0ed54->m_type_description == NULL);
    frame_8d8563b6eb00cde73552c38ff5b0ed54 = cache_frame_8d8563b6eb00cde73552c38ff5b0ed54;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8d8563b6eb00cde73552c38ff5b0ed54);
    assert(Py_REFCNT(frame_8d8563b6eb00cde73552c38ff5b0ed54) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[15];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_8d8563b6eb00cde73552c38ff5b0ed54->m_frame.f_lineno = 346;
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


            exception_lineno = 346;
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
        exception_tb = MAKE_TRACEBACK(frame_8d8563b6eb00cde73552c38ff5b0ed54, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8d8563b6eb00cde73552c38ff5b0ed54->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8d8563b6eb00cde73552c38ff5b0ed54, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8d8563b6eb00cde73552c38ff5b0ed54,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8d8563b6eb00cde73552c38ff5b0ed54 == cache_frame_8d8563b6eb00cde73552c38ff5b0ed54) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8d8563b6eb00cde73552c38ff5b0ed54);
        cache_frame_8d8563b6eb00cde73552c38ff5b0ed54 = NULL;
    }

    assertFrameObject(frame_8d8563b6eb00cde73552c38ff5b0ed54);

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


static PyObject *impl_flet_core$text$$$function__34_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_41f424a5ace7e7a4f131d9e7535fced2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_41f424a5ace7e7a4f131d9e7535fced2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41f424a5ace7e7a4f131d9e7535fced2)) {
        Py_XDECREF(cache_frame_41f424a5ace7e7a4f131d9e7535fced2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41f424a5ace7e7a4f131d9e7535fced2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41f424a5ace7e7a4f131d9e7535fced2 = MAKE_FUNCTION_FRAME(codeobj_41f424a5ace7e7a4f131d9e7535fced2, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41f424a5ace7e7a4f131d9e7535fced2->m_type_description == NULL);
    frame_41f424a5ace7e7a4f131d9e7535fced2 = cache_frame_41f424a5ace7e7a4f131d9e7535fced2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_41f424a5ace7e7a4f131d9e7535fced2);
    assert(Py_REFCNT(frame_41f424a5ace7e7a4f131d9e7535fced2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_41f424a5ace7e7a4f131d9e7535fced2->m_frame.f_lineno = 351;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
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
        exception_tb = MAKE_TRACEBACK(frame_41f424a5ace7e7a4f131d9e7535fced2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41f424a5ace7e7a4f131d9e7535fced2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41f424a5ace7e7a4f131d9e7535fced2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41f424a5ace7e7a4f131d9e7535fced2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_41f424a5ace7e7a4f131d9e7535fced2 == cache_frame_41f424a5ace7e7a4f131d9e7535fced2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41f424a5ace7e7a4f131d9e7535fced2);
        cache_frame_41f424a5ace7e7a4f131d9e7535fced2 = NULL;
    }

    assertFrameObject(frame_41f424a5ace7e7a4f131d9e7535fced2);

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


static PyObject *impl_flet_core$text$$$function__35_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_05404a754e344fa10c7cd38e8c939680;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_05404a754e344fa10c7cd38e8c939680 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_05404a754e344fa10c7cd38e8c939680)) {
        Py_XDECREF(cache_frame_05404a754e344fa10c7cd38e8c939680);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05404a754e344fa10c7cd38e8c939680 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05404a754e344fa10c7cd38e8c939680 = MAKE_FUNCTION_FRAME(codeobj_05404a754e344fa10c7cd38e8c939680, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05404a754e344fa10c7cd38e8c939680->m_type_description == NULL);
    frame_05404a754e344fa10c7cd38e8c939680 = cache_frame_05404a754e344fa10c7cd38e8c939680;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_05404a754e344fa10c7cd38e8c939680);
    assert(Py_REFCNT(frame_05404a754e344fa10c7cd38e8c939680) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[16];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_05404a754e344fa10c7cd38e8c939680->m_frame.f_lineno = 355;
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


            exception_lineno = 355;
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
        exception_tb = MAKE_TRACEBACK(frame_05404a754e344fa10c7cd38e8c939680, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05404a754e344fa10c7cd38e8c939680->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05404a754e344fa10c7cd38e8c939680, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05404a754e344fa10c7cd38e8c939680,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_05404a754e344fa10c7cd38e8c939680 == cache_frame_05404a754e344fa10c7cd38e8c939680) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05404a754e344fa10c7cd38e8c939680);
        cache_frame_05404a754e344fa10c7cd38e8c939680 = NULL;
    }

    assertFrameObject(frame_05404a754e344fa10c7cd38e8c939680);

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


static PyObject *impl_flet_core$text$$$function__36_semantics_label(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cf30e3b16cda6310a7735c75dcf94336;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cf30e3b16cda6310a7735c75dcf94336 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf30e3b16cda6310a7735c75dcf94336)) {
        Py_XDECREF(cache_frame_cf30e3b16cda6310a7735c75dcf94336);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf30e3b16cda6310a7735c75dcf94336 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf30e3b16cda6310a7735c75dcf94336 = MAKE_FUNCTION_FRAME(codeobj_cf30e3b16cda6310a7735c75dcf94336, module_flet_core$text, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf30e3b16cda6310a7735c75dcf94336->m_type_description == NULL);
    frame_cf30e3b16cda6310a7735c75dcf94336 = cache_frame_cf30e3b16cda6310a7735c75dcf94336;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf30e3b16cda6310a7735c75dcf94336);
    assert(Py_REFCNT(frame_cf30e3b16cda6310a7735c75dcf94336) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_cf30e3b16cda6310a7735c75dcf94336->m_frame.f_lineno = 360;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[47], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
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
        exception_tb = MAKE_TRACEBACK(frame_cf30e3b16cda6310a7735c75dcf94336, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf30e3b16cda6310a7735c75dcf94336->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf30e3b16cda6310a7735c75dcf94336, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf30e3b16cda6310a7735c75dcf94336,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cf30e3b16cda6310a7735c75dcf94336 == cache_frame_cf30e3b16cda6310a7735c75dcf94336) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf30e3b16cda6310a7735c75dcf94336);
        cache_frame_cf30e3b16cda6310a7735c75dcf94336 = NULL;
    }

    assertFrameObject(frame_cf30e3b16cda6310a7735c75dcf94336);

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


static PyObject *impl_flet_core$text$$$function__37_semantics_label(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6b79d3c289de383cf67227e6dc8349bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6b79d3c289de383cf67227e6dc8349bf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6b79d3c289de383cf67227e6dc8349bf)) {
        Py_XDECREF(cache_frame_6b79d3c289de383cf67227e6dc8349bf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b79d3c289de383cf67227e6dc8349bf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b79d3c289de383cf67227e6dc8349bf = MAKE_FUNCTION_FRAME(codeobj_6b79d3c289de383cf67227e6dc8349bf, module_flet_core$text, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6b79d3c289de383cf67227e6dc8349bf->m_type_description == NULL);
    frame_6b79d3c289de383cf67227e6dc8349bf = cache_frame_6b79d3c289de383cf67227e6dc8349bf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6b79d3c289de383cf67227e6dc8349bf);
    assert(Py_REFCNT(frame_6b79d3c289de383cf67227e6dc8349bf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[48];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_6b79d3c289de383cf67227e6dc8349bf->m_frame.f_lineno = 364;
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


            exception_lineno = 364;
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
        exception_tb = MAKE_TRACEBACK(frame_6b79d3c289de383cf67227e6dc8349bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b79d3c289de383cf67227e6dc8349bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b79d3c289de383cf67227e6dc8349bf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b79d3c289de383cf67227e6dc8349bf,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6b79d3c289de383cf67227e6dc8349bf == cache_frame_6b79d3c289de383cf67227e6dc8349bf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6b79d3c289de383cf67227e6dc8349bf);
        cache_frame_6b79d3c289de383cf67227e6dc8349bf = NULL;
    }

    assertFrameObject(frame_6b79d3c289de383cf67227e6dc8349bf);

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



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__10___set_text_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__10___set_text_align,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_23743b17604f8cd1fb5de47ed663f70f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__11_font_family() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__11_font_family,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_34e918f6227e35369d3626476f59b6b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__12_font_family() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__12_font_family,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_e2ce7d6cee109cd5925562f43fbc7d75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__13_size(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__13_size,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_2da11f89dbb99e148ee0a8d5a5121633,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__14_size(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__14_size,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_9203cc80626b05132228861d5d3fe59e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__15_weight(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__15_weight,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_39f77170329cb652f6a01cc0c29031fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__16_weight(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__16_weight,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_0a7b6a9fe1ad0ad74549f692ef471ca6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__17___set_weight(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__17___set_weight,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_8bc0500d99837b874742dd6e1a1b5d4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__18_style(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__18_style,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_3ac6623c186df30b7ee0d710f5d75618,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__19_style(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__19_style,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_ebdfb2b149a3a3f3612c1ec5118d31e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_f87685019735df2c437192e45e37178a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__20___set_style(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__20___set_style,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_da154813e68c7fc5e755bebe2d4a6910,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__21_italic(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__21_italic,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_6c899b27b26dd450a9c56bcae09f86eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__22_italic(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__22_italic,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_2196678513f3acf0a0bf82b19722f3fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__23_no_wrap(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__23_no_wrap,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_3f696f81a22b8c9ba7f35bd2c314229e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__24_no_wrap(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__24_no_wrap,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_72312a2044a8bc4fd0e256fb3dff2646,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__25_selectable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__25_selectable,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_bb45e7f8b313bf311504a1aa3acb0e4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__26_selectable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__26_selectable,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_fa4d5c443321ddb1ab5f0fbed00a5ae7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__27_max_lines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__27_max_lines,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_f19c15302e2adbde6eb5161317e929f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__28_max_lines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__28_max_lines,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_7e3abd1894a47a0d06a77fc653a9a255,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__29_overflow(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__29_overflow,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_0a40818655bef46003b90498b7540a36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_a511dc8fffa30abe2bbddefafb48c7c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[169]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__30_overflow(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__30_overflow,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_0ff593e58b1fabd33e2ffd7b0ee34972,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__31___set_overflow(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__31___set_overflow,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_a3e0f0b8dfcd273f2a4b5adb04fb333d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__32_color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__32_color,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_eb7c8c66bafaa38c7c7a70ea394228cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__33_color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__33_color,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_8d8563b6eb00cde73552c38ff5b0ed54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__34_bgcolor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__34_bgcolor,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_41f424a5ace7e7a4f131d9e7535fced2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__35_bgcolor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__35_bgcolor,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_05404a754e344fa10c7cd38e8c939680,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__36_semantics_label() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__36_semantics_label,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_cf30e3b16cda6310a7735c75dcf94336,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__37_semantics_label() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__37_semantics_label,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_6b79d3c289de383cf67227e6dc8349bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__3__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__3__get_children,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_40f2d57cc9f008f9bba863417785a5fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__4_value(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__4_value,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_91e262871e14a3a11f74450b7918f185,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__5_value(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__5_value,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_be1d31da4d052feda4e7ec380ca50c92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__6_spans(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__6_spans,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_86ed0d64f387be4f56d263ed9941efac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__7_spans(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__7_spans,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_d244a3ee711e1f6c2194478091d25783,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__8_text_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__8_text_align,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_fe70a8444bad86ebf93c4f9a4da26c3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$text$$$function__9_text_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$text$$$function__9_text_align,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_97a8e3058309ec305e75231d9cd56e1e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$text,
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

function_impl_code functable_flet_core$text[] = {
    impl_flet_core$text$$$function__1___init__,
    NULL,
    impl_flet_core$text$$$function__3__get_children,
    impl_flet_core$text$$$function__4_value,
    impl_flet_core$text$$$function__5_value,
    impl_flet_core$text$$$function__6_spans,
    impl_flet_core$text$$$function__7_spans,
    impl_flet_core$text$$$function__8_text_align,
    impl_flet_core$text$$$function__9_text_align,
    impl_flet_core$text$$$function__10___set_text_align,
    impl_flet_core$text$$$function__11_font_family,
    impl_flet_core$text$$$function__12_font_family,
    impl_flet_core$text$$$function__13_size,
    impl_flet_core$text$$$function__14_size,
    impl_flet_core$text$$$function__15_weight,
    impl_flet_core$text$$$function__16_weight,
    impl_flet_core$text$$$function__17___set_weight,
    impl_flet_core$text$$$function__18_style,
    impl_flet_core$text$$$function__19_style,
    impl_flet_core$text$$$function__20___set_style,
    impl_flet_core$text$$$function__21_italic,
    impl_flet_core$text$$$function__22_italic,
    impl_flet_core$text$$$function__23_no_wrap,
    impl_flet_core$text$$$function__24_no_wrap,
    impl_flet_core$text$$$function__25_selectable,
    impl_flet_core$text$$$function__26_selectable,
    impl_flet_core$text$$$function__27_max_lines,
    impl_flet_core$text$$$function__28_max_lines,
    impl_flet_core$text$$$function__29_overflow,
    impl_flet_core$text$$$function__30_overflow,
    impl_flet_core$text$$$function__31___set_overflow,
    impl_flet_core$text$$$function__32_color,
    impl_flet_core$text$$$function__33_color,
    impl_flet_core$text$$$function__34_bgcolor,
    impl_flet_core$text$$$function__35_bgcolor,
    impl_flet_core$text$$$function__36_semantics_label,
    impl_flet_core$text$$$function__37_semantics_label,
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

    function_impl_code *current = functable_flet_core$text;
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

    if (offset > sizeof(functable_flet_core$text) || offset < 0) {
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
        functable_flet_core$text[offset],
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
        module_flet_core$text,
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
PyObject *modulecode_flet_core$text(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.text");

    // Store the module for future use.
    module_flet_core$text = module;

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
        PRINT_STRING("flet_core.text: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.text: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.text: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$text\n");

    moduledict_flet_core$text = MODULE_DICT(module_flet_core$text);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$text,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$text,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[206]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$text,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$text,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$text,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$text);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$text, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$text, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$text, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$text);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
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
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_be2e94af15594d11d77a12fc16d2dee4;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_flet_core$text$$$class__1_TextOverflow_28 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_a06cb7f43117837a089faff96559dd57_2;
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
    PyObject *locals_flet_core$text$$$class__2_TextThemeStyle_55 = NULL;
    struct Nuitka_FrameObject *frame_136b543aeeacbd2d80295ebd12fede96_3;
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
    PyObject *locals_flet_core$text$$$class__3_Text_73 = NULL;
    struct Nuitka_FrameObject *frame_70a71c054dc6f0ec6d21efc2f76f20c6_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_2);
    }
    frame_be2e94af15594d11d77a12fc16d2dee4 = MAKE_MODULE_FRAME(codeobj_be2e94af15594d11d77a12fc16d2dee4, module_flet_core$text);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be2e94af15594d11d77a12fc16d2dee4);
    assert(Py_REFCNT(frame_be2e94af15594d11d77a12fc16d2dee4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[50];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[53], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[54], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[56];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$text;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[57];
        tmp_level_value_1 = mod_consts[58];
        frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[59],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_4);
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
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[60],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[60]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[61],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[61]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[62],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[62]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[63],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[63]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[64];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$text;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[65];
        tmp_level_value_2 = mod_consts[58];
        frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 4;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[0],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[66];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$text;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[67];
        tmp_level_value_3 = mod_consts[58];
        frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 5;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[68],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[69];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$text;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[70];
        tmp_level_value_4 = mod_consts[58];
        frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 6;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[71],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[71]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[72];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$text;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[73];
        tmp_level_value_5 = mod_consts[58];
        frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 7;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[74],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[74]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[75];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$text;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[76];
        tmp_level_value_6 = mod_consts[58];
        frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 8;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

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
                (PyObject *)moduledict_flet_core$text,
                mod_consts[77],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[77]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[30],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[30]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[78],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[78]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[79],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[79]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[80],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[80]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[81],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[81]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[82],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[82]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[23],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[23]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_18 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[83],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[83]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_23);
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_19;
        tmp_import_name_from_19 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_19 == NULL));
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[84],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[84]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_24);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_be2e94af15594d11d77a12fc16d2dee4, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_be2e94af15594d11d77a12fc16d2dee4, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[85];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_flet_core$text;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[86];
        tmp_level_value_7 = mod_consts[58];
        frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 23;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_flet_core$text,
                mod_consts[84],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_20, mod_consts[84]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_25);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 20;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_be2e94af15594d11d77a12fc16d2dee4->m_frame) frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_subscript_value_1 = mod_consts[87];
        tmp_assign_source_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_26);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_28 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_2 = mod_consts[58];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[89]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[89]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        tmp_tuple_element_2 = mod_consts[43];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 28;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[90]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
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
        tmp_mod_expr_left_1 = mod_consts[91];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[92];
        tmp_getattr_default_1 = mod_consts[93];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[92]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

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


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 28;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_32;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$text$$$class__1_TextOverflow_28 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__1_TextOverflow_28, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__1_TextOverflow_28, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_7;
        }
        frame_a06cb7f43117837a089faff96559dd57_2 = MAKE_CLASS_FRAME(codeobj_a06cb7f43117837a089faff96559dd57, module_flet_core$text, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a06cb7f43117837a089faff96559dd57_2);
        assert(Py_REFCNT(frame_a06cb7f43117837a089faff96559dd57_2) == 2);

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__1_TextOverflow_28, mod_consts[97], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__1_TextOverflow_28, mod_consts[99], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__1_TextOverflow_28, mod_consts[101], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[102];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__1_TextOverflow_28, mod_consts[103], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__1_TextOverflow_28, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a06cb7f43117837a089faff96559dd57_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a06cb7f43117837a089faff96559dd57_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a06cb7f43117837a089faff96559dd57_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a06cb7f43117837a089faff96559dd57_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_a06cb7f43117837a089faff96559dd57_2);

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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__1_TextOverflow_28, mod_consts[106], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_7;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[43];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flet_core$text$$$class__1_TextOverflow_28;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 28;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_7;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_33 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_flet_core$text$$$class__1_TextOverflow_28);
        locals_flet_core$text$$$class__1_TextOverflow_28 = NULL;
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

        Py_DECREF(locals_flet_core$text$$$class__1_TextOverflow_28);
        locals_flet_core$text$$$class__1_TextOverflow_28 = NULL;
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
        exception_lineno = 28;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_33);
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
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[107];
        tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_35);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        tmp_assign_source_36 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_37 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_8 = tmp_class_creation_2__bases;
        tmp_subscript_value_4 = mod_consts[58];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_4, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_39 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[89]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[89]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        tmp_tuple_element_6 = mod_consts[33];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 55;
        tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_11 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[90]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
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
        tmp_mod_expr_left_2 = mod_consts[91];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[92];
        tmp_getattr_default_2 = mod_consts[93];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[92]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

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


            exception_lineno = 55;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 55;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_41;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$text$$$class__2_TextThemeStyle_55 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_10;
        }
        frame_136b543aeeacbd2d80295ebd12fede96_3 = MAKE_CLASS_FRAME(codeobj_136b543aeeacbd2d80295ebd12fede96, module_flet_core$text, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_136b543aeeacbd2d80295ebd12fede96_3);
        assert(Py_REFCNT(frame_136b543aeeacbd2d80295ebd12fede96_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[114], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[118], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[120], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[122], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[125];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[127];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[128], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[131];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[132], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[135];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[136], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[138], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_136b543aeeacbd2d80295ebd12fede96_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_136b543aeeacbd2d80295ebd12fede96_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_136b543aeeacbd2d80295ebd12fede96_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_136b543aeeacbd2d80295ebd12fede96_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_136b543aeeacbd2d80295ebd12fede96_3);

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
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__2_TextThemeStyle_55, mod_consts[106], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_10;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[33];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_flet_core$text$$$class__2_TextThemeStyle_55;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 55;
            tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_10;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_42 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_42);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_flet_core$text$$$class__2_TextThemeStyle_55);
        locals_flet_core$text$$$class__2_TextThemeStyle_55 = NULL;
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

        Py_DECREF(locals_flet_core$text$$$class__2_TextThemeStyle_55);
        locals_flet_core$text$$$class__2_TextThemeStyle_55 = NULL;
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
        exception_lineno = 55;
        goto try_except_handler_8;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_42);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        tmp_assign_source_44 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_45 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_13 = tmp_class_creation_3__bases;
        tmp_subscript_value_5 = mod_consts[58];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_5, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[89]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[89]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        tmp_tuple_element_10 = mod_consts[139];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 73;
        tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_16 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[90]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
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
        tmp_mod_expr_left_3 = mod_consts[91];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[92];
        tmp_getattr_default_3 = mod_consts[93];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_17 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[92]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

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


            exception_lineno = 73;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 73;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_49;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_flet_core$text$$$class__3_Text_73 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[95], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[49], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        frame_70a71c054dc6f0ec6d21efc2f76f20c6_4 = MAKE_CLASS_FRAME(codeobj_70a71c054dc6f0ec6d21efc2f76f20c6, module_flet_core$text, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_70a71c054dc6f0ec6d21efc2f76f20c6_4);
        assert(Py_REFCNT(frame_70a71c054dc6f0ec6d21efc2f76f20c6_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_6;
            tmp_tuple_element_12 = Py_None;
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(41);
            {
                PyObject *tmp_expression_value_18;
                PyObject *tmp_expression_value_19;
                PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 5, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 6, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 7, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 8, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 9, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 10, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 11, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 12, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 13, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 14, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 15, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 16, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 17, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 18, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 19, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 20, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 21, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 22, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 23, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 24, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 25, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 26, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 27, tmp_tuple_element_12);
                tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[23]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 135;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[97]);
                Py_DECREF(tmp_expression_value_18);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 135;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 28, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 29, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 30, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 31, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 32, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 33, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 34, tmp_tuple_element_12);
                tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[43]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[43]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 142;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[97]);
                Py_DECREF(tmp_expression_value_19);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 35, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 36, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 37, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 38, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 39, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 40, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_key_1 = mod_consts[3];
            tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_1);

                        exception_lineno = 104;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[141]);

            if (tmp_subscript_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_6);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_20);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_1);

                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 40 );
            {
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_subscript_value_21;
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_25;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[142];
                tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 105;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[71]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[71]);

                        if (unlikely(tmp_subscript_value_7 == NULL)) {
                            tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
                        }

                        if (tmp_subscript_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_21);

                            exception_lineno = 105;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_21);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[143];
                tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 106;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[141]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 106;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[144];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[68]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 107;
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
                tmp_dict_key_1 = mod_consts[145];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[68]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 108;
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
                tmp_dict_key_1 = mod_consts[146];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[68]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 109;
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
                tmp_dict_key_1 = mod_consts[147];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[68]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 110;
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
                tmp_dict_key_1 = mod_consts[148];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[68]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 111;
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
                tmp_dict_key_1 = mod_consts[149];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[68]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 112;
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
                tmp_dict_key_1 = mod_consts[150];
                tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[63]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 113;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_13 = Py_None;
                tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_13 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[152]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_13 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_9, 2, tmp_tuple_element_13);
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[153];
                tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 114;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[80]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[80]);

                        if (unlikely(tmp_subscript_value_10 == NULL)) {
                            tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                        }

                        if (tmp_subscript_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_24);

                            exception_lineno = 114;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[154];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[68]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 115;
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
                tmp_dict_key_1 = mod_consts[155];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[81]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[81]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
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
                tmp_dict_key_1 = mod_consts[156];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[82]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 117;
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
                tmp_dict_key_1 = mod_consts[157];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[79]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 118;
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
                tmp_dict_key_1 = mod_consts[158];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[68]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 119;
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
                tmp_dict_key_1 = mod_consts[159];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[77]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[77]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 120;
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
                tmp_dict_key_1 = mod_consts[160];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[77]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[77]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 121;
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
                tmp_dict_key_1 = mod_consts[161];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[77]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[77]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 122;
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
                tmp_dict_key_1 = mod_consts[162];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[77]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[77]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 123;
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
                tmp_dict_key_1 = mod_consts[163];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[77]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[77]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 124;
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
                tmp_dict_key_1 = mod_consts[164];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[77]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[77]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 125;
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
                tmp_dict_key_1 = mod_consts[165];
                tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 127;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[141]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[104];
                tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 128;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 128;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[166];
                tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 129;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 129;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[167];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[60]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[60]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 130;
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
                tmp_dict_key_1 = mod_consts[4];
                tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 134;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[61]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[61]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_28);

                            exception_lineno = 134;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[74]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[74]);

                        if (unlikely(tmp_subscript_value_15 == NULL)) {
                            tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                        }

                        if (tmp_subscript_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_28);
                            Py_DECREF(tmp_expression_value_29);

                            exception_lineno = 134;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_subscript_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_28);

                    exception_lineno = 134;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 134;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[5];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[23]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 135;
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
                tmp_dict_key_1 = mod_consts[6];
                tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 136;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[141]);

                if (tmp_subscript_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_16 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 136;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[68]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 137;
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
                tmp_dict_key_1 = mod_consts[8];
                tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 138;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[30]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_subscript_value_17 == NULL)) {
                            tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                        }

                        if (tmp_subscript_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_31);

                            exception_lineno = 138;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[9];
                tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_32 == NULL)) {
                            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 139;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_32);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_18 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_32);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 139;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[11];
                tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_33 == NULL)) {
                            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 140;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_33);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[33]);

                if (tmp_subscript_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[33]);

                        if (unlikely(tmp_subscript_value_19 == NULL)) {
                            tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                        }

                        if (tmp_subscript_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_33);

                            exception_lineno = 140;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_19);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_33);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 140;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[12];
                tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 141;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[152]);

                if (tmp_subscript_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_20 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_20);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_34);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 141;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[13];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[43]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[43]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 142;
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
                tmp_dict_key_1 = mod_consts[14];
                tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_35 == NULL)) {
                            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 143;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_35);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

                if (tmp_subscript_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_21 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_21);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_35);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[10];
                tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_36 == NULL)) {
                            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_36 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 144;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_36);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_22 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

                if (tmp_subscript_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_22 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_22);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_36);
                Py_DECREF(tmp_subscript_value_22);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[15];
                tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 145;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[141]);

                if (tmp_subscript_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_23 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_23);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[16];
                tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 146;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_24 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[141]);

                if (tmp_subscript_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_24 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_24);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[17];
                tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 147;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_25 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[141]);

                if (tmp_subscript_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_25 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_25);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;
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
            Py_DECREF(tmp_defaults_1);
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_flet_core$text$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$text$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[170], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$text$$$function__3__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_27;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_6 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_2 = mod_consts[175];
            tmp_expression_value_40 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_40 == NULL)) {
                        tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        exception_lineno = 205;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_40);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_26 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[141]);

            if (tmp_subscript_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_26 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_26);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_40);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$text$$$function__4_value(tmp_annotations_2);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 204;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[175];
            tmp_expression_value_41 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 205;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_41);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_27 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[141]);

            if (tmp_subscript_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_27 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_27);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_41);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$text$$$function__4_value(tmp_annotations_3);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 204;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_28;
            tmp_expression_value_42 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[3]);

            if (unlikely(tmp_expression_value_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[177]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_4 = mod_consts[3];
            tmp_expression_value_43 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_43 == NULL)) {
                        tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);

                        exception_lineno = 209;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_43);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[141]);

            if (tmp_subscript_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_28);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_43);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$text$$$function__5_value(tmp_annotations_4);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 208;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_32;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_9 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_5 = mod_consts[175];
            tmp_expression_value_44 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_44 == NULL)) {
                        tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);

                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_44);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_45 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[61]);

            if (tmp_expression_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[61]);

                    if (unlikely(tmp_expression_value_45 == NULL)) {
                        tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
                    }

                    if (tmp_expression_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);
                        Py_DECREF(tmp_expression_value_44);

                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_45);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_30 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[74]);

            if (tmp_subscript_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[74]);

                    if (unlikely(tmp_subscript_value_30 == NULL)) {
                        tmp_subscript_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                    }

                    if (tmp_subscript_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);
                        Py_DECREF(tmp_expression_value_44);
                        Py_DECREF(tmp_expression_value_45);

                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_30);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_30);
            Py_DECREF(tmp_expression_value_45);
            Py_DECREF(tmp_subscript_value_30);
            if (tmp_subscript_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);
                Py_DECREF(tmp_expression_value_44);

                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_44);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$text$$$function__6_spans(tmp_annotations_5);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 213;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[175];
            tmp_expression_value_46 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_46);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_47 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[61]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[61]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_46);

                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_32 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[74]);

            if (tmp_subscript_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[74]);

                    if (unlikely(tmp_subscript_value_32 == NULL)) {
                        tmp_subscript_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                    }

                    if (tmp_subscript_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_46);
                        Py_DECREF(tmp_expression_value_47);

                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_32);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_32);
            Py_DECREF(tmp_expression_value_47);
            Py_DECREF(tmp_subscript_value_32);
            if (tmp_subscript_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_46);

                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_46);
            Py_DECREF(tmp_subscript_value_31);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$text$$$function__6_spans(tmp_annotations_6);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 213;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_34;
            tmp_expression_value_48 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[4]);

            if (unlikely(tmp_expression_value_48 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[177]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_7 = mod_consts[3];
            tmp_expression_value_49 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_49 == NULL)) {
                        tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_49);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_50 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[61]);

            if (tmp_expression_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[61]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);
                        Py_DECREF(tmp_expression_value_49);

                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_50);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_34 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[74]);

            if (tmp_subscript_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[74]);

                    if (unlikely(tmp_subscript_value_34 == NULL)) {
                        tmp_subscript_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                    }

                    if (tmp_subscript_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);
                        Py_DECREF(tmp_expression_value_49);
                        Py_DECREF(tmp_expression_value_50);

                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_34);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_34);
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_34);
            if (tmp_subscript_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_expression_value_49);

                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_49);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);

                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$text$$$function__7_spans(tmp_annotations_7);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 217;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_12 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_8 = mod_consts[175];
            tmp_dict_value_8 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[23]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[23]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 223;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$text$$$function__8_text_align(tmp_annotations_8);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 222;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[175];
            tmp_dict_value_9 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[23]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[23]);

                    if (unlikely(tmp_dict_value_9 == NULL)) {
                        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                    }

                    if (tmp_dict_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 223;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$text$$$function__8_text_align(tmp_annotations_9);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 222;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_expression_value_51 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[5]);

            if (unlikely(tmp_expression_value_51 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[177]);
            Py_DECREF(tmp_expression_value_51);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_10 = mod_consts[3];
            tmp_dict_value_10 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[23]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[23]);

                    if (unlikely(tmp_dict_value_10 == NULL)) {
                        tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
                    }

                    if (tmp_dict_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 227;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$text$$$function__9_text_align(tmp_annotations_10);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 226;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_dict_key_11 = mod_consts[3];
            tmp_dict_value_11 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[83]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[83]);

                    if (unlikely(tmp_dict_value_11 == NULL)) {
                        tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                    }

                    if (tmp_dict_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 234;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$text$$$function__10___set_text_align(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_11;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_15 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$text$$$function__11_font_family();

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 238;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_16 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$text$$$function__11_font_family();

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 238;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_12;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[6]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 242;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$text$$$function__12_font_family();

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 242;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[177], tmp_args_element_value_12);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_17 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_12 = mod_consts[175];
            tmp_dict_value_12 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[68]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68]);

                    if (unlikely(tmp_dict_value_12 == NULL)) {
                        tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                    }

                    if (tmp_dict_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 248;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$text$$$function__13_size(tmp_annotations_12);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_13 = mod_consts[175];
            tmp_dict_value_13 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[68]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68]);

                    if (unlikely(tmp_dict_value_13 == NULL)) {
                        tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                    }

                    if (tmp_dict_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 248;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$text$$$function__13_size(tmp_annotations_13);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_expression_value_52 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[7]);

            if (unlikely(tmp_expression_value_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[177]);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_14 = mod_consts[3];
            tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[68]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[68]);

                    if (unlikely(tmp_dict_value_14 == NULL)) {
                        tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                    }

                    if (tmp_dict_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 252;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$text$$$function__14_size(tmp_annotations_14);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 251;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_36;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_18 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_20 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_15 = mod_consts[175];
            tmp_expression_value_53 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);

                        exception_lineno = 257;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_53);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_35 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[30]);

            if (tmp_subscript_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[30]);

                    if (unlikely(tmp_subscript_value_35 == NULL)) {
                        tmp_subscript_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                    }

                    if (tmp_subscript_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);
                        Py_DECREF(tmp_expression_value_53);

                        exception_lineno = 257;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_35);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_35);
            Py_DECREF(tmp_expression_value_53);
            Py_DECREF(tmp_subscript_value_35);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_20);

                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$text$$$function__15_weight(tmp_annotations_15);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 256;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_16 = mod_consts[175];
            tmp_expression_value_54 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 257;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_54);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_36 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[30]);

            if (tmp_subscript_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[30]);

                    if (unlikely(tmp_subscript_value_36 == NULL)) {
                        tmp_subscript_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                    }

                    if (tmp_subscript_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_54);

                        exception_lineno = 257;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_36);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_36);
            Py_DECREF(tmp_expression_value_54);
            Py_DECREF(tmp_subscript_value_36);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$text$$$function__15_weight(tmp_annotations_16);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 256;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_37;
            tmp_expression_value_55 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[8]);

            if (unlikely(tmp_expression_value_55 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[177]);
            Py_DECREF(tmp_expression_value_55);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_17 = mod_consts[3];
            tmp_expression_value_56 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_56 == NULL)) {
                        tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 261;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_56);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_37 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[30]);

            if (tmp_subscript_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[30]);

                    if (unlikely(tmp_subscript_value_37 == NULL)) {
                        tmp_subscript_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                    }

                    if (tmp_subscript_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_expression_value_56);

                        exception_lineno = 261;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_37);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_56);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$text$$$function__16_weight(tmp_annotations_17);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 260;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            tmp_dict_key_18 = mod_consts[3];
            tmp_dict_value_18 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[78]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_dict_value_18 == NULL)) {
                        tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_dict_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 268;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_18);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$text$$$function__17___set_weight(tmp_annotations_18);

            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_39;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_19 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_23 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_19 = mod_consts[175];
            tmp_expression_value_57 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);

                        exception_lineno = 273;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_57);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_38 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[33]);

            if (tmp_subscript_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[33]);

                    if (unlikely(tmp_subscript_value_38 == NULL)) {
                        tmp_subscript_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                    }

                    if (tmp_subscript_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);
                        Py_DECREF(tmp_expression_value_57);

                        exception_lineno = 273;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_38);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_57);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 273;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$text$$$function__18_style(tmp_annotations_19);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 272;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_24 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_20 = mod_consts[175];
            tmp_expression_value_58 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 273;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_58);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_39 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[33]);

            if (tmp_subscript_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[33]);

                    if (unlikely(tmp_subscript_value_39 == NULL)) {
                        tmp_subscript_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                    }

                    if (tmp_subscript_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_58);

                        exception_lineno = 273;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_39);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_39);
            Py_DECREF(tmp_expression_value_58);
            Py_DECREF(tmp_subscript_value_39);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$text$$$function__18_style(tmp_annotations_20);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 272;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_40;
            tmp_expression_value_59 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[11]);

            if (unlikely(tmp_expression_value_59 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[177]);
            Py_DECREF(tmp_expression_value_59);
            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_21 = mod_consts[3];
            tmp_expression_value_60 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_60 == NULL)) {
                        tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);

                        exception_lineno = 277;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_60);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_40 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[33]);

            if (tmp_subscript_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[33]);

                    if (unlikely(tmp_subscript_value_40 == NULL)) {
                        tmp_subscript_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                    }

                    if (tmp_subscript_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);
                        Py_DECREF(tmp_expression_value_60);

                        exception_lineno = 277;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_40);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_40);
            Py_DECREF(tmp_expression_value_60);
            Py_DECREF(tmp_subscript_value_40);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$text$$$function__19_style(tmp_annotations_21);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 276;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_41;
            tmp_dict_key_22 = mod_consts[3];
            tmp_expression_value_61 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_61 == NULL)) {
                        tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 284;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_61);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_41 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[108]);

            if (tmp_subscript_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[108]);

                    if (unlikely(tmp_subscript_value_41 == NULL)) {
                        tmp_subscript_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
                    }

                    if (tmp_subscript_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_61);

                        exception_lineno = 284;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_41);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_61);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$text$$$function__20___set_style(tmp_annotations_22);

            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_subscript_value_42;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_subscript_value_43;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_20 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_26 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_23 = mod_consts[175];
            tmp_expression_value_62 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_62 == NULL)) {
                        tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);

                        exception_lineno = 289;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_62);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_42 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

            if (tmp_subscript_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_42 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_42);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_42);
            Py_DECREF(tmp_expression_value_62);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 289;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$text$$$function__21_italic(tmp_annotations_23);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 288;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_27 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_24 = mod_consts[175];
            tmp_expression_value_63 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_63 == NULL)) {
                        tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 289;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_63);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_43 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

            if (tmp_subscript_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_43 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_43);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_43);
            Py_DECREF(tmp_expression_value_63);
            Py_DECREF(tmp_subscript_value_43);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$text$$$function__21_italic(tmp_annotations_24);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 288;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_44;
            tmp_expression_value_64 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[9]);

            if (unlikely(tmp_expression_value_64 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[177]);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_25 = mod_consts[3];
            tmp_expression_value_65 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_65 == NULL)) {
                        tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);

                        exception_lineno = 293;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_65);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_44 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

            if (tmp_subscript_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_44 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_44);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_44);
            Py_DECREF(tmp_expression_value_65);
            Py_DECREF(tmp_subscript_value_44);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 293;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$text$$$function__22_italic(tmp_annotations_25);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 292;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_subscript_value_45;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_46;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_21 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_29 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 297;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_26 = mod_consts[175];
            tmp_expression_value_66 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_66 == NULL)) {
                        tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_66 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_29);

                        exception_lineno = 298;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_66);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_45 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

            if (tmp_subscript_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_45 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_45);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_45);
            Py_DECREF(tmp_expression_value_66);
            Py_DECREF(tmp_subscript_value_45);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$text$$$function__23_no_wrap(tmp_annotations_26);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 297;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_30 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_27 = mod_consts[175];
            tmp_expression_value_67 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_67 == NULL)) {
                        tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_67 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 298;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_67);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_46 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

            if (tmp_subscript_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_46 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_46);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_46);
            Py_DECREF(tmp_expression_value_67);
            Py_DECREF(tmp_subscript_value_46);
            if (tmp_dict_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_27 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$text$$$function__23_no_wrap(tmp_annotations_27);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 297;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_28;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_47;
            tmp_expression_value_68 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[10]);

            if (unlikely(tmp_expression_value_68 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 301;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[177]);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_28 = mod_consts[3];
            tmp_expression_value_69 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_69 == NULL)) {
                        tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);

                        exception_lineno = 302;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_69);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_47 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

            if (tmp_subscript_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_47 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_47);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_47);
            Py_DECREF(tmp_expression_value_69);
            Py_DECREF(tmp_subscript_value_47);
            if (tmp_dict_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_28 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$text$$$function__24_no_wrap(tmp_annotations_28);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 301;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_29;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_48;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_subscript_value_49;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_22 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_32 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_29 = mod_consts[175];
            tmp_expression_value_70 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_70 == NULL)) {
                        tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_32);

                        exception_lineno = 307;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_70);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_48 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

            if (tmp_subscript_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_48 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_48);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_48);
            Py_DECREF(tmp_expression_value_70);
            Py_DECREF(tmp_subscript_value_48);
            if (tmp_dict_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_32);

                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_29 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$text$$$function__25_selectable(tmp_annotations_29);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 306;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_33 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_30 = mod_consts[175];
            tmp_expression_value_71 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_71 == NULL)) {
                        tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_71 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 307;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_71);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_49 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

            if (tmp_subscript_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_49 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_49);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_49);
            Py_DECREF(tmp_expression_value_71);
            Py_DECREF(tmp_subscript_value_49);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_30 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$text$$$function__25_selectable(tmp_annotations_30);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 306;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_annotations_31;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_50;
            tmp_expression_value_72 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[14]);

            if (unlikely(tmp_expression_value_72 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 310;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[177]);
            Py_DECREF(tmp_expression_value_72);
            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_31 = mod_consts[3];
            tmp_expression_value_73 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_73 == NULL)) {
                        tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);

                        exception_lineno = 311;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_73);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_50 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[151]);

            if (tmp_subscript_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_50 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_50);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_50);
            Py_DECREF(tmp_expression_value_73);
            Py_DECREF(tmp_subscript_value_50);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_34);

                exception_lineno = 311;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_31 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$text$$$function__26_selectable(tmp_annotations_31);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 310;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_51;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_subscript_value_52;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_23 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_value_35 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_32 = mod_consts[175];
            tmp_expression_value_74 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_74 == NULL)) {
                        tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);

                        exception_lineno = 316;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_74);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_51 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[152]);

            if (tmp_subscript_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_51 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_51);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_51);
            Py_DECREF(tmp_expression_value_74);
            Py_DECREF(tmp_subscript_value_51);
            if (tmp_dict_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));


            tmp_args_element_value_31 = MAKE_FUNCTION_flet_core$text$$$function__27_max_lines(tmp_annotations_32);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 315;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_36 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_33 = mod_consts[175];
            tmp_expression_value_75 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_75 == NULL)) {
                        tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 316;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_75);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_52 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[152]);

            if (tmp_subscript_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_52 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_52);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_52);
            Py_DECREF(tmp_expression_value_75);
            Py_DECREF(tmp_subscript_value_52);
            if (tmp_dict_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_33 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));


            tmp_args_element_value_32 = MAKE_FUNCTION_flet_core$text$$$function__27_max_lines(tmp_annotations_33);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 315;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_annotations_34;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_subscript_value_53;
            tmp_expression_value_76 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[12]);

            if (unlikely(tmp_expression_value_76 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 319;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[177]);
            Py_DECREF(tmp_expression_value_76);
            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_34 = mod_consts[3];
            tmp_expression_value_77 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[62]);

            if (tmp_expression_value_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_77 == NULL)) {
                        tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 320;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_77);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_53 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[152]);

            if (tmp_subscript_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_53 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_53);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_77, tmp_subscript_value_53);
            Py_DECREF(tmp_expression_value_77);
            Py_DECREF(tmp_subscript_value_53);
            if (tmp_dict_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 320;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_34 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));


            tmp_args_element_value_33 = MAKE_FUNCTION_flet_core$text$$$function__28_max_lines(tmp_annotations_34);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 319;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_annotations_35;
            PyObject *tmp_dict_key_35;
            PyObject *tmp_dict_value_35;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_36;
            PyObject *tmp_dict_key_36;
            PyObject *tmp_dict_value_36;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_24 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            tmp_called_value_38 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_35 = mod_consts[175];
            tmp_dict_value_35 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[43]);

            if (tmp_dict_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[43]);

                    if (unlikely(tmp_dict_value_35 == NULL)) {
                        tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                    }

                    if (tmp_dict_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);

                        exception_lineno = 325;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_35);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_35 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_35, tmp_dict_value_35);
            Py_DECREF(tmp_dict_value_35);
            assert(!(tmp_res != 0));


            tmp_args_element_value_34 = MAKE_FUNCTION_flet_core$text$$$function__29_overflow(tmp_annotations_35);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 324;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_39 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_36 = mod_consts[175];
            tmp_dict_value_36 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[43]);

            if (tmp_dict_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[43]);

                    if (unlikely(tmp_dict_value_36 == NULL)) {
                        tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                    }

                    if (tmp_dict_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 325;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_36);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_36 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));


            tmp_args_element_value_35 = MAKE_FUNCTION_flet_core$text$$$function__29_overflow(tmp_annotations_36);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 324;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_40;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_annotations_37;
            PyObject *tmp_dict_key_37;
            PyObject *tmp_dict_value_37;
            tmp_expression_value_78 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[13]);

            if (unlikely(tmp_expression_value_78 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[13]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 328;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[177]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_37 = mod_consts[3];
            tmp_dict_value_37 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[43]);

            if (tmp_dict_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[43]);

                    if (unlikely(tmp_dict_value_37 == NULL)) {
                        tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                    }

                    if (tmp_dict_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);

                        exception_lineno = 329;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_37);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_37 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));


            tmp_args_element_value_36 = MAKE_FUNCTION_flet_core$text$$$function__30_overflow(tmp_annotations_37);

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 328;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_38;
            PyObject *tmp_dict_key_38;
            PyObject *tmp_dict_value_38;
            tmp_dict_key_38 = mod_consts[3];
            tmp_dict_value_38 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[88]);

            if (tmp_dict_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_dict_value_38 == NULL)) {
                        tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_dict_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 336;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_38);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_38 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_38, tmp_dict_value_38);
            Py_DECREF(tmp_dict_value_38);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$text$$$function__31___set_overflow(tmp_annotations_38);

            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_38;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_25 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_16;
            } else {
                goto condexpr_false_16;
            }
            condexpr_true_16:;
            tmp_called_value_41 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_37 = MAKE_FUNCTION_flet_core$text$$$function__32_color();

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 340;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_42 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_38 = MAKE_FUNCTION_flet_core$text$$$function__32_color();

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 340;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_39;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[15]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_39 = MAKE_FUNCTION_flet_core$text$$$function__33_color();

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 344;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[177], tmp_args_element_value_39);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_41;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_26 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_17;
            } else {
                goto condexpr_false_17;
            }
            condexpr_true_17:;
            tmp_called_value_43 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_40 = MAKE_FUNCTION_flet_core$text$$$function__34_bgcolor();

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 349;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_called_value_44 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_41 = MAKE_FUNCTION_flet_core$text$$$function__34_bgcolor();

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 349;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_17:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_42;
            tmp_called_instance_3 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[16]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[16]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_42 = MAKE_FUNCTION_flet_core$text$$$function__35_bgcolor();

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 353;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[177], tmp_args_element_value_42);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_44;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_27 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_18;
            } else {
                goto condexpr_false_18;
            }
            condexpr_true_18:;
            tmp_called_value_45 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[174]);

            if (unlikely(tmp_called_value_45 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_43 = MAKE_FUNCTION_flet_core$text$$$function__36_semantics_label();

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 358;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_called_value_46 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_44 = MAKE_FUNCTION_flet_core$text$$$function__36_semantics_label();

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 358;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_18:;
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_45;
            tmp_called_instance_4 = PyObject_GetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[17]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[17]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_45 = MAKE_FUNCTION_flet_core$text$$$function__37_semantics_label();

            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame.f_lineno = 362;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[177], tmp_args_element_value_45);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_70a71c054dc6f0ec6d21efc2f76f20c6_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_70a71c054dc6f0ec6d21efc2f76f20c6_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_70a71c054dc6f0ec6d21efc2f76f20c6_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_70a71c054dc6f0ec6d21efc2f76f20c6_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_70a71c054dc6f0ec6d21efc2f76f20c6_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_13;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$text$$$class__3_Text_73, mod_consts[106], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_13;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_47 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_14 = mod_consts[139];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_14 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_flet_core$text$$$class__3_Text_73;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_be2e94af15594d11d77a12fc16d2dee4->m_frame.f_lineno = 73;
            tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_47, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_13;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_50 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_flet_core$text$$$class__3_Text_73);
        locals_flet_core$text$$$class__3_Text_73 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$text$$$class__3_Text_73);
        locals_flet_core$text$$$class__3_Text_73 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_12:;
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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 73;
        goto try_except_handler_11;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_flet_core$text, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_50);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_be2e94af15594d11d77a12fc16d2dee4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be2e94af15594d11d77a12fc16d2dee4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be2e94af15594d11d77a12fc16d2dee4, exception_lineno);
    }



    assertFrameObject(frame_be2e94af15594d11d77a12fc16d2dee4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flet_core.text", false);

    Py_INCREF(module_flet_core$text);
    return module_flet_core$text;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$text, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$text", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
